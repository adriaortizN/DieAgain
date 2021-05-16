// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RadialBoxSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialBoxSettings() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
class UScriptStruct* FRadialBoxSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FRadialBoxSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialBoxSettings, Z_Construct_UPackage__Script_UMG(), TEXT("RadialBoxSettings"), sizeof(FRadialBoxSettings), Get_Z_Construct_UScriptStruct_FRadialBoxSettings_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRadialBoxSettings>()
{
	return FRadialBoxSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRadialBoxSettings(FRadialBoxSettings::StaticStruct, TEXT("/Script/UMG"), TEXT("RadialBoxSettings"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFRadialBoxSettings
{
	FScriptStruct_UMG_StaticRegisterNativesFRadialBoxSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RadialBoxSettings")),new UScriptStruct::TCppStructOps<FRadialBoxSettings>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFRadialBoxSettings;
	struct Z_Construct_UScriptStruct_FRadialBoxSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDistributeItemsEvenly_MetaData[];
#endif
		static void NewProp_bDistributeItemsEvenly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDistributeItemsEvenly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleBetweenItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleBetweenItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialBoxSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/* Distribute Items evenly in the whole circle. Checking this option ignores AngleBetweenItems */" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "Distribute Items evenly in the whole circle. Checking this option ignores AngleBetweenItems" },
	};
#endif
	void Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_SetBit(void* Obj)
	{
		((FRadialBoxSettings*)Obj)->bDistributeItemsEvenly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly = { "bDistributeItemsEvenly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRadialBoxSettings), &Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/* Amount of Euler degrees that separate each item */" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "Amount of Euler degrees that separate each item" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems = { "AngleBetweenItems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRadialBoxSettings, AngleBetweenItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/* At what angle will we place the first element of the wheel? */" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "At what angle will we place the first element of the wheel?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRadialBoxSettings, StartingAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"RadialBoxSettings",
		sizeof(FRadialBoxSettings),
		alignof(FRadialBoxSettings),
		Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRadialBoxSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RadialBoxSettings"), sizeof(FRadialBoxSettings), Get_Z_Construct_UScriptStruct_FRadialBoxSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRadialBoxSettings_Hash() { return 87341405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
