// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/MovieScene2DTransformPropertySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformPropertySystem() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieScene2DTransformPropertySystem::StaticRegisterNativesUMovieScene2DTransformPropertySystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister()
	{
		return UMovieScene2DTransformPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformPropertySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams = {
		&UMovieScene2DTransformPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene2DTransformPropertySystem, 2189026268);
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformPropertySystem>()
	{
		return UMovieScene2DTransformPropertySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene2DTransformPropertySystem(Z_Construct_UClass_UMovieScene2DTransformPropertySystem, &UMovieScene2DTransformPropertySystem::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieScene2DTransformPropertySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformPropertySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
