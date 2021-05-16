// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVolumetricAdvancedMaterialInput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVolumetricAdvancedMaterialInput::StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister()
	{
		return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricAdvancedMaterialInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams = {
		&UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionVolumetricAdvancedMaterialInput, 3480643571);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricAdvancedMaterialInput>()
	{
		return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput, &UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionVolumetricAdvancedMaterialInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricAdvancedMaterialInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
