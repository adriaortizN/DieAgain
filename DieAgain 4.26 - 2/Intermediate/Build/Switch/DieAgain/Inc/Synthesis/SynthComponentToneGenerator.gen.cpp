// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentToneGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentToneGenerator() {}
// Cross Module References
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	DEFINE_FUNCTION(USynthComponentToneGenerator::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentToneGenerator::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	void USynthComponentToneGenerator::StaticRegisterNativesUSynthComponentToneGenerator()
	{
		UClass* Class = USynthComponentToneGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFrequency", &USynthComponentToneGenerator::execSetFrequency },
			{ "SetVolume", &USynthComponentToneGenerator::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics
	{
		struct SynthComponentToneGenerator_eventSetFrequency_Parms
		{
			float InFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetFrequency_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the frequency of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the frequency of the tone generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetFrequency", nullptr, nullptr, sizeof(SynthComponentToneGenerator_eventSetFrequency_Parms), Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics
	{
		struct SynthComponentToneGenerator_eventSetVolume_Parms
		{
			float InVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the volume of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the volume of the tone generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetVolume", nullptr, nullptr, sizeof(SynthComponentToneGenerator_eventSetVolume_Parms), Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister()
	{
		return USynthComponentToneGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponentToneGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponentToneGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponentToneGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency, "SetFrequency" }, // 2760561013
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume, "SetVolume" }, // 38681672
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentToneGenerator.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency (in hz) of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The frequency (in hz) of the tone generator." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponentToneGenerator, Frequency), METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear volume of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The linear volume of the tone generator." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponentToneGenerator, Volume), METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponentToneGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentToneGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams = {
		&USynthComponentToneGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponentToneGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthComponentToneGenerator, 864152787);
	template<> SYNTHESIS_API UClass* StaticClass<USynthComponentToneGenerator>()
	{
		return USynthComponentToneGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthComponentToneGenerator(Z_Construct_UClass_USynthComponentToneGenerator, &USynthComponentToneGenerator::StaticClass, TEXT("/Script/Synthesis"), TEXT("USynthComponentToneGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentToneGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
