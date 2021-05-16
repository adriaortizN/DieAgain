// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SceneViewExtensionContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneViewExtensionContext() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FSceneViewExtensionIsActiveFunctor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, Z_Construct_UPackage__Script_Engine(), TEXT("SceneViewExtensionIsActiveFunctor"), sizeof(FSceneViewExtensionIsActiveFunctor), Get_Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSceneViewExtensionIsActiveFunctor>()
{
	return FSceneViewExtensionIsActiveFunctor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSceneViewExtensionIsActiveFunctor(FSceneViewExtensionIsActiveFunctor::StaticStruct, TEXT("/Script/Engine"), TEXT("SceneViewExtensionIsActiveFunctor"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSceneViewExtensionIsActiveFunctor
{
	FScriptStruct_Engine_StaticRegisterNativesFSceneViewExtensionIsActiveFunctor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SceneViewExtensionIsActiveFunctor")),new UScriptStruct::TCppStructOps<FSceneViewExtensionIsActiveFunctor>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSceneViewExtensionIsActiveFunctor;
	struct Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains the TFunction that determines if a scene view extension should be valid in the given context given for the current frame.\n * It also contains Guid to help identify it, given that we can't directly compare TFunctions.\n */" },
		{ "ModuleRelativePath", "Public/SceneViewExtensionContext.h" },
		{ "ToolTip", "Contains the TFunction that determines if a scene view extension should be valid in the given context given for the current frame.\nIt also contains Guid to help identify it, given that we can't directly compare TFunctions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneViewExtensionIsActiveFunctor>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SceneViewExtensionIsActiveFunctor",
		sizeof(FSceneViewExtensionIsActiveFunctor),
		alignof(FSceneViewExtensionIsActiveFunctor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SceneViewExtensionIsActiveFunctor"), sizeof(FSceneViewExtensionIsActiveFunctor), Get_Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Hash() { return 2607505895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
