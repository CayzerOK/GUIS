// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameItem.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "GUIS.generated.h"


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
class GUIS_CORE_API UGUIS : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	UPROPERTY()
	TArray<UGameItem*> ItemMap;
    
	public:

	UFUNCTION(BlueprintCallable)
    void SaveData(int32 Slot);
	UFUNCTION(BlueprintCallable)
    void LoadData(int32 Slot);
    
	UFUNCTION()
    void IncreaseItemCount(UGameItem* Item, uint32 Amount);

	UFUNCTION()
    void DecreaseItemCount(UGameItem* Item, uint32 Amount);
    
	UFUNCTION(
         BlueprintCallable,
         Category = "Item Creation",
         CustomThunk,
         meta = (
             Keywords = "Convert Struct to Item",
             CustomStructureParam = "ItemStruct"
         ))
    UGameItem* CreateItem(UStruct* ItemStruct);

	DECLARE_FUNCTION(execCreateItem)
	{
		Stack.Step(Stack.Object, nullptr);
		FProperty* StructProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* StructPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;

		P_NATIVE_BEGIN;
		*static_cast<UGameItem**>(RESULT_PARAM) = P_THIS->HandleStruct(StructProperty, StructPtr);
		P_NATIVE_END
   }
	UGameItem* HandleStruct(FProperty* Property, void* StructPtr);
    
	UFUNCTION()
    UGameItem* GetItem(uint32 ItemID);
    
	private:
    
	uint32 HashProperty(FProperty* Property, void* ValuePtr);
};