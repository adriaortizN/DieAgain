// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLayerUtilities/Public/ActorLayerUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLayerUtilities() {}
// Cross Module References
	ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
	UPackage* Z_Construct_UPackage__Script_ActorLayerUtilities();
	ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister();
	ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FActorLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORLAYERUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FActorLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorLayer, Z_Construct_UPackage__Script_ActorLayerUtilities(), TEXT("ActorLayer"), sizeof(FActorLayer), Get_Z_Construct_UScriptStruct_FActorLayer_Hash());
	}
	return Singleton;
}
template<> ACTORLAYERUTILITIES_API UScriptStruct* StaticStruct<FActorLayer>()
{
	return FActorLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorLayer(FActorLayer::StaticStruct, TEXT("/Script/ActorLayerUtilities"), TEXT("ActorLayer"), false, nullptr, nullptr);
static struct FScriptStruct_ActorLayerUtilities_StaticRegisterNativesFActorLayer
{
	FScriptStruct_ActorLayerUtilities_StaticRegisterNativesFActorLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorLayer")),new UScriptStruct::TCppStructOps<FActorLayer>);
	}
} ScriptStruct_ActorLayerUtilities_StaticRegisterNativesFActorLayer;
	struct Z_Construct_UScriptStruct_FActorLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The name of this layer */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "The name of this layer" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
		nullptr,
		&NewStructOps,
		"ActorLayer",
		sizeof(FActorLayer),
		alignof(FActorLayer),
		Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActorLayerUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorLayer"), sizeof(FActorLayer), Get_Z_Construct_UScriptStruct_FActorLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorLayer_Hash() { return 1453637238U; }
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execRemoveActorFromLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULayersBlueprintLibrary::RemoveActorFromLayer(Z_Param_InActor,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execAddActorToLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULayersBlueprintLibrary::AddActorToLayer(Z_Param_InActor,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersBlueprintLibrary::execGetActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_ActorLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=ULayersBlueprintLibrary::GetActors(Z_Param_WorldContextObject,Z_Param_Out_ActorLayer);
		P_NATIVE_END;
	}
	void ULayersBlueprintLibrary::StaticRegisterNativesULayersBlueprintLibrary()
	{
		UClass* Class = ULayersBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToLayer", &ULayersBlueprintLibrary::execAddActorToLayer },
			{ "GetActors", &ULayersBlueprintLibrary::execGetActors },
			{ "RemoveActorFromLayer", &ULayersBlueprintLibrary::execRemoveActorFromLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics
	{
		struct LayersBlueprintLibrary_eventAddActorToLayer_Parms
		{
			AActor* InActor;
			FActorLayer Layer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** \n\x09 * Adds the actor to the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Adds the actor to the specified layer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "AddActorToLayer", nullptr, nullptr, sizeof(LayersBlueprintLibrary_eventAddActorToLayer_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics
	{
		struct LayersBlueprintLibrary_eventGetActors_Parms
		{
			UObject* WorldContextObject;
			FActorLayer ActorLayer;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorLayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer = { "ActorLayer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ActorLayer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Get all the actors in this layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Get all the actors in this layer" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "GetActors", nullptr, nullptr, sizeof(LayersBlueprintLibrary_eventGetActors_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics
	{
		struct LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms
		{
			AActor* InActor;
			FActorLayer Layer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Removes the actor from the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Removes the actor from the specified layer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "RemoveActorFromLayer", nullptr, nullptr, sizeof(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms), Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister()
	{
		return ULayersBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayersBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULayersBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer, "AddActorToLayer" }, // 2360381166
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors, "GetActors" }, // 951240496
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer, "RemoveActorFromLayer" }, // 2149685019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods for interacting with editor layers\n */" },
		{ "IncludePath", "ActorLayerUtilities.h" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Function library containing methods for interacting with editor layers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayersBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayersBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams = {
		&ULayersBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayersBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULayersBlueprintLibrary, 2470956693);
	template<> ACTORLAYERUTILITIES_API UClass* StaticClass<ULayersBlueprintLibrary>()
	{
		return ULayersBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULayersBlueprintLibrary(Z_Construct_UClass_ULayersBlueprintLibrary, &ULayersBlueprintLibrary::StaticClass, TEXT("/Script/ActorLayerUtilities"), TEXT("ULayersBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayersBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
