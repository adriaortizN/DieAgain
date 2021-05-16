// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReflectionCaptureComponent_generated_h
#error "ReflectionCaptureComponent.generated.h already included, missing '#pragma once' in ReflectionCaptureComponent.h"
#endif
#define ENGINE_ReflectionCaptureComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedEncodedHDRCubemap() { return STRUCT_OFFSET(UReflectionCaptureComponent, CachedEncodedHDRCubemap); }


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReflectionCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReflectionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h


#define FOREACH_ENUM_EMOBILEREFLECTIONCOMPRESSION(op) \
	op(EMobileReflectionCompression::Default) \
	op(EMobileReflectionCompression::On) \
	op(EMobileReflectionCompression::Off) 

enum class EMobileReflectionCompression : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMobileReflectionCompression>();

#define FOREACH_ENUM_EREFLECTIONSOURCETYPE(op) \
	op(EReflectionSourceType::CapturedScene) \
	op(EReflectionSourceType::SpecifiedCubemap) 

enum class EReflectionSourceType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
