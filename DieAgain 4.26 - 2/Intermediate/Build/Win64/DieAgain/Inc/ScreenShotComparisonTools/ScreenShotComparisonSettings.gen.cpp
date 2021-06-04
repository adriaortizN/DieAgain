// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenShotComparisonTools/Public/ScreenShotComparisonSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenShotComparisonSettings() {}
// Cross Module References
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry();
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister();
	SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FScreenshotFallbackEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotFallbackEntry, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ScreenshotFallbackEntry"), sizeof(FScreenshotFallbackEntry), Get_Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Hash());
	}
	return Singleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FScreenshotFallbackEntry>()
{
	return FScreenshotFallbackEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScreenshotFallbackEntry(FScreenshotFallbackEntry::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ScreenshotFallbackEntry"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFScreenshotFallbackEntry
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFScreenshotFallbackEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScreenshotFallbackEntry")),new UScriptStruct::TCppStructOps<FScreenshotFallbackEntry>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFScreenshotFallbackEntry;
	struct Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for screenshot fallbacks\n*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "Holds settings for screenshot fallbacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotFallbackEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotFallbackEntry, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenshotFallbackEntry, Child), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ScreenshotFallbackEntry",
		sizeof(FScreenshotFallbackEntry),
		alignof(FScreenshotFallbackEntry),
		Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScreenshotFallbackEntry"), sizeof(FScreenshotFallbackEntry), Get_Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Hash() { return 685577448U; }
	void UScreenShotComparisonSettings::StaticRegisterNativesUScreenShotComparisonSettings()
	{
	}
	UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister()
	{
		return UScreenShotComparisonSettings::StaticClass();
	}
	struct Z_Construct_UClass_UScreenShotComparisonSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData[];
#endif
		static void NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConfidentialPlatformPathsForSavedResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenshotFallbackPlatforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotFallbackPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScreenshotFallbackPlatforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenShotComparisonSettings.h" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData[] = {
		{ "Comment", "/**\n\x09* if true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "if true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test" },
	};
#endif
	void Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj)
	{
		((UScreenShotComparisonSettings*)Obj)->bUseConfidentialPlatformPathsForSavedResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults = { "bUseConfidentialPlatformPathsForSavedResults", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScreenShotComparisonSettings), &Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScreenshotFallbackEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData[] = {
		{ "Comment", "/**\n\x09* An array of entries that describe other platforms we can use for fallbacks when comparing screenshots\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "An array of entries that describe other platforms we can use for fallbacks when comparing screenshots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenShotComparisonSettings, ScreenshotFallbackPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenShotComparisonSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenShotComparisonSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams = {
		&UScreenShotComparisonSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenShotComparisonSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenShotComparisonSettings, 144968052);
	template<> SCREENSHOTCOMPARISONTOOLS_API UClass* StaticClass<UScreenShotComparisonSettings>()
	{
		return UScreenShotComparisonSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenShotComparisonSettings(Z_Construct_UClass_UScreenShotComparisonSettings, &UScreenShotComparisonSettings::StaticClass, TEXT("/Script/ScreenShotComparisonTools"), TEXT("UScreenShotComparisonSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenShotComparisonSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
