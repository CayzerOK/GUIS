// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GUIS/Public/ItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}
// Cross Module References
	GUIS_API UEnum* Z_Construct_UEnum_GUIS_EItemTier();
	UPackage* Z_Construct_UPackage__Script_GUIS();
	GUIS_API UEnum* Z_Construct_UEnum_GUIS_EEquipmentsSlot();
	GUIS_API UScriptStruct* Z_Construct_UScriptStruct_FItemInnerProperty();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UItemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EItemTier_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GUIS_EItemTier, Z_Construct_UPackage__Script_GUIS(), TEXT("EItemTier"));
		}
		return Singleton;
	}
	template<> GUIS_API UEnum* StaticEnum<EItemTier>()
	{
		return EItemTier_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemTier(EItemTier_StaticEnum, TEXT("/Script/GUIS"), TEXT("EItemTier"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GUIS_EItemTier_Hash() { return 3568391861U; }
	UEnum* Z_Construct_UEnum_GUIS_EItemTier()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemTier"), 0, Get_Z_Construct_UEnum_GUIS_EItemTier_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ItemPoor", (int64)ItemPoor },
				{ "ItemFair", (int64)ItemFair },
				{ "ItemAverage", (int64)ItemAverage },
				{ "ItemGood", (int64)ItemGood },
				{ "ItemExcellent", (int64)ItemExcellent },
				{ "ItemExotic", (int64)ItemExotic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ItemAverage.DisplayName", "Average" },
				{ "ItemAverage.Name", "ItemAverage" },
				{ "ItemExcellent.DisplayName", "Excellent" },
				{ "ItemExcellent.Name", "ItemExcellent" },
				{ "ItemExotic.DisplayName", "Exotic" },
				{ "ItemExotic.Name", "ItemExotic" },
				{ "ItemFair.DisplayName", "Fair" },
				{ "ItemFair.Name", "ItemFair" },
				{ "ItemGood.DisplayName", "Good" },
				{ "ItemGood.Name", "ItemGood" },
				{ "ItemPoor.DisplayName", "Poor" },
				{ "ItemPoor.Name", "ItemPoor" },
				{ "ModuleRelativePath", "Public/ItemBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GUIS,
				nullptr,
				"EItemTier",
				"EItemTier",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEquipmentsSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GUIS_EEquipmentsSlot, Z_Construct_UPackage__Script_GUIS(), TEXT("EEquipmentsSlot"));
		}
		return Singleton;
	}
	template<> GUIS_API UEnum* StaticEnum<EEquipmentsSlot>()
	{
		return EEquipmentsSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipmentsSlot(EEquipmentsSlot_StaticEnum, TEXT("/Script/GUIS"), TEXT("EEquipmentsSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GUIS_EEquipmentsSlot_Hash() { return 3544650918U; }
	UEnum* Z_Construct_UEnum_GUIS_EEquipmentsSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipmentsSlot"), 0, Get_Z_Construct_UEnum_GUIS_EEquipmentsSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ArmorHead", (int64)ArmorHead },
				{ "ArmorChest", (int64)ArmorChest },
				{ "ArmorHands", (int64)ArmorHands },
				{ "ArmorLegs", (int64)ArmorLegs },
				{ "ArmorFoots", (int64)ArmorFoots },
				{ "ArmorCover", (int64)ArmorCover },
				{ "LeftHand", (int64)LeftHand },
				{ "RightHand", (int64)RightHand },
				{ "TwoHanded", (int64)TwoHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmorChest.DisplayName", "Chest" },
				{ "ArmorChest.Name", "ArmorChest" },
				{ "ArmorCover.DisplayName", "Cover" },
				{ "ArmorCover.Name", "ArmorCover" },
				{ "ArmorFoots.DisplayName", "Foots" },
				{ "ArmorFoots.Name", "ArmorFoots" },
				{ "ArmorHands.DisplayName", "Hands" },
				{ "ArmorHands.Name", "ArmorHands" },
				{ "ArmorHead.DisplayName", "Head" },
				{ "ArmorHead.Name", "ArmorHead" },
				{ "ArmorLegs.DisplayName", "Legs" },
				{ "ArmorLegs.Name", "ArmorLegs" },
				{ "BlueprintType", "true" },
				{ "LeftHand.DisplayName", "LeftHand" },
				{ "LeftHand.Name", "LeftHand" },
				{ "ModuleRelativePath", "Public/ItemBase.h" },
				{ "RightHand.DisplayName", "RightHand" },
				{ "RightHand.Name", "RightHand" },
				{ "TwoHanded.DisplayName", "TwoHanded" },
				{ "TwoHanded.Name", "TwoHanded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GUIS,
				nullptr,
				"EEquipmentsSlot",
				"EEquipmentsSlot",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FItemInnerProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GUIS_API uint32 Get_Z_Construct_UScriptStruct_FItemInnerProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInnerProperty, Z_Construct_UPackage__Script_GUIS(), TEXT("ItemInnerProperty"), sizeof(FItemInnerProperty), Get_Z_Construct_UScriptStruct_FItemInnerProperty_Hash());
	}
	return Singleton;
}
template<> GUIS_API UScriptStruct* StaticStruct<FItemInnerProperty>()
{
	return FItemInnerProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemInnerProperty(FItemInnerProperty::StaticStruct, TEXT("/Script/GUIS"), TEXT("ItemInnerProperty"), false, nullptr, nullptr);
static struct FScriptStruct_GUIS_StaticRegisterNativesFItemInnerProperty
{
	FScriptStruct_GUIS_StaticRegisterNativesFItemInnerProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemInnerProperty")),new UScriptStruct::TCppStructOps<FItemInnerProperty>);
	}
} ScriptStruct_GUIS_StaticRegisterNativesFItemInnerProperty;
	struct Z_Construct_UScriptStruct_FItemInnerProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInnerProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInnerProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInnerProperty>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInnerProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
		nullptr,
		&NewStructOps,
		"ItemInnerProperty",
		sizeof(FItemInnerProperty),
		alignof(FItemInnerProperty),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInnerProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInnerProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemInnerProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemInnerProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GUIS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemInnerProperty"), sizeof(FItemInnerProperty), Get_Z_Construct_UScriptStruct_FItemInnerProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemInnerProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemInnerProperty_Hash() { return 3010509122U; }
	DEFINE_FUNCTION(UItemBase::execLoadData)
	{
		P_GET_TMAP(FString,FItemInnerProperty,Z_Param_PropMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadData(Z_Param_PropMap);
		P_NATIVE_END;
	}
	void UItemBase::StaticRegisterNativesUItemBase()
	{
		UClass* Class = UItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadData", &UItemBase::execLoadData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemBase_LoadData_Statics
	{
		struct ItemBase_eventLoadData_Parms
		{
			TMap<FString,FItemInnerProperty> PropMap;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemBase_eventLoadData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemBase_eventLoadData_Parms), &Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap = { "PropMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBase_eventLoadData_Parms, PropMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap_Key_KeyProp = { "PropMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap_ValueProp = { "PropMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FItemInnerProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_LoadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_LoadData_Statics::NewProp_PropMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_LoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "LoadData", nullptr, nullptr, sizeof(ItemBase_eventLoadData_Parms), Z_Construct_UFunction_UItemBase_LoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemBase_LoadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemBase_LoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemBase_LoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemBase_NoRegister()
	{
		return UItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GUIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBase_LoadData, "LoadData" }, // 1550560544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
		&UItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemBase, 1920848313);
	template<> GUIS_API UClass* StaticClass<UItemBase>()
	{
		return UItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemBase(Z_Construct_UClass_UItemBase, &UItemBase::StaticClass, TEXT("/Script/GUIS"), TEXT("UItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
