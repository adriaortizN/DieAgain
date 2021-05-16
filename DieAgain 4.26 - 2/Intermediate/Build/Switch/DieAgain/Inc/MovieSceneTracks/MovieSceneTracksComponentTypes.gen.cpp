// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/MovieSceneTracksComponentTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTracksComponentTypes() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelVisibilityComponentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("LevelVisibilityComponentData"), sizeof(FLevelVisibilityComponentData), Get_Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FLevelVisibilityComponentData>()
{
	return FLevelVisibilityComponentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelVisibilityComponentData(FLevelVisibilityComponentData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("LevelVisibilityComponentData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFLevelVisibilityComponentData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFLevelVisibilityComponentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelVisibilityComponentData")),new UScriptStruct::TCppStructOps<FLevelVisibilityComponentData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFLevelVisibilityComponentData;
	struct Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the level visibility system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the level visibility system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelVisibilityComponentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelVisibilityComponentData, Section), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"LevelVisibilityComponentData",
		sizeof(FLevelVisibilityComponentData),
		alignof(FLevelVisibilityComponentData),
		Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelVisibilityComponentData"), sizeof(FLevelVisibilityComponentData), Get_Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Hash() { return 2963277225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
