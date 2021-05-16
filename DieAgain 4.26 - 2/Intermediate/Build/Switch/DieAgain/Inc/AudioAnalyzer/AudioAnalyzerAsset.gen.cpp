// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzer/Classes/AudioAnalyzerAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerAsset() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAsset_NoRegister();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References
	void UAudioAnalyzerAsset::StaticRegisterNativesUAudioAnalyzerAsset()
	{
	}
	UClass* Z_Construct_UClass_UAudioAnalyzerAsset_NoRegister()
	{
		return UAudioAnalyzerAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioAnalyzerAsset\n *\n * UAudioAnalyzerAsset provides the interface for controlling asset actions within the editor.\n */" },
		{ "IncludePath", "AudioAnalyzerAsset.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerAsset.h" },
		{ "ToolTip", "UAudioAnalyzerAsset\n\nUAudioAnalyzerAsset provides the interface for controlling asset actions within the editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerAsset_Statics::ClassParams = {
		&UAudioAnalyzerAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioAnalyzerAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioAnalyzerAsset, 2644888969);
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerAsset>()
	{
		return UAudioAnalyzerAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioAnalyzerAsset(Z_Construct_UClass_UAudioAnalyzerAsset, &UAudioAnalyzerAsset::StaticClass, TEXT("/Script/AudioAnalyzer"), TEXT("UAudioAnalyzerAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
