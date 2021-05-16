// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LODSyncComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESyncOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSync();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static UEnum* ESyncOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESyncOption, Z_Construct_UPackage__Script_Engine(), TEXT("ESyncOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESyncOption>()
	{
		return ESyncOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESyncOption(ESyncOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ESyncOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESyncOption_Hash() { return 2168503102U; }
	UEnum* Z_Construct_UEnum_Engine_ESyncOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESyncOption"), 0, Get_Z_Construct_UEnum_Engine_ESyncOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESyncOption::Drive", (int64)ESyncOption::Drive },
				{ "ESyncOption::Passive", (int64)ESyncOption::Passive },
				{ "ESyncOption::Disabled", (int64)ESyncOption::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Comment", "/** It is disabled, it doesn't do anything */" },
				{ "Disabled.Name", "ESyncOption::Disabled" },
				{ "Disabled.ToolTip", "It is disabled, it doesn't do anything" },
				{ "Drive.Comment", "/** Drive LOD from this component. It will contribute to the change of LOD */" },
				{ "Drive.Name", "ESyncOption::Drive" },
				{ "Drive.ToolTip", "Drive LOD from this component. It will contribute to the change of LOD" },
				{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
				{ "Passive.Comment", "/** It follows what's currently driven by other components. It doesn't contribute to the change of LOD*/" },
				{ "Passive.Name", "ESyncOption::Passive" },
				{ "Passive.ToolTip", "It follows what's currently driven by other components. It doesn't contribute to the change of LOD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESyncOption",
				"ESyncOption",
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
class UScriptStruct* FComponentSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSync, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSync"), sizeof(FComponentSync), Get_Z_Construct_UScriptStruct_FComponentSync_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSync>()
{
	return FComponentSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSync(FComponentSync::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentSync"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentSync
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentSync()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSync")),new UScriptStruct::TCppStructOps<FComponentSync>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentSync;
	struct Z_Construct_UScriptStruct_FComponentSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SyncOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SyncOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentSync, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption = { "SyncOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentSync, SyncOption), Z_Construct_UEnum_Engine_ESyncOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentSync",
		sizeof(FComponentSync),
		alignof(FComponentSync),
		Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSync"), sizeof(FComponentSync), Get_Z_Construct_UScriptStruct_FComponentSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSync_Hash() { return 4263025068U; }
class UScriptStruct* FLODMappingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLODMappingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODMappingData, Z_Construct_UPackage__Script_Engine(), TEXT("LODMappingData"), sizeof(FLODMappingData), Get_Z_Construct_UScriptStruct_FLODMappingData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLODMappingData>()
{
	return FLODMappingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLODMappingData(FLODMappingData::StaticStruct, TEXT("/Script/Engine"), TEXT("LODMappingData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLODMappingData
{
	FScriptStruct_Engine_StaticRegisterNativesFLODMappingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LODMappingData")),new UScriptStruct::TCppStructOps<FLODMappingData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLODMappingData;
	struct Z_Construct_UScriptStruct_FLODMappingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mapping_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mapping;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InverseMapping_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InverseMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODMappingData>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner = { "Mapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData[] = {
		{ "Category", "FLODMappingData" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODMappingData, Mapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner = { "InverseMapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping = { "InverseMapping", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODMappingData, InverseMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LODMappingData",
		sizeof(FLODMappingData),
		alignof(FLODMappingData),
		Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLODMappingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LODMappingData"), sizeof(FLODMappingData), Get_Z_Construct_UScriptStruct_FLODMappingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLODMappingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLODMappingData_Hash() { return 3520786851U; }
	DEFINE_FUNCTION(ULODSyncComponent::execGetLODSyncDebugText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLODSyncDebugText();
		P_NATIVE_END;
	}
	void ULODSyncComponent::StaticRegisterNativesULODSyncComponent()
	{
		UClass* Class = ULODSyncComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLODSyncDebugText", &ULODSyncComponent::execGetLODSyncDebugText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics
	{
		struct LODSyncComponent_eventGetLODSyncDebugText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LODSyncComponent_eventGetLODSyncDebugText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Returns a string detailing  */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Returns a string detailing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODSyncComponent, nullptr, "GetLODSyncDebugText", nullptr, nullptr, sizeof(LODSyncComponent_eventGetLODSyncDebugText_Parms), Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister()
	{
		return ULODSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULODSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentsToSync_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToSync;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomLODMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLODMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CustomLODMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNumLODs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DriveComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DriveComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODSyncComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText, "GetLODSyncDebugText" }, // 3024193994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Component" },
		{ "Comment", "/**\n * Implement an Actor component for LOD Sync of different components\n *\n * This is a component that allows multiple different components to sync together of their LOD\n *\n * This allows to find the highest LOD of all the parts, and sync to that LOD\n */" },
		{ "IncludePath", "Components/LODSyncComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Implement an Actor component for LOD Sync of different components\n\nThis is a component that allows multiple different components to sync together of their LOD\n\nThis allows to find the highest LOD of all the parts, and sync to that LOD" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's default and it will calculate the max number of LODs from all sub components\n// if not, it is a number of LODs (not the max index of LODs)\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's default and it will calculate the max number of LODs from all sub components\nif not, it is a number of LODs (not the max index of LODs)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, NumLODs), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's automatically switching\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's automatically switching" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, ForcedLOD), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentSync, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 *\x09""Array of components whose LOD may drive or be driven by this component.\n\x09 *  Components that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\n\x09 *  visible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Array of components whose LOD may drive or be driven by this component.\nComponents that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\nvisible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, ComponentsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLODMappingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp = { "CustomLODMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// by default, the mapping will be one to one\n// but if you want custom, add here. \n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "by default, the mapping will be one to one\nbut if you want custom, add here." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, CustomLODMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD = { "CurrentLOD", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, CurrentLOD), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData[] = {
		{ "Comment", "// num of LODs\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "num of LODs" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs = { "CurrentNumLODs", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, CurrentNumLODs), METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner = { "DriveComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData[] = {
		{ "Comment", "// component that drives the LOD\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "component that drives the LOD" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents = { "DriveComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, DriveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner = { "SubComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData[] = {
		{ "Comment", "// all the components that ticks\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "all the components that ticks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents = { "SubComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULODSyncComponent, SubComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODSyncComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams = {
		&ULODSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODSyncComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULODSyncComponent, 725287953);
	template<> ENGINE_API UClass* StaticClass<ULODSyncComponent>()
	{
		return ULODSyncComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULODSyncComponent(Z_Construct_UClass_ULODSyncComponent, &ULODSyncComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULODSyncComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
