// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/AudioSynesthesiaNRT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRT() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT();
// End Cross Module References
	void UAudioSynesthesiaNRTSettings::StaticRegisterNativesUAudioSynesthesiaNRTSettings()
	{
	}
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister()
	{
		return UAudioSynesthesiaNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRTSettings\n *\n * Defines asset actions for derived UAudioSynthesiaNRTSettings subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRTSettings\n\nDefines asset actions for derived UAudioSynthesiaNRTSettings subclasses." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRTSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams = {
		&UAudioSynesthesiaNRTSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioSynesthesiaNRTSettings, 843853805);
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRTSettings>()
	{
		return UAudioSynesthesiaNRTSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioSynesthesiaNRTSettings(Z_Construct_UClass_UAudioSynesthesiaNRTSettings, &UAudioSynesthesiaNRTSettings::StaticClass, TEXT("/Script/AudioSynesthesia"), TEXT("UAudioSynesthesiaNRTSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRTSettings);
	void UAudioSynesthesiaNRT::StaticRegisterNativesUAudioSynesthesiaNRT()
	{
	}
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister()
	{
		return UAudioSynesthesiaNRT::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRT\n *\n * Defines asset actions for derived UAudioSynthesiaNRT subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRT\n\nDefines asset actions for derived UAudioSynthesiaNRT subclasses." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams = {
		&UAudioSynesthesiaNRT::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioSynesthesiaNRT, 342185869);
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRT>()
	{
		return UAudioSynesthesiaNRT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioSynesthesiaNRT(Z_Construct_UClass_UAudioSynesthesiaNRT, &UAudioSynesthesiaNRT::StaticClass, TEXT("/Script/AudioSynesthesia"), TEXT("UAudioSynesthesiaNRT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
