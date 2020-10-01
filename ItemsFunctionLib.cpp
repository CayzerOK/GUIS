


#include "ItemsFunctionLib.h"

#include "InventorySubsystem.h"
#include "Kismet/GameplayStatics.h"

UGameItem* UItemsFunctionLib::CreateItem(FGameItemStruct ItemStruct, int32 Amount) const
{
    UInventorySubsystem* InventorySubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UInventorySubsystem>();
    UGameItem* NewItem = InventorySubsystem->GetItem(ItemStruct, Amount);
    return NewItem;
}

void UItemsFunctionLib::DestroyItem(UGameItem* Item, int32 Amount) const
{
    UInventorySubsystem* InventorySubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UInventorySubsystem>();
    InventorySubsystem->DestroyItem(Item, Amount);
    return;
}
