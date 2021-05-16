// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/TrackInstances/MovieSceneCameraCutTrackInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrackInstance() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCameraCutTrackInstance::StaticRegisterNativesUMovieSceneCameraCutTrackInstance()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister()
	{
		return UMovieSceneCameraCutTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrackInstances/MovieSceneCameraCutTrackInstance.h" },
		{ "ModuleRelativePath", "Private/TrackInstances/MovieSceneCameraCutTrackInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutTrackInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams = {
		&UMovieSceneCameraCutTrackInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraCutTrackInstance, 3965766694);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutTrackInstance>()
	{
		return UMovieSceneCameraCutTrackInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraCutTrackInstance(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance, &UMovieSceneCameraCutTrackInstance::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraCutTrackInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutTrackInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
