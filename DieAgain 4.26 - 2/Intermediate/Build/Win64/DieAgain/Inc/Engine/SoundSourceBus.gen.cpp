// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSourceBus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBus() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
// End Cross Module References
	static UEnum* ESourceBusChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels, Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusChannels"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>()
	{
		return ESourceBusChannels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceBusChannels(ESourceBusChannels_StaticEnum, TEXT("/Script/Engine"), TEXT("ESourceBusChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESourceBusChannels_Hash() { return 2559719401U; }
	UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceBusChannels"), 0, Get_Z_Construct_UEnum_Engine_ESourceBusChannels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceBusChannels::Mono", (int64)ESourceBusChannels::Mono },
				{ "ESourceBusChannels::Stereo", (int64)ESourceBusChannels::Stereo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The number of channels to mix audio into the source bus\n" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
				{ "Mono.Name", "ESourceBusChannels::Mono" },
				{ "Stereo.Name", "ESourceBusChannels::Stereo" },
				{ "ToolTip", "The number of channels to mix audio into the source bus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESourceBusChannels",
				"ESourceBusChannels",
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
	void USoundSourceBus::StaticRegisterNativesUSoundSourceBus()
	{
	}
	UClass* Z_Construct_UClass_USoundSourceBus_NoRegister()
	{
		return USoundSourceBus::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceBusChannels_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceBusChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceBusDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivateWhenSilent_MetaData[];
#endif
		static void NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivateWhenSilent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// A source bus is a type of USoundBase and can be \"played\" like any sound.\n" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Analysis Format Loading Info ImportSettings Object Object" },
		{ "IncludePath", "Sound/SoundSourceBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "A source bus is a type of USoundBase and can be \"played\" like any sound." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels = { "SourceBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusChannels), Z_Construct_UEnum_Engine_ESourceBusChannels, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration = { "SourceBusDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusDuration), METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** Audio bus to use to use as audio for this source bus. This source bus will sonify the audio from the audio bus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Audio bus to use to use as audio for this source bus. This source bus will sonify the audio from the audio bus." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceBus, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData[] = {
		{ "Comment", "/** Stop the source bus when the volume goes to zero. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Stop the source bus when the volume goes to zero." },
	};
#endif
	void Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj)
	{
		((USoundSourceBus*)Obj)->bAutoDeactivateWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent = { "bAutoDeactivateWhenSilent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundSourceBus), &Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBus_Statics::ClassParams = {
		&USoundSourceBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSourceBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceBus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSourceBus, 1363182752);
	template<> ENGINE_API UClass* StaticClass<USoundSourceBus>()
	{
		return USoundSourceBus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSourceBus(Z_Construct_UClass_USoundSourceBus, &USoundSourceBus::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSourceBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
