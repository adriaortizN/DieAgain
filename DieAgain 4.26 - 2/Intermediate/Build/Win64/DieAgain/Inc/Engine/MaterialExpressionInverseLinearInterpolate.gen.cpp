// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionInverseLinearInterpolate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionInverseLinearInterpolate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionInverseLinearInterpolate::StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister()
	{
		return UMaterialExpressionInverseLinearInterpolate::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstA' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstValue' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if A is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "A" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA = { "ConstA", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstA), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if B is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if Value is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "Value" },
		{ "ToolTip", "only used if Value is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue = { "ConstValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** Clamp the result to 0 to 1 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "ToolTip", "Clamp the result to 0 to 1" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((UMaterialExpressionInverseLinearInterpolate*)Obj)->bClampResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionInverseLinearInterpolate), &Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionInverseLinearInterpolate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::ClassParams = {
		&UMaterialExpressionInverseLinearInterpolate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionInverseLinearInterpolate, 4114172551);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionInverseLinearInterpolate>()
	{
		return UMaterialExpressionInverseLinearInterpolate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionInverseLinearInterpolate(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate, &UMaterialExpressionInverseLinearInterpolate::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionInverseLinearInterpolate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionInverseLinearInterpolate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
