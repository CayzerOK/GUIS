// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Engine.h"
#include "GUIS.h"
#include "GameItem.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT()
struct FItemSlotInfo
{
	GENERATED_BODY()

	bool operator==(const FItemSlotInfo& Other) const
	{
		return Other.ItemID == ItemID;
	}
	UPROPERTY(SaveGame)
	uint64 ItemID;
	UPROPERTY(SaveGame)
	int32 Count;
	UPROPERTY(SaveGame)
	TMap<FName, float> MetaData;
};

USTRUCT(BlueprintType)
struct FItemSlot
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
	TArray<FItemSlotInfo> InnerContent;
	UPROPERTY()
	UGUIS* InventorySubsystem;
	
public:

	UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TSubclassOf<UGameItem> FilterClass = UGameItem::StaticClass();
	
	UInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
    TArray<FItemSlot>GetContent();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
    TArray<FItemSlot>GetAllItemsOfClass(TSubclassOf<UGameItem> ItemClass);
 
	UFUNCTION(BlueprintCallable, Category = "Inventory")
    void ForceAddItems(UGameItem* Item, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Category = "Inventory")
    bool AddItems(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory.Meta")
    bool SetItemMeta(UGameItem* Item, FName MetaField, float Value);

	UFUNCTION(BlueprintCallable, Category = "Inventory.Meta")
    bool RemoveItemMeta(UGameItem* Item, FName MetaField);

	UFUNCTION(BlueprintCallable, Category = "Inventory.Meta")
    TMap<FName, float> GetItemMeta(UGameItem* Item);
 
	UFUNCTION(BlueprintCallable, Category = "Inventory")
    void RemoveItems(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
    bool TransactTo(UGameItem* Item, int32 Amount, UInventoryComponent* To);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
    bool IsContain(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
    void SetFilter(TSubclassOf<UGameItem> ItemClass);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory")
    bool CanAccept(UGameItem* Item, int32 Amount);

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintNativeEvent)
    void ItemsAdded(UGameItem* Item, int32 Amount);

	UFUNCTION(BlueprintNativeEvent)
    void ItemsRemoved(UGameItem* Item, int32 Amount);
};