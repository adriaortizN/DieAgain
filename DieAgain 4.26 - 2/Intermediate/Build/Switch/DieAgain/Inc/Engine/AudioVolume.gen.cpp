// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVolume() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioVolumeLocationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_AAudioVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
// End Cross Module References
	static UEnum* EAudioVolumeLocationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioVolumeLocationState, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioVolumeLocationState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioVolumeLocationState>()
	{
		return EAudioVolumeLocationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioVolumeLocationState(EAudioVolumeLocationState_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioVolumeLocationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Hash() { return 1297708184U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioVolumeLocationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioVolumeLocationState"), 0, Get_Z_Construct_UEnum_Engine_EAudioVolumeLocationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioVolumeLocationState::InsideTheVolume", (int64)EAudioVolumeLocationState::InsideTheVolume },
				{ "EAudioVolumeLocationState::OutsideTheVolume", (int64)EAudioVolumeLocationState::OutsideTheVolume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum describing the state of checking audio volume location\n" },
				{ "InsideTheVolume.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
				{ "InsideTheVolume.Name", "EAudioVolumeLocationState::InsideTheVolume" },
				{ "InsideTheVolume.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
				{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
				{ "OutsideTheVolume.Comment", "// A send based on a supplied curve\n" },
				{ "OutsideTheVolume.Name", "EAudioVolumeLocationState::OutsideTheVolume" },
				{ "OutsideTheVolume.ToolTip", "A send based on a supplied curve" },
				{ "ToolTip", "Enum describing the state of checking audio volume location" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioVolumeLocationState",
				"EAudioVolumeLocationState",
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
class UScriptStruct* FInteriorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteriorSettings, Z_Construct_UPackage__Script_Engine(), TEXT("InteriorSettings"), sizeof(FInteriorSettings), Get_Z_Construct_UScriptStruct_FInteriorSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInteriorSettings>()
{
	return FInteriorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteriorSettings(FInteriorSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("InteriorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInteriorSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFInteriorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteriorSettings")),new UScriptStruct::TCppStructOps<FInteriorSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInteriorSettings;
	struct Z_Construct_UScriptStruct_FInteriorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWorldSettings_MetaData[];
#endif
		static void NewProp_bIsWorldSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWorldSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for interior areas. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for interior areas." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteriorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData[] = {
		{ "Comment", "// Whether these interior settings are the default values for the world\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Whether these interior settings are the default values for the world" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit(void* Obj)
	{
		((FInteriorSettings*)Obj)->bIsWorldSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings = { "bIsWorldSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteriorSettings), &Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume = { "ExteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime = { "ExteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF = { "ExteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime = { "ExteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, ExteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume = { "InteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, InteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime = { "InteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, InteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF = { "InteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, InteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime = { "InteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteriorSettings, InteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InteriorSettings",
		sizeof(FInteriorSettings),
		alignof(FInteriorSettings),
		Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteriorSettings"), sizeof(FInteriorSettings), Get_Z_Construct_UScriptStruct_FInteriorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteriorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_Hash() { return 3936363803U; }
class UScriptStruct* FAudioVolumeSubmixOverrideSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, Z_Construct_UPackage__Script_Engine(), TEXT("AudioVolumeSubmixOverrideSettings"), sizeof(FAudioVolumeSubmixOverrideSettings), Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioVolumeSubmixOverrideSettings>()
{
	return FAudioVolumeSubmixOverrideSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioVolumeSubmixOverrideSettings(FAudioVolumeSubmixOverrideSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioVolumeSubmixOverrideSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixOverrideSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixOverrideSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioVolumeSubmixOverrideSettings")),new UScriptStruct::TCppStructOps<FAudioVolumeSubmixOverrideSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixOverrideSettings;
	struct Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossfadeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVolumeSubmixOverrideSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// The submix to override the effect chain of\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The submix to override the effect chain of" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// The submix effect chain to overrideac\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The submix effect chain to overrideac" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// The amount of time to crossfade to the override for the submix chain\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The amount of time to crossfade to the override for the submix chain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime = { "CrossfadeTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixOverrideSettings, CrossfadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_Submix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_SubmixEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::NewProp_CrossfadeTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioVolumeSubmixOverrideSettings",
		sizeof(FAudioVolumeSubmixOverrideSettings),
		alignof(FAudioVolumeSubmixOverrideSettings),
		Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioVolumeSubmixOverrideSettings"), sizeof(FAudioVolumeSubmixOverrideSettings), Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Hash() { return 78995646U; }
class UScriptStruct* FAudioVolumeSubmixSendSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, Z_Construct_UPackage__Script_Engine(), TEXT("AudioVolumeSubmixSendSettings"), sizeof(FAudioVolumeSubmixSendSettings), Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioVolumeSubmixSendSettings>()
{
	return FAudioVolumeSubmixSendSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioVolumeSubmixSendSettings(FAudioVolumeSubmixSendSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioVolumeSubmixSendSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixSendSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixSendSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioVolumeSubmixSendSettings")),new UScriptStruct::TCppStructOps<FAudioVolumeSubmixSendSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioVolumeSubmixSendSettings;
	struct Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ListenerLocationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerLocationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ListenerLocationState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceLocationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceLocationState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubmixSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixSends;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct to determine dynamic submix send data for use with audio volumes. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct to determine dynamic submix send data for use with audio volumes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVolumeSubmixSendSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// The state the listener needs to be in, relative to the audio volume, for this submix send list to be used for a given sound\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The state the listener needs to be in, relative to the audio volume, for this submix send list to be used for a given sound" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState = { "ListenerLocationState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, ListenerLocationState), Z_Construct_UEnum_Engine_EAudioVolumeLocationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState = { "SourceLocationState", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, SourceLocationState_DEPRECATED), Z_Construct_UEnum_Engine_EAudioVolumeLocationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_Inner = { "SubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_MetaData[] = {
		{ "Category", "AudioVolumeSubmixSends" },
		{ "Comment", "// Submix send array for sounds that are outside the audio volume when the listener is inside the volume\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix send array for sounds that are outside the audio volume when the listener is inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends = { "SubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolumeSubmixSendSettings, SubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_ListenerLocationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SourceLocationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::NewProp_SubmixSends,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioVolumeSubmixSendSettings",
		sizeof(FAudioVolumeSubmixSendSettings),
		alignof(FAudioVolumeSubmixSendSettings),
		Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioVolumeSubmixSendSettings"), sizeof(FAudioVolumeSubmixSendSettings), Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Hash() { return 2420413797U; }
	DEFINE_FUNCTION(AAudioVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetSubmixOverrideSettings)
	{
		P_GET_TARRAY_REF(FAudioVolumeSubmixOverrideSettings,Z_Param_Out_NewSubmixOverrideSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixOverrideSettings(Z_Param_Out_NewSubmixOverrideSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetSubmixSendSettings)
	{
		P_GET_TARRAY_REF(FAudioVolumeSubmixSendSettings,Z_Param_Out_NewSubmixSendSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSendSettings(Z_Param_Out_NewSubmixSendSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetInteriorSettings)
	{
		P_GET_STRUCT_REF(FInteriorSettings,Z_Param_Out_NewInteriorSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteriorSettings(Z_Param_Out_NewInteriorSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetReverbSettings)
	{
		P_GET_STRUCT_REF(FReverbSettings,Z_Param_Out_NewReverbSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	void AAudioVolume::StaticRegisterNativesAAudioVolume()
	{
		UClass* Class = AAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &AAudioVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAudioVolume::execSetEnabled },
			{ "SetInteriorSettings", &AAudioVolume::execSetInteriorSettings },
			{ "SetPriority", &AAudioVolume::execSetPriority },
			{ "SetReverbSettings", &AAudioVolume::execSetReverbSettings },
			{ "SetSubmixOverrideSettings", &AAudioVolume::execSetSubmixOverrideSettings },
			{ "SetSubmixSendSettings", &AAudioVolume::execSetSubmixSendSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics
	{
		struct AudioVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AudioVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics
	{
		struct AudioVolume_eventSetInteriorSettings_Parms
		{
			FInteriorSettings NewInteriorSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInteriorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInteriorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings = { "NewInteriorSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioVolume_eventSetInteriorSettings_Parms, NewInteriorSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetInteriorSettings", nullptr, nullptr, sizeof(AudioVolume_eventSetInteriorSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetInteriorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetPriority_Statics
	{
		struct AudioVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(AudioVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics
	{
		struct AudioVolume_eventSetReverbSettings_Parms
		{
			FReverbSettings NewReverbSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetReverbSettings", nullptr, nullptr, sizeof(AudioVolume_eventSetReverbSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetReverbSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics
	{
		struct AudioVolume_eventSetSubmixOverrideSettings_Parms
		{
			TArray<FAudioVolumeSubmixOverrideSettings> NewSubmixOverrideSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSubmixOverrideSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSubmixOverrideSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewSubmixOverrideSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioVolume_eventSetSubmixOverrideSettings_Parms, NewSubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetSubmixOverrideSettings", nullptr, nullptr, sizeof(AudioVolume_eventSetSubmixOverrideSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics
	{
		struct AudioVolume_eventSetSubmixSendSettings_Parms
		{
			TArray<FAudioVolumeSubmixSendSettings> NewSubmixSendSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSubmixSendSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSubmixSendSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewSubmixSendSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioVolume_eventSetSubmixSendSettings_Parms, NewSubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, nullptr, "SetSubmixSendSettings", nullptr, nullptr, sizeof(AudioVolume_eventSetSubmixSendSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAudioVolume_NoRegister()
	{
		return AAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientZoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientZoneSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubmixSendSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixSendSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixSendSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubmixOverrideSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixOverrideSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixOverrideSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1132442523
		{ &Z_Construct_UFunction_AAudioVolume_SetEnabled, "SetEnabled" }, // 2207097887
		{ &Z_Construct_UFunction_AAudioVolume_SetInteriorSettings, "SetInteriorSettings" }, // 1750439451
		{ &Z_Construct_UFunction_AAudioVolume_SetPriority, "SetPriority" }, // 2550661359
		{ &Z_Construct_UFunction_AAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 3935175086
		{ &Z_Construct_UFunction_AAudioVolume_SetSubmixOverrideSettings, "SetSubmixOverrideSettings" }, // 1810360696
		{ &Z_Construct_UFunction_AAudioVolume_SetSubmixSendSettings, "SetSubmixSendSettings" }, // 2178807373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Sound/AudioVolume.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * is chosen. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\nis chosen. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "Comment", "/** whether this volume is currently enabled and able to affect sounds */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "whether this volume is currently enabled and able to affect sounds" },
	};
#endif
	void Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAudioVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000035, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAudioVolume), &Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reverb" },
		{ "Comment", "/** Reverb settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Reverb settings to use for this volume." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioVolume, Settings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AmbientZone" },
		{ "Comment", "/** Interior settings used for this volume */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Interior settings used for this volume" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings = { "AmbientZoneSettings", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioVolume, AmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_Inner = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix send settings to use for this volume. Allows audio to dynamically send to submixes based on source and listener locations relative to this volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix send settings to use for this volume. Allows audio to dynamically send to submixes based on source and listener locations relative to this volume." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioVolume, SubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_Inner = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix effect chain override settings. Will override the effect chains on the given submixes when the conditions are met. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Submix effect chain override settings. Will override the effect chains on the given submixes when the conditions are met." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioVolume, SubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixSendSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_SubmixOverrideSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAudioVolume_Statics::ClassParams = {
		&AAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAudioVolume, 509048545);
	template<> ENGINE_API UClass* StaticClass<AAudioVolume>()
	{
		return AAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAudioVolume(Z_Construct_UClass_AAudioVolume, &AAudioVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AAudioVolume"), false, nullptr, nullptr, nullptr);

	void AAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAudioVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
