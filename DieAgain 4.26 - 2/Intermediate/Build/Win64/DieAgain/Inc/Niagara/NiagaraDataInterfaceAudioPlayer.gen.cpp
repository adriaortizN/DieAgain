// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceAudioPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioPlayer() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceAudioPlayer::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister()
	{
		return UNiagaraDataInterfaceAudioPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Concurrency;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[];
#endif
		static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
		{ "DisplayName", "Audio Player" },
		{ "IncludePath", "NiagaraDataInterfaceAudioPlayer.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Reference to the audio asset to play */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Reference to the audio asset to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound attenuation setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound attenuation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound concurrency setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound concurrency setting to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bLimitPlaysPerTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n\x09 *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n\x09 *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, MaxPlaysPerTick), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceAudioPlayer, 1000016148);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioPlayer>()
	{
		return UNiagaraDataInterfaceAudioPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceAudioPlayer(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer, &UNiagaraDataInterfaceAudioPlayer::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceAudioPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
