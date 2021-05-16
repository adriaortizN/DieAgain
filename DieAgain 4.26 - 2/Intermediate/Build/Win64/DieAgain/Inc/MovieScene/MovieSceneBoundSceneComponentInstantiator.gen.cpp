// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoundSceneComponentInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSceneComponentImpersonator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void UMovieSceneBoundSceneComponentInstantiator::StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister()
	{
		return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoundSceneComponentInstantiator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams = {
		&UMovieSceneBoundSceneComponentInstantiator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBoundSceneComponentInstantiator, 3033789756);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBoundSceneComponentInstantiator>()
	{
		return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBoundSceneComponentInstantiator(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator, &UMovieSceneBoundSceneComponentInstantiator::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBoundSceneComponentInstantiator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoundSceneComponentInstantiator);
	void UMovieSceneSceneComponentImpersonator::StaticRegisterNativesUMovieSceneSceneComponentImpersonator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_NoRegister()
	{
		return UMovieSceneSceneComponentImpersonator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSceneComponentImpersonator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::ClassParams = {
		&UMovieSceneSceneComponentImpersonator::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSceneComponentImpersonator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSceneComponentImpersonator, 2042868397);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSceneComponentImpersonator>()
	{
		return UMovieSceneSceneComponentImpersonator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSceneComponentImpersonator(Z_Construct_UClass_UMovieSceneSceneComponentImpersonator, &UMovieSceneSceneComponentImpersonator::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSceneComponentImpersonator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSceneComponentImpersonator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
