// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstanceSystem() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackInstanceEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceEntry"), sizeof(FMovieSceneTrackInstanceEntry), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceEntry>()
{
	return FMovieSceneTrackInstanceEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackInstanceEntry(FMovieSceneTrackInstanceEntry::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackInstanceEntry"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceEntry
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackInstanceEntry")),new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceEntry>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceEntry;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject = { "BoundObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, BoundObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance = { "TrackInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, TrackInstance), Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackInstanceEntry",
		sizeof(FMovieSceneTrackInstanceEntry),
		alignof(FMovieSceneTrackInstanceEntry),
		Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackInstanceEntry"), sizeof(FMovieSceneTrackInstanceEntry), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Hash() { return 2669751917U; }
	void UMovieSceneTrackInstanceInstantiator::StaticRegisterNativesUMovieSceneTrackInstanceInstantiator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister()
	{
		return UMovieSceneTrackInstanceInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceInstantiator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams = {
		&UMovieSceneTrackInstanceInstantiator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrackInstanceInstantiator, 1179481791);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceInstantiator>()
	{
		return UMovieSceneTrackInstanceInstantiator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrackInstanceInstantiator(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator, &UMovieSceneTrackInstanceInstantiator::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrackInstanceInstantiator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceInstantiator);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTrackInstanceInstantiator)
	void UMovieSceneTrackInstanceSystem::StaticRegisterNativesUMovieSceneTrackInstanceSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister()
	{
		return UMovieSceneTrackInstanceSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instantiator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instantiator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator = { "Instantiator", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTrackInstanceSystem, Instantiator), Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams = {
		&UMovieSceneTrackInstanceSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrackInstanceSystem, 4168034543);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceSystem>()
	{
		return UMovieSceneTrackInstanceSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrackInstanceSystem(Z_Construct_UClass_UMovieSceneTrackInstanceSystem, &UMovieSceneTrackInstanceSystem::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrackInstanceSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
