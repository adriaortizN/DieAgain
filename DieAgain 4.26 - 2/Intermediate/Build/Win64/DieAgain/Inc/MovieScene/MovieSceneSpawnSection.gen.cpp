// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Sections/MovieSceneSpawnSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
// End Cross Module References
	void UMovieSceneSpawnSection::StaticRegisterNativesUMovieSceneSpawnSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister()
	{
		return UMovieSceneSpawnSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSpawnSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSpawnSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBoolSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A spawn section.\n */" },
		{ "IncludePath", "Sections/MovieSceneSpawnSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSpawnSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A spawn section." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSpawnSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSpawnSection, IMovieSceneEntityProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSpawnSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnSection_Statics::ClassParams = {
		&UMovieSceneSpawnSection::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSpawnSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSpawnSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSpawnSection, 3091385623);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnSection>()
	{
		return UMovieSceneSpawnSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSpawnSection(Z_Construct_UClass_UMovieSceneSpawnSection, &UMovieSceneSpawnSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSpawnSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
