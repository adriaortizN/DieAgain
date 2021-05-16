// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieScenePiecewiseFloatBlenderSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseFloatBlenderSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFloatDecomposer_NoRegister();
// End Cross Module References
	void UMovieScenePiecewiseFloatBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseFloatBlenderSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_NoRegister()
	{
		return UMovieScenePiecewiseFloatBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieScenePiecewiseFloatBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseFloatBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneFloatDecomposer_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePiecewiseFloatBlenderSystem, IMovieSceneFloatDecomposer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseFloatBlenderSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::ClassParams = {
		&UMovieScenePiecewiseFloatBlenderSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePiecewiseFloatBlenderSystem, 3715008363);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseFloatBlenderSystem>()
	{
		return UMovieScenePiecewiseFloatBlenderSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePiecewiseFloatBlenderSystem(Z_Construct_UClass_UMovieScenePiecewiseFloatBlenderSystem, &UMovieScenePiecewiseFloatBlenderSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePiecewiseFloatBlenderSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseFloatBlenderSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
