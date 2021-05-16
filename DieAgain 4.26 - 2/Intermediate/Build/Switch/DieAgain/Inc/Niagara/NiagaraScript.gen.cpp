// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScript() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptHighlight();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
// End Cross Module References
	static UEnum* ENiagaraScriptLibraryVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptLibraryVisibility"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>()
	{
		return ENiagaraScriptLibraryVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptLibraryVisibility(ENiagaraScriptLibraryVisibility_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptLibraryVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Hash() { return 1612163815U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptLibraryVisibility"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptLibraryVisibility::Invalid", (int64)ENiagaraScriptLibraryVisibility::Invalid },
				{ "ENiagaraScriptLibraryVisibility::Unexposed", (int64)ENiagaraScriptLibraryVisibility::Unexposed },
				{ "ENiagaraScriptLibraryVisibility::Library", (int64)ENiagaraScriptLibraryVisibility::Library },
				{ "ENiagaraScriptLibraryVisibility::Hidden", (int64)ENiagaraScriptLibraryVisibility::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.Comment", "/** The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages. */" },
				{ "Hidden.DisplayName", "Hidden" },
				{ "Hidden.Name", "ENiagaraScriptLibraryVisibility::Hidden" },
				{ "Hidden.ToolTip", "The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages." },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "ENiagaraScriptLibraryVisibility::Invalid" },
				{ "Library.Comment", "/** The script is exposed to the asset library and always visible to the user. */" },
				{ "Library.DisplayName", "Exposed" },
				{ "Library.Name", "ENiagaraScriptLibraryVisibility::Library" },
				{ "Library.ToolTip", "The script is exposed to the asset library and always visible to the user." },
				{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
				{ "Unexposed.Comment", "/** The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option. */" },
				{ "Unexposed.DisplayName", "Unexposed" },
				{ "Unexposed.Name", "ENiagaraScriptLibraryVisibility::Unexposed" },
				{ "Unexposed.ToolTip", "The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptLibraryVisibility",
				"ENiagaraScriptLibraryVisibility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraModuleDependencyScriptConstraint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyScriptConstraint"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>()
	{
		return ENiagaraModuleDependencyScriptConstraint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraModuleDependencyScriptConstraint(ENiagaraModuleDependencyScriptConstraint_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraModuleDependencyScriptConstraint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Hash() { return 3632920783U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraModuleDependencyScriptConstraint"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraModuleDependencyScriptConstraint::SameScript", (int64)ENiagaraModuleDependencyScriptConstraint::SameScript },
				{ "ENiagaraModuleDependencyScriptConstraint::AllScripts", (int64)ENiagaraModuleDependencyScriptConstraint::AllScripts },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllScripts.Comment", "/** The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\". */" },
				{ "AllScripts.Name", "ENiagaraModuleDependencyScriptConstraint::AllScripts" },
				{ "AllScripts.ToolTip", "The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\"." },
				{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
				{ "SameScript.Comment", "/** The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\". */" },
				{ "SameScript.Name", "ENiagaraModuleDependencyScriptConstraint::SameScript" },
				{ "SameScript.ToolTip", "The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\"." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraModuleDependencyScriptConstraint",
				"ENiagaraModuleDependencyScriptConstraint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraModuleDependencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyType"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>()
	{
		return ENiagaraModuleDependencyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraModuleDependencyType(ENiagaraModuleDependencyType_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraModuleDependencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Hash() { return 1942795364U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraModuleDependencyType"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraModuleDependencyType::PreDependency", (int64)ENiagaraModuleDependencyType::PreDependency },
				{ "ENiagaraModuleDependencyType::PostDependency", (int64)ENiagaraModuleDependencyType::PostDependency },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
				{ "PostDependency.Comment", "/** The dependency belongs after the module. */" },
				{ "PostDependency.Name", "ENiagaraModuleDependencyType::PostDependency" },
				{ "PostDependency.ToolTip", "The dependency belongs after the module." },
				{ "PreDependency.Comment", "/** The dependency belongs before the module. */" },
				{ "PreDependency.Name", "ENiagaraModuleDependencyType::PreDependency" },
				{ "PreDependency.ToolTip", "The dependency belongs before the module." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraModuleDependencyType",
				"ENiagaraModuleDependencyType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUnusedAttributeBehaviour_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour, Z_Construct_UPackage__Script_Niagara(), TEXT("EUnusedAttributeBehaviour"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>()
	{
		return EUnusedAttributeBehaviour_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnusedAttributeBehaviour(EUnusedAttributeBehaviour_StaticEnum, TEXT("/Script/Niagara"), TEXT("EUnusedAttributeBehaviour"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Hash() { return 488510059U; }
	UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnusedAttributeBehaviour"), 0, Get_Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnusedAttributeBehaviour::Copy", (int64)EUnusedAttributeBehaviour::Copy },
				{ "EUnusedAttributeBehaviour::Zero", (int64)EUnusedAttributeBehaviour::Zero },
				{ "EUnusedAttributeBehaviour::None", (int64)EUnusedAttributeBehaviour::None },
				{ "EUnusedAttributeBehaviour::MarkInvalid", (int64)EUnusedAttributeBehaviour::MarkInvalid },
				{ "EUnusedAttributeBehaviour::PassThrough", (int64)EUnusedAttributeBehaviour::PassThrough },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines what will happen to unused attributes when a script is run. */" },
				{ "Copy.Comment", "/** The previous value of the attribute is copied across. */" },
				{ "Copy.Name", "EUnusedAttributeBehaviour::Copy" },
				{ "Copy.ToolTip", "The previous value of the attribute is copied across." },
				{ "MarkInvalid.Comment", "/** The memory for the attribute is set to NIAGARA_INVALID_MEMORY. */" },
				{ "MarkInvalid.Name", "EUnusedAttributeBehaviour::MarkInvalid" },
				{ "MarkInvalid.ToolTip", "The memory for the attribute is set to NIAGARA_INVALID_MEMORY." },
				{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
				{ "None.Comment", "/** The attribute is untouched. */" },
				{ "None.Name", "EUnusedAttributeBehaviour::None" },
				{ "None.ToolTip", "The attribute is untouched." },
				{ "PassThrough.Comment", "/** The attribute is passed through without double buffering */" },
				{ "PassThrough.Name", "EUnusedAttributeBehaviour::PassThrough" },
				{ "PassThrough.ToolTip", "The attribute is passed through without double buffering" },
				{ "ToolTip", "Defines what will happen to unused attributes when a script is run." },
				{ "Zero.Comment", "/** The attribute is set to zero. */" },
				{ "Zero.Name", "EUnusedAttributeBehaviour::Zero" },
				{ "Zero.ToolTip", "The attribute is set to zero." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"EUnusedAttributeBehaviour",
				"EUnusedAttributeBehaviour",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNiagaraVMExecutableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableData"), sizeof(FNiagaraVMExecutableData), Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableData>()
{
	return FNiagaraVMExecutableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVMExecutableData(FNiagaraVMExecutableData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVMExecutableData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVMExecutableData")),new UScriptStruct::TCppStructOps<FNiagaraVMExecutableData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableData;
	struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteCode_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OptimizedByteCode_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizedByteCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptimizedByteCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTempRegisters_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTempRegisters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumUserPtrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumUserPtrs;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InternalParameters;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptLiterals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptLiterals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptLiterals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataUsage;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetToParameters_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataSetToParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetToParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DataSetToParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalExternalFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalExternalFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalExternalFunctions;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataInterfaceInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalledVMExternalFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalledVMExternalFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CalledVMExternalFunctions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadDataSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadDataSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReadDataSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WriteDataSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteDataSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WriteDataSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatScopes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatScopes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatScopes;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslationGPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslationGPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAssemblyTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastAssemblyTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastOpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LastOpCount;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DIParamInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DIParamInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DIParamInfo;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterCollectionPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionPaths;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastCompileStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCompileStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastCompileStatus;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationStageMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationStageMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulationStageMetaData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[];
#endif
		static void NewProp_bReadsAttributeData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompileTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastCompileEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCompileEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastCompileEvents;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadsSignificanceIndex_MetaData[];
#endif
		static void NewProp_bReadsSignificanceIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadsSignificanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data needed to run a Niagara VM executable script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data needed to run a Niagara VM executable script." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_Inner = { "ByteCode", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData[] = {
		{ "Comment", "/** Byte code to execute for this system */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Byte code to execute for this system" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ByteCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_Inner = { "OptimizedByteCode", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData[] = {
		{ "Comment", "/** Runtime optimized byte code, specific to the system we are running on, currently can not be serialized */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Runtime optimized byte code, specific to the system we are running on, currently can not be serialized" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode = { "OptimizedByteCode", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, OptimizedByteCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData[] = {
		{ "Comment", "/** Number of temp registers used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of temp registers used by this script." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters = { "NumTempRegisters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, NumTempRegisters), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData[] = {
		{ "Comment", "/** Number of user pointers we must pass to the VM. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of user pointers we must pass to the VM." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs = { "NumUserPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, NumUserPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, Parameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters = { "InternalParameters", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, InternalParameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ScriptLiterals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Comment", "/** Attributes used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Attributes used by this script." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData[] = {
		{ "Comment", "/** Contains various usage information for this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains various usage information for this script." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage = { "DataUsage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataUsage), Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp = { "DataSetToParameters_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataSetToParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, AdditionalExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData[] = {
		{ "Comment", "/** Information about all data interfaces used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Information about all data interfaces used by this script." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataInterfaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData[] = {
		{ "Comment", "/** Array of ordered vm external functions to place in the function table. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of ordered vm external functions to place in the function table." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, CalledVMExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner = { "ReadDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets = { "ReadDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ReadDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner = { "WriteDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataSetProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets = { "WriteDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, WriteDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner = { "StatScopes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraStatScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData[] = {
		{ "Comment", "/** Scopes we'll track with stats.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Scopes we'll track with stats." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes = { "StatScopes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, StatScopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation = { "LastHlslTranslation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslation), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU = { "LastHlslTranslationGPU", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslationGPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation = { "LastAssemblyTranslation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastAssemblyTranslation), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount = { "LastOpCount", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastOpCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo_Inner = { "DIParamInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo = { "DIParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DIParamInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData[] = {
		{ "Comment", "/** The parameter collections used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The parameter collections used by this script." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ParameterCollectionPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData[] = {
		{ "Comment", "/** Last known compile status. Lets us determine the latest state of the script byte buffer.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Last known compile status. Lets us determine the latest state of the script byte buffer." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus = { "LastCompileStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileStatus), Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimulationStageMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, SimulationStageMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableData*)Obj)->bReadsAttributeData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ErrorMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTime = { "CompileTime", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, CompileTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData[] = {
		{ "Comment", "/** Array of all compile events generated last time the script was compiled.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of all compile events generated last time the script was compiled." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableData*)Obj)->bReadsSignificanceIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex = { "bReadsSignificanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DIParamInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVMExecutableData",
		sizeof(FNiagaraVMExecutableData),
		alignof(FNiagaraVMExecutableData),
		Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVMExecutableData"), sizeof(FNiagaraVMExecutableData), Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Hash() { return 3820604598U; }
class UScriptStruct* FNiagaraVMExecutableDataId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableDataId"), sizeof(FNiagaraVMExecutableDataId), Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableDataId>()
{
	return FNiagaraVMExecutableDataId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVMExecutableDataId(FNiagaraVMExecutableDataId::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVMExecutableDataId"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableDataId
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableDataId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVMExecutableDataId")),new UScriptStruct::TCppStructOps<FNiagaraVMExecutableDataId>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVMExecutableDataId;
	struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompilerVersionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompilerVersionID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptUsageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptUsageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptUsageTypeID;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalDefines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDefines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalDefines;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesRapidIterationParams_MetaData[];
#endif
		static void NewProp_bUsesRapidIterationParams_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesRapidIterationParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawn_MetaData[];
#endif
		static void NewProp_bInterpolatedSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseScriptID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseScriptID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseScriptCompileHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseScriptCompileHash;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencedCompileHashes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedCompileHashes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedCompileHashes;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableDataId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData[] = {
		{ "Comment", "/** The version of the compiler that this needs to be built against.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The version of the compiler that this needs to be built against." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID = { "CompilerVersionID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, CompilerVersionID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData[] = {
		{ "Comment", "/** The type of script this was used for.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The type of script this was used for." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType = { "ScriptUsageType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData[] = {
		{ "Comment", "/** The instance id of this script usage type.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The instance id of this script usage type." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID = { "ScriptUsageTypeID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageTypeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData[] = {
		{ "Comment", "/** Configuration options*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Configuration options" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, AdditionalDefines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData[] = {
		{ "Comment", "/** Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bUsesRapidIterationParams = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams = { "bUsesRapidIterationParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData[] = {
		{ "Comment", "/** Do we require interpolated spawning */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require interpolated spawning" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bInterpolatedSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn = { "bInterpolatedSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Do we require persistent IDs */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require persistent IDs" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData[] = {
		{ "Comment", "/**\n\x09* The GUID of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The GUID of the subgraph this shader primarily represents." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID = { "BaseScriptID", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData[] = {
		{ "Comment", "/**\n\x09* The hash of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The hash of the subgraph this shader primarily represents." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash = { "BaseScriptCompileHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptCompileHash), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData[] = {
		{ "Comment", "/** Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ReferencedCompileHashes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVMExecutableDataId",
		sizeof(FNiagaraVMExecutableDataId),
		alignof(FNiagaraVMExecutableDataId),
		Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVMExecutableDataId"), sizeof(FNiagaraVMExecutableDataId), Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Hash() { return 196429016U; }
class UScriptStruct* FNiagaraModuleDependency::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraModuleDependency_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraModuleDependency, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraModuleDependency"), sizeof(FNiagaraModuleDependency), Get_Z_Construct_UScriptStruct_FNiagaraModuleDependency_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraModuleDependency>()
{
	return FNiagaraModuleDependency::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraModuleDependency(FNiagaraModuleDependency::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraModuleDependency"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraModuleDependency
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraModuleDependency()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraModuleDependency")),new UScriptStruct::TCppStructOps<FNiagaraModuleDependency>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraModuleDependency;
	struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptConstraint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraModuleDependency>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge')" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Whether the dependency belongs before or after this module */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether the dependency belongs before or after this module" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Type), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies constraints related to the source script a modules provides as dependency. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies constraints related to the source script a modules provides as dependency." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint = { "ScriptConstraint", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraModuleDependency, ScriptConstraint), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Detailed description of the dependency */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Detailed description of the dependency" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraModuleDependency",
		sizeof(FNiagaraModuleDependency),
		alignof(FNiagaraModuleDependency),
		Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraModuleDependency_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraModuleDependency"), sizeof(FNiagaraModuleDependency), Get_Z_Construct_UScriptStruct_FNiagaraModuleDependency_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraModuleDependency_Hash() { return 1929441206U; }
	DEFINE_FUNCTION(UNiagaraScript::execRaiseOnGPUCompilationComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RaiseOnGPUCompilationComplete();
		P_NATIVE_END;
	}
	void UNiagaraScript::StaticRegisterNativesUNiagaraScript()
	{
		UClass* Class = UNiagaraScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RaiseOnGPUCompilationComplete", &UNiagaraScript::execRaiseOnGPUCompilationComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraScript, nullptr, "RaiseOnGPUCompilationComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraScript_NoRegister()
	{
		return UNiagaraScript::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Usage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsageId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProvidedDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProvidedDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProvidedDependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[];
#endif
		static void NewProp_bDeprecated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecationRecommendation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeprecationRecommendation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversionUtility_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConversionUtility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RapidIterationParameters;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumericOutputTypeSelectionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumericOutputTypeSelectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NumericOutputTypeSelectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapsedViewFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollapsedViewFormat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Highlights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Highlights;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptMetaData_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScriptMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScriptMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreCPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreCPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreGPU_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreGPU;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionBoundParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionBoundParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptExecutionBoundParameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVMId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedScriptVMId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGeneratedVMId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastGeneratedVMId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveCompileRoots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCompileRoots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveCompileRoots;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVM_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedScriptVM;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedParameterCollectionReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedParameterCollectionReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedParameterCollectionReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedDefaultDataInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultDataInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedDefaultDataInterfaces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete, "RaiseOnGPUCompilationComplete" }, // 754277453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runtime script for a Niagara system */" },
		{ "IncludePath", "NiagaraScript.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Runtime script for a Niagara system" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData[] = {
		{ "Comment", "// how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Usage), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData[] = {
		{ "Comment", "/** Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex = { "UsageIndex", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, UsageIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData[] = {
		{ "Comment", "/** Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId = { "UsageId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, UsageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ENiagaraScriptUsage" },
		{ "Category", "Script" },
		{ "Comment", "/** When used as a module, what are the appropriate script types for referencing this module?*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "When used as a module, what are the appropriate script types for referencing this module?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ModuleUsageBitmask), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Used to break up scripts of the same Usage type in UI display.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Used to break up scripts of the same Usage type in UI display." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Category), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge')" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ProvidedDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraModuleDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Dependencies required by this module from other modules on the stack */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Dependencies required by this module from other modules on the stack" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, RequiredDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* If this script is no longer meant to be used, this option should be set.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If this script is no longer meant to be used, this option should be set." },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bDeprecated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Message to display when the script is deprecated. */" },
		{ "EditCondition", "bDeprecated" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Message to display when the script is deprecated." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, DeprecationMessage), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Which script to use if this is deprecated.*/" },
		{ "EditCondition", "bDeprecated" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which script to use if this is deprecated." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation = { "DeprecationRecommendation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, DeprecationRecommendation), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Custom logic to convert the contents of an existing script assignment to this script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Custom logic to convert the contents of an existing script assignment to this script." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility = { "ConversionUtility", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ConversionUtility), Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Is this script experimental and less supported? */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Is this script experimental and less supported?" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bExperimental = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ExperimentalMessage), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bExposeToLibrary_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Defines if this script is visible to the user when searching for modules to add to an emitter.  */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines if this script is visible to the user when searching for modules to add to an emitter." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData[] = {
		{ "Comment", "/** Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, RapidIterationParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The mode to use when deducing the type of numeric output pins from the types of the input pins. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The mode to use when deducing the type of numeric output pins from the types of the input pins." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode = { "NumericOutputTypeSelectionMode", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, NumericOutputTypeSelectionMode), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Description), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A list of space separated keywords which can be used to find this script in editor menus. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A list of space separated keywords which can be used to find this script in editor menus." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Keywords), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The format for the text to display in the stack if the value is collapsed.\n\x09 *  This supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\". */" },
		{ "EditCondition", "Usage == ENiagaraScriptUsage::DynamicInput" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The format for the text to display in the stack if the value is collapsed.\nThis supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\"." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat = { "CollapsedViewFormat", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, CollapsedViewFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights_Inner = { "Highlights", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptHighlight, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights = { "Highlights", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Highlights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp = { "ScriptMetaData_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Script Metadata" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Script Metadata" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ScriptMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU = { "ScriptExecutionParamStoreCPU", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreCPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU = { "ScriptExecutionParamStoreGPU", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreGPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData[] = {
		{ "Comment", "/** The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore = { "ScriptExecutionParamStore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStore), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraBoundParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData[] = {
		{ "Comment", "/** The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionBoundParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for this script */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "'Source' data/graphs for this script" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, Source), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId = { "CachedScriptVMId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, CachedScriptVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LastGeneratedVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time ComputeVMCompilationId is called.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time ComputeVMCompilationId is called." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LastGeneratedVMId = { "LastGeneratedVMId", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, LastGeneratedVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LastGeneratedVMId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LastGeneratedVMId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, ActiveCompileRoots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData[] = {
		{ "Comment", "/** Compiled VM bytecode and data necessary to run this script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compiled VM bytecode and data necessary to run this script." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM = { "CachedScriptVM", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, CachedScriptVM), Z_Construct_UScriptStruct_FNiagaraVMExecutableData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, CachedParameterCollectionReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraScript, CachedDefaultDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Highlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LastGeneratedVMId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScript_Statics::ClassParams = {
		&UNiagaraScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraScript, 1602365968);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraScript>()
	{
		return UNiagaraScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraScript(Z_Construct_UClass_UNiagaraScript, &UNiagaraScript::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScript);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
