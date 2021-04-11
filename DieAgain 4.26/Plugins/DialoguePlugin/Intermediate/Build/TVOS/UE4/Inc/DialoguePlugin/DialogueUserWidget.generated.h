// Copyright Epic Games, Inc. All Rights Reserved.
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

#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_SPARSE_DATA
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS \
	virtual void RunEventsForNode_Implementation(FDialogueNode Node); \
	virtual bool IsConditionsMetForNode_Implementation(FDialogueNode Node); \
 \
	DECLARE_FUNCTION(execFindVarStrings); \
	DECLARE_FUNCTION(execRunStringReplacer); \
	DECLARE_FUNCTION(execRunEventsForNode); \
	DECLARE_FUNCTION(execIsConditionsMetForNode);


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RunEventsForNode_Implementation(FDialogueNode Node); \
	virtual bool IsConditionsMetForNode_Implementation(FDialogueNode Node); \
 \
	DECLARE_FUNCTION(execFindVarStrings); \
	DECLARE_FUNCTION(execRunStringReplacer); \
	DECLARE_FUNCTION(execRunEventsForNode); \
	DECLARE_FUNCTION(execIsConditionsMetForNode);


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_EVENT_PARMS \
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


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_STANDARD_CONSTRUCTORS \
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


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_ENHANCED_CONSTRUCTORS \
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


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_13_PROLOG \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_EVENT_PARMS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_SPARSE_DATA \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_SPARSE_DATA \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_DialogueUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
