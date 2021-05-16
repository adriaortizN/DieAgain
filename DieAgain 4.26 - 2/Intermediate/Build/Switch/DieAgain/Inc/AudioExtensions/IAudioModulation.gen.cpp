// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioExtensions/Public/IAudioModulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioModulation() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USoundModulatorBase::StaticRegisterNativesUSoundModulatorBase()
	{
	}
	UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister()
	{
		return USoundModulatorBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all modulators\n */" },
		{ "IncludePath", "IAudioModulation.h" },
		{ "ModuleRelativePath", "Public/IAudioModulation.h" },
		{ "ToolTip", "Base class for all modulators" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundModulatorBase_Statics::ClassParams = {
		&USoundModulatorBase::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundModulatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundModulatorBase, 2876388642);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundModulatorBase>()
	{
		return USoundModulatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundModulatorBase(Z_Construct_UClass_USoundModulatorBase, &USoundModulatorBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("USoundModulatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulatorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
