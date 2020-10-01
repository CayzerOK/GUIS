

#pragma once

#include "CoreMinimal.h"
#include "ItemBase/GameItem.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemsFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class TRAINHEAD_API UItemsFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable)
	UGameItem* CreateItem(FGameItemStruct ItemStruct, int32 Amount) const;
	UFUNCTION(BlueprintCallable)
    void DestroyItem(UGameItem* Item, int32 Amount) const;
};
