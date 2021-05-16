// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AudioBus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioBus() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAudioBusChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioBusChannels, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioBusChannels"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioBusChannels>()
	{
		return EAudioBusChannels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioBusChannels(EAudioBusChannels_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioBusChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioBusChannels_Hash() { return 4071944921U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioBusChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioBusChannels"), 0, Get_Z_Construct_UEnum_Engine_EAudioBusChannels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioBusChannels::Mono", (int64)EAudioBusChannels::Mono },
				{ "EAudioBusChannels::Stereo", (int64)EAudioBusChannels::Stereo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The number of channels to mix audio into the source bus\n" },
				{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
				{ "Mono.Name", "EAudioBusChannels::Mono" },
				{ "Stereo.Name", "EAudioBusChannels::Stereo" },
				{ "ToolTip", "The number of channels to mix audio into the source bus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioBusChannels",
				"EAudioBusChannels",
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
	void UAudioBus::StaticRegisterNativesUAudioBus()
	{
	}
	UClass* Z_Construct_UClass_UAudioBus_NoRegister()
	{
		return UAudioBus::StaticClass();
	}
	struct Z_Construct_UClass_UAudioBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioBusChannels_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioBusChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioBusChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutomatic_MetaData[];
#endif
		static void NewProp_bIsAutomatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutomatic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// An audio bus is an object which represents an audio patch chord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\n// Instances of the audio bus are created in the audio engine. \n" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Sound Info ImportSettings" },
		{ "IncludePath", "Sound/AudioBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "ToolTip", "An audio bus is an object which represents an audio patch chord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\nInstances of the audio bus are created in the audio engine." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** How many channels to use for the source bus. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "ToolTip", "How many channels to use for the source bus." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels = { "AudioBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioBus, AudioBusChannels), Z_Construct_UEnum_Engine_EAudioBusChannels, METADATA_PARAMS(Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** If the audio bus can be instantiated and destroyed automatically when sources send audio to it. If this audio bus is manually started, it will override this value to be false, meaning you will need to stop the audio bus manually.*/" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "ToolTip", "If the audio bus can be instantiated and destroyed automatically when sources send audio to it. If this audio bus is manually started, it will override this value to be false, meaning you will need to stop the audio bus manually." },
	};
#endif
	void Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic_SetBit(void* Obj)
	{
		((UAudioBus*)Obj)->bIsAutomatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic = { "bIsAutomatic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAudioBus), &Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioBus_Statics::NewProp_bIsAutomatic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioBus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioBus_Statics::ClassParams = {
		&UAudioBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioBus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioBus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioBus, 2367678100);
	template<> ENGINE_API UClass* StaticClass<UAudioBus>()
	{
		return UAudioBus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioBus(Z_Construct_UClass_UAudioBus, &UAudioBus::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
