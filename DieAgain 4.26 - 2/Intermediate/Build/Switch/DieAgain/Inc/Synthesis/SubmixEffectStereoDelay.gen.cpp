// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectStereoDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoDelay() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
class UScriptStruct* FSubmixEffectStereoDelaySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectStereoDelaySettings"), sizeof(FSubmixEffectStereoDelaySettings), Get_Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectStereoDelaySettings>()
{
	return FSubmixEffectStereoDelaySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectStereoDelaySettings(FSubmixEffectStereoDelaySettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectStereoDelaySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectStereoDelaySettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectStereoDelaySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectStereoDelaySettings")),new UScriptStruct::TCppStructOps<FSubmixEffectStereoDelaySettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectStereoDelaySettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DelayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DelayMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterEnabled_MetaData[];
#endif
		static void NewProp_bFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterEnabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectStereoDelaySettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// What mode to set the stereo delay effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "What mode to set the stereo delay effect." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode = { "DelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayMode), Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The base amount of delay in the left and right channels of the delay line.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The base amount of delay in the left and right channels of the delay line." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of audio to feedback into the delay line once the delay has been tapped.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of audio to feedback into the delay line once the delay has been tapped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of delay effect to mix with the dry input signal into the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of delay effect to mix with the dry input signal into the effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The dry level of the effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Whether or not to enable filtering\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Whether or not to enable filtering" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectStereoDelaySettings*)Obj)->bFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled = { "bFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectStereoDelaySettings), &Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Filter type to feed feedback audio to\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Filter type to feed feedback audio to" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterType), Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Cutoff frequency of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Cutoff frequency of the filter" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// Q of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Q of the filter" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectStereoDelaySettings",
		sizeof(FSubmixEffectStereoDelaySettings),
		alignof(FSubmixEffectStereoDelaySettings),
		Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectStereoDelaySettings"), sizeof(FSubmixEffectStereoDelaySettings), Get_Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Hash() { return 2125854881U; }
	DEFINE_FUNCTION(USubmixEffectStereoDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectStereoDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectStereoDelayPreset::StaticRegisterNativesUSubmixEffectStereoDelayPreset()
	{
		UClass* Class = USubmixEffectStereoDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectStereoDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics
	{
		struct SubmixEffectStereoDelayPreset_eventSetSettings_Parms
		{
			FSubmixEffectStereoDelaySettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectStereoDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set all tap delay settings. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Set all tap delay settings. This will replace any dynamically added or modified taps." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectStereoDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectStereoDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister()
	{
		return USubmixEffectStereoDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings, "SetSettings" }, // 2058278661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectDelayPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "USubmixEffectDelayPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectStereoDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectStereoDelayPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams = {
		&USubmixEffectStereoDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectStereoDelayPreset, 206110138);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectStereoDelayPreset>()
	{
		return USubmixEffectStereoDelayPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectStereoDelayPreset(Z_Construct_UClass_USubmixEffectStereoDelayPreset, &USubmixEffectStereoDelayPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectStereoDelayPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectStereoDelayPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
