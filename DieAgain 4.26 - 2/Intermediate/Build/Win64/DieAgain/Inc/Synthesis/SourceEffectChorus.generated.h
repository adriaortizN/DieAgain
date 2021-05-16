// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectChorusSettings;
struct FSourceEffectChorusBaseSettings;
class USoundModulatorBase;
#ifdef SYNTHESIS_SourceEffectChorus_generated_h
#error "SourceEffectChorus.generated.h already included, missing '#pragma once' in SourceEffectChorus.h"
#endif
#define SYNTHESIS_SourceEffectChorus_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectChorusSettings>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectChorusBaseSettings>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSpreadModulator); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetDryModulator); \
	DECLARE_FUNCTION(execSetDry); \
	DECLARE_FUNCTION(execSetWetModulator); \
	DECLARE_FUNCTION(execSetWet); \
	DECLARE_FUNCTION(execSetFrequencyModulator); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetFeedbackModulator); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetDepthModulator); \
	DECLARE_FUNCTION(execSetDepth);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSpreadModulator); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetDryModulator); \
	DECLARE_FUNCTION(execSetDry); \
	DECLARE_FUNCTION(execSetWetModulator); \
	DECLARE_FUNCTION(execSetWet); \
	DECLARE_FUNCTION(execSetFrequencyModulator); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetFeedbackModulator); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetDepthModulator); \
	DECLARE_FUNCTION(execSetDepth);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectChorusPreset(); \
	friend struct Z_Construct_UClass_USourceEffectChorusPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectChorusPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectChorusPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUSourceEffectChorusPreset(); \
	friend struct Z_Construct_UClass_USourceEffectChorusPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectChorusPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectChorusPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectChorusPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectChorusPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectChorusPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectChorusPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectChorusPreset(USourceEffectChorusPreset&&); \
	NO_API USourceEffectChorusPreset(const USourceEffectChorusPreset&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectChorusPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectChorusPreset(USourceEffectChorusPreset&&); \
	NO_API USourceEffectChorusPreset(const USourceEffectChorusPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectChorusPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectChorusPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectChorusPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_131_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectChorusPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
