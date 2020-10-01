
#include "InventoryComponent.h"


#include "InventorySubsystem.h"
#include "Kismet/GameplayStatics.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UInventoryComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UInventoryComponent::SetSort(ESortType const NewSort)
{
	SortType = NewSort;
	
	switch (SortType)
	{
		case Name:
			{
				InnerItems.KeySort([](const UGameItem& A, const UGameItem& B) {
					return A.ItemName.ToString() < B.ItemName.ToString();
				});
				return true;
			}
		case Weight: 
			{
				InnerItems.KeySort([](const UGameItem& A, const UGameItem& B) {
                    return A.ItemWeight < B.ItemWeight;
                });
				return true;
			}
		case Volume: 
			{
				InnerItems.KeySort([](const UGameItem& A, const UGameItem& B) {
                    return A.ItemVolume < B.ItemVolume;
                });
				return true;
			}
		case Count: 
			{
				InnerItems.ValueSort([](const int32& A, const int32& B) {
                    return A < B;
                });
				return true;
			}
		case Cost: 
			{
				InnerItems.KeySort([](const UGameItem& A, const UGameItem& B) {
                    return A.ItemCost < B.ItemCost;
                });
				return true;
			}
		case Tier: 
			{
				InnerItems.KeySort([](const UGameItem& A, const UGameItem& B) {
                    return A.Tier < B.Tier;
                });
				return true;
			}
	default: return false;
	}
}

bool UInventoryComponent::ContainsItem_Implementation(UGameItem* GameItem, int32 Amount)
{
	if(InnerItems.Contains(GameItem))
	{
		return *InnerItems.Find(GameItem)>=Amount;
	}
	return false;
}

bool UInventoryComponent::IsSpaceAvailable_Implementation(UGameItem* GameItem,int32 Amount)
{
	const bool IsVolumeAvailable = this->MaxVolume>=this->CurrentVolume+GameItem->ItemVolume*Amount;
	const bool IsWeightAvailable = this->MaxWeight>=this->CurrentWeight+GameItem->ItemWeight*Amount; 
	return IsVolumeAvailable && IsWeightAvailable;
}

bool UInventoryComponent::CreateItem_Implementation(const FGameItemStruct ItemStruct, const int32 Amount)
{
	UInventorySubsystem* InventorySubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UInventorySubsystem>();
	UGameItem* NewItem = InventorySubsystem->GetItem(ItemStruct, Amount);
	AddItem(NewItem, Amount);
	return true;
}

bool UInventoryComponent::DestroyItem_Implementation(UGameItem* TargetItem, int32 Amount)
{
	UInventorySubsystem* InventorySubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UInventorySubsystem>();
	InventorySubsystem->DestroyItem(TargetItem, Amount);
	RemoveItem(TargetItem, Amount);
	return true;
}

bool UInventoryComponent::AddItem_Implementation(UGameItem* TargetItem, int32 Amount)
{
	CurrentVolume+=TargetItem->ItemVolume*Amount;
	CurrentWeight+=TargetItem->ItemWeight*Amount;
	if (InnerItems.Contains(TargetItem))
	{
		InnerItems.Add(TargetItem, *InnerItems.Find(TargetItem)+Amount);
		return true;
	}
	InnerItems.Add(TargetItem,Amount);
	return true;
}

bool UInventoryComponent::RemoveItem_Implementation(UGameItem* TargetItem, int32 Amount)
{
	if (InnerItems.Contains(TargetItem))
	{
		int32 Count = *InnerItems.Find(TargetItem);
		
		if(Count>Amount)
		{
			InnerItems.Add(TargetItem, Count-Amount);
			CurrentVolume -= Amount*TargetItem->ItemVolume;
			CurrentWeight -= Amount*TargetItem->ItemWeight;
		}
		else
		{
			InnerItems.Remove(TargetItem);
			
			CurrentVolume -= Count*TargetItem->ItemVolume;
			CurrentWeight -= Count*TargetItem->ItemWeight;
		}
		
	}
	return true;
}

bool UInventoryComponent::TransactTo_Implementation(UInventoryComponent* TargetInventory, UGameItem* TargetItem, int32 Amount)
{
	if(TargetInventory->IsSpaceAvailable(TargetItem, Amount) && ContainsItem(TargetItem, Amount))
	{
		RemoveItem(TargetItem, Amount);
		TargetInventory->AddItem(TargetItem, Amount);
	}
	return false;
}