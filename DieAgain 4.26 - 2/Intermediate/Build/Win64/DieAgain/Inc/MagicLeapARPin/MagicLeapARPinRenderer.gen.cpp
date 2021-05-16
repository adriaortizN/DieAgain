// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/Debug/MagicLeapARPinRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinRenderer() {}
// Cross Module References
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_AMagicLeapARPinRenderer_NoRegister();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_AMagicLeapARPinRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_AMagicLeapARPinInfoActorBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMagicLeapARPinRenderer::execSetVisibilityOverride)
	{
		P_GET_UBOOL(Z_Param_InVisibilityOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOverride(Z_Param_InVisibilityOverride);
		P_NATIVE_END;
	}
	void AMagicLeapARPinRenderer::StaticRegisterNativesAMagicLeapARPinRenderer()
	{
		UClass* Class = AMagicLeapARPinRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVisibilityOverride", &AMagicLeapARPinRenderer::execSetVisibilityOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics
	{
		struct MagicLeapARPinRenderer_eventSetVisibilityOverride_Parms
		{
			bool InVisibilityOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVisibilityOverride_MetaData[];
#endif
		static void NewProp_InVisibilityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisibilityOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride_SetBit(void* Obj)
	{
		((MagicLeapARPinRenderer_eventSetVisibilityOverride_Parms*)Obj)->InVisibilityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride = { "InVisibilityOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinRenderer_eventSetVisibilityOverride_Parms), &Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::NewProp_InVisibilityOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapARPinRenderer, nullptr, "SetVisibilityOverride", nullptr, nullptr, sizeof(MagicLeapARPinRenderer_eventSetVisibilityOverride_Parms), Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicLeapARPinRenderer_NoRegister()
	{
		return AMagicLeapARPinRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AMagicLeapARPinRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfoActorsVisibilityOverride_MetaData[];
#endif
		static void NewProp_bInfoActorsVisibilityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfoActorsVisibilityOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllInfoActors_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllInfoActors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInfoActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AllInfoActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicLeapARPinRenderer_SetVisibilityOverride, "SetVisibilityOverride" }, // 2039556331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "Debug/MagicLeapARPinRenderer.h" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride_MetaData[] = {
		{ "BlueprintSetter", "SetVisibilityOverride" },
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinRenderer.h" },
	};
#endif
	void Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride_SetBit(void* Obj)
	{
		((AMagicLeapARPinRenderer*)Obj)->bInfoActorsVisibilityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride = { "bInfoActorsVisibilityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagicLeapARPinRenderer), &Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_ValueProp = { "AllInfoActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AMagicLeapARPinInfoActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_Key_KeyProp = { "AllInfoActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors = { "AllInfoActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapARPinRenderer, AllInfoActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Debug/MagicLeapARPinRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapARPinRenderer, ClassToSpawn), Z_Construct_UClass_AMagicLeapARPinInfoActorBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_ClassToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_bInfoActorsVisibilityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_AllInfoActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::NewProp_ClassToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicLeapARPinRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::ClassParams = {
		&AMagicLeapARPinRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicLeapARPinRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicLeapARPinRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicLeapARPinRenderer, 1266206375);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<AMagicLeapARPinRenderer>()
	{
		return AMagicLeapARPinRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicLeapARPinRenderer(Z_Construct_UClass_AMagicLeapARPinRenderer, &AMagicLeapARPinRenderer::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("AMagicLeapARPinRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicLeapARPinRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
