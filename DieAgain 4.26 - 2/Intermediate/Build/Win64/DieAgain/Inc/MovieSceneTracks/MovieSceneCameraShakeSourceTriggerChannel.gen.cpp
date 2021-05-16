// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerChannel() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSourceTriggerChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneCameraShakeSourceTriggerChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

class UScriptStruct* FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceTriggerChannel"), sizeof(FMovieSceneCameraShakeSourceTriggerChannel), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceTriggerChannel>()
{
	return FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel(FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSourceTriggerChannel"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTriggerChannel
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTriggerChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSourceTriggerChannel")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTriggerChannel>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTriggerChannel;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTriggerChannel>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Array of times for each key" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneCameraShakeSourceTriggerChannel",
		sizeof(FMovieSceneCameraShakeSourceTriggerChannel),
		alignof(FMovieSceneCameraShakeSourceTriggerChannel),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSourceTriggerChannel"), sizeof(FMovieSceneCameraShakeSourceTriggerChannel), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Hash() { return 2754061645U; }
class UScriptStruct* FMovieSceneCameraShakeSourceTrigger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceTrigger"), sizeof(FMovieSceneCameraShakeSourceTrigger), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceTrigger>()
{
	return FMovieSceneCameraShakeSourceTrigger::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger(FMovieSceneCameraShakeSourceTrigger::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSourceTrigger"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTrigger
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTrigger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSourceTrigger")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTrigger>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSourceTrigger;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTrigger>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Class of the camera shake to play */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Class of the camera shake to play" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, ShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Scalar that affects shake intensity */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Scalar that affects shake intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraShakeSourceTrigger",
		sizeof(FMovieSceneCameraShakeSourceTrigger),
		alignof(FMovieSceneCameraShakeSourceTrigger),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSourceTrigger"), sizeof(FMovieSceneCameraShakeSourceTrigger), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Hash() { return 1551951431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
