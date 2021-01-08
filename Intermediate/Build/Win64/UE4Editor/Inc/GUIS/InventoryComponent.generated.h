// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
class UInventoryComponent;
struct FItemSlotInfo;
#ifdef GUIS_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define GUIS_InventoryComponent_generated_h

#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemSlotInfo_Statics; \
	GUIS_API static class UScriptStruct* StaticStruct();


template<> GUIS_API UScriptStruct* StaticStruct<struct FItemSlotInfo>();

#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemSlot_Statics; \
	GUIS_API static class UScriptStruct* StaticStruct();


template<> GUIS_API UScriptStruct* StaticStruct<struct FItemSlot>();

#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_SPARSE_DATA
#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_RPC_WRAPPERS \
	virtual void ItemsRemoved_Implementation(UItemBase* Item, int32 Amount); \
	virtual void ItemsAdded_Implementation(UItemBase* Item, int32 Amount); \
	virtual bool CanAccept_Implementation(UItemBase* Item, int32 Amount); \
 \
	DECLARE_FUNCTION(execItemsRemoved); \
	DECLARE_FUNCTION(execItemsAdded); \
	DECLARE_FUNCTION(execCanAccept); \
	DECLARE_FUNCTION(execIsContain); \
	DECLARE_FUNCTION(execTransactTo); \
	DECLARE_FUNCTION(execRemoveItems); \
	DECLARE_FUNCTION(execAddItems); \
	DECLARE_FUNCTION(execGetContent);


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ItemsRemoved_Implementation(UItemBase* Item, int32 Amount); \
	virtual void ItemsAdded_Implementation(UItemBase* Item, int32 Amount); \
	virtual bool CanAccept_Implementation(UItemBase* Item, int32 Amount); \
 \
	DECLARE_FUNCTION(execItemsRemoved); \
	DECLARE_FUNCTION(execItemsAdded); \
	DECLARE_FUNCTION(execCanAccept); \
	DECLARE_FUNCTION(execIsContain); \
	DECLARE_FUNCTION(execTransactTo); \
	DECLARE_FUNCTION(execRemoveItems); \
	DECLARE_FUNCTION(execAddItems); \
	DECLARE_FUNCTION(execGetContent);


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_EVENT_PARMS \
	struct InventoryComponent_eventCanAccept_Parms \
	{ \
		UItemBase* Item; \
		int32 Amount; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InventoryComponent_eventCanAccept_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InventoryComponent_eventItemsAdded_Parms \
	{ \
		UItemBase* Item; \
		int32 Amount; \
	}; \
	struct InventoryComponent_eventItemsRemoved_Parms \
	{ \
		UItemBase* Item; \
		int32 Amount; \
	};


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_CALLBACK_WRAPPERS
#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GUIS"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InnerContent() { return STRUCT_OFFSET(UInventoryComponent, InnerContent); } \
	FORCEINLINE static uint32 __PPO__InventorySubsystem() { return STRUCT_OFFSET(UInventoryComponent, InventorySubsystem); }


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_43_PROLOG \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_EVENT_PARMS


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_RPC_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_CALLBACK_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_INCLASS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_SPARSE_DATA \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_CALLBACK_WRAPPERS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUIS_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_GUIS_Source_GUIS_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
