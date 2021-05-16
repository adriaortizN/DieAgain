// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneEventTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneEventSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneEventSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionTemplate>()
{
	return FMovieSceneEventSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionTemplate(FMovieSceneEventSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneEventSectionTemplate",
		sizeof(FMovieSceneEventSectionTemplate),
		alignof(FMovieSceneEventSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash() { return 2785065517U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
