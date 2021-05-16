// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARActor() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedGeometryGroup();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FTrackedGeometryGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FTrackedGeometryGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackedGeometryGroup, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("TrackedGeometryGroup"), sizeof(FTrackedGeometryGroup), Get_Z_Construct_UScriptStruct_FTrackedGeometryGroup_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FTrackedGeometryGroup>()
{
	return FTrackedGeometryGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackedGeometryGroup(FTrackedGeometryGroup::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("TrackedGeometryGroup"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFTrackedGeometryGroup
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFTrackedGeometryGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackedGeometryGroup")),new UScriptStruct::TCppStructOps<FTrackedGeometryGroup>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFTrackedGeometryGroup;
	struct Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackedGeometryGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor = { "ARActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedGeometryGroup, ARActor), Z_Construct_UClass_AARActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent = { "ARComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedGeometryGroup, ARComponent), Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackedGeometryGroup, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_ARComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewProp_TrackedGeometry,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"TrackedGeometryGroup",
		sizeof(FTrackedGeometryGroup),
		alignof(FTrackedGeometryGroup),
		Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackedGeometryGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackedGeometryGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackedGeometryGroup"), sizeof(FTrackedGeometryGroup), Get_Z_Construct_UScriptStruct_FTrackedGeometryGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackedGeometryGroup_Hash() { return 2562499571U; }
	DEFINE_FUNCTION(AARActor::execAddARComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_InComponentClass);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NativeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARComponent**)Z_Param__Result=P_THIS->AddARComponent(Z_Param_InComponentClass,Z_Param_Out_NativeID);
		P_NATIVE_END;
	}
	void AARActor::StaticRegisterNativesAARActor()
	{
		UClass* Class = AARActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddARComponent", &AARActor::execAddARComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARActor_AddARComponent_Statics
	{
		struct ARActor_eventAddARComponent_Parms
		{
			TSubclassOf<UARComponent>  InComponentClass;
			FGuid NativeID;
			UARComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_InComponentClass = { "InComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, InComponentClass), Z_Construct_UClass_UARComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARActor_eventAddARComponent_Parms, ReturnValue), Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_InComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_NativeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARActor_AddARComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARActor_AddARComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARActor, nullptr, "AddARComponent", nullptr, nullptr, sizeof(ARActor_eventAddARComponent_Parms), Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARActor_AddARComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARActor_AddARComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARActor_AddARComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARActor_NoRegister()
	{
		return AARActor::StaticClass();
	}
	struct Z_Construct_UClass_AARActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARActor_AddARComponent, "AddARComponent" }, // 1926741838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ARActor.h" },
		{ "ModuleRelativePath", "Public/ARActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARActor_Statics::ClassParams = {
		&AARActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARActor, 2417316275);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARActor>()
	{
		return AARActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARActor(Z_Construct_UClass_AARActor, &AARActor::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("AARActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
