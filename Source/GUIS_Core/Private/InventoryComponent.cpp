#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	InventorySubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UGUIS>();
}

void UInventoryComponent::ItemsRemoved_Implementation(UGameItem* Item, int32 Amount) {}
void UInventoryComponent::ItemsAdded_Implementation(UGameItem* Item, int32 Amount) {}

bool UInventoryComponent::CanAccept_Implementation(UGameItem* Item, int32 Amount)
{
	UE_LOG(LogTemp, Log, TEXT("%s -> %s"), *FilterClass->GetName(), *Item->GetClass()->GetName())
	return Item->GetClass()->IsChildOf(FilterClass);
}

void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

TArray<FItemSlot> UInventoryComponent::GetContent()
{
	TArray<FItemSlot> Content;
	for (FItemSlotInfo Slot : InnerContent)
	{
		FItemSlot SlotInfo;

		if (UGameItem* FoundedItem = InventorySubsystem->GetItem(Slot.ItemID))
		{
			SlotInfo.Item = FoundedItem;
			SlotInfo.Count = Slot.Count;
			Content.Add(SlotInfo);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, FString::Printf(TEXT("Item_%llu NOT FOUND"), Slot.ItemID));
		}
	}
	return Content;
}

TArray<FItemSlot> UInventoryComponent::GetAllItemsOfClass(TSubclassOf<UGameItem> ItemClass)
{
	TArray<FItemSlot> Content;
	for (FItemSlotInfo Slot : InnerContent)
	{
		if (UGameItem* FoundedItem = InventorySubsystem->GetItem(Slot.ItemID))
		{
			if(FoundedItem->GetClass()->IsChildOf(ItemClass))
			{
				FItemSlot SlotInfo;
				
				SlotInfo.Item = FoundedItem;
				SlotInfo.Count = Slot.Count;
				Content.Add(SlotInfo);
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, FString::Printf(TEXT("Item_%llu NOT FOUND"), Slot.ItemID));
		}
	}
	return Content;
}

void UInventoryComponent::ForceAddItems(UGameItem* Item, int32 Amount)
{
	if(IsValid(Item))
	{
		if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) {return Item->ItemID == Result.ItemID; }))
		{
			Slot->Count += Amount;
		} else
		{
			FItemSlotInfo NewSlot;
			NewSlot.ItemID = Item->ItemID;
			NewSlot.Count = Amount;
			InnerContent.Add(NewSlot);
		}

		InventorySubsystem->IncreaseItemCount(Item, Amount);
		ItemsAdded(Item,Amount);
		return;
	}
}

bool UInventoryComponent::AddItems(UGameItem* Item, int32 Amount)
{
	if(CanAccept(Item, Amount))
	{
		ForceAddItems(Item, Amount);
		return true;
	}
	return false;
}

bool UInventoryComponent::SetItemMeta(UGameItem* Item, FName MetaField, float Value)
{
	if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) {return Item->ItemID == Result.ItemID; }))
	{
		Slot->MetaData.Emplace(MetaField, Value);
		return true;
	}

	return false;
}

bool UInventoryComponent::RemoveItemMeta(UGameItem* Item, FName MetaField)
{
	if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) {return Item->ItemID == Result.ItemID; }))
	{
		Slot->MetaData.FindAndRemoveChecked(MetaField);
		return true;
	}
	return false;
}

TMap<FName, float> UInventoryComponent::GetItemMeta(UGameItem* Item)
{
	if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) {return Item->ItemID == Result.ItemID; }))
	{
		return Slot->MetaData;
	}
	return {};
}

void UInventoryComponent::RemoveItems(UGameItem* Item, int32 Amount)
{
	if(IsValid(Item))
	{
		if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) { return Item->ItemID == Result.ItemID; }))
		{
			if(Slot->Count>Amount)
			{
				InventorySubsystem->IncreaseItemCount(Item, Amount);
				Slot->Count -= Amount;
			}
			else
			{
				InventorySubsystem->IncreaseItemCount(Item, Slot->Count);
				InnerContent.Remove(*Slot);
			}
			ItemsRemoved(Item,Amount);
		}
		return;
	}
}

bool UInventoryComponent::TransactTo(UGameItem* Item, int32 Amount, UInventoryComponent* To)
{
	if(IsContain(Item, Amount) && To->CanAccept(Item, Amount))
	{
		RemoveItems(Item, Amount);
		To->ForceAddItems(Item, Amount);
	}
	return true;
}

bool UInventoryComponent::IsContain(UGameItem* Item, int32 Amount)
{
	if(FItemSlotInfo* Slot = InnerContent.FindByPredicate([&](FItemSlotInfo Result) {return Item->ItemID == Result.ItemID; }))
	{
		return Slot->Count>=Amount;
	}
	return false;
}

void UInventoryComponent::SetFilter(TSubclassOf<UGameItem> ItemClass)
{
	this->FilterClass = ItemClass;
}
