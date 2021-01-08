// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.generated.h"


USTRUCT()
struct FItemInnerProperty
{
    GENERATED_BODY()

    FProperty* Property;
    void* ValuePtr;
};


UENUM(BlueprintType)
enum EEquipmentsSlot
{
    ArmorHead UMETA(DisplayName = "Head"),
    ArmorChest UMETA(DisplayName = "Chest"),
    ArmorHands UMETA(DisplayName = "Hands"),
    ArmorLegs UMETA(DisplayName = "Legs"),
    ArmorFoots UMETA(DisplayName = "Foots"),
    ArmorCover UMETA(DisplayName = "Cover"),
    LeftHand UMETA(DisplayName = "LeftHand"),
    RightHand UMETA(DisplayName = "RightHand"),
    TwoHanded UMETA(DisplayName = "TwoHanded"),
};

UENUM(BlueprintType)
enum EItemTier
{
    ItemPoor UMETA(DisplayName = "Poor"),
    ItemFair UMETA(DisplayName = "Fair"),
    ItemAverage UMETA(DisplayName = "Average"),
    ItemGood UMETA(DisplayName = "Good"),
    ItemExcellent UMETA(DisplayName = "Excellent"),
    ItemExotic UMETA(DisplayName = "Exotic"),
};

UCLASS(Blueprintable, BlueprintType)
class GUIS_API UItemBase : public UObject
{
    GENERATED_BODY()
private:

    void SetProp(FProperty* Property, void* Dest, FItemInnerProperty NewValue) const;

public:
    UPROPERTY()
    uint32 ItemID = 0;
    
    UPROPERTY()
    uint32 Count = 0;

    UFUNCTION()
    bool LoadData(TMap<FString, FItemInnerProperty> PropMap);
};
