// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneQuaternionInterpolationRotationSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneQuaternionInterpolationRotationSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneQuaternionInterpolationRotationSystem::StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister()
	{
		return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneQuaternionInterpolationRotationSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams = {
		&UMovieSceneQuaternionInterpolationRotationSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneQuaternionInterpolationRotationSystem, 3450151307);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneQuaternionInterpolationRotationSystem>()
	{
		return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneQuaternionInterpolationRotationSystem(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem, &UMovieSceneQuaternionInterpolationRotationSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneQuaternionInterpolationRotationSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneQuaternionInterpolationRotationSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
