// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"

#include "ItemBase.h"
#include "ObjectEditorUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "UObject/PropertyIterator.h"

#include "InventorySubsystem.generated.h"



USTRUCT()
struct FItemSaveData
{
    GENERATED_BODY()
    
    FName ItemName;
    FString ItemClass;
    TArray<uint8> ItemData;

    friend FArchive& operator<<(FArchive& Archive, FItemSaveData& ItemData)
    {
        Archive<<ItemData.ItemName;
        Archive<<ItemData.ItemClass;
        Archive<<ItemData.ItemData;
        return Archive;
    }
};

USTRUCT()
struct FGUISSaveData
{
    GENERATED_BODY()
    TArray<FItemSaveData> SaveItems;

    friend FArchive& operator<<(FArchive& Archive, FGUISSaveData& SaveData)
    {
        Archive<<SaveData.SaveItems;
        return Archive;
    }
};

struct GUISSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
    GUISSaveGameArchive(FArchive& InInnerArchive): FObjectAndNameAsStringProxyArchive(InInnerArchive, false)
    {
        ArIsSaveGame = false;
        ArNoDelta = false;
    }
};

UCLASS(BlueprintType)
class GUIS_API UInventorySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<UItemBase*> ItemMap;
    
public:

    UFUNCTION(BlueprintCallable)
    void SaveData(int32 Slot);
    UFUNCTION(BlueprintCallable)
    void LoadData(int32 Slot);
    
    UFUNCTION()
    void IncreaseItemCount(UItemBase* Item, uint32 Amount);

    UFUNCTION()
    void DecreaseItemCount(UItemBase* Item, uint32 Amount);
    
    UFUNCTION(
         BlueprintCallable,
         Category = "Item Creation",
         CustomThunk,
         meta = (
             Keywords = "Convert Struct to Item",
             CustomStructureParam = "ItemStruct"
         ))
    UItemBase* CreateItem(UStruct* ItemStruct);

    DECLARE_FUNCTION(execCreateItem)
    {
         Stack.Step(Stack.Object, nullptr);
         FProperty* StructProperty = CastField<FProperty>(Stack.MostRecentProperty);
         void* StructPtr = Stack.MostRecentPropertyAddress;

         P_FINISH;

         P_NATIVE_BEGIN;
             *static_cast<UItemBase**>(RESULT_PARAM) = P_THIS->HandleStruct(StructProperty, StructPtr);
         P_NATIVE_END
    }
    UItemBase* HandleStruct(FProperty* Property, void* StructPtr);
    
    UFUNCTION()
    UItemBase* GetItem(uint32 ItemID);
    
private:
    
    uint32 HashProperty(FProperty* Property, void* ValuePtr);
};
