// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class GUIS_API UItemBase : public UObject
{
	GENERATED_BODY()
public:
	uint32 ItemID = 0;
	UPROPERTY(EditDefaultsOnly, Category="Item")
	FName ItemName = "New Item";

};
