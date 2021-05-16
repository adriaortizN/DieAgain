// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCompiledDataManager() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceCompilerMaskStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceCompilerMaskStruct"), sizeof(FMovieSceneSequenceCompilerMaskStruct), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceCompilerMaskStruct>()
{
	return FMovieSceneSequenceCompilerMaskStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct(FMovieSceneSequenceCompilerMaskStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceCompilerMaskStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCompilerMaskStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCompilerMaskStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceCompilerMaskStruct")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceCompilerMaskStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCompilerMaskStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHierarchy_MetaData[];
#endif
		static void NewProp_bHierarchy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHierarchy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplate_MetaData[];
#endif
		static void NewProp_bEvaluationTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplateField_MetaData[];
#endif
		static void NewProp_bEvaluationTemplateField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplateField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntityComponentField_MetaData[];
#endif
		static void NewProp_bEntityComponentField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntityComponentField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Flag struct necessary while flag enums are not supported on UPROPERTY */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Flag struct necessary while flag enums are not supported on UPROPERTY" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceCompilerMaskStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bHierarchy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy = { "bHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate = { "bEvaluationTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplateField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField = { "bEvaluationTemplateField", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEntityComponentField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField = { "bEntityComponentField", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceCompilerMaskStruct",
		sizeof(FMovieSceneSequenceCompilerMaskStruct),
		alignof(FMovieSceneSequenceCompilerMaskStruct),
		Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceCompilerMaskStruct"), sizeof(FMovieSceneSequenceCompilerMaskStruct), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Hash() { return 369366525U; }
	void UMovieSceneCompiledData::StaticRegisterNativesUMovieSceneCompiledData()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister()
	{
		return UMovieSceneCompiledData::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCompiledData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityComponentField_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityComponentField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateField_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTemplateField;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeterminismFences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeterminismFences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeterminismFences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompiledSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompiledSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompilerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompilerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatedMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllocatedMask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccumulatedFlags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccumulatedFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCompiledData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Used for serialization only */" },
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Used for serialization only" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate = { "EvaluationTemplate", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, EvaluationTemplate), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData[] = {
		{ "Comment", "/** 272 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "272 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField = { "EntityComponentField", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, EntityComponentField), Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData[] = {
		{ "Comment", "/** 64 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "64 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField = { "TrackTemplateField", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, TrackTemplateField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner = { "DeterminismFences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences = { "DeterminismFences", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, DeterminismFences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData[] = {
		{ "Comment", "/** 16 bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature = { "CompiledSignature", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, CompiledSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion = { "CompilerVersion", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, CompilerVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask = { "AccumulatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask = { "AllocatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AllocatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags = { "AccumulatedFlags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedFlags), Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCompiledData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams = {
		&UMovieSceneCompiledData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCompiledData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCompiledData, 3995846856);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledData>()
	{
		return UMovieSceneCompiledData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCompiledData(Z_Construct_UClass_UMovieSceneCompiledData, &UMovieSceneCompiledData::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneCompiledData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledData);
	void UMovieSceneCompiledDataManager::StaticRegisterNativesUMovieSceneCompiledDataManager()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister()
	{
		return UMovieSceneCompiledDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchies_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hierarchies_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Hierarchies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTemplates_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackTemplates_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackTemplates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTemplateFields_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackTemplateFields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackTemplateFields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntityComponentFields_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntityComponentFields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityComponentFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EntityComponentFields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp = { "Hierarchies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp = { "Hierarchies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies = { "Hierarchies", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, Hierarchies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp = { "TrackTemplates", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp = { "TrackTemplates_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates = { "TrackTemplates", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp = { "TrackTemplateFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplateFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp = { "EntityComponentFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, EntityComponentFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams = {
		&UMovieSceneCompiledDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCompiledDataManager, 909106238);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledDataManager>()
	{
		return UMovieSceneCompiledDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCompiledDataManager(Z_Construct_UClass_UMovieSceneCompiledDataManager, &UMovieSceneCompiledDataManager::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneCompiledDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
