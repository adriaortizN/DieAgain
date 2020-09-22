// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDialogueNode;
#ifdef DIALOGUEPLUGIN_DialogueUserWidget_generated_h
#error "DialogueUserWidget.generated.h already included, missing '#pragma once' in DialogueUserWidget.h"
#endif
#define DIALOGUEPLUGIN_DialogueUserWidget_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS \
	virtual void RunEventsForNode_Implementation(FDialogueNode Node); \
	virtual bool IsConditionsMetForNode_Implementation(FDialogueNode Node); \
 \
	DECLARE_FUNCTION(execFindVarStrings) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_inText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->FindVarStrings(Z_Param_inText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunStringReplacer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_originalString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_resultString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunStringReplacer(Z_Param_originalString,Z_Param_Out_resultString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunEventsForNode) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunEventsForNode_Implementation(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConditionsMetForNode) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionsMetForNode_Implementation(Z_Param_Node); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RunEventsForNode_Implementation(FDialogueNode Node); \
	virtual bool IsConditionsMetForNode_Implementation(FDialogueNode Node); \
 \
	DECLARE_FUNCTION(execFindVarStrings) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_inText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->FindVarStrings(Z_Param_inText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunStringReplacer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_originalString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_resultString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RunStringReplacer(Z_Param_originalString,Z_Param_Out_resultString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunEventsForNode) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunEventsForNode_Implementation(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConditionsMetForNode) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionsMetForNode_Implementation(Z_Param_Node); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_EVENT_PARMS \
	struct DialogueUserWidget_eventIsConditionsMetForNode_Parms \
	{ \
		FDialogueNode Node; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DialogueUserWidget_eventIsConditionsMetForNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DialogueUserWidget_eventReplaceVarStrings_Parms \
	{ \
		FText InText; \
		FText ReturnValue; \
	}; \
	struct DialogueUserWidget_eventRunEventsForNode_Parms \
	{ \
		FDialogueNode Node; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueUserWidget(UDialogueUserWidget&&); \
	NO_API UDialogueUserWidget(const UDialogueUserWidget&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueUserWidget(UDialogueUserWidget&&); \
	NO_API UDialogueUserWidget(const UDialogueUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUserWidget)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_13_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
