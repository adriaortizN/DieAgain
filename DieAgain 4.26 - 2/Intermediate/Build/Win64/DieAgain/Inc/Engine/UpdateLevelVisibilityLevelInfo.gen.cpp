// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateLevelVisibilityLevelInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FUpdateLevelVisibilityLevelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelVisibilityLevelInfo"), sizeof(FUpdateLevelVisibilityLevelInfo), Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelVisibilityLevelInfo>()
{
	return FUpdateLevelVisibilityLevelInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateLevelVisibilityLevelInfo(FUpdateLevelVisibilityLevelInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("UpdateLevelVisibilityLevelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UpdateLevelVisibilityLevelInfo")),new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo;
	struct Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The name of the package for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name of the package for the level whose status changed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Comment", "/** The name / path of the asset file for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name / path of the asset file for the level whose status changed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** The new visibility state for this level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The new visibility state for this level." },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FUpdateLevelVisibilityLevelInfo*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UpdateLevelVisibilityLevelInfo",
		sizeof(FUpdateLevelVisibilityLevelInfo),
		alignof(FUpdateLevelVisibilityLevelInfo),
		Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateLevelVisibilityLevelInfo"), sizeof(FUpdateLevelVisibilityLevelInfo), Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash() { return 329995150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
