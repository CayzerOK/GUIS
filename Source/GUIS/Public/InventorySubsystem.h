// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"

#include "ItemBase.h"
#include "ObjectEditorUtils.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/PropertyIterator.h"
#include "InventorySubsystem.generated.h"

UCLASS(BlueprintType)
class GUIS_API UInventorySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
    
    UPROPERTY(SaveGame)
    TMap<UItemBase*, uint64> ItemMap;
    
public:

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
private:
     UItemBase* HandleStruct(FProperty* Property, void* StructPtr);
     uint32 HashProperty(FProperty* Property, void* ValuePtr);
};
