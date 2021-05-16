// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/RuntimeVirtualTextureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeVirtualTextureComponent::execInvalidate)
	{
		P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_WorldBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Invalidate(Z_Param_Out_WorldBounds);
		P_NATIVE_END;
	}
	void URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent()
	{
		UClass* Class = URuntimeVirtualTextureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Invalidate", &URuntimeVirtualTextureComponent::execInvalidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics
	{
		struct RuntimeVirtualTextureComponent_eventInvalidate_Parms
		{
			FBoxSphereBounds WorldBounds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeVirtualTextureComponent_eventInvalidate_Parms, WorldBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * This function marks an area of the runtime virtual texture as dirty.\n\x09 * @param WorldBounds : The world space bounds of the pages to invalidate.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "This function marks an area of the runtime virtual texture as dirty.\n@param WorldBounds : The world space bounds of the pages to invalidate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTextureComponent, nullptr, "Invalidate", nullptr, nullptr, sizeof(RuntimeVirtualTextureComponent_eventInvalidate_Parms), Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetBoundsButton_MetaData[];
#endif
		static void NewProp_bSetBoundsButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetBoundsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapBoundsToLandscape_MetaData[];
#endif
		static void NewProp_bSnapBoundsToLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapBoundsToLandscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableScalability_MetaData[];
#endif
		static void NewProp_bEnableScalability_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableScalability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilityGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ScalabilityGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePrimitives_MetaData[];
#endif
		static void NewProp_bHidePrimitives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePrimitives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamingTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamLowMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamLowMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildStreamingMipsButton_MetaData[];
#endif
		static void NewProp_bBuildStreamingMipsButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildStreamingMipsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCompressCrunch_MetaData[];
#endif
		static void NewProp_bEnableCompressCrunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCompressCrunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStreamingLowMipsInEditor_MetaData[];
#endif
		static void NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStreamingLowMipsInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildDebugStreamingMips_MetaData[];
#endif
		static void NewProp_bBuildDebugStreamingMips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildDebugStreamingMips;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate, "Invalidate" }, // 3380319814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Activation Collision Cooking Mobility LOD Object Physics Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RuntimeVirtualTextureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Component used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bSetBoundsButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton = { "bSetBoundsButton", nullptr, (EPropertyFlags)0x0020080000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions. */" },
		{ "DisplayName", "Snap To Landscape" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bSnapBoundsToLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape = { "bSnapBoundsToLandscape", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to use. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "The virtual texture object to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0020880000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Set to true to enable scalability settings for the virtual texture. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Set to true to enable scalability settings for the virtual texture." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bEnableScalability = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability = { "bEnableScalability", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Group index of the scalability settings to use for the virtual texture. */" },
		{ "EditCondition", "bEnableScalability" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Group index of the scalability settings to use for the virtual texture." },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup = { "ScalabilityGroup", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, ScalabilityGroup), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bHidePrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives = { "bHidePrimitives", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Texture object containing streamed low mips. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Texture object containing streamed low mips." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture = { "StreamingTexture", nullptr, (EPropertyFlags)0x0020880000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamingTexture), Z_Construct_UClass_UVirtualTextureBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Number of low mips to serialize and stream for the virtual texture. This can reduce rendering update cost. */" },
		{ "DisplayName", "Streaming Levels" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Number of low mips to serialize and stream for the virtual texture. This can reduce rendering update cost." },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips = { "StreamLowMips", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamLowMips), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bBuildStreamingMipsButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton = { "bBuildStreamingMipsButton", nullptr, (EPropertyFlags)0x0020080000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Enable Crunch texture compression for the streaming low mips. Generic ZLib compression is used when Crunch is disabled. */" },
		{ "DisplayName", "Enable Crunch" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Enable Crunch texture compression for the streaming low mips. Generic ZLib compression is used when Crunch is disabled." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bEnableCompressCrunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch = { "bEnableCompressCrunch", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Use any streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips. */" },
		{ "DisplayName", "View Streaming Mips in Editor" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Use any streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bUseStreamingLowMipsInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor = { "bUseStreamingLowMipsInEditor", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Build the streaming low mips using debug coloring. This can help show where streaming mips are being used. */" },
		{ "DisplayName", "Build Debug" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Build the streaming low mips using debug coloring. This can help show where streaming mips are being used." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bBuildDebugStreamingMips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips = { "bBuildDebugStreamingMips", nullptr, (EPropertyFlags)0x00200c0000002015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableCompressCrunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams = {
		&URuntimeVirtualTextureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTextureComponent, 979608422);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureComponent>()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTextureComponent(Z_Construct_UClass_URuntimeVirtualTextureComponent, &URuntimeVirtualTextureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTextureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
