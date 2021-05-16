// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectMultiBandCompressor() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicsBandSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
class UScriptStruct* FSubmixEffectMultibandCompressorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectMultibandCompressorSettings"), sizeof(FSubmixEffectMultibandCompressorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectMultibandCompressorSettings>()
{
	return FSubmixEffectMultibandCompressorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectMultibandCompressorSettings(FSubmixEffectMultibandCompressorSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SubmixEffectMultibandCompressorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectMultibandCompressorSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectMultibandCompressorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectMultibandCompressorSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectMultibandCompressorSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSubmixEffectMultibandCompressorSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkChannels_MetaData[];
#endif
		static void NewProp_bLinkChannels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFourPole_MetaData[];
#endif
		static void NewProp_bFourPole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFourPole;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A submix dynamics processor\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "A submix dynamics processor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectMultibandCompressorSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Controls how each band will react to audio above its threshold\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Controls how each band will react to audio above its threshold" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Controls how quickly the bands will react to a signal above its threshold\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Controls how quickly the bands will react to a signal above its threshold" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing." },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not to average all channels of audio before inputing into the dynamics processor\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Whether or not to average all channels of audio before inputing into the dynamics processor" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels_SetBit(void* Obj)
	{
		((FSubmixEffectMultibandCompressorSettings*)Obj)->bLinkChannels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels = { "bLinkChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSubmixEffectMultibandCompressorSettings*)Obj)->bAnalogMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Turning off FourPole mode will use cheaper, shallower 2-pole crossovers\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Turning off FourPole mode will use cheaper, shallower 2-pole crossovers" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_SetBit(void* Obj)
	{
		((FSubmixEffectMultibandCompressorSettings*)Obj)->bFourPole = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole = { "bFourPole", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubmixEffectMultibandCompressorSettings), &Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_Inner = { "Bands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDynamicsBandSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Each band is a full dynamics processor, affecting at a unique frequency range\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Each band is a full dynamics processor, affecting at a unique frequency range" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands = { "Bands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectMultibandCompressorSettings, Bands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_PeakMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_LookAheadMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bLinkChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bAnalogMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_bFourPole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::NewProp_Bands,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectMultibandCompressorSettings",
		sizeof(FSubmixEffectMultibandCompressorSettings),
		alignof(FSubmixEffectMultibandCompressorSettings),
		Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectMultibandCompressorSettings"), sizeof(FSubmixEffectMultibandCompressorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Hash() { return 1083484507U; }
class UScriptStruct* FDynamicsBandSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FDynamicsBandSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicsBandSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("DynamicsBandSettings"), sizeof(FDynamicsBandSettings), Get_Z_Construct_UScriptStruct_FDynamicsBandSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FDynamicsBandSettings>()
{
	return FDynamicsBandSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicsBandSettings(FDynamicsBandSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("DynamicsBandSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFDynamicsBandSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFDynamicsBandSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicsBandSettings")),new UScriptStruct::TCppStructOps<FDynamicsBandSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFDynamicsBandSettings;
	struct Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossoverTopFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossoverTopFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicsBandSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Frequency of the crossover between this band and the next. The last band will have this property ignored\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "Frequency of the crossover between this band and the next. The last band will have this property ignored" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency = { "CrossoverTopFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, CrossoverTopFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The amount of time to ramp into any dynamics processing effect in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect in milliseconds." },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The amount of time to release the dynamics processing effect in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect in milliseconds" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-72.0" },
		{ "Comment", "// The threshold at which to perform a dynamics processing operation\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-72.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The dynamics processor ratio -- has different meaning depending on the processor type.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The dynamics processor ratio -- has different meaning depending on the processor type." },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The knee bandwidth of the compressor to use in dB\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The knee bandwidth of the compressor to use in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "// The input gain of the dynamics processor in dB\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The input gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output gain of the dynamics processor in dB\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ToolTip", "The output gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicsBandSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_CrossoverTopFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_ThresholdDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_KneeBandwidthDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_InputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::NewProp_OutputGainDb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"DynamicsBandSettings",
		sizeof(FDynamicsBandSettings),
		alignof(FDynamicsBandSettings),
		Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicsBandSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicsBandSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicsBandSettings"), sizeof(FDynamicsBandSettings), Get_Z_Construct_UScriptStruct_FDynamicsBandSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicsBandSettings_Hash() { return 187720517U; }
	DEFINE_FUNCTION(USubmixEffectMultibandCompressorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectMultibandCompressorSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectMultibandCompressorPreset::StaticRegisterNativesUSubmixEffectMultibandCompressorPreset()
	{
		UClass* Class = USubmixEffectMultibandCompressorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectMultibandCompressorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics
	{
		struct SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms
		{
			FSubmixEffectMultibandCompressorSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SubmixEffectMultibandCompressorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_NoRegister()
	{
		return USubmixEffectMultibandCompressorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectMultibandCompressorPreset_SetSettings, "SetSettings" }, // 1099855839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectMultiBandCompressor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectMultibandCompressorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectMultibandCompressorPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::ClassParams = {
		&USubmixEffectMultibandCompressorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectMultibandCompressorPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectMultibandCompressorPreset, 2816024152);
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectMultibandCompressorPreset>()
	{
		return USubmixEffectMultibandCompressorPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectMultibandCompressorPreset(Z_Construct_UClass_USubmixEffectMultibandCompressorPreset, &USubmixEffectMultibandCompressorPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USubmixEffectMultibandCompressorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectMultibandCompressorPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
