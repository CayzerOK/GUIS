#include "InventorySubsystem.h"


#include "Serialization/BufferArchive.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

void UInventorySubsystem::SaveData(int32 Slot)
{
    TArray<FItemSaveData> ItemsData;
    FGUISSaveData SaveData;
    FBufferArchive BinaryData;
    
    for (UItemBase* Item : ItemMap)
    {
        if(Item==nullptr)
        {
            continue;
        }
        FItemSaveData ItemData;
        ItemData.ItemClass = Item->GetClass()->GetPathName();
        ItemData.ItemName = Item->GetFName();

        FMemoryWriter MemoryWriter(ItemData.ItemData, true);
        GUISSaveGameArchive Archive(MemoryWriter);

        Item->Serialize(Archive);
        ItemsData.Add(ItemData);
    }

    SaveData.SaveItems = ItemsData;
    BinaryData<<SaveData;
    if(BinaryData.Num()<=0)
    {
        return;
    }

    if(FFileHelper::SaveArrayToFile(BinaryData, *FString::Printf(TEXT("%sSaveGames/%u.itm"), *FPaths::ProjectSavedDir(), Slot)))
    {
        UE_LOG(LogTemp, Warning, TEXT("Save Success!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Save Failed!"));
    }
    
}

void UInventorySubsystem::LoadData(int32 Slot)
{
    TArray<uint8> RawSaveBin;
    if (!FFileHelper::LoadFileToArray(RawSaveBin, *FString::Printf(TEXT("%sSaveGames/%u.itm"), *FPaths::ProjectSavedDir(), Slot)))
    {
        UE_LOG(LogTemp, Warning, TEXT("Load Failed!"));
        return;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Load Succeeded!"));
    }

    if (RawSaveBin.Num() <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Loaded file empty!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Save File Size: %d"), RawSaveBin.Num());
    FMemoryReader FromBinary = FMemoryReader(RawSaveBin, true);
    FromBinary.Seek(0);

    FGUISSaveData SaveData;
    
    FromBinary << SaveData;
    
    FromBinary.FlushCache();
    RawSaveBin.Empty();
    FromBinary.Close();

    ItemMap.Empty();

    for (FItemSaveData ItemSave : SaveData.SaveItems)
    {
        UItemBase* Item;
        if(UItemBase* FoundedItem = FindObject<UItemBase>(GetGameInstance(), *ItemSave.ItemName.ToString()))
        {
            Item = FoundedItem;
        }
        else
        {
            UClass* Result = FindObject<UClass>(ANY_PACKAGE, *ItemSave.ItemClass);
            if (Result)
            {
                Item = NewObject<UItemBase>(GetGameInstance(), Result, ItemSave.ItemName);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Loaded item class is empty!"));
                continue;
            }
        }
        FMemoryReader MemoryReader(ItemSave.ItemData, true);
        GUISSaveGameArchive Archive(MemoryReader);
        Item->Serialize(Archive);
        ItemMap.Add(Item);
    }
    
}

void UInventorySubsystem::IncreaseItemCount(UItemBase* Item, uint32 Amount)
{
    Item->Count+=Amount;
}

void UInventorySubsystem::DecreaseItemCount(UItemBase* Item, uint32 Amount)
{
    Item->Count-=Amount;
    if (Item->Count<1)
    {
        ItemMap.Remove(Item);
    }
}

UItemBase* UInventorySubsystem::GetItem(uint32 ItemID)
{
    int32 Index = ItemMap.IndexOfByPredicate([&](UItemBase* Result) {return Result->ItemID == ItemID;});
    if(Index == -1)
    {
        return nullptr;
    }
    return ItemMap[Index];
}

UItemBase* UInventorySubsystem::HandleStruct(FProperty* Property, void* StructPtr)
{
    uint32 ItemHash = 0;
    UClass* ItemClass = nullptr;
    TMap<FString, FItemInnerProperty> PropMap;
    
    FStructProperty* StructProperty = CastField<FStructProperty>(Property);
    if (StructProperty)
    {
        TFieldIterator<FProperty> PropertyIterator(StructProperty->Struct);
    
        for (PropertyIterator; PropertyIterator; ++PropertyIterator)
        {
            for (int32 ArrayIndex = 0; ArrayIndex < PropertyIterator->ArrayDim; ArrayIndex++)
            {
                void* ValuePtr = PropertyIterator->ContainerPtrToValuePtr<void>(StructPtr, ArrayIndex);
    
                if (PropertyIterator->GetAuthoredName() == TEXT("ItemClass"))
                {
                    if (FClassProperty* ClassProperty = CastField<FClassProperty>(*PropertyIterator))
                    {
                        ItemClass = Cast<UClass>(ClassProperty->GetPropertyValue(ValuePtr));
                        const uint32 PropHash = FCrc::StrCrc32(*ItemClass->GetPathName());
                        ItemHash = HashCombine(ItemHash, PropHash);
                    }
                }
                else
                {
                    const uint32 PropHash = HashProperty(*PropertyIterator, ValuePtr);
                    if (PropHash != 0)
                    {
                        ItemHash = HashCombine(ItemHash, PropHash);
                    }
    
                    FItemInnerProperty ThisProperty = FItemInnerProperty{*PropertyIterator, ValuePtr};
                    PropMap.Add(PropertyIterator->GetAuthoredName(), ThisProperty);
                }
            }
        }
    
        const FName ItemName = FName(FString::Printf(TEXT("Item_%u"), ItemHash));
        
        if (UItemBase* FoundedItem = GetItem(ItemHash))
        {
            UE_LOG(LogTemp, Warning, TEXT("Item Founded"));
            return FoundedItem;
        }
        if (ItemClass)
        {
            UItemBase* CreatedItem = NewObject<UItemBase>(GetGameInstance(), ItemClass, ItemName);
            CreatedItem->ItemID = ItemHash;
            CreatedItem->LoadData(PropMap);
            ItemMap.Add(CreatedItem);
            UE_LOG(LogTemp, Warning, TEXT("Item Created"));
            return CreatedItem;
        }
    }
    return nullptr;
}

uint32 UInventorySubsystem::HashProperty(FProperty* Property, void* ValuePtr)
{
    uint32 HashCash = 0;

    if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
    {
        if (NumericProperty->IsFloatingPoint())
        {
            HashCash = FCrc::TypeCrc32(NumericProperty->GetFloatingPointPropertyValue(ValuePtr));
        }

        else if (NumericProperty->IsInteger())
        {
            HashCash = FCrc::TypeCrc32(NumericProperty->GetSignedIntPropertyValue(ValuePtr));
        }
    }

    else if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(Property))
    {
        HashCash = HashProperty(EnumProperty->GetUnderlyingProperty(), ValuePtr);
    }

    else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
    {
        HashCash = FCrc::TypeCrc32(BoolProperty->GetPropertyValue_InContainer(ValuePtr));
    }

    else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
    {
        HashCash = FCrc::StrCrc32(*StringProperty->GetPropertyValue_InContainer(ValuePtr));
    }

    else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
    {
        HashCash = FCrc::StrCrc32(*NameProperty->GetPropertyValue_InContainer(ValuePtr).ToString());
    }

    else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
    {
        FScriptArrayHelper Helper(ArrayProperty, ValuePtr);
        for (int32 i = 0, n = Helper.Num(); i < n; ++i)
        {
            if (HashCash != 0)
            {
                HashCash = HashCombine(HashCash, HashProperty(ArrayProperty->Inner, Helper.GetRawPtr(i)));
            }
            else
            {
                HashCash = HashProperty(ArrayProperty->Inner, Helper.GetRawPtr(i));
            }
        }
    }

    else if (FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property))
    {
        UObject* Object = ObjectProperty->GetPropertyValue(ValuePtr);
        HashCash = FCrc::StrCrc32(*Object->GetClass()->GetPathName());
    }

    else if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
    {
        TFieldIterator<FProperty> PropertyIterator(StructProperty->Struct);
        for (PropertyIterator; PropertyIterator; ++PropertyIterator)
        {
            for (int32 ArrayIndex = 0; ArrayIndex < PropertyIterator->ArrayDim; ArrayIndex++)
            {
                void* PropPtr = PropertyIterator->ContainerPtrToValuePtr<void>(ValuePtr, ArrayIndex);
                const uint32 PropHash = HashProperty(*PropertyIterator, PropPtr);
                if (PropHash > 0)
                {
                    HashCash = HashCombine(HashCash, PropHash);
                }
            }
        }
    }

    else if (Property)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
                                         FString::Printf(
                                             TEXT("TODO: handle %s in serialization"), *Property->GetClass()->GetName()));
    }

    return HashCash;
}

