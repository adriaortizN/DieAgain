// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraShakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
// End Cross Module References
	static UEnum* ECameraShakeDurationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeDurationType, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeDurationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>()
	{
		return ECameraShakeDurationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraShakeDurationType(ECameraShakeDurationType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraShakeDurationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraShakeDurationType_Hash() { return 3711827292U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraShakeDurationType"), 0, Get_Z_Construct_UEnum_Engine_ECameraShakeDurationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraShakeDurationType::Fixed", (int64)ECameraShakeDurationType::Fixed },
				{ "ECameraShakeDurationType::Infinite", (int64)ECameraShakeDurationType::Infinite },
				{ "ECameraShakeDurationType::Custom", (int64)ECameraShakeDurationType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Camera shake duration type.\n */" },
				{ "Custom.Comment", "/** Camera shake has custom/dynamic duration */" },
				{ "Custom.Name", "ECameraShakeDurationType::Custom" },
				{ "Custom.ToolTip", "Camera shake has custom/dynamic duration" },
				{ "Fixed.Comment", "/** Camera shake has a fixed duration */" },
				{ "Fixed.Name", "ECameraShakeDurationType::Fixed" },
				{ "Fixed.ToolTip", "Camera shake has a fixed duration" },
				{ "Infinite.Comment", "/** Camera shake is playing indefinitely, until explicitly stopped */" },
				{ "Infinite.Name", "ECameraShakeDurationType::Infinite" },
				{ "Infinite.ToolTip", "Camera shake is playing indefinitely, until explicitly stopped" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
				{ "ToolTip", "Camera shake duration type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraShakeDurationType",
				"ECameraShakeDurationType",
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
	static UEnum* ECameraShakeUpdateResultFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeUpdateResultFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeUpdateResultFlags>()
	{
		return ECameraShakeUpdateResultFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraShakeUpdateResultFlags(ECameraShakeUpdateResultFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraShakeUpdateResultFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Hash() { return 1265642490U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraShakeUpdateResultFlags"), 0, Get_Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraShakeUpdateResultFlags::ApplyAsAbsolute", (int64)ECameraShakeUpdateResultFlags::ApplyAsAbsolute },
				{ "ECameraShakeUpdateResultFlags::SkipAutoScale", (int64)ECameraShakeUpdateResultFlags::SkipAutoScale },
				{ "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace", (int64)ECameraShakeUpdateResultFlags::SkipAutoPlaySpace },
				{ "ECameraShakeUpdateResultFlags::Default", (int64)ECameraShakeUpdateResultFlags::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApplyAsAbsolute.Comment", "/** Apply the result location, rotation, and field of view as absolute values, instead of additive values. */" },
				{ "ApplyAsAbsolute.Name", "ECameraShakeUpdateResultFlags::ApplyAsAbsolute" },
				{ "ApplyAsAbsolute.ToolTip", "Apply the result location, rotation, and field of view as absolute values, instead of additive values." },
				{ "Comment", "/**\n * Flags that camera shakes can return to change base-class behaviour.\n */" },
				{ "Default.Comment", "/** Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest. */" },
				{ "Default.Name", "ECameraShakeUpdateResultFlags::Default" },
				{ "Default.ToolTip", "Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest." },
				{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
				{ "SkipAutoPlaySpace.Comment", "/** Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set. */" },
				{ "SkipAutoPlaySpace.Name", "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace" },
				{ "SkipAutoPlaySpace.ToolTip", "Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set." },
				{ "SkipAutoScale.Comment", "/** Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set. */" },
				{ "SkipAutoScale.Name", "ECameraShakeUpdateResultFlags::SkipAutoScale" },
				{ "SkipAutoScale.ToolTip", "Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set." },
				{ "ToolTip", "Flags that camera shakes can return to change base-class behaviour." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraShakeUpdateResultFlags",
				"ECameraShakeUpdateResultFlags",
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
class UScriptStruct* FCameraShakeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeInfo"), sizeof(FCameraShakeInfo), Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeInfo>()
{
	return FCameraShakeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeInfo(FCameraShakeInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraShakeInfo")),new UScriptStruct::TCppStructOps<FCameraShakeInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo;
	struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a camera shake class.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Information about a camera shake class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The duration of the camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The duration of the camera shake" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, Duration), Z_Construct_UScriptStruct_FCameraShakeDuration, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Comment", "/** How much blending-in the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-in the camera shake should have" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Comment", "/** How much blending-out the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-out the camera shake should have" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeInfo",
		sizeof(FCameraShakeInfo),
		alignof(FCameraShakeInfo),
		Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeInfo"), sizeof(FCameraShakeInfo), Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash() { return 3559116282U; }
class UScriptStruct* FCameraShakeDuration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDuration, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeDuration"), sizeof(FCameraShakeDuration), Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeDuration>()
{
	return FCameraShakeDuration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeDuration(FCameraShakeDuration::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeDuration"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraShakeDuration")),new UScriptStruct::TCppStructOps<FCameraShakeDuration>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration;
	struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera shake duration.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeDuration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeDuration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeDuration, Type), Z_Construct_UEnum_Engine_ECameraShakeDurationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeDuration",
		sizeof(FCameraShakeDuration),
		alignof(FCameraShakeDuration),
		Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeDuration"), sizeof(FCameraShakeDuration), Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash() { return 1949992626U; }
class UScriptStruct* FCameraShakeUpdateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateResult, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateResult"), sizeof(FCameraShakeUpdateResult), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateResult>()
{
	return FCameraShakeUpdateResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeUpdateResult(FCameraShakeUpdateResult::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeUpdateResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraShakeUpdateResult")),new UScriptStruct::TCppStructOps<FCameraShakeUpdateResult>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult;
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The result of a camera shake update.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The result of a camera shake update." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateResult",
		sizeof(FCameraShakeUpdateResult),
		alignof(FCameraShakeUpdateResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeUpdateResult"), sizeof(FCameraShakeUpdateResult), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash() { return 896158686U; }
class UScriptStruct* FCameraShakeUpdateParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateParams, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateParams"), sizeof(FCameraShakeUpdateParams), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateParams>()
{
	return FCameraShakeUpdateParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeUpdateParams(FCameraShakeUpdateParams::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeUpdateParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraShakeUpdateParams")),new UScriptStruct::TCppStructOps<FCameraShakeUpdateParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams;
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for updating a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for updating a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateParams",
		sizeof(FCameraShakeUpdateParams),
		alignof(FCameraShakeUpdateParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeUpdateParams"), sizeof(FCameraShakeUpdateParams), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash() { return 3607386651U; }
	void UCameraShakeBase::StaticRegisterNativesUCameraShakeBase()
	{
	}
	UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister()
	{
		return UCameraShakeBase::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[];
#endif
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A CameraShake is an asset that defines how to shake the camera in \n * a particular way. CameraShakes can be authored as either oscillating shakes, \n * animated shakes, or both.\n *\n * An oscillating shake will sinusoidally vibrate various camera parameters over time. Each location\n * and rotation axis can be oscillated independently with different parameters to create complex and\n * random-feeling shakes. These are easier to author and tweak, but can still feel mechanical and are\n * limited to vibration-style shakes, such as earthquakes.\n *\n * Animated shakes play keyframed camera animations.  These can take more effort to author, but enable\n * more natural-feeling results and things like directional shakes.  For instance, you can have an explosion\n * to the camera's right push it primarily to the left.\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A CameraShake is an asset that defines how to shake the camera in\na particular way. CameraShakes can be authored as either oscillating shakes,\nanimated shakes, or both.\n\nAn oscillating shake will sinusoidally vibrate various camera parameters over time. Each location\nand rotation axis can be oscillated independently with different parameters to create complex and\nrandom-feeling shakes. These are easier to author and tweak, but can still feel mechanical and are\nlimited to vibration-style shakes, such as earthquakes.\n\nAnimated shakes play keyframed camera animations.  These can take more effort to author, but enable\nmore natural-feeling results and things like directional shakes.  For instance, you can have an explosion\nto the camera's right push it primarily to the left." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** \n\x09 *  If true to only allow a single instance of this shake class to play at any given time.\n\x09 *  Subsequent attempts to play this shake will simply restart the timer.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
	};
#endif
	void Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((UCameraShakeBase*)Obj)->bSingleInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraShakeBase), &Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The overall scale to apply to the shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The overall scale to apply to the shake. Only valid when the shake is active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeBase, ShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData[] = {
		{ "Comment", "/** The camera manager owning this camera shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The camera manager owning this camera shake. Only valid when the shake is active." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeBase, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams = {
		&UCameraShakeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShakeBase, 4145198628);
	template<> ENGINE_API UClass* StaticClass<UCameraShakeBase>()
	{
		return UCameraShakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShakeBase(Z_Construct_UClass_UCameraShakeBase, &UCameraShakeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
