#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"

#include "ItemStructs.generated.h"


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

UENUM(BlueprintType)
enum EWeaponType
{
    OneHandSword UMETA(DisplayName = "OHSword"),
    TwoHandSword UMETA(DisplayName = "THSword"),
    OneHandAxe UMETA(DisplayName = "OHAxe"),
    TwoHandAxe UMETA(DisplayName = "THAxe"),
    OneHandHammer UMETA(DisplayName = "OHHammer"),
    TwoHandHammer UMETA(DisplayName = "THHammer"),
    OneHandMace UMETA(DisplayName = "OHMace"),
    TwoHandMace UMETA(DisplayName = "THMace"),
    Shield UMETA(DisplayName = "Shield"),
    Staff UMETA(DisplayName = "Staff"),
    Knife UMETA(DisplayName = "Knife"),
    Pistol UMETA(DisplayName = "Pistol"),
    Rifle UMETA(DisplayName = "THHammer"),
};

USTRUCT(BlueprintType)
struct FStructWeaponAnimations
{
    GENERATED_BODY()
    public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UAnimMontage* TopPunch;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UAnimMontage* LeftPunch;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UAnimMontage* RightPunch;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UAnimSequence* BasePose;
    
};

USTRUCT(BlueprintType)
struct FStructWeapon
{
    GENERATED_BODY()
    public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    float Damage;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    TSubclassOf<class UDamageType> DamageType;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    TEnumAsByte<EWeaponType> WeaponType;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FTransform Transform;
};

USTRUCT(BlueprintType)
struct FStructArmor
{
    GENERATED_BODY()
    public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    float Resistance;
};

USTRUCT(BlueprintType)
struct FGameItemStruct
{
    GENERATED_BODY()
    mutable uint32 ItemID;
    
    bool operator== (const FGameItemStruct& Other) const
    {
        return GetTypeHash(this) == GetTypeHash(Other);
    }
    
    friend uint32 GetTypeHash (const FGameItemStruct& Other)
    {
        if (Other.ItemID==0)
        {
            uint32 Hash = FCrc::TypeCrc32(Other.Additions);
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.Tier));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ItemClass));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(*Other.ItemIcon));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ItemName.ToString()));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ItemDesc.ToString()));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(*Other.ItemMesh));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ItemVolume));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ItemWeight));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.WeaponStats.WeaponType));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.WeaponStats.Transform));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.WeaponStats.Damage));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.WeaponStats.DamageType));
            Hash = HashCombine(Hash, FCrc::TypeCrc32(Other.ArmorStats.Resistance));
            for (TEnumAsByte<EEquipmentsSlot> Slot : Other.EquipmentSlots)
            {
                Hash = HashCombine(Hash, FCrc::TypeCrc32(Slot));
            }
            Other.ItemID = Hash;
            GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Item %u Created!"), Hash));
        }
        return Other.ItemID;
    }
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    TSubclassOf<class UGameItem> ItemClass;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FText ItemName;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FText ItemDesc;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    TEnumAsByte<EItemTier> Tier;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UTexture2D* ItemIcon;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    UStaticMesh* ItemMesh;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    float ItemWeight;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    float ItemVolume;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    int32 ItemCost;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FStructWeapon WeaponStats;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FStructArmor ArmorStats;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    FGameplayTagContainer Additions;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Item)
    TArray<TEnumAsByte<EEquipmentsSlot>> EquipmentSlots;
};
