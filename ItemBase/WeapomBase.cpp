


#include "WeapomBase.h"


bool UWeapomBase::LoadFromStruct(FGameItemStruct ItemStruct)
{
    UGameItem::LoadFromStruct(ItemStruct);
    EquipmentSlots = ItemStruct.EquipmentSlots;
    Damage = ItemStruct.WeaponStats.Damage;
    DamageType = ItemStruct.WeaponStats.DamageType;
    WeaponType = ItemStruct.WeaponStats.WeaponType;
    Transform = ItemStruct.WeaponStats.Transform;
    return true;
}
