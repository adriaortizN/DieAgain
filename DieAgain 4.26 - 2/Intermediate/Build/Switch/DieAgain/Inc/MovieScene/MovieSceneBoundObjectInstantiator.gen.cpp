// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneBoundObjectInstantiator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoundObjectInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneGenericBoundObjectInstantiator::StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister()
	{
		return UMovieSceneGenericBoundObjectInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneBoundObjectInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundObjectInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGenericBoundObjectInstantiator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::ClassParams = {
		&UMovieSceneGenericBoundObjectInstantiator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneGenericBoundObjectInstantiator, 3407428638);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneGenericBoundObjectInstantiator>()
	{
		return UMovieSceneGenericBoundObjectInstantiator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneGenericBoundObjectInstantiator(Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator, &UMovieSceneGenericBoundObjectInstantiator::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneGenericBoundObjectInstantiator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGenericBoundObjectInstantiator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
