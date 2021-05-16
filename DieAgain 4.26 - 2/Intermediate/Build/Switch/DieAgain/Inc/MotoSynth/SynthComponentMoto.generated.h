// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMotoSynthRuntimeSettings;
#ifdef MOTOSYNTH_SynthComponentMoto_generated_h
#error "SynthComponentMoto.generated.h already included, missing '#pragma once' in SynthComponentMoto.h"
#endif
#define MOTOSYNTH_SynthComponentMoto_generated_h

#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_SPARSE_DATA
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetRPMRange); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetRPM);


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetRPMRange); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetRPM);


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponentMoto(); \
	friend struct Z_Construct_UClass_USynthComponentMoto_Statics; \
public: \
	DECLARE_CLASS(USynthComponentMoto, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(USynthComponentMoto)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSynthComponentMoto(); \
	friend struct Z_Construct_UClass_USynthComponentMoto_Statics; \
public: \
	DECLARE_CLASS(USynthComponentMoto, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(USynthComponentMoto)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthComponentMoto(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMoto) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponentMoto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMoto); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponentMoto(USynthComponentMoto&&); \
	NO_API USynthComponentMoto(const USynthComponentMoto&); \
public:


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponentMoto(USynthComponentMoto&&); \
	NO_API USynthComponentMoto(const USynthComponentMoto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponentMoto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMoto); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMoto)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_11_PROLOG
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_SPARSE_DATA \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_RPC_WRAPPERS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_INCLASS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_SPARSE_DATA \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTOSYNTH_API UClass* StaticClass<class USynthComponentMoto>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
