// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStruct;
class UItemBase;
#ifdef GUIS_ItemMaster_generated_h
#error "ItemMaster.generated.h already included, missing '#pragma once' in ItemMaster.h"
#endif
#define GUIS_ItemMaster_generated_h

#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FITemRow_Statics; \
	GUIS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GUIS_API UScriptStruct* StaticStruct<struct FITemRow>();

#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_SPARSE_DATA
#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_RPC_WRAPPERS
#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemMaster(); \
	friend struct Z_Construct_UClass_UItemMaster_Statics; \
public: \
	DECLARE_CLASS(UItemMaster, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UItemMaster)


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUItemMaster(); \
	friend struct Z_Construct_UClass_UItemMaster_Statics; \
public: \
	DECLARE_CLASS(UItemMaster, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UItemMaster)


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemMaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemMaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemMaster(UItemMaster&&); \
	NO_API UItemMaster(const UItemMaster&); \
public:


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemMaster() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemMaster(UItemMaster&&); \
	NO_API UItemMaster(const UItemMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemMaster)


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemPalette() { return STRUCT_OFFSET(UItemMaster, ItemPalette); }


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_27_PROLOG
#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_RPC_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_INCLASS \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUIS_API UClass* StaticClass<class UItemMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_GUIS_Source_GUIS_Public_ItemMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
