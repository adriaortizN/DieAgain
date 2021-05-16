// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/FloatChannelEvaluatorSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UFloatChannelEvaluatorSystem::StaticRegisterNativesUFloatChannelEvaluatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister()
	{
		return UFloatChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating float channels.\n */" },
		{ "IncludePath", "Systems/FloatChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/FloatChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating float channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatChannelEvaluatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams = {
		&UFloatChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatChannelEvaluatorSystem, 2116773252);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UFloatChannelEvaluatorSystem>()
	{
		return UFloatChannelEvaluatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatChannelEvaluatorSystem(Z_Construct_UClass_UFloatChannelEvaluatorSystem, &UFloatChannelEvaluatorSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UFloatChannelEvaluatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatChannelEvaluatorSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
