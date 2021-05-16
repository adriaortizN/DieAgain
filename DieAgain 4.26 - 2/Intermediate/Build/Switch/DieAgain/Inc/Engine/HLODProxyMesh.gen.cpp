// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/HLOD/HLODProxyMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxyMesh() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FHLODProxyMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODProxyMesh, Z_Construct_UPackage__Script_Engine(), TEXT("HLODProxyMesh"), sizeof(FHLODProxyMesh), Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODProxyMesh>()
{
	return FHLODProxyMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHLODProxyMesh(FHLODProxyMesh::StaticStruct, TEXT("/Script/Engine"), TEXT("HLODProxyMesh"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh
{
	FScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HLODProxyMesh")),new UScriptStruct::TCppStructOps<FHLODProxyMesh>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHLODProxyMesh;
	struct Z_Construct_UScriptStruct_FHLODProxyMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LODActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A mesh proxy entry */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "A mesh proxy entry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODProxyMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData[] = {
		{ "Comment", "/** The ALODActor that we were generated from */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The ALODActor that we were generated from" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor = { "LODActor", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, LODActor), Z_Construct_UClass_ALODActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** The mesh used to display this proxy */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The mesh used to display this proxy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating. */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODProxyMesh, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODProxyMesh",
		sizeof(FHLODProxyMesh),
		alignof(FHLODProxyMesh),
		Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HLODProxyMesh"), sizeof(FHLODProxyMesh), Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHLODProxyMesh_Hash() { return 1436416863U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
