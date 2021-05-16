// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENE_MovieSceneSequence_generated_h
#error "MovieSceneSequence.generated.h already included, missing '#pragma once' in MovieSceneSequence.h"
#endif
#define MOVIESCENE_MovieSceneSequence_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindBindingsByTag); \
	DECLARE_FUNCTION(execFindBindingByTag);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindBindingsByTag); \
	DECLARE_FUNCTION(execFindBindingByTag);


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence, MOVIESCENE_API)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend struct Z_Construct_UClass_UMovieSceneSequence_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequence, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend struct Z_Construct_UClass_UMovieSceneSequence_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequence, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(UMovieSceneSequence&&); \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(UMovieSceneSequence&&); \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompiledData() { return STRUCT_OFFSET(UMovieSceneSequence, CompiledData); } \
	FORCEINLINE static uint32 __PPO__bParentContextsAreSignificant() { return STRUCT_OFFSET(UMovieSceneSequence, bParentContextsAreSignificant); } \
	FORCEINLINE static uint32 __PPO__bPlayableDirectly() { return STRUCT_OFFSET(UMovieSceneSequence, bPlayableDirectly); } \
	FORCEINLINE static uint32 __PPO__SequenceFlags() { return STRUCT_OFFSET(UMovieSceneSequence, SequenceFlags); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_34_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
