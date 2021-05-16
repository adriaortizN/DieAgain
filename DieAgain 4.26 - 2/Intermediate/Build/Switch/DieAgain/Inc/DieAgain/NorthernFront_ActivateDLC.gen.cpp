// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DieAgain/NorthernFront_ActivateDLC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNorthernFront_ActivateDLC() {}
// Cross Module References
	DIEAGAIN_API UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC_NoRegister();
	DIEAGAIN_API UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DieAgain();
// End Cross Module References
	DEFINE_FUNCTION(ANorthernFront_ActivateDLC::execOpenDLC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenDLC();
		P_NATIVE_END;
	}
	void ANorthernFront_ActivateDLC::StaticRegisterNativesANorthernFront_ActivateDLC()
	{
		UClass* Class = ANorthernFront_ActivateDLC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDLC", &ANorthernFront_ActivateDLC::execOpenDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics
	{
		struct NorthernFront_ActivateDLC_eventOpenDLC_Parms
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
	void Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NorthernFront_ActivateDLC_eventOpenDLC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NorthernFront_ActivateDLC_eventOpenDLC_Parms), &Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANorthernFront_ActivateDLC, nullptr, "OpenDLC", nullptr, nullptr, sizeof(NorthernFront_ActivateDLC_eventOpenDLC_Parms), Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC_NoRegister()
	{
		return ANorthernFront_ActivateDLC::StaticClass();
	}
	struct Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics
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
	UObject* (*const Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DieAgain,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANorthernFront_ActivateDLC_OpenDLC, "OpenDLC" }, // 3135901531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NorthernFront_ActivateDLC.h" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_PluginName_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANorthernFront_ActivateDLC, PluginName), METADATA_PARAMS(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_PluginName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_MapToOpen_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_MapToOpen = { "MapToOpen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANorthernFront_ActivateDLC, MapToOpen), METADATA_PARAMS(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_MapToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_MapToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor_MetaData[] = {
		{ "Category", "DLCLoader" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
	void Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor_SetBit(void* Obj)
	{
		((ANorthernFront_ActivateDLC*)Obj)->bEnableInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor = { "bEnableInEditor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANorthernFront_ActivateDLC), &Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_PluginName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_MapToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::NewProp_bEnableInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANorthernFront_ActivateDLC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::ClassParams = {
		&ANorthernFront_ActivateDLC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANorthernFront_ActivateDLC, 3160836403);
	template<> DIEAGAIN_API UClass* StaticClass<ANorthernFront_ActivateDLC>()
	{
		return ANorthernFront_ActivateDLC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANorthernFront_ActivateDLC(Z_Construct_UClass_ANorthernFront_ActivateDLC, &ANorthernFront_ActivateDLC::StaticClass, TEXT("/Script/DieAgain"), TEXT("ANorthernFront_ActivateDLC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANorthernFront_ActivateDLC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
