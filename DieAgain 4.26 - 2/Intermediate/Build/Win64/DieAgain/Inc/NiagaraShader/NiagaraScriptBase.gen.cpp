// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraShader/Public/NiagaraScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptBase() {}
// Cross Module References
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData();
	UPackage* Z_Construct_UPackage__Script_NiagaraShader();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase_NoRegister();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSimulationStageMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASHADER_API uint32 Get_Z_Construct_UScriptStruct_FSimulationStageMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulationStageMetaData, Z_Construct_UPackage__Script_NiagaraShader(), TEXT("SimulationStageMetaData"), sizeof(FSimulationStageMetaData), Get_Z_Construct_UScriptStruct_FSimulationStageMetaData_Hash());
	}
	return Singleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FSimulationStageMetaData>()
{
	return FSimulationStageMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimulationStageMetaData(FSimulationStageMetaData::StaticStruct, TEXT("/Script/NiagaraShader"), TEXT("SimulationStageMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraShader_StaticRegisterNativesFSimulationStageMetaData
{
	FScriptStruct_NiagaraShader_StaticRegisterNativesFSimulationStageMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimulationStageMetaData")),new UScriptStruct::TCppStructOps<FSimulationStageMetaData>);
	}
} ScriptStruct_NiagaraShader_StaticRegisterNativesFSimulationStageMetaData;
	struct Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationStageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SimulationStageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IterationSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IterationSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnly_MetaData[];
#endif
		static void NewProp_bSpawnOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWritesParticles_MetaData[];
#endif
		static void NewProp_bWritesParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWritesParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPartialParticleUpdate_MetaData[];
#endif
		static void NewProp_bPartialParticleUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPartialParticleUpdate;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputDestinations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDestinations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputDestinations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulationStageMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData[] = {
		{ "Comment", "/** User simulation stage name. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "User simulation stage name." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName = { "SimulationStageName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulationStageMetaData, SimulationStageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSource_MetaData[] = {
		{ "Comment", "/** The Data Interface that we iterate over for this stage. If None, then use particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "The Data Interface that we iterate over for this stage. If None, then use particles." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSource = { "IterationSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulationStageMetaData, IterationSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly_MetaData[] = {
		{ "Comment", "/** Is this stage a spawn-only stage? */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Is this stage a spawn-only stage?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bSpawnOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly = { "bSpawnOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData[] = {
		{ "Comment", "/** Do we write to particles this stage? */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Do we write to particles this stage?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bWritesParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles = { "bWritesParticles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData[] = {
		{ "Comment", "/** When enabled the simulation stage does not write all variables out, so we are reading / writing to the same buffer. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When enabled the simulation stage does not write all variables out, so we are reading / writing to the same buffer." },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bPartialParticleUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate = { "bPartialParticleUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_Inner = { "OutputDestinations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData[] = {
		{ "Comment", "/** DataInterfaces that we write to in this stage.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "DataInterfaces that we write to in this stage." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations = { "OutputDestinations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulationStageMetaData, OutputDestinations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MinStage_MetaData[] = {
		{ "Comment", "/** Index of the simulation stage where we begin iterating. This is meant to encompass iteration count without having an entry for each iteration.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Index of the simulation stage where we begin iterating. This is meant to encompass iteration count without having an entry for each iteration." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MinStage = { "MinStage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulationStageMetaData, MinStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MinStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MinStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MaxStage_MetaData[] = {
		{ "Comment", "/** Index of the simulation stage where we end iterating. This is meant to encompass iteration count without having an entry for each iteration.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Index of the simulation stage where we end iterating. This is meant to encompass iteration count without having an entry for each iteration." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MaxStage = { "MaxStage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulationStageMetaData, MaxStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MaxStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MaxStage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bSpawnOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MinStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_MaxStage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"SimulationStageMetaData",
		sizeof(FSimulationStageMetaData),
		alignof(FSimulationStageMetaData),
		Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimulationStageMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraShader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimulationStageMetaData"), sizeof(FSimulationStageMetaData), Get_Z_Construct_UScriptStruct_FSimulationStageMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimulationStageMetaData_Hash() { return 2095589688U; }
	void UNiagaraScriptBase::StaticRegisterNativesUNiagaraScriptBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraScriptBase_NoRegister()
	{
		return UNiagaraScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraScriptBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptBase_Statics::ClassParams = {
		&UNiagaraScriptBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraScriptBase, 4105888200);
	template<> NIAGARASHADER_API UClass* StaticClass<UNiagaraScriptBase>()
	{
		return UNiagaraScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraScriptBase(Z_Construct_UClass_UNiagaraScriptBase, &UNiagaraScriptBase::StaticClass, TEXT("/Script/NiagaraShader"), TEXT("UNiagaraScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
