// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneEventSystems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSystems() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem();
// End Cross Module References
class UScriptStruct* FMovieSceneEventTriggerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTriggerData"), sizeof(FMovieSceneEventTriggerData), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventTriggerData>()
{
	return FMovieSceneEventTriggerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventTriggerData(FMovieSceneEventTriggerData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventTriggerData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventTriggerData")),new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerData;
	struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ptrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ptrs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs = { "Ptrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventTriggerData, Ptrs), Z_Construct_UScriptStruct_FMovieSceneEventPtrs, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventTriggerData, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventTriggerData",
		sizeof(FMovieSceneEventTriggerData),
		alignof(FMovieSceneEventTriggerData),
		Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventTriggerData"), sizeof(FMovieSceneEventTriggerData), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Hash() { return 3898468574U; }
	void UMovieSceneEventSystem::StaticRegisterNativesUMovieSceneEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister()
	{
		return UMovieSceneEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Systems that triggers events based on one-shot FMovieSceneEventComponent components\n * Works by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\n * Does not dispatch any async tasks\n */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Systems that triggers events based on one-shot FMovieSceneEventComponent components\nWorks by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\nDoes not dispatch any async tasks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams = {
		&UMovieSceneEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventSystem, 3595640668);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSystem>()
	{
		return UMovieSceneEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventSystem(Z_Construct_UClass_UMovieSceneEventSystem, &UMovieSceneEventSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSystem);
	void UMovieScenePreSpawnEventSystem::StaticRegisterNativesUMovieScenePreSpawnEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister()
	{
		return UMovieScenePreSpawnEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events before any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events before any spawnables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePreSpawnEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams = {
		&UMovieScenePreSpawnEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePreSpawnEventSystem, 3968669389);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePreSpawnEventSystem>()
	{
		return UMovieScenePreSpawnEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePreSpawnEventSystem(Z_Construct_UClass_UMovieScenePreSpawnEventSystem, &UMovieScenePreSpawnEventSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePreSpawnEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreSpawnEventSystem);
	void UMovieScenePostSpawnEventSystem::StaticRegisterNativesUMovieScenePostSpawnEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister()
	{
		return UMovieScenePostSpawnEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events after any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events after any spawnables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostSpawnEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams = {
		&UMovieScenePostSpawnEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePostSpawnEventSystem, 775658895);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostSpawnEventSystem>()
	{
		return UMovieScenePostSpawnEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePostSpawnEventSystem(Z_Construct_UClass_UMovieScenePostSpawnEventSystem, &UMovieScenePostSpawnEventSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePostSpawnEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostSpawnEventSystem);
	void UMovieScenePostEvalEventSystem::StaticRegisterNativesUMovieScenePostEvalEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister()
	{
		return UMovieScenePostEvalEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events right at the end of evaluation */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events right at the end of evaluation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostEvalEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams = {
		&UMovieScenePostEvalEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePostEvalEventSystem, 833263318);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostEvalEventSystem>()
	{
		return UMovieScenePostEvalEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePostEvalEventSystem(Z_Construct_UClass_UMovieScenePostEvalEventSystem, &UMovieScenePostEvalEventSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePostEvalEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostEvalEventSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
