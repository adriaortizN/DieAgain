// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationField, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationField>()
{
	return FMovieSceneEvaluationField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationField(FMovieSceneEvaluationField::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationField"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationField")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Signature;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ranges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Memory layout optimized primarily for speed of searching the applicable ranges\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Memory layout optimized primarily for speed of searching the applicable ranges" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData[] = {
		{ "Comment", "/** Signature that uniquely identifies any state this field can be in - regenerated on mutation */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Signature that uniquely identifies any state this field can be in - regenerated on mutation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData[] = {
		{ "Comment", "/** Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Ranges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "/** Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "/** Meta data that maps to entries in the 'Ranges' array. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Meta data that maps to entries in the 'Ranges' array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationField, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Signature,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Ranges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewProp_MetaData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationField",
		sizeof(FMovieSceneEvaluationField),
		alignof(FMovieSceneEvaluationField),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Hash() { return 3157303169U; }
class UScriptStruct* FMovieSceneEvaluationMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationMetaData>()
{
	return FMovieSceneEvaluationMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationMetaData(FMovieSceneEvaluationMetaData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationMetaData")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveEntities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEntities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEntities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Informational meta-data that applies to a given time range */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Informational meta-data that applies to a given time range" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner = { "ActiveSequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData[] = {
		{ "Comment", "/** Array of sequences that are active in this time range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of sequences that are active in this time range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences = { "ActiveSequences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner = { "ActiveEntities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData[] = {
		{ "Comment", "/** Array of entities (tracks and/or sections) that are active in this time range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of entities (tracks and/or sections) that are active in this time range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities = { "ActiveEntities", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveEntities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewProp_ActiveEntities,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationMetaData",
		sizeof(FMovieSceneEvaluationMetaData),
		alignof(FMovieSceneEvaluationMetaData),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Hash() { return 3112320070U; }
class UScriptStruct* FMovieSceneOrderedEvaluationKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneOrderedEvaluationKey>()
{
	return FMovieSceneOrderedEvaluationKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneOrderedEvaluationKey(FMovieSceneOrderedEvaluationKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneOrderedEvaluationKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneOrderedEvaluationKey")),new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey;
	struct Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_SetupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TearDownIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_TearDownIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex = { "SetupIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, SetupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex = { "TearDownIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, TearDownIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_SetupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewProp_TearDownIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneOrderedEvaluationKey",
		sizeof(FMovieSceneOrderedEvaluationKey),
		alignof(FMovieSceneOrderedEvaluationKey),
		Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Hash() { return 780549423U; }
class UScriptStruct* FMovieSceneEvaluationGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroup>()
{
	return FMovieSceneEvaluationGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroup(FMovieSceneEvaluationGroup::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroup"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroup")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LUTIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LUTIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackLUT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackLUT;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionLUT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionLUT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds segment pointers for all segments that are active for a given range of the sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Holds segment pointers for all segments that are active for a given range of the sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner = { "LUTIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData[] = {
		{ "Comment", "/** Array of indices that define all the flush groups in the range. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Array of indices that define all the flush groups in the range." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices = { "LUTIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, LUTIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_Inner = { "TrackLUT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT = { "TrackLUT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, TrackLUT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_Inner = { "SectionLUT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT = { "SectionLUT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroup, SectionLUT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_LUTIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_TrackLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewProp_SectionLUT,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationGroup",
		sizeof(FMovieSceneEvaluationGroup),
		alignof(FMovieSceneEvaluationGroup),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Hash() { return 3274078736U; }
class UScriptStruct* FMovieSceneEvaluationGroupLUTIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationGroupLUTIndex>()
{
	return FMovieSceneEvaluationGroupLUTIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex(FMovieSceneEvaluationGroupLUTIndex::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroupLUTIndex"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroupLUTIndex")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInitPtrs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEvalPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEvalPtrs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Lookup table index for a group of evaluation templates */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Lookup table index for a group of evaluation templates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData[] = {
		{ "Comment", "/** The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs = { "NumInitPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData[] = {
		{ "Comment", "/** The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs = { "NumEvalPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumInitPtrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewProp_NumEvalPtrs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationGroupLUTIndex",
		sizeof(FMovieSceneEvaluationGroupLUTIndex),
		alignof(FMovieSceneEvaluationGroupLUTIndex),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Hash() { return 704491905U; }
class UScriptStruct* FMovieSceneFieldEntry_ChildTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFieldEntry_ChildTemplate"), sizeof(FMovieSceneFieldEntry_ChildTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFieldEntry_ChildTemplate>()
{
	return FMovieSceneFieldEntry_ChildTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate(FMovieSceneFieldEntry_ChildTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneFieldEntry_ChildTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_ChildTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_ChildTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFieldEntry_ChildTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_ChildTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_ChildTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ChildIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_ChildTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, ChildIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_ChildTemplate, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ChildIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewProp_ForcedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneFieldEntry_ChildTemplate",
		sizeof(FMovieSceneFieldEntry_ChildTemplate),
		alignof(FMovieSceneFieldEntry_ChildTemplate),
		Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFieldEntry_ChildTemplate"), sizeof(FMovieSceneFieldEntry_ChildTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Hash() { return 699542387U; }
class UScriptStruct* FMovieSceneFieldEntry_EvaluationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFieldEntry_EvaluationTrack"), sizeof(FMovieSceneFieldEntry_EvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFieldEntry_EvaluationTrack>()
{
	return FMovieSceneFieldEntry_EvaluationTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack(FMovieSceneFieldEntry_EvaluationTrack::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneFieldEntry_EvaluationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_EvaluationTrack
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_EvaluationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFieldEntry_EvaluationTrack")),new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_EvaluationTrack>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFieldEntry_EvaluationTrack;
	struct Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_NumChildren;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFieldEntry_EvaluationTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr = { "TrackPtr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_EvaluationTrack, TrackPtr), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren = { "NumChildren", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFieldEntry_EvaluationTrack, NumChildren), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_TrackPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewProp_NumChildren,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneFieldEntry_EvaluationTrack",
		sizeof(FMovieSceneFieldEntry_EvaluationTrack),
		alignof(FMovieSceneFieldEntry_EvaluationTrack),
		Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFieldEntry_EvaluationTrack"), sizeof(FMovieSceneFieldEntry_EvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Hash() { return 1878629897U; }

static_assert(std::is_polymorphic<FMovieSceneEvaluationFieldSegmentPtr>() == std::is_polymorphic<FMovieSceneEvaluationFieldTrackPtr>(), "USTRUCT FMovieSceneEvaluationFieldSegmentPtr cannot be polymorphic unless super FMovieSceneEvaluationFieldTrackPtr is polymorphic");

class UScriptStruct* FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldSegmentPtr>()
{
	return FMovieSceneEvaluationFieldSegmentPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr(FMovieSceneEvaluationFieldSegmentPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldSegmentPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldSegmentPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A pointer to a particular segment of a track held within an evaluation template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a particular segment of a track held within an evaluation template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData[] = {
		{ "Comment", "/** The identifier of the segment within the track (see FMovieSceneEvaluationTrack::Segments) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The identifier of the segment within the track (see FMovieSceneEvaluationTrack::Segments)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID = { "SegmentID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldSegmentPtr, SegmentID), Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewProp_SegmentID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr,
		&NewStructOps,
		"MovieSceneEvaluationFieldSegmentPtr",
		sizeof(FMovieSceneEvaluationFieldSegmentPtr),
		alignof(FMovieSceneEvaluationFieldSegmentPtr),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Hash() { return 1496490331U; }
class UScriptStruct* FMovieSceneEvaluationFieldTrackPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldTrackPtr>()
{
	return FMovieSceneEvaluationFieldTrackPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr(FMovieSceneEvaluationFieldTrackPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldTrackPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldTrackPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A pointer to a track held within an evaluation template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A pointer to a track held within an evaluation template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** The sequence ID that identifies to which sequence the track belongs */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The sequence ID that identifies to which sequence the track belongs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData[] = {
		{ "Comment", "/** The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier = { "TrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_SequenceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewProp_TrackIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldTrackPtr",
		sizeof(FMovieSceneEvaluationFieldTrackPtr),
		alignof(FMovieSceneEvaluationFieldTrackPtr),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Hash() { return 2134474817U; }
class UScriptStruct* FMovieSceneEntityComponentField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntityComponentField"), sizeof(FMovieSceneEntityComponentField), Get_Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntityComponentField>()
{
	return FMovieSceneEntityComponentField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEntityComponentField(FMovieSceneEntityComponentField::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEntityComponentField"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntityComponentField
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntityComponentField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEntityComponentField")),new UScriptStruct::TCppStructOps<FMovieSceneEntityComponentField>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntityComponentField;
	struct Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentEntityTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersistentEntityTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneShotEntityTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OneShotEntityTree;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntityMetaData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedMetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * High-level container which acts as a look-up-table for IMovieSceneEntityProviders and their entities and meta-data in a sequence\n *\n * Generally generated and accessed through UMovieSceneCompiledDataManager, but can also be used independently.\n * Entity fields are constructed using FMovieSceneEntityComponentFieldBuilder which ensures the invariants of this class are \n * maintained along with guaranteeing no redundant entries exist.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "High-level container which acts as a look-up-table for IMovieSceneEntityProviders and their entities and meta-data in a sequence\n\nGenerally generated and accessed through UMovieSceneCompiledDataManager, but can also be used independently.\nEntity fields are constructed using FMovieSceneEntityComponentFieldBuilder which ensures the invariants of this class are\nmaintained along with guaranteeing no redundant entries exist." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntityComponentField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree_MetaData[] = {
		{ "Comment", "/** A hierarchical tree specifiying indices into the Entities array for any given time such persistent entities are active */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A hierarchical tree specifiying indices into the Entities array for any given time such persistent entities are active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree = { "PersistentEntityTree", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, PersistentEntityTree), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree_MetaData[] = {
		{ "Comment", "/** A hierarchical tree specifiying indices into the Entities array for any given time such one-shot entities are active */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A hierarchical tree specifiying indices into the Entities array for any given time such one-shot entities are active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree = { "OneShotEntityTree", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, OneShotEntityTree), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_MetaData[] = {
		{ "Comment", "/** 16 bytes - Flat array of unique entities. The 2 tree types specify indices into this array */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Flat array of unique entities. The 2 tree types specify indices into this array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_Inner = { "EntityMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_MetaData[] = {
		{ "Comment", "/** 16 bytes - Optional meta-data for specific entities. Specified in FMovieSceneEvaluationFieldEntity::MetaDataIndex. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Optional meta-data for specific entities. Specified in FMovieSceneEvaluationFieldEntity::MetaDataIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData = { "EntityMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, EntityMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_Inner = { "SharedMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_MetaData[] = {
		{ "Comment", "/** 16 bytes - Optional shared meta-data for groups of entities. Specified in FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "16 bytes - Optional shared meta-data for groups of entities. Specified in FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData = { "SharedMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntityComponentField, SharedMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_PersistentEntityTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_OneShotEntityTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_Entities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_EntityMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewProp_SharedMetaData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntityComponentField",
		sizeof(FMovieSceneEntityComponentField),
		alignof(FMovieSceneEntityComponentField),
		Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEntityComponentField"), sizeof(FMovieSceneEntityComponentField), Get_Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Hash() { return 2949656501U; }
class UScriptStruct* FMovieSceneEvaluationFieldEntityTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityTree"), sizeof(FMovieSceneEvaluationFieldEntityTree), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityTree>()
{
	return FMovieSceneEvaluationFieldEntityTree::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree(FMovieSceneEvaluationFieldEntityTree::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldEntityTree"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityTree
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityTree()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldEntityTree")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityTree>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityTree;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityTree>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldEntityTree",
		sizeof(FMovieSceneEvaluationFieldEntityTree),
		alignof(FMovieSceneEvaluationFieldEntityTree),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldEntityTree"), sizeof(FMovieSceneEvaluationFieldEntityTree), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Hash() { return 3961897060U; }
class UScriptStruct* FMovieSceneEvaluationFieldEntityMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityMetaData"), sizeof(FMovieSceneEvaluationFieldEntityMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityMetaData>()
{
	return FMovieSceneEvaluationFieldEntityMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData(FMovieSceneEvaluationFieldEntityMetaData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldEntityMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityMetaData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldEntityMetaData")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityMetaData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityMetaData;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInSequencePreRoll_MetaData[];
#endif
		static void NewProp_bEvaluateInSequencePreRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInSequencePreRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInSequencePostRoll_MetaData[];
#endif
		static void NewProp_bEvaluateInSequencePostRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInSequencePostRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityMetaData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_MetaData[] = {
		{ "Comment", "/** Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationFieldEntityMetaData*)Obj)->bEvaluateInSequencePreRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll = { "bEvaluateInSequencePreRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationFieldEntityMetaData), &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_MetaData[] = {
		{ "Comment", "/** Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationFieldEntityMetaData*)Obj)->bEvaluateInSequencePostRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll = { "bEvaluateInSequencePostRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationFieldEntityMetaData), &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_ForcedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePreRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewProp_bEvaluateInSequencePostRoll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldEntityMetaData",
		sizeof(FMovieSceneEvaluationFieldEntityMetaData),
		alignof(FMovieSceneEvaluationFieldEntityMetaData),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldEntityMetaData"), sizeof(FMovieSceneEvaluationFieldEntityMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Hash() { return 1222418383U; }
class UScriptStruct* FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSharedEntityMetaData"), sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldSharedEntityMetaData>()
{
	return FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData(FMovieSceneEvaluationFieldSharedEntityMetaData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldSharedEntityMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSharedEntityMetaData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSharedEntityMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldSharedEntityMetaData")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSharedEntityMetaData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSharedEntityMetaData;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSharedEntityMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldSharedEntityMetaData, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewProp_ObjectBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldSharedEntityMetaData",
		sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData),
		alignof(FMovieSceneEvaluationFieldSharedEntityMetaData),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldSharedEntityMetaData"), sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Hash() { return 2067950408U; }
class UScriptStruct* FMovieSceneEvaluationFieldEntity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntity"), sizeof(FMovieSceneEvaluationFieldEntity), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntity>()
{
	return FMovieSceneEvaluationFieldEntity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldEntity(FMovieSceneEvaluationFieldEntity::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldEntity"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntity
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldEntity")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntity>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntity;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMetaDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SharedMetaDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntity, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex = { "SharedMetaDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntity, SharedMetaDataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewProp_SharedMetaDataIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldEntity",
		sizeof(FMovieSceneEvaluationFieldEntity),
		alignof(FMovieSceneEvaluationFieldEntity),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldEntity"), sizeof(FMovieSceneEvaluationFieldEntity), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Hash() { return 1773200439U; }
class UScriptStruct* FMovieSceneEvaluationFieldEntityKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldEntityKey"), sizeof(FMovieSceneEvaluationFieldEntityKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationFieldEntityKey>()
{
	return FMovieSceneEvaluationFieldEntityKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey(FMovieSceneEvaluationFieldEntityKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldEntityKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldEntityKey")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityKey>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldEntityKey;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_EntityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EntityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A key that uniquely identifies an entity by its owner and ID\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "A key that uniquely identifies an entity by its owner and ID" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldEntityKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner_MetaData[] = {
		{ "Comment", "/** The entity owner - either a UMovieSceneSection or perhaps a UMovieSceneTrack. Must implement the IMovieSceneEntityProvider interface */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The entity owner - either a UMovieSceneSection or perhaps a UMovieSceneTrack. Must implement the IMovieSceneEntityProvider interface" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner = { "EntityOwner", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityKey, EntityOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID_MetaData[] = {
		{ "Comment", "/** The identifer for the entity within the owner. Normally this will be irrelevant (and 0), but may be used to identifier unique entities by index, or flags */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
		{ "ToolTip", "The identifer for the entity within the owner. Normally this will be irrelevant (and 0), but may be used to identifier unique entities by index, or flags" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID = { "EntityID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationFieldEntityKey, EntityID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewProp_EntityID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationFieldEntityKey",
		sizeof(FMovieSceneEvaluationFieldEntityKey),
		alignof(FMovieSceneEvaluationFieldEntityKey),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldEntityKey"), sizeof(FMovieSceneEvaluationFieldEntityKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Hash() { return 1925187388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
