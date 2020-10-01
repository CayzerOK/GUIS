
#include "GameItem.h"

bool UGameItem::LoadFromStruct_Implementation(FGameItemStruct ItemStruct)
{
    ID = GetTypeHash(ItemStruct);
    ItemName = ItemStruct.ItemName;
    ItemDesc = ItemStruct.ItemDesc;
    ItemIcon = ItemStruct.ItemIcon;
    ItemCost = ItemStruct.ItemCost;
    ItemMesh = ItemStruct.ItemMesh;
    Additions = ItemStruct.Additions;
    Tier = ItemStruct.Tier;
    ItemVolume = ItemStruct.ItemVolume;
    ItemWeight = ItemStruct.ItemVolume;
    return true;
}

bool UGameItem::GetStruct_Implementation(FGameItemStruct ItemStruct)
{
    return {};
}
