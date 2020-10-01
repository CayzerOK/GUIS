#pragma once

#include "CoreMinimal.h"
#include "TrainHead/Inventory/ItemBase/ItemStructs.h"
#include "UObject/ObjectMacros.h"

#include "GameItem.generated.h"

UCLASS(BlueprintType, Blueprintable)
class TRAINHEAD_API UGameItem : public UObject
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintNativeEvent)
	bool LoadFromStruct(FGameItemStruct ItemStruct);

	UFUNCTION(BlueprintNativeEvent)
    bool GetStruct(FGameItemStruct ItemStruct);

	UPROPERTY()
	uint32 ID;
	
	UPROPERTY(BlueprintReadOnly, Category=Item)
	FText ItemName;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	FText ItemDesc;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	TEnumAsByte<EItemTier> Tier;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	UTexture2D* ItemIcon;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	UStaticMesh* ItemMesh;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	float ItemWeight;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	float ItemVolume;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	int32 ItemCost;
	UPROPERTY(BlueprintReadOnly, Category=Item)
	FGameplayTagContainer Additions;
};


