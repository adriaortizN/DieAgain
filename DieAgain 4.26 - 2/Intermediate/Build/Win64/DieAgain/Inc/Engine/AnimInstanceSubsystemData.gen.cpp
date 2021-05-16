// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimInstanceSubsystemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceSubsystemData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceSubsystemData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FAnimInstanceSubsystemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceSubsystemData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceSubsystemData"), sizeof(FAnimInstanceSubsystemData), Get_Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInstanceSubsystemData>()
{
	return FAnimInstanceSubsystemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInstanceSubsystemData(FAnimInstanceSubsystemData::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimInstanceSubsystemData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceSubsystemData
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceSubsystemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInstanceSubsystemData")),new UScriptStruct::TCppStructOps<FAnimInstanceSubsystemData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceSubsystemData;
	struct Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base structure for all anim instance subsystem data */" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceSubsystemData.h" },
		{ "ToolTip", "Base structure for all anim instance subsystem data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceSubsystemData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimInstanceSubsystemData",
		sizeof(FAnimInstanceSubsystemData),
		alignof(FAnimInstanceSubsystemData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceSubsystemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInstanceSubsystemData"), sizeof(FAnimInstanceSubsystemData), Get_Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceSubsystemData_Hash() { return 3213762714U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
