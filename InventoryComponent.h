

#pragma once

#include "CoreMinimal.h"
#include "InventoryEnums.h"
#include "Components/ActorComponent.h"
#include "ItemBase/GameItem.h"

#include "InventoryComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRAINHEAD_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Inventory)
	FText InvName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Inventory)
	FText InvDesc;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Inventory)
	float MaxWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Inventory)
    float MaxVolume;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Inventory)
	TEnumAsByte<EInvType> InvType;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
    float CurrentWeight;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
    float CurrentVolume;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
    TMap<UGameItem*, int32> InnerItems;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TEnumAsByte<ESortType> SortType;
	
	UFUNCTION(BlueprintCallable, Category = Inventory)
	bool SetSort(ESortType NewSort);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Inventory)
    bool IsSpaceAvailable(UGameItem* GameItem,  int32 Amount);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Inventory)
    bool ContainsItem(UGameItem* GameItem,  int32 Amount);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = Inventory)
    bool TransactTo(UInventoryComponent* TargetInventory, UGameItem* TargetItem, int32 Amount);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent,  Category = Inventory)
    bool AddItem(UGameItem* TargetItem, int32 Amount);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Inventory)
    bool RemoveItem(UGameItem* TargetItem, int32 Amount);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Inventory)
    bool DestroyItem(UGameItem* TargetItem, int32 Amount);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent,  Category = Inventory)
    bool CreateItem(FGameItemStruct TargetItem, int32 Amount);
};
