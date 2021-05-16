// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/WeightAndEasingEvaluatorSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightAndEasingEvaluatorSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
// End Cross Module References
	void UMovieSceneHierarchicalEasingInstantiatorSystem::StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister()
	{
		return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that creates hierarchical easing channels\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that creates hierarchical easing channels" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalEasingInstantiatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneHierarchicalEasingInstantiatorSystem, 2166518392);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalEasingInstantiatorSystem>()
	{
		return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem, &UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneHierarchicalEasingInstantiatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalEasingInstantiatorSystem);
	void UWeightAndEasingEvaluatorSystem::StaticRegisterNativesUWeightAndEasingEvaluatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister()
	{
		return UWeightAndEasingEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating ease in/out factors.\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating ease in/out factors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightAndEasingEvaluatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams = {
		&UWeightAndEasingEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeightAndEasingEvaluatorSystem, 576131877);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UWeightAndEasingEvaluatorSystem>()
	{
		return UWeightAndEasingEvaluatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeightAndEasingEvaluatorSystem(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem, &UWeightAndEasingEvaluatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UWeightAndEasingEvaluatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightAndEasingEvaluatorSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
