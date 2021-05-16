// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceShakeTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSourceShakeSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraShakeSourceShakeSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceShakeSectionTemplate>()
{
	return FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate(FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceShakeSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceShakeSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceShakeSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceShakeSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceShakeSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Source data taken from the section */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Source data taken from the section" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Cached section start time */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Cached section start time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "Comment", "/** Cached section end time */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Cached section end time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraShakeSourceShakeSectionTemplate",
		sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate),
		alignof(FMovieSceneCameraShakeSourceShakeSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Hash() { return 911997762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
