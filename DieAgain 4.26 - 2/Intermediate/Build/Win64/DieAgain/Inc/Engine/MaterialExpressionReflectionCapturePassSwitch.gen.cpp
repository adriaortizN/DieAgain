// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionCapturePassSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionReflectionCapturePassSwitch::StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_NoRegister()
	{
		return UMaterialExpressionReflectionCapturePassSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reflection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reflection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ReflectionCapturePassSwitch" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into non-reflection passes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionReflectionCapturePassSwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionCapturePassSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into reflection passes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection = { "Reflection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionReflectionCapturePassSwitch, Reflection), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::NewProp_Reflection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionReflectionCapturePassSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::ClassParams = {
		&UMaterialExpressionReflectionCapturePassSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionReflectionCapturePassSwitch, 786141914);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionReflectionCapturePassSwitch>()
	{
		return UMaterialExpressionReflectionCapturePassSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionReflectionCapturePassSwitch(Z_Construct_UClass_UMaterialExpressionReflectionCapturePassSwitch, &UMaterialExpressionReflectionCapturePassSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionReflectionCapturePassSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionCapturePassSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
