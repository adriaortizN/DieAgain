// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DieAgain/Public/SteamCustomNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCustomNodes() {}
// Cross Module References
	DIEAGAIN_API UClass* Z_Construct_UClass_USteamCustomNodes_NoRegister();
	DIEAGAIN_API UClass* Z_Construct_UClass_USteamCustomNodes();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DieAgain();
	DIEAGAIN_API UFunction* Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled();
	DIEAGAIN_API UFunction* Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled();
	DIEAGAIN_API UFunction* Z_Construct_UFunction_USteamCustomNodes_OpenStore();
// End Cross Module References
	void USteamCustomNodes::StaticRegisterNativesUSteamCustomNodes()
	{
		UClass* Class = USteamCustomNodes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsAppInstalled", &USteamCustomNodes::execBIsAppInstalled },
			{ "BIsDlcInstalled", &USteamCustomNodes::execBIsDlcInstalled },
			{ "OpenStore", &USteamCustomNodes::execOpenStore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics
	{
		struct SteamCustomNodes_eventBIsAppInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamCustomNodes_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCustomNodes_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCustomNodes_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steam Custom Nodes" },
		{ "CompactNodeTitle", "Game Installed" },
		{ "DisplayName", "Game Installed" },
		{ "ModuleRelativePath", "Public/SteamCustomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCustomNodes, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(SteamCustomNodes_eventBIsAppInstalled_Parms), Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics
	{
		struct SteamCustomNodes_eventBIsDlcInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamCustomNodes_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCustomNodes_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCustomNodes_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steam Custom Nodes" },
		{ "CompactNodeTitle", "Has DLC Installed" },
		{ "DisplayName", "Has DLC Installed" },
		{ "ModuleRelativePath", "Public/SteamCustomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCustomNodes, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(SteamCustomNodes_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics
	{
		struct SteamCustomNodes_eventOpenStore_Parms
		{
			int32 DLC_AppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DLC_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::NewProp_DLC_AppID = { "DLC_AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCustomNodes_eventOpenStore_Parms, DLC_AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::NewProp_DLC_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steam Custom Nodes" },
		{ "CompactNodeTitle", "Open Store" },
		{ "DisplayName", "Open Store" },
		{ "ModuleRelativePath", "Public/SteamCustomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCustomNodes, nullptr, "OpenStore", nullptr, nullptr, sizeof(SteamCustomNodes_eventOpenStore_Parms), Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCustomNodes_OpenStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCustomNodes_OpenStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCustomNodes_NoRegister()
	{
		return USteamCustomNodes::StaticClass();
	}
	struct Z_Construct_UClass_USteamCustomNodes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCustomNodes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DieAgain,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCustomNodes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCustomNodes_BIsAppInstalled, "BIsAppInstalled" }, // 3435703812
		{ &Z_Construct_UFunction_USteamCustomNodes_BIsDlcInstalled, "BIsDlcInstalled" }, // 103830779
		{ &Z_Construct_UFunction_USteamCustomNodes_OpenStore, "OpenStore" }, // 4201927110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCustomNodes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCustomNodes.h" },
		{ "ModuleRelativePath", "Public/SteamCustomNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCustomNodes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCustomNodes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCustomNodes_Statics::ClassParams = {
		&USteamCustomNodes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCustomNodes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USteamCustomNodes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCustomNodes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCustomNodes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCustomNodes, 2307626925);
	template<> DIEAGAIN_API UClass* StaticClass<USteamCustomNodes>()
	{
		return USteamCustomNodes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCustomNodes(Z_Construct_UClass_USteamCustomNodes, &USteamCustomNodes::StaticClass, TEXT("/Script/DieAgain"), TEXT("USteamCustomNodes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCustomNodes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
