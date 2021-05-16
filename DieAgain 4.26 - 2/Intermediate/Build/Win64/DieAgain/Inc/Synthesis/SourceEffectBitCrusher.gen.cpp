// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectBitCrusher.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectBitCrusher() {}
// Cross Module References
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSourceEffectBitCrusherSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectBitCrusherSettings"), sizeof(FSourceEffectBitCrusherSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectBitCrusherSettings>()
{
	return FSourceEffectBitCrusherSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectBitCrusherSettings(FSourceEffectBitCrusherSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectBitCrusherSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectBitCrusherSettings")),new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrushedSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrushedSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRateModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleRateModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrushedBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrushedBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BitModulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "PropertyDeprecated", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate = { "CrushedSampleRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedSampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation_MetaData[] = {
		{ "AudioParam", "SampleRate" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "96000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The reduced frequency to use for the audio stream. \n" },
		{ "DisplayName", "Sample Rate" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced frequency to use for the audio stream." },
		{ "UIMax", "16000.0" },
		{ "UIMin", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation = { "SampleRateModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, SampleRateModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "PropertyDeprecated", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits = { "CrushedBits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, CrushedBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation_MetaData[] = {
		{ "AudioParam", "BitDepth" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced bit depth to use for the audio stream\n" },
		{ "DisplayName", "Bit Depth" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced bit depth to use for the audio stream" },
		{ "UIMax", "16.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation = { "BitModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherSettings, BitModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_SampleRateModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_CrushedBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::NewProp_BitModulation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectBitCrusherSettings",
		sizeof(FSourceEffectBitCrusherSettings),
		alignof(FSourceEffectBitCrusherSettings),
		Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectBitCrusherSettings"), sizeof(FSourceEffectBitCrusherSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Hash() { return 1402337559U; }
class UScriptStruct* FSourceEffectBitCrusherBaseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectBitCrusherBaseSettings"), sizeof(FSourceEffectBitCrusherBaseSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectBitCrusherBaseSettings>()
{
	return FSourceEffectBitCrusherBaseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectBitCrusherBaseSettings(FSourceEffectBitCrusherBaseSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectBitCrusherBaseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherBaseSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherBaseSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectBitCrusherBaseSettings")),new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherBaseSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectBitCrusherBaseSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BitDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectBitCrusherBaseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "96000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The reduced frequency to use for the audio stream. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced frequency to use for the audio stream." },
		{ "UIMax", "16000.0" },
		{ "UIMin", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherBaseSettings, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The reduced bit depth to use for the audio stream\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "The reduced bit depth to use for the audio stream" },
		{ "UIMax", "16.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectBitCrusherBaseSettings, BitDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::NewProp_BitDepth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectBitCrusherBaseSettings",
		sizeof(FSourceEffectBitCrusherBaseSettings),
		alignof(FSourceEffectBitCrusherBaseSettings),
		Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectBitCrusherBaseSettings"), sizeof(FSourceEffectBitCrusherBaseSettings), Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Hash() { return 2946894921U; }
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetModulationSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectBitCrusherSettings,Z_Param_Out_ModulationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationSettings(Z_Param_Out_ModulationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectBitCrusherBaseSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSampleRateModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSampleRateModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetSampleRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSampleRate(Z_Param_SampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetBitModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBitModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectBitCrusherPreset::execSetBits)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Bits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBits(Z_Param_Bits);
		P_NATIVE_END;
	}
	void USourceEffectBitCrusherPreset::StaticRegisterNativesUSourceEffectBitCrusherPreset()
	{
		UClass* Class = USourceEffectBitCrusherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBitModulator", &USourceEffectBitCrusherPreset::execSetBitModulator },
			{ "SetBits", &USourceEffectBitCrusherPreset::execSetBits },
			{ "SetModulationSettings", &USourceEffectBitCrusherPreset::execSetModulationSettings },
			{ "SetSampleRate", &USourceEffectBitCrusherPreset::execSetSampleRate },
			{ "SetSampleRateModulator", &USourceEffectBitCrusherPreset::execSetSampleRateModulator },
			{ "SetSettings", &USourceEffectBitCrusherPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetBitModulator_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetBitModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetBitModulator", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetBitModulator_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetBits_Parms
		{
			float Bits;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetBits_Parms, Bits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::NewProp_Bits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetBits", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetBits_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms
		{
			FSourceEffectBitCrusherSettings ModulationSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms, ModulationSettings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::NewProp_ModulationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetModulationSettings", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetModulationSettings_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetSampleRate_Parms
		{
			float SampleRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSampleRate_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::NewProp_SampleRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSampleRate", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetSampleRate_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSampleRateModulator", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetSampleRateModulator_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics
	{
		struct SourceEffectBitCrusherPreset_eventSetSettings_Parms
		{
			FSourceEffectBitCrusherBaseSettings Settings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectBitCrusherPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|BitCrusher" },
		{ "Comment", "// Sets just base (i.e. carrier) setting values without modifying modulation source references\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
		{ "ToolTip", "Sets just base (i.e. carrier) setting values without modifying modulation source references" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectBitCrusherPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectBitCrusherPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset_NoRegister()
	{
		return USourceEffectBitCrusherPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBitModulator, "SetBitModulator" }, // 1950069073
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetBits, "SetBits" }, // 4041308984
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetModulationSettings, "SetModulationSettings" }, // 3312984837
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRate, "SetSampleRate" }, // 2079788664
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSampleRateModulator, "SetSampleRateModulator" }, // 458664348
		{ &Z_Construct_UFunction_USourceEffectBitCrusherPreset_SetSettings, "SetSettings" }, // 2915118242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectBitCrusher.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectBitCrusher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectBitCrusherPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectBitCrusherPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams = {
		&USourceEffectBitCrusherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectBitCrusherPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectBitCrusherPreset, 2555191995);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectBitCrusherPreset>()
	{
		return USourceEffectBitCrusherPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectBitCrusherPreset(Z_Construct_UClass_USourceEffectBitCrusherPreset, &USourceEffectBitCrusherPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectBitCrusherPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectBitCrusherPreset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USourceEffectBitCrusherPreset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
