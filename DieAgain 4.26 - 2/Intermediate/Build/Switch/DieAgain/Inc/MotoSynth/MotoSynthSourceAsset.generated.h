// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTOSYNTH_MotoSynthSourceAsset_generated_h
#error "MotoSynthSourceAsset.generated.h already included, missing '#pragma once' in MotoSynthSourceAsset.h"
#endif
#define MOTOSYNTH_MotoSynthSourceAsset_generated_h

#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrainTableEntry_Statics; \
	MOTOSYNTH_API static class UScriptStruct* StaticStruct();


template<> MOTOSYNTH_API UScriptStruct* StaticStruct<struct FGrainTableEntry>();

#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_SPARSE_DATA
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_RPC_WRAPPERS
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopToneMatch); \
	DECLARE_FUNCTION(execPlayToneMatch); \
	DECLARE_FUNCTION(execPerformGrainTableAnalysis);


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopToneMatch); \
	DECLARE_FUNCTION(execPlayToneMatch); \
	DECLARE_FUNCTION(execPerformGrainTableAnalysis);


#else
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotoSynthSource(); \
	friend struct Z_Construct_UClass_UMotoSynthSource_Statics; \
public: \
	DECLARE_CLASS(UMotoSynthSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(UMotoSynthSource)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUMotoSynthSource(); \
	friend struct Z_Construct_UClass_UMotoSynthSource_Statics; \
public: \
	DECLARE_CLASS(UMotoSynthSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotoSynth"), NO_API) \
	DECLARE_SERIALIZER(UMotoSynthSource)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotoSynthSource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotoSynthSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotoSynthSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotoSynthSource(UMotoSynthSource&&); \
	NO_API UMotoSynthSource(const UMotoSynthSource&); \
public:


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotoSynthSource(UMotoSynthSource&&); \
	NO_API UMotoSynthSource(const UMotoSynthSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotoSynthSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotoSynthSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotoSynthSource)


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SourceData_DEPRECATED() { return STRUCT_OFFSET(UMotoSynthSource, SourceData_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SourceDataPCM() { return STRUCT_OFFSET(UMotoSynthSource, SourceDataPCM); } \
	FORCEINLINE static uint32 __PPO__SourceSampleRate() { return STRUCT_OFFSET(UMotoSynthSource, SourceSampleRate); } \
	FORCEINLINE static uint32 __PPO__GrainTable() { return STRUCT_OFFSET(UMotoSynthSource, GrainTable); }


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_82_PROLOG
#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_SPARSE_DATA \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_RPC_WRAPPERS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_INCLASS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_SPARSE_DATA \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTOSYNTH_API UClass* StaticClass<class UMotoSynthSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
