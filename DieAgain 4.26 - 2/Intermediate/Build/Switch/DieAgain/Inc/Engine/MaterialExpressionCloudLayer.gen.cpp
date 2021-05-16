// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionCloudLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCloudLayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionCloudSampleAttribute::StaticRegisterNativesUMaterialExpressionCloudSampleAttribute()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister()
	{
		return UMaterialExpressionCloudSampleAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionCloudLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCloudLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCloudSampleAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams = {
		&UMaterialExpressionCloudSampleAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionCloudSampleAttribute, 78482846);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCloudSampleAttribute>()
	{
		return UMaterialExpressionCloudSampleAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCloudSampleAttribute(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute, &UMaterialExpressionCloudSampleAttribute::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCloudSampleAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCloudSampleAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
