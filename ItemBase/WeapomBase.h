

#pragma once

#include "CoreMinimal.h"
#include "GameItem.h"
#include "WeapomBase.generated.h"

/**
 * 
 */
UCLASS()
class TRAINHEAD_API UWeapomBase : public UGameItem
{
	GENERATED_BODY()
	public:
	bool LoadFromStruct(FGameItemStruct ItemStruct);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
	float Damage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
	TSubclassOf<class UDamageType> DamageType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
	TEnumAsByte<EWeaponType> WeaponType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
	FTransform Transform;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=Item)
	TArray<TEnumAsByte<EEquipmentsSlot>> EquipmentSlots;
};
