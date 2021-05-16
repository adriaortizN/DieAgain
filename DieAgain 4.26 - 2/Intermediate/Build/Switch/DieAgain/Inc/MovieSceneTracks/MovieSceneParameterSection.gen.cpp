// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FTransformParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("TransformParameterNameAndCurves"), sizeof(FTransformParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FTransformParameterNameAndCurves>()
{
	return FTransformParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformParameterNameAndCurves(FTransformParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("TransformParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFTransformParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFTransformParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FTransformParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFTransformParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Structure representing an animated transform parameter and it's associated animation curve.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated transform parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the transform  parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the transform  parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, FTransformParameterNameAndCurves), STRUCT_OFFSET(FTransformParameterNameAndCurves, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Rotation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Rotation, FTransformParameterNameAndCurves), STRUCT_OFFSET(FTransformParameterNameAndCurves, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, FTransformParameterNameAndCurves), STRUCT_OFFSET(FTransformParameterNameAndCurves, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"TransformParameterNameAndCurves",
		sizeof(FTransformParameterNameAndCurves),
		alignof(FTransformParameterNameAndCurves),
		Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformParameterNameAndCurves"), sizeof(FTransformParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Hash() { return 4256999636U; }
class UScriptStruct* FColorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FColorParameterNameAndCurves>()
{
	return FColorParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorParameterNameAndCurves(FColorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ColorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Structure representing an animated color parameter and it's associated animation curve.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated color parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the color parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the color parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the red component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the red component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the green component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the green component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the blue component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the blue component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the alpha component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the alpha component of the color parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterNameAndCurves, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ColorParameterNameAndCurves",
		sizeof(FColorParameterNameAndCurves),
		alignof(FColorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Hash() { return 2682040459U; }
class UScriptStruct* FVectorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FVectorParameterNameAndCurves>()
{
	return FVectorParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameterNameAndCurves(FVectorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("VectorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated vector parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the vector parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the x component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the y component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the z component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the z component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve = { "ZCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterNameAndCurves, ZCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"VectorParameterNameAndCurves",
		sizeof(FVectorParameterNameAndCurves),
		alignof(FVectorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Hash() { return 2959758218U; }
class UScriptStruct* FVector2DParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("Vector2DParameterNameAndCurves"), sizeof(FVector2DParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FVector2DParameterNameAndCurves>()
{
	return FVector2DParameterNameAndCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector2DParameterNameAndCurves(FVector2DParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("Vector2DParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVector2DParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVector2DParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector2DParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FVector2DParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFVector2DParameterNameAndCurves;
	struct Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated vector2D parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector2D parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2DParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the vector parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2DParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the x component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2DParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the y component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2DParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"Vector2DParameterNameAndCurves",
		sizeof(FVector2DParameterNameAndCurves),
		alignof(FVector2DParameterNameAndCurves),
		Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector2DParameterNameAndCurves"), sizeof(FVector2DParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Hash() { return 934919189U; }
class UScriptStruct* FScalarParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FScalarParameterNameAndCurve>()
{
	return FScalarParameterNameAndCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterNameAndCurve(FScalarParameterNameAndCurve::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ScalarParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve;
	struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated scalar parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated scalar parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the scalar parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the scalar parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the scalar parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ScalarParameterNameAndCurve",
		sizeof(FScalarParameterNameAndCurve),
		alignof(FScalarParameterNameAndCurve),
		Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Hash() { return 2608376933U; }
class UScriptStruct* FBoolParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("BoolParameterNameAndCurve"), sizeof(FBoolParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FBoolParameterNameAndCurve>()
{
	return FBoolParameterNameAndCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoolParameterNameAndCurve(FBoolParameterNameAndCurve::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("BoolParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFBoolParameterNameAndCurve
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFBoolParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoolParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FBoolParameterNameAndCurve>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFBoolParameterNameAndCurve;
	struct Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an bool  parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an bool  parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the scalar parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the scalar parameter which is being animated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoolParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the scalar parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoolParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"BoolParameterNameAndCurve",
		sizeof(FBoolParameterNameAndCurve),
		alignof(FBoolParameterNameAndCurve),
		Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoolParameterNameAndCurve"), sizeof(FBoolParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Hash() { return 3457708066U; }
	DEFINE_FUNCTION(UMovieSceneParameterSection::execGetParameterNames)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParameterNames(Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveTransformParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTransformParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveColorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveColorParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveVectorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveVectorParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveVector2DParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveVector2DParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveBoolParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveScalarParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveScalarParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddTransformParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTransformParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddColorParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddColorParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddVectorParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVectorParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddVector2DParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVector2DParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddBoolParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoolParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddScalarParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScalarParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	void UMovieSceneParameterSection::StaticRegisterNativesUMovieSceneParameterSection()
	{
		UClass* Class = UMovieSceneParameterSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoolParameterKey", &UMovieSceneParameterSection::execAddBoolParameterKey },
			{ "AddColorParameterKey", &UMovieSceneParameterSection::execAddColorParameterKey },
			{ "AddScalarParameterKey", &UMovieSceneParameterSection::execAddScalarParameterKey },
			{ "AddTransformParameterKey", &UMovieSceneParameterSection::execAddTransformParameterKey },
			{ "AddVector2DParameterKey", &UMovieSceneParameterSection::execAddVector2DParameterKey },
			{ "AddVectorParameterKey", &UMovieSceneParameterSection::execAddVectorParameterKey },
			{ "GetParameterNames", &UMovieSceneParameterSection::execGetParameterNames },
			{ "RemoveBoolParameter", &UMovieSceneParameterSection::execRemoveBoolParameter },
			{ "RemoveColorParameter", &UMovieSceneParameterSection::execRemoveColorParameter },
			{ "RemoveScalarParameter", &UMovieSceneParameterSection::execRemoveScalarParameter },
			{ "RemoveTransformParameter", &UMovieSceneParameterSection::execRemoveTransformParameter },
			{ "RemoveVector2DParameter", &UMovieSceneParameterSection::execRemoveVector2DParameter },
			{ "RemoveVectorParameter", &UMovieSceneParameterSection::execRemoveVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddBoolParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			bool InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddBoolParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddBoolParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventAddBoolParameterKey_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventAddBoolParameterKey_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific bool parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific bool parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddBoolParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddBoolParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddColorParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FLinearColor InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific color parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific color parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddColorParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddColorParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddScalarParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			float InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific scalar parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific scalar parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddScalarParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddScalarParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddTransformParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FTransform InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific color parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific color parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddTransformParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddTransformParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddVector2DParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FVector2D InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific vector2D parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific vector2D parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddVector2DParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddVectorParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FVector InValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Adds a a key for a specific vector parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific vector parameter at the specified time with the specified value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddVectorParameterKey", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventAddVectorParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics
	{
		struct MovieSceneParameterSection_eventGetParameterNames_Parms
		{
			TSet<FName> ParameterNames;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterNames_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ParameterNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames_ElementProp = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventGetParameterNames_Parms, ParameterNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** Gets the set of all parameter names used by this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Gets the set of all parameter names used by this section." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "GetParameterNames", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventGetParameterNames_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveBoolParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveBoolParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveBoolParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveBoolParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Removes a bool parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the bool parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a bool parameter from this section.\n\n@param InParameterName The name of the bool parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveBoolParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveBoolParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveColorParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveColorParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveColorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveColorParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Removes a color parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the color parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a color parameter from this section.\n\n@param InParameterName The name of the color parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveColorParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveColorParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveScalarParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveScalarParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveScalarParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveScalarParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/** \n\x09 * Removes a scalar parameter from this section. \n\x09 * \n\x09 * @param InParameterName The name of the scalar parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a scalar parameter from this section.\n\n@param InParameterName The name of the scalar parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveScalarParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveScalarParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveTransformParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveTransformParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveTransformParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveTransformParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Removes a transform parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the transform parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a transform parameter from this section.\n\n@param InParameterName The name of the transform parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveTransformParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveTransformParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveVector2DParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveVector2DParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveVector2DParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveVector2DParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n\x09 * Removes a vector2D parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the vector2D parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a vector2D parameter from this section.\n\n@param InParameterName The name of the vector2D parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveVector2DParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveVector2DParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveVectorParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveVectorParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveVectorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveVectorParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_InParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "Comment", "/**\n     * Removes a vector parameter from this section.\n    *\n    * @param InParameterName The name of the vector parameter to remove.\n    * @returns True if a parameter with that name was found and removed, otherwise false.\n    */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a vector parameter from this section.\n\n@param InParameterName The name of the vector parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveVectorParameter", nullptr, nullptr, sizeof(MovieSceneParameterSection_eventRemoveVectorParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParameterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2DParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2DParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vector2DParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorParameterNamesAndCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformParameterNamesAndCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParameterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneParameterSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey, "AddBoolParameterKey" }, // 2682530883
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey, "AddColorParameterKey" }, // 3450905268
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey, "AddScalarParameterKey" }, // 958894578
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey, "AddTransformParameterKey" }, // 4245852491
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey, "AddVector2DParameterKey" }, // 3847211755
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey, "AddVectorParameterKey" }, // 3081060077
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames, "GetParameterNames" }, // 933513299
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter, "RemoveBoolParameter" }, // 863900798
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter, "RemoveColorParameter" }, // 1754045302
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter, "RemoveScalarParameter" }, // 2194290588
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter, "RemoveTransformParameter" }, // 2923054144
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter, "RemoveVector2DParameter" }, // 1945099302
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter, "RemoveVectorParameter" }, // 4165573987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single movie scene section which can contain data for multiple named parameters.\n */" },
		{ "IncludePath", "Sections/MovieSceneParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "A single movie scene section which can contain data for multiple named parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_Inner = { "BoolParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The bool parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The bool parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves = { "BoolParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, BoolParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The scalar parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_Inner = { "Vector2DParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The vector3D parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector3D parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves = { "Vector2DParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, Vector2DParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, VectorParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The color parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The color parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, ColorParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_Inner = { "TransformParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The transform  parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The transform  parameter names and their associated curves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves = { "TransformParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneParameterSection, TransformParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParameterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParameterSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams = {
		&UMovieSceneParameterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParameterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneParameterSection, 2420006709);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParameterSection>()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParameterSection(Z_Construct_UClass_UMovieSceneParameterSection, &UMovieSceneParameterSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParameterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParameterSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
