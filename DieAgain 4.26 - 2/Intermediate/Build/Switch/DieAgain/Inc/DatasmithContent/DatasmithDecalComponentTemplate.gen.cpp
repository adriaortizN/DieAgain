// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithDecalComponentTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDecalComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UDatasmithDecalComponentTemplate::StaticRegisterNativesUDatasmithDecalComponentTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister()
	{
		return UDatasmithDecalComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithDecalComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDecalComponentTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::ClassParams = {
		&UDatasmithDecalComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithDecalComponentTemplate, 1744309901);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDecalComponentTemplate>()
	{
		return UDatasmithDecalComponentTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithDecalComponentTemplate(Z_Construct_UClass_UDatasmithDecalComponentTemplate, &UDatasmithDecalComponentTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithDecalComponentTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDecalComponentTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
