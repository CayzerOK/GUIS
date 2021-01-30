// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Engine.h"
#include "GUIS.h"
#include "GameItem.h"
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
	UGameItem* Item;

	UPROPERTY(BlueprintReadOnly)
	int32 Count;
	
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GUIS_CORE_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(SaveGame)
	TArray<FItemSlot> InnerContent;
	UPROPERTY()
	UGUIS* InventorySubsystem;
	
	public:	
	UInventoryComponent();

	UFUNCTION(BlueprintCallable)
    TArray<FItemSlotInfo>GetContent();
 
	UFUNCTION(BlueprintCallable)
    void AddItems(UGameItem* Item, int32 Amount);
 
	UFUNCTION(BlueprintCallable)
    void RemoveItems(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintCallable)
    bool TransactTo(UGameItem* Item, int32 Amount, UInventoryComponent* To);
	
	UFUNCTION(BlueprintCallable)
    bool IsContain(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAccept(UGameItem* Item, int32 Amount);

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	protected:
	
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintNativeEvent)
    void ItemsAdded(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintNativeEvent)
    void ItemsRemoved(UGameItem* Item, int32 Amount);
};