// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DieAgain/Public/DLCLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLCLoader() {}
// Cross Module References
	DIEAGAIN_API UClass* Z_Construct_UClass_ADLCLoader_NoRegister();
	DIEAGAIN_API UClass* Z_Construct_UClass_ADLCLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DieAgain();
// End Cross Module References
	DEFINE_FUNCTION(ADLCLoader::execOpenDLC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenDLC();
		P_NATIVE_END;
	}
	void ADLCLoader::StaticRegisterNativesADLCLoader()
	{
		UClass* Class = ADLCLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDLC", &ADLCLoader::execOpenDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics
	{
		struct DLCLoader_eventOpenDLC_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLCLoader_eventOpenDLC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLCLoader_eventOpenDLC_Parms), &Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "Public/DLCLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADLCLoader, nullptr, "OpenDLC", nullptr, nullptr, sizeof(DLCLoader_eventOpenDLC_Parms), Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADLCLoader_OpenDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADLCLoader_OpenDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADLCLoader_NoRegister()
	{
		return ADLCLoader::StaticClass();
	}
	struct Z_Construct_UClass_ADLCLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapToOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableInEditor_MetaData[];
#endif
		static void NewProp_bEnableInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADLCLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DieAgain,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADLCLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADLCLoader_OpenDLC, "OpenDLC" }, // 3414429263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLCLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DLCLoader.h" },
		{ "ModuleRelativePath", "Public/DLCLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLCLoader_Statics::NewProp_PluginName_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "Public/DLCLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADLCLoader_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADLCLoader, PluginName), METADATA_PARAMS(Z_Construct_UClass_ADLCLoader_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADLCLoader_Statics::NewProp_PluginName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLCLoader_Statics::NewProp_MapToOpen_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "Public/DLCLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADLCLoader_Statics::NewProp_MapToOpen = { "MapToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADLCLoader, MapToOpen), METADATA_PARAMS(Z_Construct_UClass_ADLCLoader_Statics::NewProp_MapToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADLCLoader_Statics::NewProp_MapToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "Public/DLCLoader.h" },
	};
#endif
	void Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor_SetBit(void* Obj)
	{
		((ADLCLoader*)Obj)->bEnableInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor = { "bEnableInEditor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADLCLoader), &Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADLCLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADLCLoader_Statics::NewProp_PluginName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADLCLoader_Statics::NewProp_MapToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADLCLoader_Statics::NewProp_bEnableInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADLCLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADLCLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADLCLoader_Statics::ClassParams = {
		&ADLCLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADLCLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADLCLoader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADLCLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADLCLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADLCLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADLCLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADLCLoader, 1221287028);
	template<> DIEAGAIN_API UClass* StaticClass<ADLCLoader>()
	{
		return ADLCLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADLCLoader(Z_Construct_UClass_ADLCLoader, &ADLCLoader::StaticClass, TEXT("/Script/DieAgain"), TEXT("ADLCLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADLCLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
