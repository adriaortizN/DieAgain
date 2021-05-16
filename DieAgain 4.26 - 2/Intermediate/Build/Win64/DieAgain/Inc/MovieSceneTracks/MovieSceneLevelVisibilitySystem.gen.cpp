// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Systems/MovieSceneLevelVisibilitySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
// End Cross Module References
	void UMovieSceneLevelVisibilitySystem::StaticRegisterNativesUMovieSceneLevelVisibilitySystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister()
	{
		return UMovieSceneLevelVisibilitySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLevelVisibilitySystem, IMovieScenePreAnimatedStateSystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams = {
		&UMovieSceneLevelVisibilitySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLevelVisibilitySystem, 2842407380);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneLevelVisibilitySystem>()
	{
		return UMovieSceneLevelVisibilitySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLevelVisibilitySystem(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem, &UMovieSceneLevelVisibilitySystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneLevelVisibilitySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
