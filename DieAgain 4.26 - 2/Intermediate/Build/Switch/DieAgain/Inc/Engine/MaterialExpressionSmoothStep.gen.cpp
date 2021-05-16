// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSmoothStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSmoothStep() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSmoothStep::StaticRegisterNativesUMaterialExpressionSmoothStep()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister()
	{
		return UMaterialExpressionSmoothStep::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSmoothStep.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstMin' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstMax' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstValue' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Min is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Min" },
		{ "ToolTip", "only used if Min is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin = { "ConstMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Max is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Max" },
		{ "ToolTip", "only used if Max is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax = { "ConstMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Value is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Value" },
		{ "ToolTip", "only used if Value is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue = { "ConstValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSmoothStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::ClassParams = {
		&UMaterialExpressionSmoothStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSmoothStep, 2075360235);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSmoothStep>()
	{
		return UMaterialExpressionSmoothStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSmoothStep(Z_Construct_UClass_UMaterialExpressionSmoothStep, &UMaterialExpressionSmoothStep::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSmoothStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSmoothStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
