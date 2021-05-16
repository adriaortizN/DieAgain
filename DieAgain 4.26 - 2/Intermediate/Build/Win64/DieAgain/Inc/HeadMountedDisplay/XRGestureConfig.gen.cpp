// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/XRGestureConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRGestureConfig() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRGestureConfig();
// End Cross Module References
	static UEnum* ESpatialInputGestureAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ESpatialInputGestureAxis"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpatialInputGestureAxis>()
	{
		return ESpatialInputGestureAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpatialInputGestureAxis(ESpatialInputGestureAxis_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("ESpatialInputGestureAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Hash() { return 2728569119U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpatialInputGestureAxis"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpatialInputGestureAxis::None", (int64)ESpatialInputGestureAxis::None },
				{ "ESpatialInputGestureAxis::Manipulation", (int64)ESpatialInputGestureAxis::Manipulation },
				{ "ESpatialInputGestureAxis::Navigation", (int64)ESpatialInputGestureAxis::Navigation },
				{ "ESpatialInputGestureAxis::NavigationRails", (int64)ESpatialInputGestureAxis::NavigationRails },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Manipulation.Name", "ESpatialInputGestureAxis::Manipulation" },
				{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
				{ "Navigation.Name", "ESpatialInputGestureAxis::Navigation" },
				{ "NavigationRails.Name", "ESpatialInputGestureAxis::NavigationRails" },
				{ "None.Name", "ESpatialInputGestureAxis::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"ESpatialInputGestureAxis",
				"ESpatialInputGestureAxis",
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
class UScriptStruct* FXRGestureConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API uint32 Get_Z_Construct_UScriptStruct_FXRGestureConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRGestureConfig, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRGestureConfig"), sizeof(FXRGestureConfig), Get_Z_Construct_UScriptStruct_FXRGestureConfig_Hash());
	}
	return Singleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRGestureConfig>()
{
	return FXRGestureConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRGestureConfig(FXRGestureConfig::StaticStruct, TEXT("/Script/HeadMountedDisplay"), TEXT("XRGestureConfig"), false, nullptr, nullptr);
static struct FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRGestureConfig
{
	FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRGestureConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRGestureConfig")),new UScriptStruct::TCppStructOps<FXRGestureConfig>);
	}
} ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRGestureConfig;
	struct Z_Construct_UScriptStruct_FXRGestureConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTap_MetaData[];
#endif
		static void NewProp_bTap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHold_MetaData[];
#endif
		static void NewProp_bHold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisGesture_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisGesture_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisGesture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisX_MetaData[];
#endif
		static void NewProp_bNavigationAxisX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisY_MetaData[];
#endif
		static void NewProp_bNavigationAxisY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisZ_MetaData[];
#endif
		static void NewProp_bNavigationAxisZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRGestureConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bTap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap = { "bTap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bHold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold = { "bHold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture = { "AxisGesture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRGestureConfig, AxisGesture), Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX = { "bNavigationAxisX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY = { "bNavigationAxisY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ = { "bNavigationAxisZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRGestureConfig",
		sizeof(FXRGestureConfig),
		alignof(FXRGestureConfig),
		Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRGestureConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRGestureConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRGestureConfig"), sizeof(FXRGestureConfig), Get_Z_Construct_UScriptStruct_FXRGestureConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRGestureConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRGestureConfig_Hash() { return 2154880788U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
