// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemGraphs() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneEntitySystemGraph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraph"), sizeof(FMovieSceneEntitySystemGraph), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraph>()
{
	return FMovieSceneEntitySystemGraph::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEntitySystemGraph(FMovieSceneEntitySystemGraph::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEntitySystemGraph"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraph
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraph()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEntitySystemGraph")),new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraph>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraph;
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraph>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntitySystemGraph, Nodes), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraph",
		sizeof(FMovieSceneEntitySystemGraph),
		alignof(FMovieSceneEntitySystemGraph),
		Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEntitySystemGraph"), sizeof(FMovieSceneEntitySystemGraph), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Hash() { return 98633493U; }
class UScriptStruct* FMovieSceneEntitySystemGraphNodes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNodes"), sizeof(FMovieSceneEntitySystemGraphNodes), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNodes>()
{
	return FMovieSceneEntitySystemGraphNodes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEntitySystemGraphNodes(FMovieSceneEntitySystemGraphNodes::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEntitySystemGraphNodes"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNodes
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNodes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEntitySystemGraphNodes")),new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNodes>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNodes;
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNodes>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraphNodes",
		sizeof(FMovieSceneEntitySystemGraphNodes),
		alignof(FMovieSceneEntitySystemGraphNodes),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEntitySystemGraphNodes"), sizeof(FMovieSceneEntitySystemGraphNodes), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Hash() { return 1830749368U; }
class UScriptStruct* FMovieSceneEntitySystemGraphNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNode"), sizeof(FMovieSceneEntitySystemGraphNode), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNode>()
{
	return FMovieSceneEntitySystemGraphNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEntitySystemGraphNode(FMovieSceneEntitySystemGraphNode::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEntitySystemGraphNode"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNode
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEntitySystemGraphNode")),new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNode>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEntitySystemGraphNode;
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEntitySystemGraphNode, System), Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraphNode",
		sizeof(FMovieSceneEntitySystemGraphNode),
		alignof(FMovieSceneEntitySystemGraphNode),
		Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEntitySystemGraphNode"), sizeof(FMovieSceneEntitySystemGraphNode), Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Hash() { return 3408286597U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
