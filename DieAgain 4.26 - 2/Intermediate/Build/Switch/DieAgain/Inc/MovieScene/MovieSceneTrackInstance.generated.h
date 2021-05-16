// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTrackInstance_generated_h
#error "MovieSceneTrackInstance.generated.h already included, missing '#pragma once' in MovieSceneTrackInstance.h"
#endif
#define MOVIESCENE_MovieSceneTrackInstance_generated_h

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackInstanceInput>();

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstance(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstance)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstance(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstance)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTrackInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTrackInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTrackInstance(UMovieSceneTrackInstance&&); \
	NO_API UMovieSceneTrackInstance(const UMovieSceneTrackInstance&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTrackInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTrackInstance(UMovieSceneTrackInstance&&); \
	NO_API UMovieSceneTrackInstance(const UMovieSceneTrackInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTrackInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstance)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimatedObject() { return STRUCT_OFFSET(UMovieSceneTrackInstance, AnimatedObject); } \
	FORCEINLINE static uint32 __PPO__bIsMasterTrackInstance() { return STRUCT_OFFSET(UMovieSceneTrackInstance, bIsMasterTrackInstance); } \
	FORCEINLINE static uint32 __PPO__Linker() { return STRUCT_OFFSET(UMovieSceneTrackInstance, Linker); } \
	FORCEINLINE static uint32 __PPO__Inputs() { return STRUCT_OFFSET(UMovieSceneTrackInstance, Inputs); }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_70_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_74_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrackInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
