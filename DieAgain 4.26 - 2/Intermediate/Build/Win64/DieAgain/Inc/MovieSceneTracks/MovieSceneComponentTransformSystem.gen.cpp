// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneComponentTransformSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentTransformSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
// End Cross Module References
	void UMovieScenePreAnimatedComponentTransformSystem::StaticRegisterNativesUMovieScenePreAnimatedComponentTransformSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_NoRegister()
	{
		return UMovieScenePreAnimatedComponentTransformSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentTransformSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentTransformSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePreAnimatedComponentTransformSystem, IMovieScenePreAnimatedStateSystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePreAnimatedComponentTransformSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::ClassParams = {
		&UMovieScenePreAnimatedComponentTransformSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePreAnimatedComponentTransformSystem, 2967987141);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePreAnimatedComponentTransformSystem>()
	{
		return UMovieScenePreAnimatedComponentTransformSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePreAnimatedComponentTransformSystem(Z_Construct_UClass_UMovieScenePreAnimatedComponentTransformSystem, &UMovieScenePreAnimatedComponentTransformSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePreAnimatedComponentTransformSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreAnimatedComponentTransformSystem);
	void UMovieSceneComponentTransformSystem::StaticRegisterNativesUMovieSceneComponentTransformSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister()
	{
		return UMovieSceneComponentTransformSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentTransformSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentTransformSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentTransformSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams = {
		&UMovieSceneComponentTransformSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneComponentTransformSystem, 4105881666);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentTransformSystem>()
	{
		return UMovieSceneComponentTransformSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneComponentTransformSystem(Z_Construct_UClass_UMovieSceneComponentTransformSystem, &UMovieSceneComponentTransformSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneComponentTransformSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentTransformSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
