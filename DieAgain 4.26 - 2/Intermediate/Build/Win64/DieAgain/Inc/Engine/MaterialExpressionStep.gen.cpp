// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStep() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionStep::StaticRegisterNativesUMaterialExpressionStep()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister()
	{
		return UMaterialExpressionStep::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionStep.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstY' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStep, Y), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstX' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStep, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if Y is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "Y" },
		{ "ToolTip", "only used if Y is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY = { "ConstY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStep, ConstY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if X is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "X" },
		{ "ToolTip", "only used if X is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX = { "ConstX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStep, ConstX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams = {
		&UMaterialExpressionStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionStep, 3115288674);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStep>()
	{
		return UMaterialExpressionStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStep(Z_Construct_UClass_UMaterialExpressionStep, &UMaterialExpressionStep::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
