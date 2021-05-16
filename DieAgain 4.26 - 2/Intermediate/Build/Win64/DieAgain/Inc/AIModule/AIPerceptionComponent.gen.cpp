// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms
		{
			FActorPerceptionUpdateInfo UpdateInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms, UpdateInfo), Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionInfoUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "PerceptionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FActorPerceptionBlueprintInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FActorPerceptionBlueprintInfo>()
{
	return FActorPerceptionBlueprintInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPerceptionBlueprintInfo(FActorPerceptionBlueprintInfo::StaticStruct, TEXT("/Script/AIModule"), TEXT("ActorPerceptionBlueprintInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo
{
	FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPerceptionBlueprintInfo")),new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo;
	struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSensedStimuli_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSensedStimuli_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastSensedStimuli;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHostile_MetaData[];
#endif
		static void NewProp_bIsHostile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHostile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Sensed Actor's Data" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, LastSensedStimuli), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit(void* Obj)
	{
		((FActorPerceptionBlueprintInfo*)Obj)->bIsHostile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile = { "bIsHostile", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FActorPerceptionBlueprintInfo), &Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"ActorPerceptionBlueprintInfo",
		sizeof(FActorPerceptionBlueprintInfo),
		alignof(FActorPerceptionBlueprintInfo),
		Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Hash() { return 1849963365U; }
class UScriptStruct* FActorPerceptionUpdateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionUpdateInfo"), sizeof(FActorPerceptionUpdateInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FActorPerceptionUpdateInfo>()
{
	return FActorPerceptionUpdateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPerceptionUpdateInfo(FActorPerceptionUpdateInfo::StaticStruct, TEXT("/Script/AIModule"), TEXT("ActorPerceptionUpdateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionUpdateInfo
{
	FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionUpdateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPerceptionUpdateInfo")),new UScriptStruct::TCppStructOps<FActorPerceptionUpdateInfo>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionUpdateInfo;
	struct Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Sensed Actor's Update Data" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionUpdateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Id of to the stimulus source */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Id of to the stimulus source" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionUpdateInfo, TargetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Actor associated to the stimulus (can be null) */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Actor associated to the stimulus (can be null)" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionUpdateInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Updated stimulus */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Updated stimulus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPerceptionUpdateInfo, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"ActorPerceptionUpdateInfo",
		sizeof(FActorPerceptionUpdateInfo),
		alignof(FActorPerceptionUpdateInfo),
		Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPerceptionUpdateInfo"), sizeof(FActorPerceptionUpdateInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Hash() { return 926136308U; }
	DEFINE_FUNCTION(UAIPerceptionComponent::execSetSenseEnabled)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSenseEnabled(Z_Param_SenseClass,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetActorsPerception)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FActorPerceptionBlueprintInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorsPerception(Z_Param_Actor,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetKnownPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKnownPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetCurrentlyPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentlyPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedHostileActorsBySense)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedHostileActorsBySense(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedHostileActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedHostileActors(Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execForgetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execRequestStimuliListenerUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestStimuliListenerUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execOnOwnerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent()
	{
		UClass* Class = UAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetAll", &UAIPerceptionComponent::execForgetAll },
			{ "GetActorsPerception", &UAIPerceptionComponent::execGetActorsPerception },
			{ "GetCurrentlyPerceivedActors", &UAIPerceptionComponent::execGetCurrentlyPerceivedActors },
			{ "GetKnownPerceivedActors", &UAIPerceptionComponent::execGetKnownPerceivedActors },
			{ "GetPerceivedActors", &UAIPerceptionComponent::execGetPerceivedActors },
			{ "GetPerceivedHostileActors", &UAIPerceptionComponent::execGetPerceivedHostileActors },
			{ "GetPerceivedHostileActorsBySense", &UAIPerceptionComponent::execGetPerceivedHostileActorsBySense },
			{ "OnOwnerEndPlay", &UAIPerceptionComponent::execOnOwnerEndPlay },
			{ "RequestStimuliListenerUpdate", &UAIPerceptionComponent::execRequestStimuliListenerUpdate },
			{ "SetSenseEnabled", &UAIPerceptionComponent::execSetSenseEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** basically cleans up PerceptualData, resulting in loss of all previous perception */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "basically cleans up PerceptualData, resulting in loss of all previous perception" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "ForgetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics
	{
		struct AIPerceptionComponent_eventGetActorsPerception_Parms
		{
			AActor* Actor;
			FActorPerceptionBlueprintInfo Info;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Info), Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventGetActorsPerception_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Retrieves whatever has been sensed about given actor */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Retrieves whatever has been sensed about given actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetActorsPerception", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** If SenseToUse is none all actors currently perceived in any way will get fetched */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors currently perceived in any way will get fetched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetCurrentlyPerceivedActors", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetKnownPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetKnownPerceivedActors", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedActors", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActors_Parms
		{
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "//----------------------------------------------------------------------//\n// blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "blueprint interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedHostileActors", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms
		{
			const TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedHostileActorsBySense", nullptr, nullptr, sizeof(AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics
	{
		struct AIPerceptionComponent_eventOnOwnerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "OnOwnerEndPlay", nullptr, nullptr, sizeof(AIPerceptionComponent_eventOnOwnerEndPlay_Parms), Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Notifies AIPerceptionSystem to update properties for this \"stimuli listener\" */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies AIPerceptionSystem to update properties for this \"stimuli listener\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "RequestStimuliListenerUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics
	{
		struct AIPerceptionComponent_eventSetSenseEnabled_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionComponent_eventSetSenseEnabled_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventSetSenseEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Note that this works only if given sense has been already configured for\n\x09 *\x09this component instance */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Note that this works only if given sense has been already configured for\n    this component instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "SetSenseEnabled", nullptr, nullptr, sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensesConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensesConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DominantSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionInfoUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionInfoUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll, "ForgetAll" }, // 4108645385
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception, "GetActorsPerception" }, // 2173317969
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors, "GetCurrentlyPerceivedActors" }, // 3304557027
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors, "GetKnownPerceivedActors" }, // 3209608083
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors, "GetPerceivedActors" }, // 2334960783
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors, "GetPerceivedHostileActors" }, // 1050133272
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense, "GetPerceivedHostileActorsBySense" }, // 3630045433
		{ &Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 2892813888
		{ &Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate, "RequestStimuliListenerUpdate" }, // 3119836506
		{ &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled, "SetSenseEnabled" }, // 4119730918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n *\x09""AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\n *\x09""and gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)\n */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Perception/AIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\nand gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner = { "SensesConfig", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig = { "SensesConfig", nullptr, (EPropertyFlags)0x0020088000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** Indicated sense that takes precedence over other senses when determining sensed actor's location. \n\x09 *\x09Should be set to one of the senses configured in SensesConfig, or None. */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Indicated sense that takes precedence over other senses when determining sensed actor's location.\n    Should be set to one of the senses configured in SensesConfig, or None." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense = { "DominantSense", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, DominantSense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Might want to move these to special \"BP_AIPerceptionComponent\"\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Might want to move these to special \"BP_AIPerceptionComponent\"" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated = { "OnPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, OnPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData[] = {
		{ "Comment", "/**\n\x09 * Notifies all bound objects that perception info has been updated for a given target.\n\x09 * The notification is broadcasted for any received stimulus or on change of state\n\x09 * according to the stimulus configuration.\n\x09 * \n\x09 * Note - This delegate will not be called if source actor is no longer valid \n\x09 * by the time a stimulus gets processed. \n\x09 * Use OnTargetPerceptionInfoUpdated providing a source id to handle those cases.\n\x09 *\n\x09 * @param\x09SourceActor\x09""Actor associated to the stimulus (can not be null)\n\x09 * @param\x09Stimulus\x09Updated stimulus\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies all bound objects that perception info has been updated for a given target.\nThe notification is broadcasted for any received stimulus or on change of state\naccording to the stimulus configuration.\n\nNote - This delegate will not be called if source actor is no longer valid\nby the time a stimulus gets processed.\nUse OnTargetPerceptionInfoUpdated providing a source id to handle those cases.\n\n@param       SourceActor     Actor associated to the stimulus (can not be null)\n@param       Stimulus        Updated stimulus" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated = { "OnTargetPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData[] = {
		{ "Comment", "/**\n\x09 * Notifies all bound objects that perception info has been updated for a given target.\n\x09 * The notification is broadcasted for any received stimulus or on change of state\n\x09 * according to the stimulus configuration.\n\x09 *\n\x09 * Note - This delegate will be called even if source actor is no longer valid \n\x09 * by the time a stimulus gets processed so it is better to use source id for bookkeeping.\n\x09 *\n\x09 * @param\x09UpdateInfo\x09""Data structure providing information related to the updated perceptual data\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies all bound objects that perception info has been updated for a given target.\nThe notification is broadcasted for any received stimulus or on change of state\naccording to the stimulus configuration.\n\nNote - This delegate will be called even if source actor is no longer valid\nby the time a stimulus gets processed so it is better to use source id for bookkeeping.\n\n@param       UpdateInfo      Data structure providing information related to the updated perceptual data" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated = { "OnTargetPerceptionInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionInfoUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams = {
		&UAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionComponent, 867862504);
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionComponent>()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionComponent(Z_Construct_UClass_UAIPerceptionComponent, &UAIPerceptionComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
