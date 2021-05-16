// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
class UObject;
struct FRotator;
struct FVector;
struct FXRGestureConfig;
enum class EControllerHand : uint8;
struct FXRMotionControllerData;
struct FXRHMDData;
struct FXRDeviceId;
enum class EXRTrackedDeviceType : uint8;
struct FVector2D;
class UTexture;
enum class ESpectatorScreenMode : uint8;
struct FTransform;
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h
#error "HeadMountedDisplayFunctionLibrary.generated.h already included, missing '#pragma once' in HeadMountedDisplayFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_14_DELEGATE \
struct _Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms \
{ \
	float Value; \
	FTimespan Time; \
}; \
static inline void FXRTimedInputActionDelegate_DelegateWrapper(const FScriptDelegate& XRTimedInputActionDelegate, const float Value, const FTimespan Time) \
{ \
	_Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Time=Time; \
	XRTimedInputActionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_13_DELEGATE \
struct _Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms \
{ \
	FString OutReason; \
}; \
static inline void FXRDeviceOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& XRDeviceOnDisconnectDelegate, const FString& OutReason) \
{ \
	_Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms Parms; \
	Parms.OutReason=OutReason; \
	XRDeviceOnDisconnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerTransformForTime); \
	DECLARE_FUNCTION(execClearXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRDisconnectDelegate); \
	DECLARE_FUNCTION(execDisconnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConfigureGestures); \
	DECLARE_FUNCTION(execGetMotionControllerData); \
	DECLARE_FUNCTION(execGetHMDData); \
	DECLARE_FUNCTION(execIsDeviceTracking); \
	DECLARE_FUNCTION(execGetDeviceWorldPose); \
	DECLARE_FUNCTION(execGetDevicePose); \
	DECLARE_FUNCTION(execEnumerateTrackedDevices); \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout); \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture); \
	DECLARE_FUNCTION(execSetSpectatorScreenMode); \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable); \
	DECLARE_FUNCTION(execGetVRFocusState); \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition); \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD); \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform); \
	DECLARE_FUNCTION(execGetTrackingOrigin); \
	DECLARE_FUNCTION(execSetTrackingOrigin); \
	DECLARE_FUNCTION(execGetWorldToMetersScale); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetPixelDensity); \
	DECLARE_FUNCTION(execGetScreenPercentage); \
	DECLARE_FUNCTION(execSetClippingPlanes); \
	DECLARE_FUNCTION(execResetOrientationAndPosition); \
	DECLARE_FUNCTION(execEnableLowPersistenceMode); \
	DECLARE_FUNCTION(execIsInLowPersistenceMode); \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters); \
	DECLARE_FUNCTION(execGetTrackingSensorParameters); \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors); \
	DECLARE_FUNCTION(execHasValidTrackingPosition); \
	DECLARE_FUNCTION(execGetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetHMDWornState); \
	DECLARE_FUNCTION(execGetVersionString); \
	DECLARE_FUNCTION(execGetXRSystemFlags); \
	DECLARE_FUNCTION(execGetHMDDeviceName); \
	DECLARE_FUNCTION(execEnableHMD); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerTransformForTime); \
	DECLARE_FUNCTION(execClearXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRDisconnectDelegate); \
	DECLARE_FUNCTION(execDisconnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConfigureGestures); \
	DECLARE_FUNCTION(execGetMotionControllerData); \
	DECLARE_FUNCTION(execGetHMDData); \
	DECLARE_FUNCTION(execIsDeviceTracking); \
	DECLARE_FUNCTION(execGetDeviceWorldPose); \
	DECLARE_FUNCTION(execGetDevicePose); \
	DECLARE_FUNCTION(execEnumerateTrackedDevices); \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout); \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture); \
	DECLARE_FUNCTION(execSetSpectatorScreenMode); \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable); \
	DECLARE_FUNCTION(execGetVRFocusState); \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition); \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD); \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform); \
	DECLARE_FUNCTION(execGetTrackingOrigin); \
	DECLARE_FUNCTION(execSetTrackingOrigin); \
	DECLARE_FUNCTION(execGetWorldToMetersScale); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetPixelDensity); \
	DECLARE_FUNCTION(execGetScreenPercentage); \
	DECLARE_FUNCTION(execSetClippingPlanes); \
	DECLARE_FUNCTION(execResetOrientationAndPosition); \
	DECLARE_FUNCTION(execEnableLowPersistenceMode); \
	DECLARE_FUNCTION(execIsInLowPersistenceMode); \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters); \
	DECLARE_FUNCTION(execGetTrackingSensorParameters); \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors); \
	DECLARE_FUNCTION(execHasValidTrackingPosition); \
	DECLARE_FUNCTION(execGetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetHMDWornState); \
	DECLARE_FUNCTION(execGetVersionString); \
	DECLARE_FUNCTION(execGetXRSystemFlags); \
	DECLARE_FUNCTION(execGetHMDDeviceName); \
	DECLARE_FUNCTION(execEnableHMD); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled);


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_16_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HeadMountedDisplayFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UHeadMountedDisplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
