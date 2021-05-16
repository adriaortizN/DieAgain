// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceAnimSequenceLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
// End Cross Module References
class UScriptStruct* FLevelSequenceAnimSequenceLinkItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceAnimSequenceLinkItem"), sizeof(FLevelSequenceAnimSequenceLinkItem), Get_Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceAnimSequenceLinkItem>()
{
	return FLevelSequenceAnimSequenceLinkItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem(FLevelSequenceAnimSequenceLinkItem::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceAnimSequenceLinkItem"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceAnimSequenceLinkItem
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceAnimSequenceLinkItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceAnimSequenceLinkItem")),new UScriptStruct::TCppStructOps<FLevelSequenceAnimSequenceLinkItem>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceAnimSequenceLinkItem;
	struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathToAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportTransforms_MetaData[];
#endif
		static void NewProp_bExportTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportCurves_MetaData[];
#endif
		static void NewProp_bExportCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[];
#endif
		static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Link To Anim Sequence that we are linked too.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Anim Sequence that we are linked too." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceAnimSequenceLinkItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence = { "PathToAnimSequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData[] = {
		{ "Comment", "//From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically\n" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms = { "bExportTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves = { "bExportCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bRecordInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceAnimSequenceLinkItem",
		sizeof(FLevelSequenceAnimSequenceLinkItem),
		alignof(FLevelSequenceAnimSequenceLinkItem),
		Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceAnimSequenceLinkItem"), sizeof(FLevelSequenceAnimSequenceLinkItem), Get_Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Hash() { return 959250246U; }
	void ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister()
	{
		return ULevelSequenceAnimSequenceLink::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSequenceLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceLinks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Link To Set of Anim Sequences that we may be linked to.*/" },
		{ "IncludePath", "LevelSequenceAnimSequenceLink.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Set of Anim Sequences that we may be linked to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceAnimSequenceLink, AnimSequenceLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceAnimSequenceLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams = {
		&ULevelSequenceAnimSequenceLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceAnimSequenceLink, 3222729535);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceAnimSequenceLink>()
	{
		return ULevelSequenceAnimSequenceLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceAnimSequenceLink(Z_Construct_UClass_ULevelSequenceAnimSequenceLink, &ULevelSequenceAnimSequenceLink::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceAnimSequenceLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceAnimSequenceLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
