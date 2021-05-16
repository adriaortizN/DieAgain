// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceGrid3DCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollection() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_OBJECT(UVolumeTexture,Z_Param_Dest);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FillRawVolumeTexture(Z_Param_Component,Z_Param_Dest,Z_Param_Out_TilesX,Z_Param_Out_TilesY,Z_Param_Out_TileZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_OBJECT(UVolumeTexture,Z_Param_dest);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FillVolumeTexture(Z_Param_Component,Z_Param_dest,Z_Param_AttributeIndex);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceGrid3DCollection::StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection()
	{
		UClass* Class = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillRawVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture },
			{ "FillVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture },
			{ "GetRawTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize },
			{ "GetTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms
		{
			const UNiagaraComponent* Component;
			UVolumeTexture* Dest;
			int32 TilesX;
			int32 TilesY;
			int32 TileZ;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesX;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesY;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TileZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX = { "TilesX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY = { "TilesY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ = { "TileZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TileZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillRawVolumeTexture", nullptr, nullptr, sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms
		{
			const UNiagaraComponent* Component;
			UVolumeTexture* dest;
			int32 AttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dest;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest = { "dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "// Fills a texture render target 2d with the current data from the simulation\n// #todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n// #todo(dmp): reimplement for 3d\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Fills a texture render target 2d with the current data from the simulation\n#todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n#todo(dmp): reimplement for 3d" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillVolumeTexture", nullptr, nullptr, sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms
		{
			const UNiagaraComponent* Component;
			int32 SizeX;
			int32 SizeY;
			int32 SizeZ;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetRawTextureSize", nullptr, nullptr, sizeof(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms
		{
			const UNiagaraComponent* Component;
			int32 SizeX;
			int32 SizeY;
			int32 SizeZ;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetTextureSize", nullptr, nullptr, sizeof(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister()
	{
		return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BufferFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BufferFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture, "FillRawVolumeTexture" }, // 943441863
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture, "FillVolumeTexture" }, // 2601230279
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize, "GetRawTextureSize" }, // 1809621070
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize, "GetTextureSize" }, // 2651684907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "DisplayName", "Grid3D Collection" },
		{ "Experimental", "" },
		{ "IncludePath", "NiagaraDataInterfaceGrid3DCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of attributes stored on the grid\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Number of attributes stored on the grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, NumAttributes), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Grid3DCollection" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat_MetaData[] = {
		{ "Category", "Grid3DCollection" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Changes the format used to store data inside the grid, low bit formats save memory and performance." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat = { "BufferFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, BufferFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_BufferFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3DCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid3DCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceGrid3DCollection, 322627780);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3DCollection>()
	{
		return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceGrid3DCollection(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, &UNiagaraDataInterfaceGrid3DCollection::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceGrid3DCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3DCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
