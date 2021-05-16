// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneHierarchicalBiasSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneHierarchicalBiasSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneHierarchicalBiasSystem::StaticRegisterNativesUMovieSceneHierarchicalBiasSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_NoRegister()
	{
		return UMovieSceneHierarchicalBiasSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneHierarchicalBiasSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneHierarchicalBiasSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalBiasSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::ClassParams = {
		&UMovieSceneHierarchicalBiasSystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneHierarchicalBiasSystem, 284720438);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalBiasSystem>()
	{
		return UMovieSceneHierarchicalBiasSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneHierarchicalBiasSystem(Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem, &UMovieSceneHierarchicalBiasSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneHierarchicalBiasSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalBiasSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
