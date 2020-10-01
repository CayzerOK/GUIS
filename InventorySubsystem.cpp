


#include "InventorySubsystem.h"


UGameItem* UInventorySubsystem::GetItem(const FGameItemStruct ItemStruct, const int32 Amount)
{
    const uint32 ItemID = GetTypeHash(ItemStruct);
    UGameItem* NewItem;
    if(ItemMap.Contains(ItemID))
    {
        NewItem = *ItemMap.Find(ItemID);
        RefMap.Add(NewItem->ID, *RefMap.Find(NewItem->ID)+Amount);
        return NewItem;
    }
    if (ItemStruct.ItemClass == nullptr)
    {
        return nullptr;
    }
    NewItem = NewObject<UGameItem>( GetTransientPackage(), ItemStruct.ItemClass);
    NewItem->LoadFromStruct(ItemStruct);
    ItemMap.Add(ItemID, NewItem);
    RefMap.Add(NewItem->ID, Amount);
    
    return NewItem;
}

void UInventorySubsystem::DestroyItem(UGameItem* GameItem, int32 Amount)
{
    if (RefMap.Contains(GameItem->ID))
    {
        int32 Count = *RefMap.Find(GameItem->ID);
        Count-=Amount;
        if(Count>0)
        {
            RefMap.Add(GameItem->ID, Count);
        }
        else
        {
            RefMap.Remove(GameItem->ID);
            RefMap.Compact();
            ItemMap.Remove(GameItem->ID);
            ItemMap.Compact();
        }
        return;
    }
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("DELETED ITEM NOT FOUND"));
    return;
}

int32 UInventorySubsystem::GetItemCount() const
{
    return ItemMap.Num();
}
