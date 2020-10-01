

#pragma once

#include "CoreMinimal.h"

#include "ItemBase/GameItem.h"
#include "InventorySubsystem.generated.h"

/**
 * 
 */
UCLASS()
class TRAINHEAD_API UInventorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY()
	TMap<uint32, UGameItem*> ItemMap;
	UPROPERTY()
	TMap<uint32, int32> RefMap;
	
	UFUNCTION(BlueprintCallable, Category=ItemForge)
	UGameItem* GetItem(FGameItemStruct ItemStruct, int32 Amount);

	UFUNCTION(BlueprintCallable, Category=ItemForge)
    void DestroyItem(UGameItem* GameItem, int32 Amount);

	UFUNCTION(BlueprintCallable, Category=ItemForge)
    int32 GetItemCount() const;
};
