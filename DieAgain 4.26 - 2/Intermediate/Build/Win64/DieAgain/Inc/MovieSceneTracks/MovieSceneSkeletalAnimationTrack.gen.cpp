// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"), sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimRootMotionTrackParams>()
{
	return FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams(FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimRootMotionTrackParams
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimRootMotionTrackParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSkeletalAnimRootMotionTrackParams")),new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimRootMotionTrackParams>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimRootMotionTrackParams;
	struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**Struct to hold the cached root motion positions based upon how we calculated them.\n* Also provides way to get the root motion at a particular time.\n*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Struct to hold the cached root motion positions based upon how we calculated them.\nAlso provides way to get the root motion at a particular time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimRootMotionTrackParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneSkeletalAnimRootMotionTrackParams",
		sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams),
		alignof(FMovieSceneSkeletalAnimRootMotionTrackParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"), sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Hash() { return 1960404293U; }
	void UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySectionIndexBlend_MetaData[];
#endif
		static void NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySectionIndexBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendFirstChildOfRoot_MetaData[];
#endif
		static void NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendFirstChildOfRoot;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRootMotionTrail_MetaData[];
#endif
		static void NewProp_bShowRootMotionTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRootMotionTrail;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors\n */" },
		{ "IncludePath", "Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bUseLegacySectionIndexBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend = { "bUseLegacySectionIndexBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, RootMotionParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to blend and adjust the first child node instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to blend and adjust the first child node instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bBlendFirstChildOfRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot = { "bBlendFirstChildOfRoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to show the position of the root for this sections */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to show the position of the root for this sections" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bShowRootMotionTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail = { "bShowRootMotionTrail", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSkeletalAnimationTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSkeletalAnimationTrack, 2659158975);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationTrack>()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSkeletalAnimationTrack(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, &UMovieSceneSkeletalAnimationTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSkeletalAnimationTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
