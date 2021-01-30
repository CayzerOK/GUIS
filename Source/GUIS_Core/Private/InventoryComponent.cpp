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
bool UInventoryComponent::CanAccept_Implementation(UGameItem* Item, int32 Amount) { return true; }

void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

TArray<FItemSlotInfo> UInventoryComponent::GetContent()
{
	TArray<FItemSlotInfo> Content;
	for (FItemSlot Slot : InnerContent)
	{
		FItemSlotInfo SlotInfo;

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

void UInventoryComponent::AddItems(UGameItem* Item, int32 Amount)
{
	if(IsValid(Item))
	{
		if(FItemSlot* Slot = InnerContent.FindByPredicate([&](FItemSlot Result) {return Item->ItemID == Result.ItemID; }))
		{
			Slot->Count += Amount;
		} else
		{
			FItemSlot NewSlot;
			NewSlot.ItemID = Item->ItemID;
			NewSlot.Count = Amount;
			InnerContent.Add(NewSlot);
		}

		InventorySubsystem->IncreaseItemCount(Item, Amount);
		ItemsAdded(Item,Amount);
		return;
	}
}

void UInventoryComponent::RemoveItems(UGameItem* Item, int32 Amount)
{
	if(IsValid(Item))
	{
		if(FItemSlot* Slot = InnerContent.FindByPredicate([&](FItemSlot Result) { return Item->ItemID == Result.ItemID; }))
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
		To->AddItems(Item, Amount);
	}
	return true;
}

bool UInventoryComponent::IsContain(UGameItem* Item, int32 Amount)
{
	if(FItemSlot* Slot = InnerContent.FindByPredicate([&](FItemSlot Result) {return Item->ItemID == Result.ItemID; }))
	{
		return Slot->Count>=Amount;
	}
	return false;
}