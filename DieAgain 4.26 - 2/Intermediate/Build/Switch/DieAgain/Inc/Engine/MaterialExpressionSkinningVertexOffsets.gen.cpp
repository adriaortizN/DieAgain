// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSkinningVertexOffsets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkinningVertexOffsets() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSkinningVertexOffsets::StaticRegisterNativesUMaterialExpressionSkinningVertexOffsets()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_NoRegister()
	{
		return UMaterialExpressionSkinningVertexOffsets::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkinningVertexOffsets.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkinningVertexOffsets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkinningVertexOffsets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::ClassParams = {
		&UMaterialExpressionSkinningVertexOffsets::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSkinningVertexOffsets, 2123873237);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkinningVertexOffsets>()
	{
		return UMaterialExpressionSkinningVertexOffsets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSkinningVertexOffsets(Z_Construct_UClass_UMaterialExpressionSkinningVertexOffsets, &UMaterialExpressionSkinningVertexOffsets::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSkinningVertexOffsets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkinningVertexOffsets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
