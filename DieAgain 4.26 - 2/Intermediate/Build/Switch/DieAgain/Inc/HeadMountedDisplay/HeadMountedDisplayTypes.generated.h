// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRMotionControllerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRMotionControllerData>();

#define Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRHMDData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRHMDData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h


#define FOREACH_ENUM_EXRVISUALTYPE(op) \
	op(EXRVisualType::Controller) \
	op(EXRVisualType::Hand) 

enum class EXRVisualType : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRVisualType>();

#define FOREACH_ENUM_EHANDKEYPOINT(op) \
	op(EHandKeypoint::Palm) \
	op(EHandKeypoint::Wrist) \
	op(EHandKeypoint::ThumbMetacarpal) \
	op(EHandKeypoint::ThumbProximal) \
	op(EHandKeypoint::ThumbDistal) \
	op(EHandKeypoint::ThumbTip) \
	op(EHandKeypoint::IndexMetacarpal) \
	op(EHandKeypoint::IndexProximal) \
	op(EHandKeypoint::IndexIntermediate) \
	op(EHandKeypoint::IndexDistal) \
	op(EHandKeypoint::IndexTip) \
	op(EHandKeypoint::MiddleMetacarpal) \
	op(EHandKeypoint::MiddleProximal) \
	op(EHandKeypoint::MiddleIntermediate) \
	op(EHandKeypoint::MiddleDistal) \
	op(EHandKeypoint::MiddleTip) \
	op(EHandKeypoint::RingMetacarpal) \
	op(EHandKeypoint::RingProximal) \
	op(EHandKeypoint::RingIntermediate) \
	op(EHandKeypoint::RingDistal) \
	op(EHandKeypoint::RingTip) \
	op(EHandKeypoint::LittleMetacarpal) \
	op(EHandKeypoint::LittleProximal) \
	op(EHandKeypoint::LittleIntermediate) \
	op(EHandKeypoint::LittleDistal) \
	op(EHandKeypoint::LittleTip) 

enum class EHandKeypoint : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHandKeypoint>();

#define FOREACH_ENUM_EXRTRACKEDDEVICETYPE(op) \
	op(EXRTrackedDeviceType::HeadMountedDisplay) \
	op(EXRTrackedDeviceType::Controller) \
	op(EXRTrackedDeviceType::TrackingReference) \
	op(EXRTrackedDeviceType::Other) \
	op(EXRTrackedDeviceType::Invalid) \
	op(EXRTrackedDeviceType::Any) 

enum class EXRTrackedDeviceType : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>();

#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) \
	op(ESpectatorScreenMode::TexturePlusEye) 

enum class ESpectatorScreenMode : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>();

#define FOREACH_ENUM_EXRSYSTEMFLAGS(op) \
	op(EXRSystemFlags::NoFlags) \
	op(EXRSystemFlags::IsAR) \
	op(EXRSystemFlags::IsTablet) \
	op(EXRSystemFlags::IsHeadMounted) \
	op(EXRSystemFlags::SupportsHandTracking) 
#define FOREACH_ENUM_EXRDEVICECONNECTIONRESULT(op) \
	op(EXRDeviceConnectionResult::NoTrackingSystem) \
	op(EXRDeviceConnectionResult::FeatureNotSupported) \
	op(EXRDeviceConnectionResult::NoValidViewport) \
	op(EXRDeviceConnectionResult::MiscFailure) \
	op(EXRDeviceConnectionResult::Success) 
#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) \
	op(EHMDWornState::NotWorn) 
#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::Floor) \
	op(EHMDTrackingOrigin::Eye) \
	op(EHMDTrackingOrigin::Stage) \
	op(EHMDTrackingOrigin::Unbounded) 
#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) \
	op(EOrientPositionSelector::OrientationAndPosition) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
