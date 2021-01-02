// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "InventorySubsystem.h"
#include "ItemBase.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT()
struct FItemSlot
{
	GENERATED_BODY()

	bool operator==(const FItemSlot& Other) const
	{
		return Other.ItemID == ItemID;
	}
	UPROPERTY(SaveGame)
	uint64 ItemID;
	UPROPERTY(SaveGame)
	int32 Count;
	UPROPERTY(SaveGame)
	uint32 ChildInvID = NULL;
};

USTRUCT(BlueprintType)
struct FItemSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	UItemBase* Item;

	UPROPERTY(BlueprintReadOnly)
	int32 Count;
	
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GUIS_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(SaveGame)
	TArray<FItemSlot> InnerContent;
	UInventorySubsystem* InventorySubsystem;
	
public:	
	UInventoryComponent();

	UFUNCTION(BlueprintCallable)
    TArray<FItemSlotInfo>GetContent();
 
	UFUNCTION(BlueprintCallable)
    void AddItems(UItemBase* Item, int32 Amount);
 
	UFUNCTION(BlueprintCallable)
    void RemoveItems(UItemBase* Item, int32 Amount);

	UFUNCTION(BlueprintCallable)
    bool TransactTo(UItemBase* Item, int32 Amount, UInventoryComponent* To);
	
	UFUNCTION(BlueprintCallable)
    bool IsContain(UItemBase* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAccept(UItemBase* Item, int32 Amount);

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemAdded(UItemBase* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemRemoved(UItemBase* Item, int32 Amount);
};
