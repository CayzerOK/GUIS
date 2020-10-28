// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ItemBase.h"
#include "Engine/DataTable.h"
#include "Subsystems/EngineSubsystem.h"
#include "ItemMaster.generated.h"


USTRUCT()
struct FITemRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	UItemBase* Item;

	UPROPERTY()
	int32 References;
};



UCLASS()
class GUIS_API UItemMaster : public UEngineSubsystem
{
	GENERATED_BODY()

	UPROPERTY(SaveGame)
	class UDataTable* ItemPalette;
	
	UFUNCTION(
		BlueprintCallable, 
		Category = "Item Creation",
		CustomThunk,
		meta = (
			Keywords = "Convert Struct to Item",
			CustomStructureParam = "ItemStruct"
	))
	static UItemBase* GetItem(UStruct* ItemStruct);

	DECLARE_FUNCTION(execGetItem)
	{
		UItemMaster* Subsystem = GEngine->GetEngineSubsystem<UItemMaster>();
		
		Stack.Step(Stack.Object, NULL);
		FProperty* StructProperty = CastField<FProperty>(Stack.MostRecentProperty);
		void* StructPtr = Stack.MostRecentPropertyAddress;

		P_FINISH;
		
		*(UItemBase**)RESULT_PARAM = Subsystem->HandleStruct(StructProperty, StructPtr);
		
		return;
	}

	UItemBase* HandleStruct(FProperty* Property, void* StructPtr);
	uint32 HashProperty(FProperty* Property, void* ValuePtr);
};
