// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieScenePropertySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
// End Cross Module References
	void UMovieScenePropertySystem::StaticRegisterNativesUMovieScenePropertySystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister()
	{
		return UMovieScenePropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantiatorSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstantiatorSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieScenePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData[] = {
		{ "Comment", "/** Pointer to the property instantiator system for retrieving property stats */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ToolTip", "Pointer to the property instantiator system for retrieving property stats" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem = { "InstantiatorSystem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScenePropertySystem, InstantiatorSystem), Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams = {
		&UMovieScenePropertySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePropertySystem, 2442021359);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertySystem>()
	{
		return UMovieScenePropertySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePropertySystem(Z_Construct_UClass_UMovieScenePropertySystem, &UMovieScenePropertySystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePropertySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
