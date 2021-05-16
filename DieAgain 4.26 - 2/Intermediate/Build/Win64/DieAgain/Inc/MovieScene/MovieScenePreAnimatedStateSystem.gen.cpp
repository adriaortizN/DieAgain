// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieScenePreAnimatedStateSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePreAnimatedStateSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem();
// End Cross Module References
	void UMovieScenePreAnimatedStateSystemInterface::StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister()
	{
		return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePreAnimatedStateSystemInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams = {
		&UMovieScenePreAnimatedStateSystemInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePreAnimatedStateSystemInterface, 1642107211);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePreAnimatedStateSystemInterface>()
	{
		return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePreAnimatedStateSystemInterface(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface, &UMovieScenePreAnimatedStateSystemInterface::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieScenePreAnimatedStateSystemInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreAnimatedStateSystemInterface);
	void UMovieSceneCachePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister()
	{
		return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\n * systems that implement the necessary interface\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in order, and call\nIMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\nsystems that implement the necessary interface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCachePreAnimatedStateSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams = {
		&UMovieSceneCachePreAnimatedStateSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCachePreAnimatedStateSystem, 1451545554);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCachePreAnimatedStateSystem>()
	{
		return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCachePreAnimatedStateSystem(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem, &UMovieSceneCachePreAnimatedStateSystem::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneCachePreAnimatedStateSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCachePreAnimatedStateSystem);
	void UMovieSceneRestorePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister()
	{
		return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in reverse order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\n * systems that implement the necessary interface.\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in reverse order, and call\nIMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\nsystems that implement the necessary interface." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRestorePreAnimatedStateSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams = {
		&UMovieSceneRestorePreAnimatedStateSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneRestorePreAnimatedStateSystem, 2225391899);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneRestorePreAnimatedStateSystem>()
	{
		return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneRestorePreAnimatedStateSystem(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem, &UMovieSceneRestorePreAnimatedStateSystem::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneRestorePreAnimatedStateSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRestorePreAnimatedStateSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
