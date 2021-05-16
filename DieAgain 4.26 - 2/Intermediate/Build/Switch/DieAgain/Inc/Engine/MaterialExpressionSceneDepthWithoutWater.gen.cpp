// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneDepthWithoutWater() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UMaterialExpressionSceneDepthWithoutWater::StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_NoRegister()
	{
		return UMaterialExpressionSceneDepthWithoutWater::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallbackDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/**\n\x09* Coordinates - UV coordinates to apply to the scene depth lookup.\n\x09* OffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ToolTip", "Coordinates - UV coordinates to apply to the scene depth lookup.\nOffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput = { "ConstInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/** Depth to fall back to in case the needed texture isn't available on a particular platform or configuration */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ToolTip", "Depth to fall back to in case the needed texture isn't available on a particular platform or configuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth = { "FallbackDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, FallbackDepth), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneDepthWithoutWater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::ClassParams = {
		&UMaterialExpressionSceneDepthWithoutWater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSceneDepthWithoutWater, 836126834);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneDepthWithoutWater>()
	{
		return UMaterialExpressionSceneDepthWithoutWater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSceneDepthWithoutWater(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater, &UMaterialExpressionSceneDepthWithoutWater::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSceneDepthWithoutWater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneDepthWithoutWater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
