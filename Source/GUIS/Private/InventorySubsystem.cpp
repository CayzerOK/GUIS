#include "InventorySubsystem.h"

void UInventorySubsystem::IncreaseItemCount(UItemBase* Item, uint32 Amount)
{
    if(ItemMap.Contains(Item))
    {
        ItemMap.Add(Item, *ItemMap.Find(Item) + Amount);
    } else
    {
        ItemMap.Add(Item, Amount);
    }
    return;
}

void UInventorySubsystem::DecreaseItemCount(UItemBase* Item, uint32 Amount)
{
    if(ItemMap.Contains(Item))
    {
        uint64 Count = *ItemMap.Find(Item);
        if (Count>Amount)
        {
            ItemMap.Add(Item,  Count - Amount);
        } else
        {
            ItemMap.Remove(Item);   
        }
    }
    return;
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
        
        if (UItemBase* FoundedItem = FindObject<UItemBase>(GetGameInstance(), *ItemName.ToString(), false))
        {
            GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Emerald, TEXT("Item Founded"));
            return FoundedItem;
        }
        if (ItemClass)
        {
            UItemBase* CreatedItem = NewObject<UItemBase>(GetGameInstance(), ItemClass, ItemName);
            CreatedItem->ItemID = ItemHash;
            CreatedItem->LoadData(PropMap);
            GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Emerald, TEXT("Item Created"));
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
        HashCash = FCrc::TypeCrc32(BoolProperty->GetPropertyValue(ValuePtr));
    }
    else if (FTextProperty* TextProperty = CastField<FTextProperty>(Property))
    {
        
    }

    else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
    {
        HashCash = FCrc::StrCrc32(*StringProperty->GetPropertyValue(ValuePtr));
    }

    else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
    {
        HashCash = FCrc::StrCrc32(*NameProperty->GetPropertyValue(ValuePtr).ToString());
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
        UObject* ObjectPointer = ObjectProperty->GetPropertyValue(ValuePtr);
        if (UStreamableRenderAsset* RenderAsset = Cast<UStreamableRenderAsset>(ObjectPointer))
        {
            if (UTexture* Texture = Cast<UTexture>(RenderAsset))
            {
                if (UTexture2D* Texture2D = Cast<UTexture2D>(Texture))
                {
                    Texture2D->GetSourceArtCRC(HashCash);
                }
                else if (ObjectProperty)
                {
                    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
                                                     FString::Printf(
                                                         TEXT("Unknown Texture property type: %s"),
                                                         ToCStr(Texture->GetClass()->GetName())));
                }
            }
        }
    }

    else if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
    {
        TFieldIterator<FProperty> PropertyIterator(StructProperty->Struct);
        uint32 PropHash = 0;
        for (PropertyIterator; PropertyIterator; ++PropertyIterator)
        {
            for (int32 ArrayIndex = 0; ArrayIndex < PropertyIterator->ArrayDim; ArrayIndex++)
            {
                void* PropPtr = PropertyIterator->ContainerPtrToValuePtr<void>(ValuePtr, ArrayIndex);
                PropHash = HashProperty(*PropertyIterator, PropPtr);
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
                                             TEXT("Unknown hashable type: %s"), *Property->GetClass()->GetName()));
    }

    return HashCash;
}

