// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzer/Classes/AudioAnalyzerNRT.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerNRT() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAsset();
	UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void UAudioAnalyzerNRTSettings::StaticRegisterNativesUAudioAnalyzerNRTSettings()
	{
	}
	UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister()
	{
		return UAudioAnalyzerNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerNRTSettings\n *\n * UAudioAnalyzerNRTSettings provides a way to store and reuse existing analyzer settings\n * across multipler analyzers. This class provides the interface and functionality to \n * automatically trigger reanalysis of audio across all analyzers associated with this \n * settingwhen when a UPROPERTY in this setting object is edited.\n *\n */" },
		{ "IncludePath", "AudioAnalyzerNRT.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "UAudioAnalyzerNRTSettings\n\nUAudioAnalyzerNRTSettings provides a way to store and reuse existing analyzer settings\nacross multipler analyzers. This class provides the interface and functionality to\nautomatically trigger reanalysis of audio across all analyzers associated with this\nsettingwhen when a UPROPERTY in this setting object is edited." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerNRTSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::ClassParams = {
		&UAudioAnalyzerNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioAnalyzerNRTSettings, 2054296869);
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerNRTSettings>()
	{
		return UAudioAnalyzerNRTSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioAnalyzerNRTSettings(Z_Construct_UClass_UAudioAnalyzerNRTSettings, &UAudioAnalyzerNRTSettings::StaticClass, TEXT("/Script/AudioAnalyzer"), TEXT("UAudioAnalyzerNRTSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerNRTSettings);
#if WITH_EDITOR
	DEFINE_FUNCTION(UAudioAnalyzerNRT::execAnalyzeAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnalyzeAudio();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAudioAnalyzerNRT::StaticRegisterNativesUAudioAnalyzerNRT()
	{
#if WITH_EDITOR
		UClass* Class = UAudioAnalyzerNRT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeAudio", &UAudioAnalyzerNRT::execAnalyzeAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Performs the analaysis of the audio */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "Performs the analaysis of the audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerNRT, nullptr, "AnalyzeAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister()
	{
		return UAudioAnalyzerNRT::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioAnalyzerNRT_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio, "AnalyzeAudio" }, // 3923810431
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerNRT\n *\n * UAudioAnalyzerNRT applies an analyzer to a sound using specific settings, stores the \n * results and exposes them via blueprints. \n *\n * Subclasses of UAudioAnalyzerNRT must implement GetAnalyzerNRTFactoryName() to associate\n * the UAudioAnalyzerNRT with an IAudioAnalyzerNRTFactory implementation. \n *\n * To support blueprint access, subclasses can implement UFUNCTIONs to expose the data\n * returned by GetResult().\n */" },
		{ "IncludePath", "AudioAnalyzerNRT.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "UAudioAnalyzerNRT\n\nUAudioAnalyzerNRT applies an analyzer to a sound using specific settings, stores the\nresults and exposes them via blueprints.\n\nSubclasses of UAudioAnalyzerNRT must implement GetAnalyzerNRTFactoryName() to associate\nthe UAudioAnalyzerNRT with an IAudioAnalyzerNRTFactory implementation.\n\nTo support blueprint access, subclasses can implement UFUNCTIONs to expose the data\nreturned by GetResult()." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/**\n\x09\x09 * The USoundWave which is analyzed.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "The USoundWave which is analyzed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioAnalyzerNRT, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The duration of the analyzed audio in seconds. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "The duration of the analyzed audio in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds = { "DurationInSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioAnalyzerNRT, DurationInSeconds), METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerNRT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::ClassParams = {
		&UAudioAnalyzerNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerNRT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioAnalyzerNRT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioAnalyzerNRT, 3654808503);
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerNRT>()
	{
		return UAudioAnalyzerNRT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioAnalyzerNRT(Z_Construct_UClass_UAudioAnalyzerNRT, &UAudioAnalyzerNRT::StaticClass, TEXT("/Script/AudioAnalyzer"), TEXT("UAudioAnalyzerNRT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerNRT);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioAnalyzerNRT)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
