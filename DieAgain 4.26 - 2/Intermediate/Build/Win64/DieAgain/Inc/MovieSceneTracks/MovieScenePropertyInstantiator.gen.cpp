// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieScenePropertyInstantiator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyInstantiator() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
// End Cross Module References
	void UMovieScenePropertyInstantiatorSystem::StaticRegisterNativesUMovieScenePropertyInstantiatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister()
	{
		return UMovieScenePropertyInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieScenePropertyInstantiator.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertyInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePropertyInstantiatorSystem, IMovieScenePreAnimatedStateSystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertyInstantiatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::ClassParams = {
		&UMovieScenePropertyInstantiatorSystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePropertyInstantiatorSystem, 3268956451);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertyInstantiatorSystem>()
	{
		return UMovieScenePropertyInstantiatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePropertyInstantiatorSystem(Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem, &UMovieScenePropertyInstantiatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePropertyInstantiatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyInstantiatorSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
