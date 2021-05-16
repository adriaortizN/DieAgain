// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARComponent;
struct FGuid;
#ifdef AUGMENTEDREALITY_ARActor_generated_h
#error "ARActor.generated.h already included, missing '#pragma once' in ARActor.h"
#endif
#define AUGMENTEDREALITY_ARActor_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FTrackedGeometryGroup>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddARComponent);


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddARComponent);


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARActor(); \
	friend struct Z_Construct_UClass_AARActor_Statics; \
public: \
	DECLARE_CLASS(AARActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARActor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAARActor(); \
	friend struct Z_Construct_UClass_AARActor_Statics; \
public: \
	DECLARE_CLASS(AARActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARActor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARActor(AARActor&&); \
	NO_API AARActor(const AARActor&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARActor(AARActor&&); \
	NO_API AARActor(const AARActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARActor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_12_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
