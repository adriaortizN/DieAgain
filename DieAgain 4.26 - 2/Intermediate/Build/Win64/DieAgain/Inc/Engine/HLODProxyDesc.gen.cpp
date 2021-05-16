// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/HLOD/HLODProxyDesc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxyDesc() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDesc();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FHLODISMComponentDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHLODISMComponentDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODISMComponentDesc, Z_Construct_UPackage__Script_Engine(), TEXT("HLODISMComponentDesc"), sizeof(FHLODISMComponentDesc), Get_Z_Construct_UScriptStruct_FHLODISMComponentDesc_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODISMComponentDesc>()
{
	return FHLODISMComponentDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHLODISMComponentDesc(FHLODISMComponentDesc::StaticStruct, TEXT("/Script/Engine"), TEXT("HLODISMComponentDesc"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHLODISMComponentDesc
{
	FScriptStruct_Engine_StaticRegisterNativesFHLODISMComponentDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HLODISMComponentDesc")),new UScriptStruct::TCppStructOps<FHLODISMComponentDesc>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHLODISMComponentDesc;
	struct Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describe a LODActor ISM component */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
		{ "ToolTip", "Describe a LODActor ISM component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODISMComponentDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODISMComponentDesc, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODISMComponentDesc, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHLODISMComponentDesc, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::NewProp_Instances,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODISMComponentDesc",
		sizeof(FHLODISMComponentDesc),
		alignof(FHLODISMComponentDesc),
		Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHLODISMComponentDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HLODISMComponentDesc"), sizeof(FHLODISMComponentDesc), Get_Z_Construct_UScriptStruct_FHLODISMComponentDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHLODISMComponentDesc_Hash() { return 716639032U; }
	void UHLODProxyDesc::StaticRegisterNativesUHLODProxyDesc()
	{
	}
	UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister()
	{
		return UHLODProxyDesc::StaticClass();
	}
	struct Z_Construct_UClass_UHLODProxyDesc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ISMComponentsDesc_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ISMComponentsDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ISMComponentsDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialMergeSettings_MetaData[];
#endif
		static void NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialMergeSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransitionScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransitionScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODActorTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LODActorTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SubHLODDescs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubHLODDescs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubHLODDescs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODProxyDesc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describe a LODActor */" },
		{ "IncludePath", "HLOD/HLODProxyDesc.h" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
		{ "ToolTip", "Describe a LODActor" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_Inner = { "SubActors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors = { "SubActors", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, SubActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_Inner = { "ISMComponentsDesc", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHLODISMComponentDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc = { "ISMComponentsDesc", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, ISMComponentsDesc), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance = { "LODDrawDistance", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, LODDrawDistance), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideMaterialMergeSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings = { "bOverrideMaterialMergeSettings", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideTransitionScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize = { "bOverrideTransitionScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	void Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_SetBit(void* Obj)
	{
		((UHLODProxyDesc*)Obj)->bOverrideScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize = { "bOverrideScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHLODProxyDesc), &Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, Key), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, LODLevel), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag = { "LODActorTag", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, LODActorTag), METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_Inner = { "SubHLODDescs", nullptr, (EPropertyFlags)0x0004000800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyDesc.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs = { "SubHLODDescs", nullptr, (EPropertyFlags)0x0044000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxyDesc, SubHLODDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ISMComponentsDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideMaterialMergeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_MaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideTransitionScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_TransitionScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_bOverrideScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_LODActorTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxyDesc_Statics::NewProp_SubHLODDescs,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODProxyDesc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxyDesc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxyDesc_Statics::ClassParams = {
		&UHLODProxyDesc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxyDesc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODProxyDesc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHLODProxyDesc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHLODProxyDesc, 3031654466);
	template<> ENGINE_API UClass* StaticClass<UHLODProxyDesc>()
	{
		return UHLODProxyDesc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHLODProxyDesc(Z_Construct_UClass_UHLODProxyDesc, &UHLODProxyDesc::StaticClass, TEXT("/Script/Engine"), TEXT("UHLODProxyDesc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxyDesc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
