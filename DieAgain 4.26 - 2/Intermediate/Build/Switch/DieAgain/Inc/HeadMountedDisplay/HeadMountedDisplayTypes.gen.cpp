// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayTypes() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData();
// End Cross Module References
	static UEnum* EXRVisualType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRVisualType"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRVisualType>()
	{
		return EXRVisualType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRVisualType(EXRVisualType_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EXRVisualType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Hash() { return 4080092422U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRVisualType"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRVisualType::Controller", (int64)EXRVisualType::Controller },
				{ "EXRVisualType::Hand", (int64)EXRVisualType::Hand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EXRVisualType::Controller" },
				{ "Hand.Name", "EXRVisualType::Hand" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EXRVisualType",
				"EXRVisualType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandKeypoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHandKeypoint"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHandKeypoint>()
	{
		return EHandKeypoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandKeypoint(EHandKeypoint_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EHandKeypoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Hash() { return 2926681295U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandKeypoint"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandKeypoint::Palm", (int64)EHandKeypoint::Palm },
				{ "EHandKeypoint::Wrist", (int64)EHandKeypoint::Wrist },
				{ "EHandKeypoint::ThumbMetacarpal", (int64)EHandKeypoint::ThumbMetacarpal },
				{ "EHandKeypoint::ThumbProximal", (int64)EHandKeypoint::ThumbProximal },
				{ "EHandKeypoint::ThumbDistal", (int64)EHandKeypoint::ThumbDistal },
				{ "EHandKeypoint::ThumbTip", (int64)EHandKeypoint::ThumbTip },
				{ "EHandKeypoint::IndexMetacarpal", (int64)EHandKeypoint::IndexMetacarpal },
				{ "EHandKeypoint::IndexProximal", (int64)EHandKeypoint::IndexProximal },
				{ "EHandKeypoint::IndexIntermediate", (int64)EHandKeypoint::IndexIntermediate },
				{ "EHandKeypoint::IndexDistal", (int64)EHandKeypoint::IndexDistal },
				{ "EHandKeypoint::IndexTip", (int64)EHandKeypoint::IndexTip },
				{ "EHandKeypoint::MiddleMetacarpal", (int64)EHandKeypoint::MiddleMetacarpal },
				{ "EHandKeypoint::MiddleProximal", (int64)EHandKeypoint::MiddleProximal },
				{ "EHandKeypoint::MiddleIntermediate", (int64)EHandKeypoint::MiddleIntermediate },
				{ "EHandKeypoint::MiddleDistal", (int64)EHandKeypoint::MiddleDistal },
				{ "EHandKeypoint::MiddleTip", (int64)EHandKeypoint::MiddleTip },
				{ "EHandKeypoint::RingMetacarpal", (int64)EHandKeypoint::RingMetacarpal },
				{ "EHandKeypoint::RingProximal", (int64)EHandKeypoint::RingProximal },
				{ "EHandKeypoint::RingIntermediate", (int64)EHandKeypoint::RingIntermediate },
				{ "EHandKeypoint::RingDistal", (int64)EHandKeypoint::RingDistal },
				{ "EHandKeypoint::RingTip", (int64)EHandKeypoint::RingTip },
				{ "EHandKeypoint::LittleMetacarpal", (int64)EHandKeypoint::LittleMetacarpal },
				{ "EHandKeypoint::LittleProximal", (int64)EHandKeypoint::LittleProximal },
				{ "EHandKeypoint::LittleIntermediate", (int64)EHandKeypoint::LittleIntermediate },
				{ "EHandKeypoint::LittleDistal", (int64)EHandKeypoint::LittleDistal },
				{ "EHandKeypoint::LittleTip", (int64)EHandKeypoint::LittleTip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Transforms that are tracked on the hand.\n * Matches the enums from WMR to make it a direct mapping\n */" },
				{ "IndexDistal.Name", "EHandKeypoint::IndexDistal" },
				{ "IndexIntermediate.Name", "EHandKeypoint::IndexIntermediate" },
				{ "IndexMetacarpal.Name", "EHandKeypoint::IndexMetacarpal" },
				{ "IndexProximal.Name", "EHandKeypoint::IndexProximal" },
				{ "IndexTip.Name", "EHandKeypoint::IndexTip" },
				{ "LittleDistal.Name", "EHandKeypoint::LittleDistal" },
				{ "LittleIntermediate.Name", "EHandKeypoint::LittleIntermediate" },
				{ "LittleMetacarpal.Name", "EHandKeypoint::LittleMetacarpal" },
				{ "LittleProximal.Name", "EHandKeypoint::LittleProximal" },
				{ "LittleTip.Name", "EHandKeypoint::LittleTip" },
				{ "MiddleDistal.Name", "EHandKeypoint::MiddleDistal" },
				{ "MiddleIntermediate.Name", "EHandKeypoint::MiddleIntermediate" },
				{ "MiddleMetacarpal.Name", "EHandKeypoint::MiddleMetacarpal" },
				{ "MiddleProximal.Name", "EHandKeypoint::MiddleProximal" },
				{ "MiddleTip.Name", "EHandKeypoint::MiddleTip" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Palm.Name", "EHandKeypoint::Palm" },
				{ "RingDistal.Name", "EHandKeypoint::RingDistal" },
				{ "RingIntermediate.Name", "EHandKeypoint::RingIntermediate" },
				{ "RingMetacarpal.Name", "EHandKeypoint::RingMetacarpal" },
				{ "RingProximal.Name", "EHandKeypoint::RingProximal" },
				{ "RingTip.Name", "EHandKeypoint::RingTip" },
				{ "ThumbDistal.Name", "EHandKeypoint::ThumbDistal" },
				{ "ThumbMetacarpal.Name", "EHandKeypoint::ThumbMetacarpal" },
				{ "ThumbProximal.Name", "EHandKeypoint::ThumbProximal" },
				{ "ThumbTip.Name", "EHandKeypoint::ThumbTip" },
				{ "ToolTip", "Transforms that are tracked on the hand.\nMatches the enums from WMR to make it a direct mapping" },
				{ "Wrist.Name", "EHandKeypoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EHandKeypoint",
				"EHandKeypoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EXRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>()
	{
		return EXRTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRTrackedDeviceType(EXRTrackedDeviceType_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EXRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Hash() { return 1884154185U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRTrackedDeviceType::HeadMountedDisplay", (int64)EXRTrackedDeviceType::HeadMountedDisplay },
				{ "EXRTrackedDeviceType::Controller", (int64)EXRTrackedDeviceType::Controller },
				{ "EXRTrackedDeviceType::TrackingReference", (int64)EXRTrackedDeviceType::TrackingReference },
				{ "EXRTrackedDeviceType::Other", (int64)EXRTrackedDeviceType::Other },
				{ "EXRTrackedDeviceType::Invalid", (int64)EXRTrackedDeviceType::Invalid },
				{ "EXRTrackedDeviceType::Any", (int64)EXRTrackedDeviceType::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Comment", "/** Pass to EnumerateTrackedDevices to get all devices regardless of type */" },
				{ "Any.Name", "EXRTrackedDeviceType::Any" },
				{ "Any.ToolTip", "Pass to EnumerateTrackedDevices to get all devices regardless of type" },
				{ "BlueprintType", "true" },
				{ "Controller.Comment", "/** Represents a controller */" },
				{ "Controller.Name", "EXRTrackedDeviceType::Controller" },
				{ "Controller.ToolTip", "Represents a controller" },
				{ "HeadMountedDisplay.Comment", "/** Represents a head mounted display */" },
				{ "HeadMountedDisplay.Name", "EXRTrackedDeviceType::HeadMountedDisplay" },
				{ "HeadMountedDisplay.ToolTip", "Represents a head mounted display" },
				{ "Invalid.Comment", "/** DeviceId is invalid */" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EXRTrackedDeviceType::Invalid" },
				{ "Invalid.ToolTip", "DeviceId is invalid" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Other.Comment", "/** Misc. device types, for future expansion */" },
				{ "Other.Name", "EXRTrackedDeviceType::Other" },
				{ "Other.ToolTip", "Misc. device types, for future expansion" },
				{ "TrackingReference.Comment", "/** Represents a static tracking reference device, such as a Lighthouse or tracking camera */" },
				{ "TrackingReference.Name", "EXRTrackedDeviceType::TrackingReference" },
				{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EXRTrackedDeviceType",
				"EXRTrackedDeviceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpectatorScreenMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ESpectatorScreenMode"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>()
	{
		return ESpectatorScreenMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpectatorScreenMode(ESpectatorScreenMode_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("ESpectatorScreenMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Hash() { return 1604730544U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpectatorScreenMode"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpectatorScreenMode::Disabled", (int64)ESpectatorScreenMode::Disabled },
				{ "ESpectatorScreenMode::SingleEyeLetterboxed", (int64)ESpectatorScreenMode::SingleEyeLetterboxed },
				{ "ESpectatorScreenMode::Undistorted", (int64)ESpectatorScreenMode::Undistorted },
				{ "ESpectatorScreenMode::Distorted", (int64)ESpectatorScreenMode::Distorted },
				{ "ESpectatorScreenMode::SingleEye", (int64)ESpectatorScreenMode::SingleEye },
				{ "ESpectatorScreenMode::SingleEyeCroppedToFill", (int64)ESpectatorScreenMode::SingleEyeCroppedToFill },
				{ "ESpectatorScreenMode::Texture", (int64)ESpectatorScreenMode::Texture },
				{ "ESpectatorScreenMode::TexturePlusEye", (int64)ESpectatorScreenMode::TexturePlusEye },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* The Spectator Screen Mode controls what the non-vr video device displays on platforms that support one.\n* Not all modes are universal.\n* Modes SingleEyeCroppedToFill, Texture, and MirrorPlusTexture are supported on all.\n* Disabled is supported on all except PSVR.\n*/" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.Name", "ESpectatorScreenMode::Disabled" },
				{ "Distorted.DisplayName", "Distorted" },
				{ "Distorted.Name", "ESpectatorScreenMode::Distorted" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "SingleEye.DisplayName", "SingleEye" },
				{ "SingleEye.Name", "ESpectatorScreenMode::SingleEye" },
				{ "SingleEyeCroppedToFill.DisplayName", "SingleEyeCroppedToFill" },
				{ "SingleEyeCroppedToFill.Name", "ESpectatorScreenMode::SingleEyeCroppedToFill" },
				{ "SingleEyeLetterboxed.DisplayName", "SingleEyeLetterboxed" },
				{ "SingleEyeLetterboxed.Name", "ESpectatorScreenMode::SingleEyeLetterboxed" },
				{ "Texture.DisplayName", "Texture" },
				{ "Texture.Name", "ESpectatorScreenMode::Texture" },
				{ "TexturePlusEye.DisplayName", "TexturePlusEye" },
				{ "TexturePlusEye.Name", "ESpectatorScreenMode::TexturePlusEye" },
				{ "ToolTip", "The Spectator Screen Mode controls what the non-vr video device displays on platforms that support one.\nNot all modes are universal.\nModes SingleEyeCroppedToFill, Texture, and MirrorPlusTexture are supported on all.\nDisabled is supported on all except PSVR." },
				{ "Undistorted.DisplayName", "Undistorted" },
				{ "Undistorted.Name", "ESpectatorScreenMode::Undistorted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"ESpectatorScreenMode",
				"ESpectatorScreenMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EXRSystemFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRSystemFlags"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRSystemFlags::Type>()
	{
		return EXRSystemFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRSystemFlags(EXRSystemFlags_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EXRSystemFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Hash() { return 1555390661U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRSystemFlags"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRSystemFlags::NoFlags", (int64)EXRSystemFlags::NoFlags },
				{ "EXRSystemFlags::IsAR", (int64)EXRSystemFlags::IsAR },
				{ "EXRSystemFlags::IsTablet", (int64)EXRSystemFlags::IsTablet },
				{ "EXRSystemFlags::IsHeadMounted", (int64)EXRSystemFlags::IsHeadMounted },
				{ "EXRSystemFlags::SupportsHandTracking", (int64)EXRSystemFlags::SupportsHandTracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Flags to better inform the user about specifics of the underlying XR system\n*/" },
				{ "IsAR.Name", "EXRSystemFlags::IsAR" },
				{ "IsHeadMounted.Name", "EXRSystemFlags::IsHeadMounted" },
				{ "IsTablet.Name", "EXRSystemFlags::IsTablet" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "NoFlags.Hidden", "" },
				{ "NoFlags.Name", "EXRSystemFlags::NoFlags" },
				{ "SupportsHandTracking.Name", "EXRSystemFlags::SupportsHandTracking" },
				{ "ToolTip", "Flags to better inform the user about specifics of the underlying XR system" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EXRSystemFlags",
				"EXRSystemFlags::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EXRDeviceConnectionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRDeviceConnectionResult"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRDeviceConnectionResult::Type>()
	{
		return EXRDeviceConnectionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRDeviceConnectionResult(EXRDeviceConnectionResult_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EXRDeviceConnectionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Hash() { return 208867501U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRDeviceConnectionResult"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRDeviceConnectionResult::NoTrackingSystem", (int64)EXRDeviceConnectionResult::NoTrackingSystem },
				{ "EXRDeviceConnectionResult::FeatureNotSupported", (int64)EXRDeviceConnectionResult::FeatureNotSupported },
				{ "EXRDeviceConnectionResult::NoValidViewport", (int64)EXRDeviceConnectionResult::NoValidViewport },
				{ "EXRDeviceConnectionResult::MiscFailure", (int64)EXRDeviceConnectionResult::MiscFailure },
				{ "EXRDeviceConnectionResult::Success", (int64)EXRDeviceConnectionResult::Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Enumeration of results from Connecting to Remote XR device\n*/" },
				{ "FeatureNotSupported.Name", "EXRDeviceConnectionResult::FeatureNotSupported" },
				{ "MiscFailure.Name", "EXRDeviceConnectionResult::MiscFailure" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "NoTrackingSystem.Name", "EXRDeviceConnectionResult::NoTrackingSystem" },
				{ "NoValidViewport.Name", "EXRDeviceConnectionResult::NoValidViewport" },
				{ "Success.Name", "EXRDeviceConnectionResult::Success" },
				{ "ToolTip", "Enumeration of results from Connecting to Remote XR device" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EXRDeviceConnectionResult",
				"EXRDeviceConnectionResult::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHMDWornState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDWornState"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDWornState::Type>()
	{
		return EHMDWornState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHMDWornState(EHMDWornState_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EHMDWornState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Hash() { return 2789459303U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHMDWornState"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHMDWornState::Unknown", (int64)EHMDWornState::Unknown },
				{ "EHMDWornState::Worn", (int64)EHMDWornState::Worn },
				{ "EHMDWornState::NotWorn", (int64)EHMDWornState::NotWorn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown.\n*/" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "NotWorn.DisplayName", "Not Worn" },
				{ "NotWorn.Name", "EHMDWornState::NotWorn" },
				{ "ToolTip", "Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Unknown.Name", "EHMDWornState::Unknown" },
				{ "Worn.DisplayName", "Worn" },
				{ "Worn.Name", "EHMDWornState::Worn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EHMDWornState",
				"EHMDWornState::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHMDTrackingOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDTrackingOrigin"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDTrackingOrigin::Type>()
	{
		return EHMDTrackingOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHMDTrackingOrigin(EHMDTrackingOrigin_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EHMDTrackingOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Hash() { return 1842303609U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHMDTrackingOrigin"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHMDTrackingOrigin::Floor", (int64)EHMDTrackingOrigin::Floor },
				{ "EHMDTrackingOrigin::Eye", (int64)EHMDTrackingOrigin::Eye },
				{ "EHMDTrackingOrigin::Stage", (int64)EHMDTrackingOrigin::Stage },
				{ "EHMDTrackingOrigin::Unbounded", (int64)EHMDTrackingOrigin::Unbounded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* For HMDs that support it, this specifies whether the origin of the tracking universe will be at the floor, or at the user's eye height\n*/" },
				{ "Eye.DisplayName", "Eye Level" },
				{ "Eye.Name", "EHMDTrackingOrigin::Eye" },
				{ "Floor.DisplayName", "Floor Level" },
				{ "Floor.Name", "EHMDTrackingOrigin::Floor" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Stage.DisplayName", "Stage (Centered Around Play Area)" },
				{ "Stage.Name", "EHMDTrackingOrigin::Stage" },
				{ "ToolTip", "For HMDs that support it, this specifies whether the origin of the tracking universe will be at the floor, or at the user's eye height" },
				{ "Unbounded.DisplayName", "Unbounded (Centered Around Viewer)" },
				{ "Unbounded.Name", "EHMDTrackingOrigin::Unbounded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EHMDTrackingOrigin",
				"EHMDTrackingOrigin::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOrientPositionSelector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EOrientPositionSelector"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EOrientPositionSelector::Type>()
	{
		return EOrientPositionSelector_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrientPositionSelector(EOrientPositionSelector_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EOrientPositionSelector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Hash() { return 3344725832U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrientPositionSelector"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrientPositionSelector::Orientation", (int64)EOrientPositionSelector::Orientation },
				{ "EOrientPositionSelector::Position", (int64)EOrientPositionSelector::Position },
				{ "EOrientPositionSelector::OrientationAndPosition", (int64)EOrientPositionSelector::OrientationAndPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Orientation.DisplayName", "Orientation" },
				{ "Orientation.Name", "EOrientPositionSelector::Orientation" },
				{ "OrientationAndPosition.DisplayName", "Orientation and Position" },
				{ "OrientationAndPosition.Name", "EOrientPositionSelector::OrientationAndPosition" },
				{ "Position.DisplayName", "Position" },
				{ "Position.Name", "EOrientPositionSelector::Position" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EOrientPositionSelector",
				"EOrientPositionSelector::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FXRMotionControllerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API uint32 Get_Z_Construct_UScriptStruct_FXRMotionControllerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRMotionControllerData, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRMotionControllerData"), sizeof(FXRMotionControllerData), Get_Z_Construct_UScriptStruct_FXRMotionControllerData_Hash());
	}
	return Singleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRMotionControllerData>()
{
	return FXRMotionControllerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRMotionControllerData(FXRMotionControllerData::StaticStruct, TEXT("/Script/HeadMountedDisplay"), TEXT("XRMotionControllerData"), false, nullptr, nullptr);
static struct FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRMotionControllerData
{
	FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRMotionControllerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRMotionControllerData")),new UScriptStruct::TCppStructOps<FXRMotionControllerData>);
	}
} ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRMotionControllerData;
	struct Z_Construct_UScriptStruct_FXRMotionControllerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplicationInstanceID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceVisualType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceVisualType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceVisualType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandIndex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandKeyPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandKeyPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandKeyPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandKeyRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandKeyRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandKeyRotations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandKeyRadii_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandKeyRadii_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandKeyRadii;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrasped_MetaData[];
#endif
		static void NewProp_bIsGrasped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrasped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRMotionControllerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FXRMotionControllerData*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRMotionControllerData), &Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID = { "ApplicationInstanceID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, ApplicationInstanceID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType = { "DeviceVisualType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, DeviceVisualType), Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex = { "HandIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, HandIndex), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, TrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition = { "GripPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, GripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation = { "GripRotation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, GripRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "//for hand controllers, provides a more steady vector based on the elbow\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "for hand controllers, provides a more steady vector based on the elbow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition = { "AimPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, AimPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, AimRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_Inner = { "HandKeyPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions = { "HandKeyPositions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_Inner = { "HandKeyRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations = { "HandKeyRotations", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_Inner = { "HandKeyRadii", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii = { "HandKeyRadii", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyRadii), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_SetBit(void* Obj)
	{
		((FXRMotionControllerData*)Obj)->bIsGrasped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped = { "bIsGrasped", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRMotionControllerData), &Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRMotionControllerData",
		sizeof(FXRMotionControllerData),
		alignof(FXRMotionControllerData),
		Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRMotionControllerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRMotionControllerData"), sizeof(FXRMotionControllerData), Get_Z_Construct_UScriptStruct_FXRMotionControllerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRMotionControllerData_Hash() { return 730688945U; }
class UScriptStruct* FXRHMDData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API uint32 Get_Z_Construct_UScriptStruct_FXRHMDData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRHMDData, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRHMDData"), sizeof(FXRHMDData), Get_Z_Construct_UScriptStruct_FXRHMDData_Hash());
	}
	return Singleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRHMDData>()
{
	return FXRHMDData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRHMDData(FXRHMDData::StaticStruct, TEXT("/Script/HeadMountedDisplay"), TEXT("XRHMDData"), false, nullptr, nullptr);
static struct FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRHMDData
{
	FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRHMDData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRHMDData")),new UScriptStruct::TCppStructOps<FXRHMDData>);
	}
} ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRHMDData;
	struct Z_Construct_UScriptStruct_FXRHMDData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplicationInstanceID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRHMDData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRHMDData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FXRHMDData*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRHMDData), &Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRHMDData, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID = { "ApplicationInstanceID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRHMDData, ApplicationInstanceID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRHMDData, TrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRHMDData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRHMDData, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRHMDData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRHMDData",
		sizeof(FXRHMDData),
		alignof(FXRHMDData),
		Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRHMDData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRHMDData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRHMDData"), sizeof(FXRHMDData), Get_Z_Construct_UScriptStruct_FXRHMDData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRHMDData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRHMDData_Hash() { return 3005289742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
