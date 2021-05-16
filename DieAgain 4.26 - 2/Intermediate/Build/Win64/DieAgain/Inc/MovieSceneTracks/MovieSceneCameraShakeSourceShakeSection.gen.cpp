// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSourceShakeSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceShakeSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
// End Cross Module References
	void UMovieSceneCameraShakeSourceShakeSection::StaticRegisterNativesUMovieSceneCameraShakeSourceShakeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister()
	{
		return UMovieSceneCameraShakeSourceShakeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShakeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraShakeSourceShakeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceShakeSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::NewProp_ShakeData_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceShakeSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::NewProp_ShakeData = { "ShakeData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraShakeSourceShakeSection, ShakeData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::NewProp_ShakeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::NewProp_ShakeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::NewProp_ShakeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSourceShakeSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::ClassParams = {
		&UMovieSceneCameraShakeSourceShakeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraShakeSourceShakeSection, 4230364473);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSourceShakeSection>()
	{
		return UMovieSceneCameraShakeSourceShakeSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraShakeSourceShakeSection(Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection, &UMovieSceneCameraShakeSourceShakeSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraShakeSourceShakeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSourceShakeSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
