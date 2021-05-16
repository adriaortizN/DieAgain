// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ReplayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelNameAndTime>()
{
	return FLevelNameAndTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameAndTime(FLevelNameAndTime::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelNameAndTime"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameAndTime")),new UScriptStruct::TCppStructOps<FLevelNameAndTime>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime;
	struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { "LevelChangeTimeInMS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelNameAndTime",
		sizeof(FLevelNameAndTime),
		alignof(FLevelNameAndTime),
		Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash() { return 1770169258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
