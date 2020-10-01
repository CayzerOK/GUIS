

#pragma once

#include "CoreMinimal.h"
#include "GameItem.h"
#include "ArmorBase.generated.h"

/**
 * 
 */
UCLASS()
class TRAINHEAD_API UArmorBase : public UGameItem
{
	GENERATED_BODY()
public:
    bool LoadFromStruct(FGameItemStruct ItemStruct);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=Item)
	float ArmorResistance;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=Item)
	TArray<TEnumAsByte<EEquipmentsSlot>> EquipmentSlots;
};
