// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieScene_generated_h
#error "MovieScene.generated.h already included, missing '#pragma once' in MovieScene.h"
#endif
#define MOVIESCENE_MovieScene_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Sections() { return STRUCT_OFFSET(FMovieSceneSectionGroup, Sections); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSectionGroup>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectBindingIDs>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackLabels>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEditorData>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneMarkedFrame>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTimecodeSource>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneExpansionState>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroup(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroup)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroup(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroup)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneNodeGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneNodeGroup(UMovieSceneNodeGroup&&); \
	NO_API UMovieSceneNodeGroup(const UMovieSceneNodeGroup&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneNodeGroup(UMovieSceneNodeGroup&&); \
	NO_API UMovieSceneNodeGroup(const UMovieSceneNodeGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneNodeGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroup)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_260_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneNodeGroup>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroupCollection(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroupCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroupCollection)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroupCollection(); \
	friend struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNodeGroupCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroupCollection)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroupCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneNodeGroupCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroupCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneNodeGroupCollection(UMovieSceneNodeGroupCollection&&); \
	NO_API UMovieSceneNodeGroupCollection(const UMovieSceneNodeGroupCollection&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneNodeGroupCollection(UMovieSceneNodeGroupCollection&&); \
	NO_API UMovieSceneNodeGroupCollection(const UMovieSceneNodeGroupCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneNodeGroupCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroupCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroupCollection)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_319_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneNodeGroupCollection>();

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene, NO_API)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend struct Z_Construct_UClass_UMovieScene_Statics; \
public: \
	DECLARE_CLASS(UMovieScene, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScene) \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend struct Z_Construct_UClass_UMovieScene_Statics; \
public: \
	DECLARE_CLASS(UMovieScene, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScene) \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScene(UMovieScene&&); \
	NO_API UMovieScene(const UMovieScene&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScene(UMovieScene&&); \
	NO_API UMovieScene(const UMovieScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spawnables() { return STRUCT_OFFSET(UMovieScene, Spawnables); } \
	FORCEINLINE static uint32 __PPO__Possessables() { return STRUCT_OFFSET(UMovieScene, Possessables); } \
	FORCEINLINE static uint32 __PPO__ObjectBindings() { return STRUCT_OFFSET(UMovieScene, ObjectBindings); } \
	FORCEINLINE static uint32 __PPO__BindingGroups() { return STRUCT_OFFSET(UMovieScene, BindingGroups); } \
	FORCEINLINE static uint32 __PPO__MasterTracks() { return STRUCT_OFFSET(UMovieScene, MasterTracks); } \
	FORCEINLINE static uint32 __PPO__CameraCutTrack() { return STRUCT_OFFSET(UMovieScene, CameraCutTrack); } \
	FORCEINLINE static uint32 __PPO__SelectionRange() { return STRUCT_OFFSET(UMovieScene, SelectionRange); } \
	FORCEINLINE static uint32 __PPO__PlaybackRange() { return STRUCT_OFFSET(UMovieScene, PlaybackRange); } \
	FORCEINLINE static uint32 __PPO__TickResolution() { return STRUCT_OFFSET(UMovieScene, TickResolution); } \
	FORCEINLINE static uint32 __PPO__DisplayRate() { return STRUCT_OFFSET(UMovieScene, DisplayRate); } \
	FORCEINLINE static uint32 __PPO__EvaluationType() { return STRUCT_OFFSET(UMovieScene, EvaluationType); } \
	FORCEINLINE static uint32 __PPO__ClockSource() { return STRUCT_OFFSET(UMovieScene, ClockSource); } \
	FORCEINLINE static uint32 __PPO__CustomClockSourcePath() { return STRUCT_OFFSET(UMovieScene, CustomClockSourcePath); } \
	FORCEINLINE static uint32 __PPO__MarkedFrames() { return STRUCT_OFFSET(UMovieScene, MarkedFrames); }


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_371_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_375_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
