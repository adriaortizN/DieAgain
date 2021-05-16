// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Scene_generated_h
#error "Scene.generated.h already included, missing '#pragma once' in Scene.h"
#endif
#define ENGINE_Scene_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_678_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostProcessSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPostProcessSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_657_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedBlendables_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWeightedBlendables>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_627_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedBlendable_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWeightedBlendable>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_526_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraExposureSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraExposureSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_500_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_469_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensImperfectionSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_442_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensBloomSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_392_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConvolutionBloomSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGaussianSumBloomSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilmStockSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFilmStockSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorGradingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FColorGradingSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FColorGradePerRangeSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScene(); \
	friend struct Z_Construct_UClass_UScene_Statics; \
public: \
	DECLARE_CLASS(UScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScene)


#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_INCLASS \
private: \
	static void StaticRegisterNativesUScene(); \
	friend struct Z_Construct_UClass_UScene_Statics; \
public: \
	DECLARE_CLASS(UScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScene)


#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScene(UScene&&); \
	NO_API UScene(const UScene&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScene(UScene&&); \
	NO_API UScene(const UScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScene)


#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2086_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2089_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Scene."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Scene_h


#define FOREACH_ENUM_EMOBILEPIXELPROJECTEDREFLECTIONQUALITY(op) \
	op(EMobilePixelProjectedReflectionQuality::Disabled) \
	op(EMobilePixelProjectedReflectionQuality::BestPerformance) \
	op(EMobilePixelProjectedReflectionQuality::BetterQuality) \
	op(EMobilePixelProjectedReflectionQuality::BestQuality) 
#define FOREACH_ENUM_EMOBILEPLANARREFLECTIONMODE(op) \
	op(EMobilePlanarReflectionMode::Usual) \
	op(EMobilePlanarReflectionMode::MobilePPRExclusive) \
	op(EMobilePlanarReflectionMode::MobilePPR) 
#define FOREACH_ENUM_EREFLECTEDANDREFRACTEDRAYTRACEDSHADOWS(op) \
	op(EReflectedAndRefractedRayTracedShadows::Disabled) \
	op(EReflectedAndRefractedRayTracedShadows::Hard_shadows) \
	op(EReflectedAndRefractedRayTracedShadows::Area_shadows) 

enum class EReflectedAndRefractedRayTracedShadows : uint8;
template<> ENGINE_API UEnum* StaticEnum<EReflectedAndRefractedRayTracedShadows>();

#define FOREACH_ENUM_ERAYTRACINGGLOBALILLUMINATIONTYPE(op) \
	op(ERayTracingGlobalIlluminationType::Disabled) \
	op(ERayTracingGlobalIlluminationType::BruteForce) \
	op(ERayTracingGlobalIlluminationType::FinalGather) 

enum class ERayTracingGlobalIlluminationType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERayTracingGlobalIlluminationType>();

#define FOREACH_ENUM_ETRANSLUCENCYTYPE(op) \
	op(ETranslucencyType::Raster) \
	op(ETranslucencyType::RayTracing) 

enum class ETranslucencyType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETranslucencyType>();

#define FOREACH_ENUM_EREFLECTIONSTYPE(op) \
	op(EReflectionsType::ScreenSpace) \
	op(EReflectionsType::RayTracing) 

enum class EReflectionsType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EReflectionsType>();

#define FOREACH_ENUM_ELIGHTUNITS(op) \
	op(ELightUnits::Unitless) \
	op(ELightUnits::Candelas) \
	op(ELightUnits::Lumens) 

enum class ELightUnits : uint8;
template<> ENGINE_API UEnum* StaticEnum<ELightUnits>();

#define FOREACH_ENUM_EBLOOMMETHOD(op) \
	op(BM_SOG) \
	op(BM_FFT) 
#define FOREACH_ENUM_EAUTOEXPOSUREMETHOD(op) \
	op(AEM_Histogram) \
	op(AEM_Basic) \
	op(AEM_Manual) 
#define FOREACH_ENUM_EANTIALIASINGMETHOD(op) \
	op(AAM_None) \
	op(AAM_FXAA) \
	op(AAM_TemporalAA) \
	op(AAM_MSAA) 
#define FOREACH_ENUM_EDEPTHOFFIELDMETHOD(op) \
	op(DOFM_BokehDOF) \
	op(DOFM_Gaussian) \
	op(DOFM_CircleDOF) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
