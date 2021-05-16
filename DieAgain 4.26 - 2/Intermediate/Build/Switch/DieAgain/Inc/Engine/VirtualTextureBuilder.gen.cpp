// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTextureBuilder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
// End Cross Module References
	void UVirtualTextureBuilder::StaticRegisterNativesUVirtualTextureBuilder()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister()
	{
		return UVirtualTextureBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_BuildHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\n * This has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\n * or other more blueprint driven approaches for data generation.\n */" },
		{ "IncludePath", "VT/VirtualTextureBuilder.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\nThis has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\nor other more blueprint driven approaches for data generation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The UTexture object. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The UTexture object." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureBuilder, Texture), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData[] = {
		{ "Comment", "/** Some client defined hash of that defines how the Texture was built. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Some client defined hash of that defines how the Texture was built." },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash = { "BuildHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTextureBuilder, BuildHash), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams = {
		&UVirtualTextureBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTextureBuilder, 1660058675);
	template<> ENGINE_API UClass* StaticClass<UVirtualTextureBuilder>()
	{
		return UVirtualTextureBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTextureBuilder(Z_Construct_UClass_UVirtualTextureBuilder, &UVirtualTextureBuilder::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTextureBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilder);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureBuilder)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
