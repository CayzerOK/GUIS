// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
class UStruct;
#ifdef GUIS_InventorySubsystem_generated_h
#error "InventorySubsystem.generated.h already included, missing '#pragma once' in InventorySubsystem.h"
#endif
#define GUIS_InventorySubsystem_generated_h

#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_SPARSE_DATA
#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseItemCount); \
	DECLARE_FUNCTION(execIncreaseItemCount);


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseItemCount); \
	DECLARE_FUNCTION(execIncreaseItemCount);


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySubsystem(); \
	friend struct Z_Construct_UClass_UInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UInventorySubsystem)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventorySubsystem(); \
	friend struct Z_Construct_UClass_UInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UInventorySubsystem)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySubsystem(UInventorySubsystem&&); \
	NO_API UInventorySubsystem(const UInventorySubsystem&); \
public:


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySubsystem(UInventorySubsystem&&); \
	NO_API UInventorySubsystem(const UInventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventorySubsystem)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemMap() { return STRUCT_OFFSET(UInventorySubsystem, ItemMap); }


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_12_PROLOG
#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_RPC_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_INCLASS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUIS_API UClass* StaticClass<class UInventorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_GUIS_Source_GUIS_Public_InventorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
