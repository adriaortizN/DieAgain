// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectFilter() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFilterPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFilterPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* ESourceEffectFilterParam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterParam"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterParam>()
	{
		return ESourceEffectFilterParam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceEffectFilterParam(ESourceEffectFilterParam_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESourceEffectFilterParam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Hash() { return 7670787U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceEffectFilterParam"), 0, Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceEffectFilterParam::FilterFrequency", (int64)ESourceEffectFilterParam::FilterFrequency },
				{ "ESourceEffectFilterParam::FilterResonance", (int64)ESourceEffectFilterParam::FilterResonance },
				{ "ESourceEffectFilterParam::Count", (int64)ESourceEffectFilterParam::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESourceEffectFilterParam::Count" },
				{ "FilterFrequency.Name", "ESourceEffectFilterParam::FilterFrequency" },
				{ "FilterResonance.Name", "ESourceEffectFilterParam::FilterResonance" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESourceEffectFilterParam",
				"ESourceEffectFilterParam",
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
	static UEnum* ESourceEffectFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterType, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterType"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterType>()
	{
		return ESourceEffectFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceEffectFilterType(ESourceEffectFilterType_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESourceEffectFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Hash() { return 2888828399U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceEffectFilterType"), 0, Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceEffectFilterType::LowPass", (int64)ESourceEffectFilterType::LowPass },
				{ "ESourceEffectFilterType::HighPass", (int64)ESourceEffectFilterType::HighPass },
				{ "ESourceEffectFilterType::BandPass", (int64)ESourceEffectFilterType::BandPass },
				{ "ESourceEffectFilterType::BandStop", (int64)ESourceEffectFilterType::BandStop },
				{ "ESourceEffectFilterType::Count", (int64)ESourceEffectFilterType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BandPass.Name", "ESourceEffectFilterType::BandPass" },
				{ "BandStop.Name", "ESourceEffectFilterType::BandStop" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESourceEffectFilterType::Count" },
				{ "HighPass.Name", "ESourceEffectFilterType::HighPass" },
				{ "LowPass.Name", "ESourceEffectFilterType::LowPass" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESourceEffectFilterType",
				"ESourceEffectFilterType",
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
	static UEnum* ESourceEffectFilterCircuit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit, Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectFilterCircuit"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterCircuit>()
	{
		return ESourceEffectFilterCircuit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceEffectFilterCircuit(ESourceEffectFilterCircuit_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ESourceEffectFilterCircuit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Hash() { return 2856931722U; }
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceEffectFilterCircuit"), 0, Get_Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceEffectFilterCircuit::OnePole", (int64)ESourceEffectFilterCircuit::OnePole },
				{ "ESourceEffectFilterCircuit::StateVariable", (int64)ESourceEffectFilterCircuit::StateVariable },
				{ "ESourceEffectFilterCircuit::Ladder", (int64)ESourceEffectFilterCircuit::Ladder },
				{ "ESourceEffectFilterCircuit::Count", (int64)ESourceEffectFilterCircuit::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ESourceEffectFilterCircuit::Count" },
				{ "Ladder.Name", "ESourceEffectFilterCircuit::Ladder" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
				{ "OnePole.Name", "ESourceEffectFilterCircuit::OnePole" },
				{ "StateVariable.Name", "ESourceEffectFilterCircuit::StateVariable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ESourceEffectFilterCircuit",
				"ESourceEffectFilterCircuit",
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
class UScriptStruct* FSourceEffectFilterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFilterSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFilterSettings"), sizeof(FSourceEffectFilterSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFilterSettings>()
{
	return FSourceEffectFilterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectFilterSettings(FSourceEffectFilterSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectFilterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectFilterSettings")),new UScriptStruct::TCppStructOps<FSourceEffectFilterSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterCircuit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterCircuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterCircuit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutoffFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CutoffFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioBusModulation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioBusModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioBusModulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFilterSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// The type of filter circuit to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The type of filter circuit to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit = { "FilterCircuit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterCircuit), Z_Construct_UEnum_Synthesis_ESourceEffectFilterCircuit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// The type of filter to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The type of filter to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterType), Z_Construct_UEnum_Synthesis_ESourceEffectFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The filter cutoff frequency" },
		{ "UIMax", "12000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency = { "CutoffFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, CutoffFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The filter resonance.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The filter resonance." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_Inner = { "AudioBusModulation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "// Audio bus settings to use to modulate the filter frequency cutoff (auto-wah) with arbitrary audio from an audio bus\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Audio bus settings to use to modulate the filter frequency cutoff (auto-wah) with arbitrary audio from an audio bus" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation = { "AudioBusModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterSettings, AudioBusModulation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterCircuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_CutoffFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_FilterQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::NewProp_AudioBusModulation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectFilterSettings",
		sizeof(FSourceEffectFilterSettings),
		alignof(FSourceEffectFilterSettings),
		Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectFilterSettings"), sizeof(FSourceEffectFilterSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Hash() { return 804654625U; }
class UScriptStruct* FSourceEffectFilterAudioBusModulationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFilterAudioBusModulationSettings"), sizeof(FSourceEffectFilterAudioBusModulationSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFilterAudioBusModulationSettings>()
{
	return FSourceEffectFilterAudioBusModulationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings(FSourceEffectFilterAudioBusModulationSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectFilterAudioBusModulationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterAudioBusModulationSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterAudioBusModulationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectFilterAudioBusModulationSettings")),new UScriptStruct::TCppStructOps<FSourceEffectFilterAudioBusModulationSettings>);
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectFilterAudioBusModulationSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeGainMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvelopeGainMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterParam_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FilterParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFrequencyModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFrequencyModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrequencyModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFrequencyModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinResonanceModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinResonanceModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResonanceModulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxResonanceModulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFilterAudioBusModulationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus_MetaData[] = {
		{ "Category", "SourceEffect|Preset|AudioBus" },
		{ "Comment", "// Audio bus to use to modulate the filter\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Audio bus to use to modulate the filter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amplitude envelope follower attack time (in milliseconds) on the audio bus.\n" },
		{ "DisplayName", "Attack Time (ms)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The amplitude envelope follower attack time (in milliseconds) on the audio bus." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec = { "EnvelopeFollowerAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerAttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amplitude envelope follower release time (in milliseconds) on the audio bus.\n" },
		{ "DisplayName", "Release Time (ms)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The amplitude envelope follower release time (in milliseconds) on the audio bus." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec = { "EnvelopeFollowerReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier_MetaData[] = {
		{ "Category", "SourceEffect|Modulation Envelope" },
		{ "ClampMin", "0" },
		{ "Comment", "// An amount to scale the envelope follower output to map to the modulation values.  \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "An amount to scale the envelope follower output to map to the modulation values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier = { "EnvelopeGainMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, EnvelopeGainMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// Which parameter to modulate.\n" },
		{ "InlineCategoryProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "Which parameter to modulate." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam = { "FilterParam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, FilterParam), Z_Construct_UEnum_Synthesis_ESourceEffectFilterParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// The frequency modulation value (in semitones from the filter frequency) to use when the envelope is quietest\n" },
		{ "DisplayName", "Min Frequency Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterFrequency" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The frequency modulation value (in semitones from the filter frequency) to use when the envelope is quietest" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation = { "MinFrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MinFrequencyModulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "Comment", "// The frequency modulation value (in semitones from the filter frequency) to use when the envelope is loudest\n" },
		{ "DisplayName", "Max Frequency Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterFrequency" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The frequency modulation value (in semitones from the filter frequency) to use when the envelope is loudest" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation = { "MaxFrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MaxFrequencyModulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The resonance modulation value to use when the envelope is quietest\n" },
		{ "DisplayName", "Min Resonance Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterResonance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The resonance modulation value to use when the envelope is quietest" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation = { "MinResonanceModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MinResonanceModulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation_MetaData[] = {
		{ "Category", "SourceEffect|Filter Modulation Params" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The resonance modulation value to use when the envelope is loudest\n" },
		{ "DisplayName", "Max Resonance Modulation Amount" },
		{ "EditCondition", "FilterParam == ESourceEffectFilterParam::FilterResonance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
		{ "ToolTip", "The resonance modulation value to use when the envelope is loudest" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation = { "MaxResonanceModulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectFilterAudioBusModulationSettings, MaxResonanceModulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_AudioBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerAttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeFollowerReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_EnvelopeGainMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_FilterParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinFrequencyModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxFrequencyModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MinResonanceModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::NewProp_MaxResonanceModulation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectFilterAudioBusModulationSettings",
		sizeof(FSourceEffectFilterAudioBusModulationSettings),
		alignof(FSourceEffectFilterAudioBusModulationSettings),
		Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectFilterAudioBusModulationSettings"), sizeof(FSourceEffectFilterAudioBusModulationSettings), Get_Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Hash() { return 1750551137U; }
	DEFINE_FUNCTION(USourceEffectFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectFilterPreset::StaticRegisterNativesUSourceEffectFilterPreset()
	{
		UClass* Class = USourceEffectFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics
	{
		struct SourceEffectFilterPreset_eventSetSettings_Parms
		{
			FSourceEffectFilterSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectFilterPreset_NoRegister()
	{
		return USourceEffectFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectFilterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectFilterPreset_SetSettings, "SetSettings" }, // 2838536989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "SourceEffect" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectFilter.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectFilterPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectFilterSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectFilterPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectFilterPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectFilterPreset_Statics::ClassParams = {
		&USourceEffectFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectFilterPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectFilterPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectFilterPreset, 440921812);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectFilterPreset>()
	{
		return USourceEffectFilterPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectFilterPreset(Z_Construct_UClass_USourceEffectFilterPreset, &USourceEffectFilterPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectFilterPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectFilterPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
