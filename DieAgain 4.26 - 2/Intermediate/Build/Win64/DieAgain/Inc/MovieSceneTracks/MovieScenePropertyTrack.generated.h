// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScenePropertyTrack_generated_h
#error "MovieScenePropertyTrack.generated.h already included, missing '#pragma once' in MovieScenePropertyTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScenePropertyTrack_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScenePropertyTrack, NO_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrack(); \
	friend struct Z_Construct_UClass_UMovieScenePropertyTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertyTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrack) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrack(); \
	friend struct Z_Construct_UClass_UMovieScenePropertyTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertyTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrack) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertyTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertyTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertyTrack(UMovieScenePropertyTrack&&); \
	NO_API UMovieScenePropertyTrack(const UMovieScenePropertyTrack&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertyTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertyTrack(UMovieScenePropertyTrack&&); \
	NO_API UMovieScenePropertyTrack(const UMovieScenePropertyTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertyTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SectionToKey() { return STRUCT_OFFSET(UMovieScenePropertyTrack, SectionToKey); } \
	FORCEINLINE static uint32 __PPO__PropertyBinding() { return STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyBinding); } \
	FORCEINLINE static uint32 __PPO__Sections() { return STRUCT_OFFSET(UMovieScenePropertyTrack, Sections); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_15_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScenePropertyTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScenePropertyTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
