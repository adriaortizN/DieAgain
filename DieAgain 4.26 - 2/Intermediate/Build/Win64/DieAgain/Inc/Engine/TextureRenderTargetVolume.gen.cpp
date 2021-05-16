// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureRenderTargetVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void UTextureRenderTargetVolume::StaticRegisterNativesUTextureRenderTargetVolume()
	{
	}
	UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister()
	{
		return UTextureRenderTargetVolume::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTargetVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTargetVolume\n *\n * Volume render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular Volume texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTargetVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "TextureRenderTargetVolume\n\nVolume render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular Volume texture resource." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The height of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The height of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeY), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The depth of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The depth of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeZ), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTargetVolume*)Obj)->bHDR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTargetVolume*)Obj)->bForceLinearGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTargetVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams = {
		&UTextureRenderTargetVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTargetVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureRenderTargetVolume, 3626732162);
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTargetVolume>()
	{
		return UTextureRenderTargetVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureRenderTargetVolume(Z_Construct_UClass_UTextureRenderTargetVolume, &UTextureRenderTargetVolume::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureRenderTargetVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
