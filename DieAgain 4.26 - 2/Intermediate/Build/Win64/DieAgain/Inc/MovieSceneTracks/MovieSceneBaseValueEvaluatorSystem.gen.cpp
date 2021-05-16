// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneBaseValueEvaluatorSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseValueEvaluatorSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneBaseValueEvaluatorSystem::StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister()
	{
		return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating base values, for \"additive from base\" blending.\n */" },
		{ "IncludePath", "Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating base values, for \"additive from base\" blending." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBaseValueEvaluatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams = {
		&UMovieSceneBaseValueEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBaseValueEvaluatorSystem, 56104238);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBaseValueEvaluatorSystem>()
	{
		return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBaseValueEvaluatorSystem(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem, &UMovieSceneBaseValueEvaluatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneBaseValueEvaluatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBaseValueEvaluatorSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
