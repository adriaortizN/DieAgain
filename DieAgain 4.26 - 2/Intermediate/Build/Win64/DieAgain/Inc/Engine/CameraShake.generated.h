// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMinimalViewInfo;
#ifdef ENGINE_CameraShake_generated_h
#error "CameraShake.generated.h already included, missing '#pragma once' in CameraShake.h"
#endif
#define ENGINE_CameraShake_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVOscillator_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVOscillator>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROscillator_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FROscillator>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFOscillator_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFOscillator>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_RPC_WRAPPERS \
	virtual bool ReceiveIsFinished_Implementation() const; \
 \
	DECLARE_FUNCTION(execReceiveIsFinished);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ReceiveIsFinished_Implementation() const; \
 \
	DECLARE_FUNCTION(execReceiveIsFinished);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_EVENT_PARMS \
	struct MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms \
	{ \
		float DeltaTime; \
		float Alpha; \
		FMinimalViewInfo POV; \
		FMinimalViewInfo ModifiedPOV; \
	}; \
	struct MatineeCameraShake_eventReceiveIsFinished_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MatineeCameraShake_eventReceiveIsFinished_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MatineeCameraShake_eventReceivePlayShake_Parms \
	{ \
		float Scale; \
	}; \
	struct MatineeCameraShake_eventReceiveStopShake_Parms \
	{ \
		bool bImmediately; \
	};


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatineeCameraShake(); \
	friend struct Z_Construct_UClass_UMatineeCameraShake_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShake)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUMatineeCameraShake(); \
	friend struct Z_Construct_UClass_UMatineeCameraShake_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShake)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShake(UMatineeCameraShake&&); \
	NO_API UMatineeCameraShake(const UMatineeCameraShake&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShake(UMatineeCameraShake&&); \
	NO_API UMatineeCameraShake(const UMatineeCameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShake)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_119_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h_122_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeCameraShake."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMatineeCameraShake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraShake_h


#define FOREACH_ENUM_EINITIALOSCILLATOROFFSET(op) \
	op(EOO_OffsetRandom) \
	op(EOO_OffsetZero) 
#define FOREACH_ENUM_EOSCILLATORWAVEFORM(op) \
	op(EOscillatorWaveform::SineWave) \
	op(EOscillatorWaveform::PerlinNoise) 

enum class EOscillatorWaveform : uint8;
template<> ENGINE_API UEnum* StaticEnum<EOscillatorWaveform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
