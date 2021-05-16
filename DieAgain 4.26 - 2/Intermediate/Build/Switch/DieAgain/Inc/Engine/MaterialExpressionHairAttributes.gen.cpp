// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionHairAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionHairAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionHairAttributes::StaticRegisterNativesUMaterialExpressionHairAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister()
	{
		return UMaterialExpressionHairAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTangentSpace_MetaData[];
#endif
		static void NewProp_bUseTangentSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTangentSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionHairAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_MetaData[] = {
		{ "Category", "MaterialExpressionHairAttributes" },
		{ "Comment", "/** If enabled, this nodes outputs a tangent space tangent, otherwise it outputs a world space tangent. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairAttributes.h" },
		{ "ToolTip", "If enabled, this nodes outputs a tangent space tangent, otherwise it outputs a world space tangent." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_SetBit(void* Obj)
	{
		((UMaterialExpressionHairAttributes*)Obj)->bUseTangentSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace = { "bUseTangentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionHairAttributes), &Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHairAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::ClassParams = {
		&UMaterialExpressionHairAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionHairAttributes, 2753436299);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionHairAttributes>()
	{
		return UMaterialExpressionHairAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionHairAttributes(Z_Construct_UClass_UMaterialExpressionHairAttributes, &UMaterialExpressionHairAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionHairAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHairAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
