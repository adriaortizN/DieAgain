// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundConcurrency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundConcurrency() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EConcurrencyVolumeScaleMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode, Z_Construct_UPackage__Script_Engine(), TEXT("EConcurrencyVolumeScaleMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EConcurrencyVolumeScaleMode>()
	{
		return EConcurrencyVolumeScaleMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConcurrencyVolumeScaleMode(EConcurrencyVolumeScaleMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EConcurrencyVolumeScaleMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Hash() { return 2069776225U; }
	UEnum* Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConcurrencyVolumeScaleMode"), 0, Get_Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConcurrencyVolumeScaleMode::Default", (int64)EConcurrencyVolumeScaleMode::Default },
				{ "EConcurrencyVolumeScaleMode::Distance", (int64)EConcurrencyVolumeScaleMode::Distance },
				{ "EConcurrencyVolumeScaleMode::Priority", (int64)EConcurrencyVolumeScaleMode::Priority },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Comment", "/* Scales volume of older sounds more than newer sounds (default) */" },
				{ "Default.Name", "EConcurrencyVolumeScaleMode::Default" },
				{ "Default.ToolTip", "Scales volume of older sounds more than newer sounds (default)" },
				{ "Distance.Comment", "/* Scales distant sounds by volume scalar more than closer sounds */" },
				{ "Distance.Name", "EConcurrencyVolumeScaleMode::Distance" },
				{ "Distance.ToolTip", "Scales distant sounds by volume scalar more than closer sounds" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "Priority.Comment", "/* Scales lower priority sounds by volume scalar more than closer sounds */" },
				{ "Priority.Name", "EConcurrencyVolumeScaleMode::Priority" },
				{ "Priority.ToolTip", "Scales lower priority sounds by volume scalar more than closer sounds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EConcurrencyVolumeScaleMode",
				"EConcurrencyVolumeScaleMode",
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
	static UEnum* EMaxConcurrentResolutionRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, Z_Construct_UPackage__Script_Engine(), TEXT("EMaxConcurrentResolutionRule"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaxConcurrentResolutionRule::Type>()
	{
		return EMaxConcurrentResolutionRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaxConcurrentResolutionRule(EMaxConcurrentResolutionRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaxConcurrentResolutionRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Hash() { return 4179272534U; }
	UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaxConcurrentResolutionRule"), 0, Get_Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaxConcurrentResolutionRule::PreventNew", (int64)EMaxConcurrentResolutionRule::PreventNew },
				{ "EMaxConcurrentResolutionRule::StopOldest", (int64)EMaxConcurrentResolutionRule::StopOldest },
				{ "EMaxConcurrentResolutionRule::StopFarthestThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopFarthestThenPreventNew },
				{ "EMaxConcurrentResolutionRule::StopFarthestThenOldest", (int64)EMaxConcurrentResolutionRule::StopFarthestThenOldest },
				{ "EMaxConcurrentResolutionRule::StopLowestPriority", (int64)EMaxConcurrentResolutionRule::StopLowestPriority },
				{ "EMaxConcurrentResolutionRule::StopQuietest", (int64)EMaxConcurrentResolutionRule::StopQuietest },
				{ "EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew },
				{ "EMaxConcurrentResolutionRule::Count", (int64)EMaxConcurrentResolutionRule::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Hidden", "" },
				{ "Count.Name", "EMaxConcurrentResolutionRule::Count" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "PreventNew.Comment", "/** When Max Concurrent sounds are active do not start a new sound. */" },
				{ "PreventNew.Name", "EMaxConcurrentResolutionRule::PreventNew" },
				{ "PreventNew.ToolTip", "When Max Concurrent sounds are active do not start a new sound." },
				{ "StopFarthestThenOldest.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest. */" },
				{ "StopFarthestThenOldest.Name", "EMaxConcurrentResolutionRule::StopFarthestThenOldest" },
				{ "StopFarthestThenOldest.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest." },
				{ "StopFarthestThenPreventNew.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound. */" },
				{ "StopFarthestThenPreventNew.Name", "EMaxConcurrentResolutionRule::StopFarthestThenPreventNew" },
				{ "StopFarthestThenPreventNew.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound." },
				{ "StopLowestPriority.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group. */" },
				{ "StopLowestPriority.Name", "EMaxConcurrentResolutionRule::StopLowestPriority" },
				{ "StopLowestPriority.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group." },
				{ "StopLowestPriorityThenPreventNew.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound. */" },
				{ "StopLowestPriorityThenPreventNew.Name", "EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew" },
				{ "StopLowestPriorityThenPreventNew.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound." },
				{ "StopOldest.Comment", "/** When Max Concurrent sounds are active stop the oldest and start a new one. */" },
				{ "StopOldest.Name", "EMaxConcurrentResolutionRule::StopOldest" },
				{ "StopOldest.ToolTip", "When Max Concurrent sounds are active stop the oldest and start a new one." },
				{ "StopQuietest.Comment", "/** Stop the sound that is quietest in the group. */" },
				{ "StopQuietest.Name", "EMaxConcurrentResolutionRule::StopQuietest" },
				{ "StopQuietest.ToolTip", "Stop the sound that is quietest in the group." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaxConcurrentResolutionRule",
				"EMaxConcurrentResolutionRule::Type",
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
class UScriptStruct* FSoundConcurrencySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundConcurrencySettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundConcurrencySettings"), sizeof(FSoundConcurrencySettings), Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundConcurrencySettings>()
{
	return FSoundConcurrencySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundConcurrencySettings(FSoundConcurrencySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundConcurrencySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundConcurrencySettings")),new UScriptStruct::TCppStructOps<FSoundConcurrencySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings;
	struct Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitToOwner_MetaData[];
#endif
		static void NewProp_bLimitToOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitToOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResolutionRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetriggerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RetriggerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeScale;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VolumeScaleMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VolumeScaleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVolumeScaleCanRelease_MetaData[];
#endif
		static void NewProp_bVolumeScaleCanRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVolumeScaleCanRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceStealReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceStealReleaseTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundConcurrencySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of allowable concurrent active voices for voices playing in this concurrency group. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "The max number of allowable concurrent active voices for voices playing in this concurrency group." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/* Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit(void* Obj)
	{
		((FSoundConcurrencySettings*)Obj)->bLimitToOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner = { "bLimitToOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundConcurrencySettings), &Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** Which concurrency resolution policy to use if max voice count is reached. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Which concurrency resolution policy to use if max voice count is reached." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule = { "ResolutionRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, ResolutionRule), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime = { "RetriggerTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, RetriggerTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\n\x09 * and (optionally) revives them as they stop according to the provided attack/release times.\n\x09 *\n\x09 * AppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\nand (optionally) revives them as they stop according to the provided attack/release times.\n\nAppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale = { "VolumeScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/** Volume Scale mode designating how to scale voice volume based on number of member sounds active in group. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Volume Scale mode designating how to scale voice volume based on number of member sounds active in group." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode = { "VolumeScaleMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleMode), Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to apply duck using volume scalar.\n\x09 */" },
		{ "DisplayName", "Duck Time" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to apply duck using volume scalar." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime = { "VolumeScaleAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleAttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/**\n\x09 * Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only).\n\x09 */" },
		{ "DisplayName", "Can Recover" },
		{ "EditCondition", "VolumeScaleMode == EConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit(void* Obj)
	{
		((FSoundConcurrencySettings*)Obj)->bVolumeScaleCanRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease = { "bVolumeScaleCanRelease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundConcurrencySettings), &Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to recover volume scalar duck.\n\x09 */" },
		{ "DisplayName", "Recover Time" },
		{ "EditCondition", "bVolumeScaleCanRelease && VolumeScaleMode == EConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to recover volume scalar duck." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime = { "VolumeScaleReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScaleReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData[] = {
		{ "Category", "Voice Stealing" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to fade out if voice is evicted or culled due to another voice in the group starting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ToolTip", "Time taken to fade out if voice is evicted or culled due to another voice in the group starting." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime = { "VoiceStealReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundConcurrencySettings, VoiceStealReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_ResolutionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_RetriggerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundConcurrencySettings",
		sizeof(FSoundConcurrencySettings),
		alignof(FSoundConcurrencySettings),
		Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundConcurrencySettings"), sizeof(FSoundConcurrencySettings), Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_Hash() { return 4264880194U; }
	void USoundConcurrency::StaticRegisterNativesUSoundConcurrency()
	{
	}
	UClass* Z_Construct_UClass_USoundConcurrency_NoRegister()
	{
		return USoundConcurrency::StaticClass();
	}
	struct Z_Construct_UClass_USoundConcurrency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Concurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundConcurrency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundConcurrency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundConcurrency.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundConcurrency, Concurrency), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundConcurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundConcurrency_Statics::NewProp_Concurrency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundConcurrency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundConcurrency>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundConcurrency_Statics::ClassParams = {
		&USoundConcurrency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundConcurrency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundConcurrency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundConcurrency()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundConcurrency_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundConcurrency, 2488474824);
	template<> ENGINE_API UClass* StaticClass<USoundConcurrency>()
	{
		return USoundConcurrency::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundConcurrency(Z_Construct_UClass_USoundConcurrency, &USoundConcurrency::StaticClass, TEXT("/Script/Engine"), TEXT("USoundConcurrency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundConcurrency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
