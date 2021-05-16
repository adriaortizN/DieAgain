// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRMesh/Public/MRMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRMeshComponent() {}
// Cross Module References
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMRMeshComponent::execGetWireframeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetWireframeColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWireframeColor(Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execGetUseWireframe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseWireframe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetUseWireframe)
	{
		P_GET_UBOOL(Z_Param_bUseWireframe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseWireframe(Z_Param_bUseWireframe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execGetEnableMeshOcclusion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableMeshOcclusion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetEnableMeshOcclusion)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMeshOcclusion(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWireframeMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execForceNavMeshUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNavMeshUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	void UMRMeshComponent::StaticRegisterNativesUMRMeshComponent()
	{
		UClass* Class = UMRMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UMRMeshComponent::execClear },
			{ "ForceNavMeshUpdate", &UMRMeshComponent::execForceNavMeshUpdate },
			{ "GetEnableMeshOcclusion", &UMRMeshComponent::execGetEnableMeshOcclusion },
			{ "GetUseWireframe", &UMRMeshComponent::execGetUseWireframe },
			{ "GetWireframeColor", &UMRMeshComponent::execGetWireframeColor },
			{ "IsConnected", &UMRMeshComponent::execIsConnected },
			{ "SetEnableMeshOcclusion", &UMRMeshComponent::execSetEnableMeshOcclusion },
			{ "SetUseWireframe", &UMRMeshComponent::execSetUseWireframe },
			{ "SetWireframeColor", &UMRMeshComponent::execSetWireframeColor },
			{ "SetWireframeMaterial", &UMRMeshComponent::execSetWireframeMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRMeshComponent_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "ForceNavMeshUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics
	{
		struct MRMeshComponent_eventGetEnableMeshOcclusion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventGetEnableMeshOcclusion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRMeshComponent_eventGetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetEnableMeshOcclusion", nullptr, nullptr, sizeof(MRMeshComponent_eventGetEnableMeshOcclusion_Parms), Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics
	{
		struct MRMeshComponent_eventGetUseWireframe_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventGetUseWireframe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRMeshComponent_eventGetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetUseWireframe", nullptr, nullptr, sizeof(MRMeshComponent_eventGetUseWireframe_Parms), Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics
	{
		struct MRMeshComponent_eventGetWireframeColor_Parms
		{
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRMeshComponent_eventGetWireframeColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetWireframeColor", nullptr, nullptr, sizeof(MRMeshComponent_eventGetWireframeColor_Parms), Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics
	{
		struct MRMeshComponent_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRMeshComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "IsConnected", nullptr, nullptr, sizeof(MRMeshComponent_eventIsConnected_Parms), Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics
	{
		struct MRMeshComponent_eventSetEnableMeshOcclusion_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MRMeshComponent_eventSetEnableMeshOcclusion_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRMeshComponent_eventSetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetEnableMeshOcclusion", nullptr, nullptr, sizeof(MRMeshComponent_eventSetEnableMeshOcclusion_Parms), Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics
	{
		struct MRMeshComponent_eventSetUseWireframe_Parms
		{
			bool bUseWireframe;
		};
		static void NewProp_bUseWireframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWireframe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit(void* Obj)
	{
		((MRMeshComponent_eventSetUseWireframe_Parms*)Obj)->bUseWireframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe = { "bUseWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MRMeshComponent_eventSetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetUseWireframe", nullptr, nullptr, sizeof(MRMeshComponent_eventSetUseWireframe_Parms), Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics
	{
		struct MRMeshComponent_eventSetWireframeColor_Parms
		{
			FLinearColor InColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeColor", nullptr, nullptr, sizeof(MRMeshComponent_eventSetWireframeColor_Parms), Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics
	{
		struct MRMeshComponent_eventSetWireframeMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "// Set the wireframe material.\n" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Set the wireframe material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeMaterial", nullptr, nullptr, sizeof(MRMeshComponent_eventSetWireframeMaterial_Parms), Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister()
	{
		return UMRMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WireframeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMeshProxySections_MetaData[];
#endif
		static void NewProp_bCreateMeshProxySections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMeshProxySections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[];
#endif
		static void NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavMeshOnMeshUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeverCreateCollisionMesh_MetaData[];
#endif
		static void NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeverCreateCollisionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedBodySetup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodySetups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRMeshComponent_Clear, "Clear" }, // 2327006610
		{ &Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate, "ForceNavMeshUpdate" }, // 1139407805
		{ &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion, "GetEnableMeshOcclusion" }, // 3964039016
		{ &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe, "GetUseWireframe" }, // 2982763026
		{ &Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor, "GetWireframeColor" }, // 1640456170
		{ &Z_Construct_UFunction_UMRMeshComponent_IsConnected, "IsConnected" }, // 809629415
		{ &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion, "SetEnableMeshOcclusion" }, // 2345696359
		{ &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe, "SetUseWireframe" }, // 2216820322
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor, "SetWireframeColor" }, // 2084271055
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial, "SetWireframeMaterial" }, // 340601747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Experimental", "" },
		{ "HideCategories", "Physics Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial = { "WireframeMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRMeshComponent, WireframeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision. */" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bCreateMeshProxySections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections = { "bCreateMeshProxySections", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bUpdateNavMeshOnMeshUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate = { "bUpdateNavMeshOnMeshUpdate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bNeverCreateCollisionMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh = { "bNeverCreateCollisionMesh", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_CachedBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRMeshComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_CachedBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_CachedBodySetup_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_Inner = { "BodySetups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups = { "BodySetups", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMRMeshComponent, BodySetups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_CachedBodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMRMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UMRMeshComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams = {
		&UMRMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRMeshComponent, 369540857);
	template<> MRMESH_API UClass* StaticClass<UMRMeshComponent>()
	{
		return UMRMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRMeshComponent(Z_Construct_UClass_UMRMeshComponent, &UMRMeshComponent::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMRMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
