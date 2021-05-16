// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstance() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackInstanceInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceInput"), sizeof(FMovieSceneTrackInstanceInput), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceInput>()
{
	return FMovieSceneTrackInstanceInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackInstanceInput(FMovieSceneTrackInstanceInput::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackInstanceInput"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceInput
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackInstanceInput")),new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceInput>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceInput;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData[] = {
		{ "Comment", "/** The section that acts as an input for this animator */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "The section that acts as an input for this animator" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceInput, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackInstanceInput",
		sizeof(FMovieSceneTrackInstanceInput),
		alignof(FMovieSceneTrackInstanceInput),
		Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackInstanceInput"), sizeof(FMovieSceneTrackInstanceInput), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Hash() { return 182661360U; }
	void UMovieSceneTrackInstance::StaticRegisterNativesUMovieSceneTrackInstance()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister()
	{
		return UMovieSceneTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMasterTrackInstance_MetaData[];
#endif
		static void NewProp_bIsMasterTrackInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMasterTrackInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Linker;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all track instances. Can also be used for master tracks where AnimatedObject will be nullptr\n */" },
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "Base class for all track instances. Can also be used for master tracks where AnimatedObject will be nullptr" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject = { "AnimatedObject", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, AnimatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance_SetBit(void* Obj)
	{
		((UMovieSceneTrackInstance*)Obj)->bIsMasterTrackInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance = { "bIsMasterTrackInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneTrackInstance), &Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Linker_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Linker_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsMasterTrackInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Linker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams = {
		&UMovieSceneTrackInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrackInstance, 4171381690);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstance>()
	{
		return UMovieSceneTrackInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrackInstance(Z_Construct_UClass_UMovieSceneTrackInstance, &UMovieSceneTrackInstance::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrackInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
