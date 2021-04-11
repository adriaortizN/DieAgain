// Copyright Epic Games, Inc. All Rights Reserved.
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

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueNode_Statics; \
	DIALOGUEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DIALOGUEPLUGIN_API UScriptStruct* StaticStruct<struct FDialogueNode>();

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_SPARSE_DATA
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS \
	virtual void RecieveEventTriggered_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execRecieveEventTriggered);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RecieveEventTriggered_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execRecieveEventTriggered);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS \
	struct DialogueEvents_eventRecieveEventTriggered_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* NPCActor; \
	};


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend struct Z_Construct_UClass_UDialogueEvents_Statics; \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend struct Z_Construct_UClass_UDialogueEvents_Statics; \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEvents(UDialogueEvents&&); \
	NO_API UDialogueEvents(const UDialogueEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEvents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueEvents)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_9_PROLOG \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueEvents>();

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_SPARSE_DATA
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet_Internal); \
	DECLARE_FUNCTION(execIsConditionMet);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet_Internal); \
	DECLARE_FUNCTION(execIsConditionMet);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_EVENT_PARMS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend struct Z_Construct_UClass_UDialogueConditions_Statics; \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend struct Z_Construct_UClass_UDialogueConditions_Statics; \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_STANDARD_CONSTRUCTORS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueConditions(UDialogueConditions&&); \
	NO_API UDialogueConditions(const UDialogueConditions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueConditions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueConditions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueConditions)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_25_PROLOG \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_EVENT_PARMS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_CALLBACK_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_INCLASS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogueConditions>();

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_SPARSE_DATA
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrCondition(); \
	friend struct Z_Construct_UClass_UOrCondition_Statics; \
public: \
	DECLARE_CLASS(UOrCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UOrCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUOrCondition(); \
	friend struct Z_Construct_UClass_UOrCondition_Statics; \
public: \
	DECLARE_CLASS(UOrCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UOrCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_STANDARD_CONSTRUCTORS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrCondition(UOrCondition&&); \
	NO_API UOrCondition(const UOrCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_43_PROLOG
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_INCLASS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UOrCondition>();

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_SPARSE_DATA
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndCondition(); \
	friend struct Z_Construct_UClass_UAndCondition_Statics; \
public: \
	DECLARE_CLASS(UAndCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAndCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUAndCondition(); \
	friend struct Z_Construct_UClass_UAndCondition_Statics; \
public: \
	DECLARE_CLASS(UAndCondition, UDialogueConditions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UAndCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_STANDARD_CONSTRUCTORS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndCondition(UAndCondition&&); \
	NO_API UAndCondition(const UAndCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndCondition)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_66_PROLOG
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_INCLASS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UAndCondition>();

#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_SPARSE_DATA
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanOuter); \
	DECLARE_FUNCTION(execAssignPersistentOuter); \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execGetNextNodes); \
	DECLARE_FUNCTION(execGetFirstNode);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanOuter); \
	DECLARE_FUNCTION(execAssignPersistentOuter); \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execGetNextNodes); \
	DECLARE_FUNCTION(execGetFirstNode);


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_STANDARD_CONSTRUCTORS \
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


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue)


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_129_PROLOG
#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_RPC_WRAPPERS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_INCLASS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_SPARSE_DATA \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_INCLASS_NO_PURE_DECLS \
	DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEPLUGIN_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DieAgain_4_26_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
