// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GUIS/Public/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo();
	UPackage* Z_Construct_UPackage__Script_GUIS();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FItemSlot();
	GUIS_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FItemSlotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FItemSlotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSlotInfo, Z_Construct_UPackage__Script_GUIS(), TEXT("ItemSlotInfo"), sizeof(FItemSlotInfo), Get_Z_Construct_UScriptStruct_FItemSlotInfo_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FItemSlotInfo>()
{
	return FItemSlotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemSlotInfo(FItemSlotInfo::StaticStruct, TEXT("/Script/GUIS"), TEXT("ItemSlotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFItemSlotInfo
{
	FScriptStruct_GUIS_StaticRegisterNativesFItemSlotInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemSlotInfo")),new UScriptStruct::TCppStructOps<FItemSlotInfo>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFItemSlotInfo;
	struct Z_Construct_UScriptStruct_FItemSlotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSlotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemSlotInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemSlotInfo, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		nullptr,
		&NewStructOps,
		"ItemSlotInfo",
		sizeof(FItemSlotInfo),
		alignof(FItemSlotInfo),
		Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemSlotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemSlotInfo"), sizeof(FItemSlotInfo), Get_Z_Construct_UScriptStruct_FItemSlotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemSlotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemSlotInfo_Hash() { return 4219963417U; }
class UScriptStruct* FItemSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FItemSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSlot, Z_Construct_UPackage__Script_GUIS(), TEXT("ItemSlot"), sizeof(FItemSlot), Get_Z_Construct_UScriptStruct_FItemSlot_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FItemSlot>()
{
	return FItemSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemSlot(FItemSlot::StaticStruct, TEXT("/Script/GUIS"), TEXT("ItemSlot"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFItemSlot
{
	FScriptStruct_GUIS_StaticRegisterNativesFItemSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemSlot")),new UScriptStruct::TCppStructOps<FItemSlot>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFItemSlot;
	struct Z_Construct_UScriptStruct_FItemSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildInvID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChildInvID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ChildInvID_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ChildInvID = { "ChildInvID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemSlot, ChildInvID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ChildInvID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ChildInvID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemSlot, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ItemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemSlot, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ChildInvID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlot_Statics::NewProp_ItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		nullptr,
		&NewStructOps,
		"ItemSlot",
		sizeof(FItemSlot),
		alignof(FItemSlot),
		Z_Construct_UScriptStruct_FItemSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemSlot"), sizeof(FItemSlot), Get_Z_Construct_UScriptStruct_FItemSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemSlot_Hash() { return 2229665715U; }
	DEFINE_FUNCTION(UInventoryComponent::execCanAccept)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAccept_Implementation(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execIsContain)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContain(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execTransactTo)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_OBJECT(UInventoryComponent,Z_Param_To);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransactTo(Z_Param_Item,Z_Param_Amount,Z_Param_To);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveItems)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItems(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddItems)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItems(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemSlotInfo>*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	static FName NAME_UInventoryComponent_CanAccept = FName(TEXT("CanAccept"));
	bool UInventoryComponent::CanAccept(UItemBase* Item, int32 Amount)
	{
		InventoryComponent_eventCanAccept_Parms Parms;
		Parms.Item=Item;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_CanAccept),&Parms);
		return !!Parms.ReturnValue;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItems", &UInventoryComponent::execAddItems },
			{ "CanAccept", &UInventoryComponent::execCanAccept },
			{ "GetContent", &UInventoryComponent::execGetContent },
			{ "IsContain", &UInventoryComponent::execIsContain },
			{ "RemoveItems", &UInventoryComponent::execRemoveItems },
			{ "TransactTo", &UInventoryComponent::execTransactTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddItems_Statics
	{
		struct InventoryComponent_eventAddItems_Parms
		{
			UItemBase* Item;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventAddItems_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventAddItems_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItems", nullptr, nullptr, sizeof(InventoryComponent_eventAddItems_Parms), Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventCanAccept_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryComponent_eventCanAccept_Parms), &Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventCanAccept_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventCanAccept_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CanAccept", nullptr, nullptr, sizeof(InventoryComponent_eventCanAccept_Parms), Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_CanAccept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CanAccept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetContent_Statics
	{
		struct InventoryComponent_eventGetContent_Parms
		{
			TArray<FItemSlotInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetContent", nullptr, nullptr, sizeof(InventoryComponent_eventGetContent_Parms), Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_IsContain_Statics
	{
		struct InventoryComponent_eventIsContain_Parms
		{
			UItemBase* Item;
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventIsContain_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryComponent_eventIsContain_Parms), &Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventIsContain_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventIsContain_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "IsContain", nullptr, nullptr, sizeof(InventoryComponent_eventIsContain_Parms), Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_IsContain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_IsContain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics
	{
		struct InventoryComponent_eventRemoveItems_Parms
		{
			UItemBase* Item;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItems_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItems_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItems", nullptr, nullptr, sizeof(InventoryComponent_eventRemoveItems_Parms), Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics
	{
		struct InventoryComponent_eventTransactTo_Parms
		{
			UItemBase* Item;
			int32 Amount;
			UInventoryComponent* To;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventTransactTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryComponent_eventTransactTo_Parms), &Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_To_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTransactTo_Parms, To), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTransactTo_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTransactTo_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TransactTo", nullptr, nullptr, sizeof(InventoryComponent_eventTransactTo_Parms), Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_TransactTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TransactTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InnerContent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerContent_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItems, "AddItems" }, // 3842685246
		{ &Z_Construct_UFunction_UInventoryComponent_CanAccept, "CanAccept" }, // 2721897726
		{ &Z_Construct_UFunction_UInventoryComponent_GetContent, "GetContent" }, // 3564263464
		{ &Z_Construct_UFunction_UInventoryComponent_IsContain, "IsContain" }, // 88672248
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItems, "RemoveItems" }, // 1629514738
		{ &Z_Construct_UFunction_UInventoryComponent_TransactTo, "TransactTo" }, // 3743344635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent = { "InnerContent", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, InnerContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent_Inner = { "InnerContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InnerContent_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 914195893);
	template<> GUIS_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/GUIS"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
