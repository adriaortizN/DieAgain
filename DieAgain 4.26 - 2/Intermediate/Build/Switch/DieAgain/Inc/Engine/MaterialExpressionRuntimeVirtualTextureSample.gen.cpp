// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRuntimeVirtualTextureSample() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
// End Cross Module References
	static UEnum* ERuntimeVirtualTextureTextureAddressMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureTextureAddressMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureTextureAddressMode>()
	{
		return ERuntimeVirtualTextureTextureAddressMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeVirtualTextureTextureAddressMode(ERuntimeVirtualTextureTextureAddressMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERuntimeVirtualTextureTextureAddressMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Hash() { return 1166959579U; }
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeVirtualTextureTextureAddressMode"), 0, Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RVTTA_Clamp", (int64)RVTTA_Clamp },
				{ "RVTTA_Wrap", (int64)RVTTA_Wrap },
				{ "RVTTA_MAX", (int64)RVTTA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Defines texture addressing behavior.\n */" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
				{ "RVTTA_Clamp.Comment", "/* Clamp mode. */" },
				{ "RVTTA_Clamp.DisplayName", "Clamp" },
				{ "RVTTA_Clamp.Name", "RVTTA_Clamp" },
				{ "RVTTA_Clamp.ToolTip", "Clamp mode." },
				{ "RVTTA_MAX.Name", "RVTTA_MAX" },
				{ "RVTTA_Wrap.Comment", "/* Wrap mode. */" },
				{ "RVTTA_Wrap.DisplayName", "Wrap" },
				{ "RVTTA_Wrap.Name", "RVTTA_Wrap" },
				{ "RVTTA_Wrap.ToolTip", "Wrap mode." },
				{ "ToolTip", "Defines texture addressing behavior." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERuntimeVirtualTextureTextureAddressMode",
				"ERuntimeVirtualTextureTextureAddressMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeVirtualTextureMipValueMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMipValueMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMipValueMode>()
	{
		return ERuntimeVirtualTextureMipValueMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeVirtualTextureMipValueMode(ERuntimeVirtualTextureMipValueMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERuntimeVirtualTextureMipValueMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Hash() { return 2133307919U; }
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeVirtualTextureMipValueMode"), 0, Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RVTMVM_None", (int64)RVTMVM_None },
				{ "RVTMVM_MipLevel", (int64)RVTMVM_MipLevel },
				{ "RVTMVM_MipBias", (int64)RVTMVM_MipBias },
				{ "RVTMVM_MAX", (int64)RVTMVM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Defines how MipValue is used.\n * Internally we will convert to ETextureMipValueMode which is used by internal APIs.\n * ETextureMipValueMode has more options then are valid for runtime virtual texture.\n */" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
				{ "RVTMVM_MAX.Name", "RVTMVM_MAX" },
				{ "RVTMVM_MipBias.Comment", "/* Bias the hardware computed sample's mip level. Disables anisotropic filtering. */" },
				{ "RVTMVM_MipBias.DisplayName", "MipBias (relative to the computed mip level)" },
				{ "RVTMVM_MipBias.Name", "RVTMVM_MipBias" },
				{ "RVTMVM_MipBias.ToolTip", "Bias the hardware computed sample's mip level. Disables anisotropic filtering." },
				{ "RVTMVM_MipLevel.Comment", "/* Explicitly compute the sample's mip level. Disables anisotropic filtering. */" },
				{ "RVTMVM_MipLevel.DisplayName", "MipLevel (absolute, 0 is full resolution)" },
				{ "RVTMVM_MipLevel.Name", "RVTMVM_MipLevel" },
				{ "RVTMVM_MipLevel.ToolTip", "Explicitly compute the sample's mip level. Disables anisotropic filtering." },
				{ "RVTMVM_None.Comment", "/* Use hardware computed sample's mip level with automatic anisotropic filtering support. */" },
				{ "RVTMVM_None.DisplayName", "None (use computed mip level)" },
				{ "RVTMVM_None.Name", "RVTMVM_None" },
				{ "RVTMVM_None.ToolTip", "Use hardware computed sample's mip level with automatic anisotropic filtering support." },
				{ "ToolTip", "Defines how MipValue is used.\nInternally we will convert to ETextureMipValueMode which is used by internal APIs.\nETextureMipValueMode has more options then are valid for runtime virtual texture." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERuntimeVirtualTextureMipValueMode",
				"ERuntimeVirtualTextureMipValueMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionRuntimeVirtualTextureSample::StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister()
	{
		return UMaterialExpressionRuntimeVirtualTextureSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[];
#endif
		static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdaptive_MetaData[];
#endif
		static void NewProp_bAdaptive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdaptive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipValueMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureAddressMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureAddressMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material expression for sampling from a runtime virtual texture. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Material expression for sampling from a runtime virtual texture." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/** Optional UV coordinates input if we want to override standard world position based coordinates. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Optional UV coordinates input if we want to override standard world position based coordinates." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** Optional world position input to override the default world position. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Optional world position input to override the default world position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue_MetaData[] = {
		{ "Comment", "/** Meaning depends on MipValueMode. A single unit is one mip level.  */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Meaning depends on MipValueMode. A single unit is one mip level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue = { "MipValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "The virtual texture object to sample." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** How to interpret the virtual texture contents. Note that the bound Virtual Texture should have the same setting for sampling to work correctly. */" },
		{ "DisplayName", "Virtual texture content" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "How to interpret the virtual texture contents. Note that the bound Virtual Texture should have the same setting for sampling to work correctly." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MaterialType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Enable page table channel packing. Note that the bound Virtual Texture should have the same setting for sampling to work correctly. */" },
		{ "DisplayName", "Enable packed page table" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Enable page table channel packing. Note that the bound Virtual Texture should have the same setting for sampling to work correctly." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
	{
		((UMaterialExpressionRuntimeVirtualTextureSample*)Obj)->bSinglePhysicalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionRuntimeVirtualTextureSample), &Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Enable sparse adaptive page tables. Note that the bound Virtual Texture should have valid adaptive virtual texture settings for sampling to work correctly. */" },
		{ "DisplayName", "Enable adaptive page table" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Enable sparse adaptive page tables. Note that the bound Virtual Texture should have valid adaptive virtual texture settings for sampling to work correctly." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_SetBit(void* Obj)
	{
		((UMaterialExpressionRuntimeVirtualTextureSample*)Obj)->bAdaptive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive = { "bAdaptive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionRuntimeVirtualTextureSample), &Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode_MetaData[] = {
		{ "Category", "TextureSample" },
		{ "Comment", "/** Defines how the MipValue property is applied to the virtual texture lookup. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Defines how the MipValue property is applied to the virtual texture lookup." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode = { "MipValueMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode_MetaData[] = {
		{ "Category", "TextureSample" },
		{ "Comment", "/** Defines the texture addressing mode. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Defines the texture addressing mode." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode = { "TextureAddressMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, TextureAddressMode), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRuntimeVirtualTextureSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::ClassParams = {
		&UMaterialExpressionRuntimeVirtualTextureSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionRuntimeVirtualTextureSample, 2374878843);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRuntimeVirtualTextureSample>()
	{
		return UMaterialExpressionRuntimeVirtualTextureSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionRuntimeVirtualTextureSample(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample, &UMaterialExpressionRuntimeVirtualTextureSample::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionRuntimeVirtualTextureSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRuntimeVirtualTextureSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
