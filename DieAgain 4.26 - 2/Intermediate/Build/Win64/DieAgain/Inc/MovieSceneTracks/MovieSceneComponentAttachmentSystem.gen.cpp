// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneComponentAttachmentSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentAttachmentSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
// End Cross Module References
	void UMovieSceneComponentAttachmentInvalidatorSystem::StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_NoRegister()
	{
		return UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentAttachmentInvalidatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::ClassParams = {
		&UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneComponentAttachmentInvalidatorSystem, 1075839629);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentAttachmentInvalidatorSystem>()
	{
		return UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneComponentAttachmentInvalidatorSystem(Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem, &UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneComponentAttachmentInvalidatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentAttachmentInvalidatorSystem);
	void UMovieSceneComponentAttachmentSystem::StaticRegisterNativesUMovieSceneComponentAttachmentSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_NoRegister()
	{
		return UMovieSceneComponentAttachmentSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentAttachmentSystem, IMovieScenePreAnimatedStateSystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentAttachmentSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::ClassParams = {
		&UMovieSceneComponentAttachmentSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneComponentAttachmentSystem, 787438087);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentAttachmentSystem>()
	{
		return UMovieSceneComponentAttachmentSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneComponentAttachmentSystem(Z_Construct_UClass_UMovieSceneComponentAttachmentSystem, &UMovieSceneComponentAttachmentSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneComponentAttachmentSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentAttachmentSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
