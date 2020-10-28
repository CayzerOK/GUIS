// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GUIS/Public/ItemMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMaster() {}
// Cross Module References
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FITemRow();
	UPackage* Z_Construct_UPackage__Script_GUIS();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UItemMaster_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UItemMaster();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FITemRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FITemRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FITemRow, Z_Construct_UPackage__Script_GUIS(), TEXT("ITemRow"), sizeof(FITemRow), Get_Z_Construct_UScriptStruct_FITemRow_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FITemRow>()
{
	return FITemRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FITemRow(FITemRow::StaticStruct, TEXT("/Script/GUIS"), TEXT("ITemRow"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFITemRow
{
	FScriptStruct_GUIS_StaticRegisterNativesFITemRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ITemRow")),new UScriptStruct::TCppStructOps<FITemRow>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFITemRow;
	struct Z_Construct_UScriptStruct_FITemRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_References;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITemRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FITemRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FITemRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FITemRow, References), METADATA_PARAMS(Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_References_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_References_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FITemRow, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FITemRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_References,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FITemRow_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FITemRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ITemRow",
		sizeof(FITemRow),
		alignof(FITemRow),
		Z_Construct_UScriptStruct_FITemRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITemRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FITemRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITemRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FITemRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FITemRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ITemRow"), sizeof(FITemRow), Get_Z_Construct_UScriptStruct_FITemRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FITemRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FITemRow_Hash() { return 301212733U; }
	void UItemMaster::StaticRegisterNativesUItemMaster()
	{
		UClass* Class = UItemMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItem", &UItemMaster::execGetItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemMaster_GetItem_Statics
	{
		struct ItemMaster_eventGetItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemMaster_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemMaster_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemMaster_GetItem_Statics::NewProp_ItemStruct = { "ItemStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemMaster_eventGetItem_Parms, ItemStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMaster_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMaster_GetItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMaster_GetItem_Statics::NewProp_ItemStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMaster_GetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Creation" },
		{ "CustomStructureParam", "ItemStruct" },
		{ "CustomThunk", "true" },
		{ "Keywords", "Convert Struct to Item" },
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMaster_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMaster, nullptr, "GetItem", nullptr, nullptr, sizeof(ItemMaster_eventGetItem_Parms), Z_Construct_UFunction_UItemMaster_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMaster_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemMaster_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMaster_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemMaster_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemMaster_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemMaster_NoRegister()
	{
		return UItemMaster::StaticClass();
	}
	struct Z_Construct_UClass_UItemMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPalette_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemPalette;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemMaster_GetItem, "GetItem" }, // 1261945794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemMaster.h" },
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMaster_Statics::NewProp_ItemPalette_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemMaster_Statics::NewProp_ItemPalette = { "ItemPalette", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemMaster, ItemPalette), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemMaster_Statics::NewProp_ItemPalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMaster_Statics::NewProp_ItemPalette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMaster_Statics::NewProp_ItemPalette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemMaster_Statics::ClassParams = {
		&UItemMaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemMaster_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemMaster, 320296533);
	template<> GUIS_API UClass* StaticClass<UItemMaster>()
	{
		return UItemMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemMaster(Z_Construct_UClass_UItemMaster, &UItemMaster::StaticClass, TEXT("/Script/GUIS"), TEXT("UItemMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
