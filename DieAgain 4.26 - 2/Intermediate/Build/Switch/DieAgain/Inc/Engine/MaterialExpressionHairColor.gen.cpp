// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionHairColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionHairColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionHairColor::StaticRegisterNativesUMaterialExpressionHairColor()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister()
	{
		return UMaterialExpressionHairColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionHairColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Melanin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Melanin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Redness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Redness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DyeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DyeColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionHairColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin = { "Melanin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, Melanin), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the redness tint of the hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the redness tint of the hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness = { "Redness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, Redness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the dyeing color of the hair. By default there is no dyeing color.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the dyeing color of the hair. By default there is no dyeing color." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor = { "DyeColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, DyeColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionHairColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHairColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams = {
		&UMaterialExpressionHairColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionHairColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionHairColor, 3855383756);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionHairColor>()
	{
		return UMaterialExpressionHairColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionHairColor(Z_Construct_UClass_UMaterialExpressionHairColor, &UMaterialExpressionHairColor::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionHairColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHairColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
