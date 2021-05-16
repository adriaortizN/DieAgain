// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/AnimSequenceLevelSequenceLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceLevelSequenceLink() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UAnimSequenceLevelSequenceLink::StaticRegisterNativesUAnimSequenceLevelSequenceLink()
	{
	}
	UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister()
	{
		return UAnimSequenceLevelSequenceLink::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToLevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathToLevelSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Link To Level Sequence That may be driving the anim sequence*/" },
		{ "IncludePath", "AnimSequenceLevelSequenceLink.h" },
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
		{ "ToolTip", "Link To Level Sequence That may be driving the anim sequence" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequenceLevelSequenceLink, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence = { "PathToLevelSequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequenceLevelSequenceLink, PathToLevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceLevelSequenceLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::ClassParams = {
		&UAnimSequenceLevelSequenceLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequenceLevelSequenceLink, 856440819);
	template<> LEVELSEQUENCE_API UClass* StaticClass<UAnimSequenceLevelSequenceLink>()
	{
		return UAnimSequenceLevelSequenceLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequenceLevelSequenceLink(Z_Construct_UClass_UAnimSequenceLevelSequenceLink, &UAnimSequenceLevelSequenceLink::StaticClass, TEXT("/Script/LevelSequence"), TEXT("UAnimSequenceLevelSequenceLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceLevelSequenceLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
