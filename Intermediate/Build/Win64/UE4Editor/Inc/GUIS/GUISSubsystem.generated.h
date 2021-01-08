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
#ifdef GUIS_GUISSubsystem_generated_h
#error "GUISSubsystem.generated.h already included, missing '#pragma once' in GUISSubsystem.h"
#endif
#define GUIS_GUISSubsystem_generated_h

#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGUISSaveData_Statics; \
	GUIS_API static class UScriptStruct* StaticStruct();


template<> GUIS_API UScriptStruct* StaticStruct<struct FGUISSaveData>();

#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemSaveData_Statics; \
	GUIS_API static class UScriptStruct* StaticStruct();


template<> GUIS_API UScriptStruct* StaticStruct<struct FItemSaveData>();

#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_SPARSE_DATA
#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execDecreaseItemCount); \
	DECLARE_FUNCTION(execIncreaseItemCount); \
	DECLARE_FUNCTION(execLoadData); \
	DECLARE_FUNCTION(execSaveData);


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execDecreaseItemCount); \
	DECLARE_FUNCTION(execIncreaseItemCount); \
	DECLARE_FUNCTION(execLoadData); \
	DECLARE_FUNCTION(execSaveData);


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGUIS(); \
	friend struct Z_Construct_UClass_UGUIS_Statics; \
public: \
	DECLARE_CLASS(UGUIS, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UGUIS)


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUGUIS(); \
	friend struct Z_Construct_UClass_UGUIS_Statics; \
public: \
	DECLARE_CLASS(UGUIS, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UGUIS)


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGUIS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGUIS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGUIS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGUIS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGUIS(UGUIS&&); \
	NO_API UGUIS(const UGUIS&); \
public:


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGUIS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGUIS(UGUIS&&); \
	NO_API UGUIS(const UGUIS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGUIS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGUIS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGUIS)


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemMap() { return STRUCT_OFFSET(UGUIS, ItemMap); }


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_54_PROLOG
#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_RPC_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_INCLASS \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUIS_API UClass* StaticClass<class UGUIS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_GUIS_Source_GUIS_Public_GUISSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
