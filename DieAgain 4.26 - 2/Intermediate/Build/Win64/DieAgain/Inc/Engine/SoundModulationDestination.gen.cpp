// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundModulationDestination.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationDestination() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationRouting();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
// End Cross Module References
	static UEnum* EModulationRouting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModulationRouting, Z_Construct_UPackage__Script_Engine(), TEXT("EModulationRouting"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EModulationRouting>()
	{
		return EModulationRouting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModulationRouting(EModulationRouting_StaticEnum, TEXT("/Script/Engine"), TEXT("EModulationRouting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EModulationRouting_Hash() { return 2975175236U; }
	UEnum* Z_Construct_UEnum_Engine_EModulationRouting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModulationRouting"), 0, Get_Z_Construct_UEnum_Engine_EModulationRouting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModulationRouting::Disable", (int64)EModulationRouting::Disable },
				{ "EModulationRouting::Inherit", (int64)EModulationRouting::Inherit },
				{ "EModulationRouting::Override", (int64)EModulationRouting::Override },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disable.Comment", "/* Disables modulation routing */" },
				{ "Disable.Name", "EModulationRouting::Disable" },
				{ "Disable.ToolTip", "Disables modulation routing" },
				{ "Inherit.Comment", "/* Inherits modulation routing (AudioComponent inherits from Sound, Sound inherits from SoundClass) */" },
				{ "Inherit.Name", "EModulationRouting::Inherit" },
				{ "Inherit.ToolTip", "Inherits modulation routing (AudioComponent inherits from Sound, Sound inherits from SoundClass)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
				{ "Override.Comment", "/* Ignores inherited settings and uses modulation settings on this object */" },
				{ "Override.Name", "EModulationRouting::Override" },
				{ "Override.ToolTip", "Ignores inherited settings and uses modulation settings on this object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EModulationRouting",
				"EModulationRouting",
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

static_assert(std::is_polymorphic<FSoundModulationDefaultRoutingSettings>() == std::is_polymorphic<FSoundModulationDefaultSettings>(), "USTRUCT FSoundModulationDefaultRoutingSettings cannot be polymorphic unless super FSoundModulationDefaultSettings is polymorphic");

class UScriptStruct* FSoundModulationDefaultRoutingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDefaultRoutingSettings"), sizeof(FSoundModulationDefaultRoutingSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDefaultRoutingSettings>()
{
	return FSoundModulationDefaultRoutingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundModulationDefaultRoutingSettings(FSoundModulationDefaultRoutingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundModulationDefaultRoutingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultRoutingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultRoutingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundModulationDefaultRoutingSettings")),new UScriptStruct::TCppStructOps<FSoundModulationDefaultRoutingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultRoutingSettings;
	struct Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeRouting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeRouting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VolumeRouting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PitchRouting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchRouting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PitchRouting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HighpassRouting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighpassRouting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HighpassRouting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LowpassRouting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowpassRouting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LowpassRouting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default parameter destination settings for source audio object. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Default parameter destination settings for source audio object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDefaultRoutingSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What volume modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What volume modulation settings to use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting = { "VolumeRouting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, VolumeRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What pitch modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What pitch modulation settings to use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting = { "PitchRouting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, PitchRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What high-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What high-pass modulation settings to use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting = { "HighpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, HighpassRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What low-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "What low-pass modulation settings to use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting = { "LowpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultRoutingSettings, LowpassRouting), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_VolumeRouting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_PitchRouting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_HighpassRouting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewProp_LowpassRouting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSoundModulationDefaultSettings,
		&NewStructOps,
		"SoundModulationDefaultRoutingSettings",
		sizeof(FSoundModulationDefaultRoutingSettings),
		alignof(FSoundModulationDefaultRoutingSettings),
		Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundModulationDefaultRoutingSettings"), sizeof(FSoundModulationDefaultRoutingSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Hash() { return 3583518146U; }
class UScriptStruct* FSoundModulationDefaultSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDefaultSettings"), sizeof(FSoundModulationDefaultSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDefaultSettings>()
{
	return FSoundModulationDefaultSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundModulationDefaultSettings(FSoundModulationDefaultSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundModulationDefaultSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundModulationDefaultSettings")),new UScriptStruct::TCppStructOps<FSoundModulationDefaultSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundModulationDefaultSettings;
	struct Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeModulationDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchModulationDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighpassModulationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighpassModulationDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowpassModulationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowpassModulationDestination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default parameter destination settings for source audio object. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Default parameter destination settings for source audio object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDefaultSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Volume modulation */" },
		{ "DisplayName", "Volume" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Volume modulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination = { "VolumeModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, VolumeModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination_MetaData[] = {
		{ "AudioParam", "Pitch" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Pitch modulation */" },
		{ "DisplayName", "Pitch" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Pitch modulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination = { "PitchModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, PitchModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination_MetaData[] = {
		{ "AudioParam", "HPFCutoffFrequency" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Highpass modulation */" },
		{ "DisplayName", "Highpass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Highpass modulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination = { "HighpassModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, HighpassModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination_MetaData[] = {
		{ "AudioParam", "LPFCutoffFrequency" },
		{ "Category", "Modulation" },
		{ "Comment", "/** Lowpass modulation */" },
		{ "DisplayName", "Lowpass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Lowpass modulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination = { "LowpassModulationDestination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDefaultSettings, LowpassModulationDestination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_VolumeModulationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_PitchModulationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_HighpassModulationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewProp_LowpassModulationDestination,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundModulationDefaultSettings",
		sizeof(FSoundModulationDefaultSettings),
		alignof(FSoundModulationDefaultSettings),
		Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundModulationDefaultSettings"), sizeof(FSoundModulationDefaultSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Hash() { return 1941738192U; }
class UScriptStruct* FSoundModulationDestinationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulationDestinationSettings"), sizeof(FSoundModulationDestinationSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulationDestinationSettings>()
{
	return FSoundModulationDestinationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundModulationDestinationSettings(FSoundModulationDestinationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundModulationDestinationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDestinationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundModulationDestinationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundModulationDestinationSettings")),new UScriptStruct::TCppStructOps<FSoundModulationDestinationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundModulationDestinationSettings;
	struct Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableModulation_MetaData[];
#endif
		static void NewProp_bEnableModulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableModulation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter destination settings allowing modulation control override for parameter destinations opting in to the Modulation System. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Parameter destination settings allowing modulation control override for parameter destinations opting in to the Modulation System." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationDestinationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Base value of parameter */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Base value of parameter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDestinationSettings, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Base value of parameter */" },
		{ "DisplayName", "Modulate" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Base value of parameter" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_SetBit(void* Obj)
	{
		((FSoundModulationDestinationSettings*)Obj)->bEnableModulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation = { "bEnableModulation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSoundModulationDestinationSettings), &Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation source, which provides value to mix with base value. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundModulationDestination.h" },
		{ "ToolTip", "Modulation source, which provides value to mix with base value." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulationDestinationSettings, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Value,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_bEnableModulation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewProp_Modulator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundModulationDestinationSettings",
		sizeof(FSoundModulationDestinationSettings),
		alignof(FSoundModulationDestinationSettings),
		Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundModulationDestinationSettings"), sizeof(FSoundModulationDestinationSettings), Get_Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Hash() { return 1389717953U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
