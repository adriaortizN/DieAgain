// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Compilation/IMovieSceneTrackTemplateProducer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTrackTemplateProducer() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneTrackTemplateProducer::StaticRegisterNativesUMovieSceneTrackTemplateProducer()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister()
	{
		return UMovieSceneTrackTemplateProducer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneTrackTemplateProducer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTrackTemplateProducer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams = {
		&UMovieSceneTrackTemplateProducer::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrackTemplateProducer, 3297239054);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackTemplateProducer>()
	{
		return UMovieSceneTrackTemplateProducer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrackTemplateProducer(Z_Construct_UClass_UMovieSceneTrackTemplateProducer, &UMovieSceneTrackTemplateProducer::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrackTemplateProducer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackTemplateProducer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
