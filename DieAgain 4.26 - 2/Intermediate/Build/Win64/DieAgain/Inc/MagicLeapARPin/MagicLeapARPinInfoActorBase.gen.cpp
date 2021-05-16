// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/Debug/MagicLeapARPinInfoActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinInfoActorBase() {}
// Cross Module References
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_AMagicLeapARPinInfoActorBase_NoRegister();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_AMagicLeapARPinInfoActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static FName NAME_AMagicLeapARPinInfoActorBase_OnUpdateARPinState = FName(TEXT("OnUpdateARPinState"));
	void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapARPinInfoActorBase_OnUpdateARPinState),NULL);
	}
	void AMagicLeapARPinInfoActorBase::StaticRegisterNativesAMagicLeapARPinInfoActorBase()
	{
	}
	struct Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinInfoActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapARPinInfoActorBase, nullptr, "OnUpdateARPinState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicLeapARPinInfoActorBase_NoRegister()
	{
		return AMagicLeapARPinInfoActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibilityOverride_MetaData[];
#endif
		static void NewProp_bVisibilityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibilityOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicLeapARPinInfoActorBase_OnUpdateARPinState, "OnUpdateARPinState" }, // 95365363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "Debug/MagicLeapARPinInfoActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinInfoActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_PinID_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinInfoActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapARPinInfoActorBase, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_PinID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinInfoActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride_SetBit(void* Obj)
	{
		((AMagicLeapARPinInfoActorBase*)Obj)->bVisibilityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride = { "bVisibilityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagicLeapARPinInfoActorBase), &Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_PinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::NewProp_bVisibilityOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicLeapARPinInfoActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::ClassParams = {
		&AMagicLeapARPinInfoActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicLeapARPinInfoActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicLeapARPinInfoActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicLeapARPinInfoActorBase, 609138617);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<AMagicLeapARPinInfoActorBase>()
	{
		return AMagicLeapARPinInfoActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicLeapARPinInfoActorBase(Z_Construct_UClass_AMagicLeapARPinInfoActorBase, &AMagicLeapARPinInfoActorBase::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("AMagicLeapARPinInfoActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicLeapARPinInfoActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
