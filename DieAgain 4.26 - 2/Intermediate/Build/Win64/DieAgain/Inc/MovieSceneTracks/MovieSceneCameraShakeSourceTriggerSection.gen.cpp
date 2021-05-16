// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel();
// End Cross Module References
	void UMovieSceneCameraShakeSourceTriggerSection::StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister()
	{
		return UMovieSceneCameraShakeSourceTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSourceTriggerSection, Channel), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSourceTriggerSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::ClassParams = {
		&UMovieSceneCameraShakeSourceTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraShakeSourceTriggerSection, 3880030478);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSourceTriggerSection>()
	{
		return UMovieSceneCameraShakeSourceTriggerSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraShakeSourceTriggerSection(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection, &UMovieSceneCameraShakeSourceTriggerSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraShakeSourceTriggerSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSourceTriggerSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
