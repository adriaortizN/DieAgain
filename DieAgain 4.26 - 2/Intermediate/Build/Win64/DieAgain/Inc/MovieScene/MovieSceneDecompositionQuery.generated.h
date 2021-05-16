// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneDecompositionQuery_generated_h
#error "MovieSceneDecompositionQuery.generated.h already included, missing '#pragma once' in MovieSceneDecompositionQuery.h"
#endif
#define MOVIESCENE_MovieSceneDecompositionQuery_generated_h

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFloatDecomposer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatDecomposer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFloatDecomposer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatDecomposer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFloatDecomposer(UMovieSceneFloatDecomposer&&); \
	NO_API UMovieSceneFloatDecomposer(const UMovieSceneFloatDecomposer&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFloatDecomposer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFloatDecomposer(UMovieSceneFloatDecomposer&&); \
	NO_API UMovieSceneFloatDecomposer(const UMovieSceneFloatDecomposer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFloatDecomposer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatDecomposer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatDecomposer)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneFloatDecomposer(); \
	friend struct Z_Construct_UClass_UMovieSceneFloatDecomposer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFloatDecomposer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFloatDecomposer)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneFloatDecomposer() {} \
public: \
	typedef UMovieSceneFloatDecomposer UClassType; \
	typedef IMovieSceneFloatDecomposer ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneFloatDecomposer() {} \
public: \
	typedef UMovieSceneFloatDecomposer UClassType; \
	typedef IMovieSceneFloatDecomposer ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_111_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_115_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneFloatDecomposer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
