// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemLinker() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph();
// End Cross Module References
	void UMovieSceneEntitySystemLinker::StaticRegisterNativesUMovieSceneEntitySystemLinker()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister()
	{
		return UMovieSceneEntitySystemLinker::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEntitySystemLinker.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemLinker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph = { "SystemGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEntitySystemLinker, SystemGraph), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntitySystemLinker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::ClassParams = {
		&UMovieSceneEntitySystemLinker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEntitySystemLinker, 1897667981);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntitySystemLinker>()
	{
		return UMovieSceneEntitySystemLinker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEntitySystemLinker(Z_Construct_UClass_UMovieSceneEntitySystemLinker, &UMovieSceneEntitySystemLinker::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEntitySystemLinker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntitySystemLinker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
