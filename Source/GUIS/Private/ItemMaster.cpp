// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemMaster.h"

#include <string>

#include "ItemBase.h"
#include "ObjectEditorUtils.h"
#include "Kismet/GameplayStatics.h"

UItemBase* UItemMaster::HandleStruct(FProperty* Property, void* StructPtr)
{
    uint32 ItemHash = 0;
    uint32 PropHash = 0;
    FName ItemClass;
    UItemBase* NewItem = nullptr;
    const FString& ContextString = FString();
    FName ItemName;

    if(!ItemPalette)
    {
        ItemPalette = NewObject<UDataTable>(this, "ItemPalette");
        ItemPalette->RowStruct = FITemRow::StaticStruct();
    }
    
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
                        ItemClass = ClassProperty->GetPropertyValue(ValuePtr)->GetFName();
                        NewItem = NewObject<UItemBase>(this, ItemClass);
                    }
                }
                else
                {
                    PropHash = HashProperty(*PropertyIterator, ValuePtr);
                    if(PropHash != 0)
                    {
                        ItemHash = HashCombine(ItemHash, PropHash);
                    }
                }
            }
        }
        
        ItemName = FName(FString::Printf(TEXT("%u"), ItemHash));
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("HASH COLLECTED")));
        try
        {
            FITemRow* ItemRow = ItemPalette->FindRow<FITemRow>(ItemName, ContextString, false);
            NewItem = ItemRow->Item;
            GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("ITEM FOUNDED")));
        } cat
        
        {
            
            const auto CreatedItem = NewObject<UItemBase>(this, ItemClass);
            CreatedItem->ItemID = ItemHash; 
            for (PropertyIterator; PropertyIterator; ++PropertyIterator)
            {
                for (int32 ArrayIndex = 0; ArrayIndex < PropertyIterator->ArrayDim; ArrayIndex++)
                {
                    void* ValuePtr = PropertyIterator->ContainerPtrToValuePtr<void>(StructPtr, ArrayIndex);
                    if(FObjectEditorUtils::SetPropertyValue(CreatedItem, PropertyIterator->GetFName(), ValuePtr))
                    {
                        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("SUCCESS")));
                    } else
                    {
                        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("FAIL")));
                    }
                }
            }
            NewItem = CreatedItem;
        }
    }
    return NewItem;
}

uint32 UItemMaster::HashProperty(FProperty* Property, void* ValuePtr)
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
            if(HashCash != 0)
            {
                HashCash = HashCombine(HashCash, HashProperty(ArrayProperty->Inner, Helper.GetRawPtr(i)));
            } else
            {
                HashCash = HashProperty(ArrayProperty->Inner, Helper.GetRawPtr(i));
            }
        }
    }
    
    else if (FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property))
    {
        UObject* ObjectPointer = ObjectProperty->GetPropertyValue(ValuePtr);
        if(UStreamableRenderAsset* RenderAsset = Cast<UStreamableRenderAsset>(ObjectPointer))
        {
            if (UTexture* Texture = Cast<UTexture>(RenderAsset))
            {
                if(UTexture2D* Texture2D = Cast<UTexture2D>(Texture))
                {
                    Texture2D->GetSourceArtCRC(HashCash);
                }
                else if(ObjectProperty)
                {
                    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Unknown Texture property type: %s"), ToCStr(Texture->GetClass()->GetName())));
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
                if(PropHash > 0)
                {
                    HashCash = HashCombine(HashCash, PropHash);
                }
            }
        }
    }
    
    else if(Property)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Unknown property type: %s"), ToCStr(Property->GetClass()->GetName())));
    }
    
    return HashCash;
}
