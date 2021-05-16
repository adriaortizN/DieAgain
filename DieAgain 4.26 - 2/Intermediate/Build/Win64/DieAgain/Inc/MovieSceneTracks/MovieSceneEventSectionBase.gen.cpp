// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneEventSectionBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSectionBase() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEventSectionBase::StaticRegisterNativesUMovieSceneEventSectionBase()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister()
	{
		return UMovieSceneEventSectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all event sections. Manages dirtying the section and track on recompilation of the director blueprint.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventSectionBase.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSectionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all event sections. Manages dirtying the section and track on recompilation of the director blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSectionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::ClassParams = {
		&UMovieSceneEventSectionBase::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSectionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventSectionBase, 558560065);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSectionBase>()
	{
		return UMovieSceneEventSectionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventSectionBase(Z_Construct_UClass_UMovieSceneEventSectionBase, &UMovieSceneEventSectionBase::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventSectionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSectionBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventSectionBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
