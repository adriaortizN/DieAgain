// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
class UGameInstance;
class UObject;
struct FDialogueNode;
#ifdef DIALOGUEPLUGIN_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define DIALOGUEPLUGIN_Dialogue_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueNode_Statics; \
	DIALOGUEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DIALOGUEPLUGIN_API UScriptStruct* StaticStruct<struct FDialogueNode>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS \
	virtual void RecieveEventTriggered_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execRecieveEventTriggered) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecieveEventTriggered_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RecieveEventTriggered_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execRecieveEventTriggered) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecieveEventTriggered_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS \
	struct DialogueEvents_eventRecieveEventTriggered_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* NPCActor; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend struct Z_Construct_UClass_UDialogueEvents_Statics; \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend struct Z_Construct_UClass_UDialogueEvents_Statics; \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueEvents(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEvents(UDialogueEvents&&); \
	NO_API UDialogueEvents(const UDialogueEvents&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEvents(UDialogueEvents&&); \
	NO_API UDialogueEvents(const UDialogueEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEvents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueEvents)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_9_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueEvents>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet_Internal) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Internal(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConditionMet) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet_Internal) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Internal(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConditionMet) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_EVENT_PARMS \
	struct DialogueConditions_eventIsConditionMet_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* NPCActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DialogueConditions_eventIsConditionMet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend struct Z_Construct_UClass_UDialogueConditions_Statics; \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend struct Z_Construct_UClass_UDialogueConditions_Statics; \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueConditions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueConditions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueConditions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueConditions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueConditions(UDialogueConditions&&); \
	NO_API UDialogueConditions(const UDialogueConditions&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueConditions(UDialogueConditions&&); \
	NO_API UDialogueConditions(const UDialogueConditions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueConditions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueConditions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueConditions)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_25_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueConditions>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrCondition(); \
	friend struct Z_Construct_UClass_UOrCondition_Statics; \
public: \
	DECLARE_CLASS(UOrCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UOrCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUOrCondition(); \
	friend struct Z_Construct_UClass_UOrCondition_Statics; \
public: \
	DECLARE_CLASS(UOrCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UOrCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrCondition(UOrCondition&&); \
	NO_API UOrCondition(const UOrCondition&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrCondition(UOrCondition&&); \
	NO_API UOrCondition(const UOrCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_43_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UOrCondition>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndCondition(); \
	friend struct Z_Construct_UClass_UAndCondition_Statics; \
public: \
	DECLARE_CLASS(UAndCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAndCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUAndCondition(); \
	friend struct Z_Construct_UClass_UAndCondition_Statics; \
public: \
	DECLARE_CLASS(UAndCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAndCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndCondition(UAndCondition&&); \
	NO_API UAndCondition(const UAndCondition&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndCondition(UAndCondition&&); \
	NO_API UAndCondition(const UAndCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndCondition)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_66_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UAndCondition>();

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanOuter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanOuter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPersistentOuter) \
	{ \
		P_GET_OBJECT(UGameInstance,Z_Param_inGameInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPersistentOuter(Z_Param_inGameInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDialogue::CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNodes) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDialogueNode>*)Z_Param__Result=P_THIS->GetNextNodes(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDialogueNode*)Z_Param__Result=P_THIS->GetFirstNode(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanOuter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanOuter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPersistentOuter) \
	{ \
		P_GET_OBJECT(UGameInstance,Z_Param_inGameInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPersistentOuter(Z_Param_inGameInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDialogue::CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNodes) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDialogueNode>*)Z_Param__Result=P_THIS->GetNextNodes(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDialogueNode*)Z_Param__Result=P_THIS->GetFirstNode(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_123_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
