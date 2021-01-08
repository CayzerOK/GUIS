// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GUIS/Public/GUISSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGUISSubsystem() {}
// Cross Module References
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FGUISSaveData();
	UPackage* Z_Construct_UPackage__Script_GUIS();
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData();
	GUIS_API UClass* Z_Construct_UClass_UGUIS_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UGUIS();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
class UScriptStruct* FGUISSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FGUISSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGUISSaveData, Z_Construct_UPackage__Script_GUIS(), TEXT("GUISSaveData"), sizeof(FGUISSaveData), Get_Z_Construct_UScriptStruct_FGUISSaveData_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FGUISSaveData>()
{
	return FGUISSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGUISSaveData(FGUISSaveData::StaticStruct, TEXT("/Script/GUIS"), TEXT("GUISSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFGUISSaveData
{
	FScriptStruct_GUIS_StaticRegisterNativesFGUISSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GUISSaveData")),new UScriptStruct::TCppStructOps<FGUISSaveData>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFGUISSaveData;
	struct Z_Construct_UScriptStruct_FGUISSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGUISSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGUISSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGUISSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGUISSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		nullptr,
		&NewStructOps,
		"GUISSaveData",
		sizeof(FGUISSaveData),
		alignof(FGUISSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGUISSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGUISSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGUISSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGUISSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GUISSaveData"), sizeof(FGUISSaveData), Get_Z_Construct_UScriptStruct_FGUISSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGUISSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGUISSaveData_Hash() { return 3003118466U; }
class UScriptStruct* FItemSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FItemSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSaveData, Z_Construct_UPackage__Script_GUIS(), TEXT("ItemSaveData"), sizeof(FItemSaveData), Get_Z_Construct_UScriptStruct_FItemSaveData_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FItemSaveData>()
{
	return FItemSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemSaveData(FItemSaveData::StaticStruct, TEXT("/Script/GUIS"), TEXT("ItemSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFItemSaveData
{
	FScriptStruct_GUIS_StaticRegisterNativesFItemSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemSaveData")),new UScriptStruct::TCppStructOps<FItemSaveData>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFItemSaveData;
	struct Z_Construct_UScriptStruct_FItemSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		nullptr,
		&NewStructOps,
		"ItemSaveData",
		sizeof(FItemSaveData),
		alignof(FItemSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemSaveData"), sizeof(FItemSaveData), Get_Z_Construct_UScriptStruct_FItemSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemSaveData_Hash() { return 1895087134U; }
	DEFINE_FUNCTION(UGUIS::execGetItem)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemBase**)Z_Param__Result=P_THIS->GetItem(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGUIS::execDecreaseItemCount)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseItemCount(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGUIS::execIncreaseItemCount)
	{
		P_GET_OBJECT(UItemBase,Z_Param_Item);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseItemCount(Z_Param_Item,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGUIS::execLoadData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadData(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGUIS::execSaveData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveData(Z_Param_Slot);
		P_NATIVE_END;
	}
	void UGUIS::StaticRegisterNativesUGUIS()
	{
		UClass* Class = UGUIS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateItem", &UGUIS::execCreateItem },
			{ "DecreaseItemCount", &UGUIS::execDecreaseItemCount },
			{ "GetItem", &UGUIS::execGetItem },
			{ "IncreaseItemCount", &UGUIS::execIncreaseItemCount },
			{ "LoadData", &UGUIS::execLoadData },
			{ "SaveData", &UGUIS::execSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGUIS_CreateItem_Statics
	{
		struct GUIS_eventCreateItem_Parms
		{
			UStruct* ItemStruct;
			UItemBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGUIS_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventCreateItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGUIS_CreateItem_Statics::NewProp_ItemStruct = { "ItemStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventCreateItem_Parms, ItemStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_CreateItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_CreateItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_CreateItem_Statics::NewProp_ItemStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Creation" },
		{ "CustomStructureParam", "ItemStruct" },
		{ "CustomThunk", "true" },
		{ "Keywords", "Convert Struct to Item" },
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "CreateItem", nullptr, nullptr, sizeof(GUIS_eventCreateItem_Parms), Z_Construct_UFunction_UGUIS_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics
	{
		struct GUIS_eventDecreaseItemCount_Parms
		{
			UItemBase* Item;
			uint32 Amount;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventDecreaseItemCount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventDecreaseItemCount_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "DecreaseItemCount", nullptr, nullptr, sizeof(GUIS_eventDecreaseItemCount_Parms), Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_DecreaseItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_DecreaseItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGUIS_GetItem_Statics
	{
		struct GUIS_eventGetItem_Parms
		{
			uint32 ItemID;
			UItemBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGUIS_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGUIS_GetItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventGetItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_GetItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_GetItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "GetItem", nullptr, nullptr, sizeof(GUIS_eventGetItem_Parms), Z_Construct_UFunction_UGUIS_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics
	{
		struct GUIS_eventIncreaseItemCount_Parms
		{
			UItemBase* Item;
			uint32 Amount;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventIncreaseItemCount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventIncreaseItemCount_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "IncreaseItemCount", nullptr, nullptr, sizeof(GUIS_eventIncreaseItemCount_Parms), Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_IncreaseItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_IncreaseItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGUIS_LoadData_Statics
	{
		struct GUIS_eventLoadData_Parms
		{
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGUIS_LoadData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventLoadData_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_LoadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_LoadData_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_LoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "LoadData", nullptr, nullptr, sizeof(GUIS_eventLoadData_Parms), Z_Construct_UFunction_UGUIS_LoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_LoadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_LoadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_LoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_LoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_LoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGUIS_SaveData_Statics
	{
		struct GUIS_eventSaveData_Parms
		{
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGUIS_SaveData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GUIS_eventSaveData_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIS_SaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIS_SaveData_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIS_SaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIS_SaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIS, nullptr, "SaveData", nullptr, nullptr, sizeof(GUIS_eventSaveData_Parms), Z_Construct_UFunction_UGUIS_SaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_SaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIS_SaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGUIS_SaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIS_SaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIS_SaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGUIS_NoRegister()
	{
		return UGUIS::StaticClass();
	}
	struct Z_Construct_UClass_UGUIS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMap_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGUIS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGUIS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGUIS_CreateItem, "CreateItem" }, // 2072405245
		{ &Z_Construct_UFunction_UGUIS_DecreaseItemCount, "DecreaseItemCount" }, // 1614399623
		{ &Z_Construct_UFunction_UGUIS_GetItem, "GetItem" }, // 4136024917
		{ &Z_Construct_UFunction_UGUIS_IncreaseItemCount, "IncreaseItemCount" }, // 2226739386
		{ &Z_Construct_UFunction_UGUIS_LoadData, "LoadData" }, // 731009740
		{ &Z_Construct_UFunction_UGUIS_SaveData, "SaveData" }, // 2963415300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGUIS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GUISSubsystem.h" },
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GUISSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap = { "ItemMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGUIS, ItemMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap_Inner = { "ItemMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGUIS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGUIS_Statics::NewProp_ItemMap_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGUIS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGUIS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGUIS_Statics::ClassParams = {
		&UGUIS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGUIS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGUIS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGUIS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGUIS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGUIS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGUIS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGUIS, 3720588030);
	template<> GUIS_API UClass* StaticClass<UGUIS>()
	{
		return UGUIS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGUIS(Z_Construct_UClass_UGUIS, &UGUIS::StaticClass, TEXT("/Script/GUIS"), TEXT("UGUIS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGUIS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
