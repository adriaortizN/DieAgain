// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectChorus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectChorus() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSourceEffectChorusSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusSettings"), sizeof(FSourceEffectChorusSettings), Get_Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusSettings>()
{
	return FSourceEffectChorusSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectChorusSettings(FSourceEffectChorusSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectChorusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectChorusSettings")),new UScriptStruct::TCppStructOps<FSourceEffectChorusSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DepthModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrequencyModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FeedbackModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WetModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DryModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpreadModulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "DisplayName", "Depth" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation = { "DepthModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DepthModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData[] = {
		{ "AudioParam", "LowRateFrequency" },
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation = { "FrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, FrequencyModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "DisplayName", "Feedback" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation = { "FeedbackModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, FeedbackModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "DisplayName", "Wet Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation = { "WetModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, WetModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "DisplayName", "Dry Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation = { "DryModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, DryModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "DisplayName", "Spread" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation = { "SpreadModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusSettings, SpreadModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectChorusSettings",
		sizeof(FSourceEffectChorusSettings),
		alignof(FSourceEffectChorusSettings),
		Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectChorusSettings"), sizeof(FSourceEffectChorusSettings), Get_Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Hash() { return 1253707925U; }
class UScriptStruct* FSourceEffectChorusBaseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusBaseSettings"), sizeof(FSourceEffectChorusBaseSettings), Get_Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusBaseSettings>()
{
	return FSourceEffectChorusBaseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectChorusBaseSettings(FSourceEffectChorusBaseSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectChorusBaseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusBaseSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusBaseSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectChorusBaseSettings")),new UScriptStruct::TCppStructOps<FSourceEffectChorusBaseSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectChorusBaseSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusBaseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectChorusBaseSettings",
		sizeof(FSourceEffectChorusBaseSettings),
		alignof(FSourceEffectChorusBaseSettings),
		Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectChorusBaseSettings"), sizeof(FSourceEffectChorusBaseSettings), Get_Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Hash() { return 3592724287U; }
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetModulationSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectChorusSettings,Z_Param_Out_ModulationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationSettings(Z_Param_Out_ModulationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectChorusBaseSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpreadModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpreadModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpread)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpread(Z_Param_Spread);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDryModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDry)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDry(Z_Param_DryAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWetModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWet)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWet(Z_Param_WetAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequencyModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequencyModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedbackModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedbackModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepthModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepthModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_Depth);
		P_NATIVE_END;
	}
	void USourceEffectChorusPreset::StaticRegisterNativesUSourceEffectChorusPreset()
	{
		UClass* Class = USourceEffectChorusPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDepth", &USourceEffectChorusPreset::execSetDepth },
			{ "SetDepthModulator", &USourceEffectChorusPreset::execSetDepthModulator },
			{ "SetDry", &USourceEffectChorusPreset::execSetDry },
			{ "SetDryModulator", &USourceEffectChorusPreset::execSetDryModulator },
			{ "SetFeedback", &USourceEffectChorusPreset::execSetFeedback },
			{ "SetFeedbackModulator", &USourceEffectChorusPreset::execSetFeedbackModulator },
			{ "SetFrequency", &USourceEffectChorusPreset::execSetFrequency },
			{ "SetFrequencyModulator", &USourceEffectChorusPreset::execSetFrequencyModulator },
			{ "SetModulationSettings", &USourceEffectChorusPreset::execSetModulationSettings },
			{ "SetSettings", &USourceEffectChorusPreset::execSetSettings },
			{ "SetSpread", &USourceEffectChorusPreset::execSetSpread },
			{ "SetSpreadModulator", &USourceEffectChorusPreset::execSetSpreadModulator },
			{ "SetWet", &USourceEffectChorusPreset::execSetWet },
			{ "SetWetModulator", &USourceEffectChorusPreset::execSetWetModulator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics
	{
		struct SourceEffectChorusPreset_eventSetDepth_Parms
		{
			float Depth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepth", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetDepth_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetDepthModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepthModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepthModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetDepthModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics
	{
		struct SourceEffectChorusPreset_eventSetDry_Parms
		{
			float DryAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount = { "DryAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDry_Parms, DryAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDry", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetDry_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetDryModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDryModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDryModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetDryModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics
	{
		struct SourceEffectChorusPreset_eventSetFeedback_Parms
		{
			float Feedback;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetFeedback_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetFeedbackModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedbackModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedbackModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetFeedbackModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics
	{
		struct SourceEffectChorusPreset_eventSetFrequency_Parms
		{
			float Frequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequency", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetFrequency_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetFrequencyModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequencyModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequencyModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetFrequencyModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics
	{
		struct SourceEffectChorusPreset_eventSetModulationSettings_Parms
		{
			FSourceEffectChorusSettings ModulationSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetModulationSettings_Parms, ModulationSettings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetModulationSettings", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetModulationSettings_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics
	{
		struct SourceEffectChorusPreset_eventSetSettings_Parms
		{
			FSourceEffectChorusBaseSettings Settings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "Comment", "// Sets just base (i.e. carrier) setting values without modifying modulation source references\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "Sets just base (i.e. carrier) setting values without modifying modulation source references" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics
	{
		struct SourceEffectChorusPreset_eventSetSpread_Parms
		{
			float Spread;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpread_Parms, Spread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpread", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetSpread_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetSpreadModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpreadModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpreadModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetSpreadModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics
	{
		struct SourceEffectChorusPreset_eventSetWet_Parms
		{
			float WetAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount = { "WetAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWet_Parms, WetAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWet", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetWet_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetWetModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWetModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWetModulator", nullptr, nullptr, sizeof(SourceEffectChorusPreset_eventSetWetModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister()
	{
		return USourceEffectChorusPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectChorusPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectChorusPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectChorusPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth, "SetDepth" }, // 703682689
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator, "SetDepthModulator" }, // 4211193736
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDry, "SetDry" }, // 1678565683
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator, "SetDryModulator" }, // 2353118014
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback, "SetFeedback" }, // 585923787
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator, "SetFeedbackModulator" }, // 377286058
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency, "SetFrequency" }, // 400085658
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator, "SetFrequencyModulator" }, // 2638355053
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings, "SetModulationSettings" }, // 3606996622
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings, "SetSettings" }, // 2473723125
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread, "SetSpread" }, // 3897779400
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator, "SetSpreadModulator" }, // 1389678287
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWet, "SetWet" }, // 276158632
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator, "SetWetModulator" }, // 117529047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectChorus.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectChorusPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectChorusPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectChorusPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams = {
		&USourceEffectChorusPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectChorusPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectChorusPreset, 1660686807);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectChorusPreset>()
	{
		return USourceEffectChorusPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectChorusPreset(Z_Construct_UClass_USourceEffectChorusPreset, &USourceEffectChorusPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectChorusPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectChorusPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
