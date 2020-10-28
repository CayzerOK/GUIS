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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
