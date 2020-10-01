


#include "ArmorBase.h"

bool UArmorBase::LoadFromStruct(FGameItemStruct ItemStruct)
{
    UGameItem::LoadFromStruct(ItemStruct);
    EquipmentSlots = ItemStruct.EquipmentSlots;
    ArmorResistance = ItemStruct.ArmorStats.Resistance;
    return true;
}
