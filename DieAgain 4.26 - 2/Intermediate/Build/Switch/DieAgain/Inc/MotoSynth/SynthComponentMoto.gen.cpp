// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotoSynth/Classes/SynthComponents/SynthComponentMoto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentMoto() {}
// Cross Module References
	MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto_NoRegister();
	MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	UPackage* Z_Construct_UPackage__Script_MotoSynth();
	MOTOSYNTH_API UScriptStruct* Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthPreset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USynthComponentMoto::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execGetRPMRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMinRPM);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMaxRPM);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRPMRange(Z_Param_Out_OutMinRPM,Z_Param_Out_OutMaxRPM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execSetSettings)
	{
		P_GET_STRUCT_REF(FMotoSynthRuntimeSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execSetRPM)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRPM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRPM(Z_Param_InRPM,Z_Param_InTimeSec);
		P_NATIVE_END;
	}
	void USynthComponentMoto::StaticRegisterNativesUSynthComponentMoto()
	{
		UClass* Class = USynthComponentMoto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRPMRange", &USynthComponentMoto::execGetRPMRange },
			{ "IsEnabled", &USynthComponentMoto::execIsEnabled },
			{ "SetRPM", &USynthComponentMoto::execSetRPM },
			{ "SetSettings", &USynthComponentMoto::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics
	{
		struct SynthComponentMoto_eventGetRPMRange_Parms
		{
			float OutMinRPM;
			float OutMaxRPM;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMinRPM;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMaxRPM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMinRPM = { "OutMinRPM", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentMoto_eventGetRPMRange_Parms, OutMinRPM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMaxRPM = { "OutMaxRPM", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentMoto_eventGetRPMRange_Parms, OutMaxRPM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMinRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMaxRPM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Retrieves RPM range of the moto synth, taking into account the acceleration and deceleration sources. The min RPM is the largest of the min RPms of either and the max RPM is min of the max RPMs of either. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Retrieves RPM range of the moto synth, taking into account the acceleration and deceleration sources. The min RPM is the largest of the min RPms of either and the max RPM is min of the max RPMs of either." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "GetRPMRange", nullptr, nullptr, sizeof(SynthComponentMoto_eventGetRPMRange_Parms), Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_GetRPMRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics
	{
		struct SynthComponentMoto_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthComponentMoto_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SynthComponentMoto_eventIsEnabled_Parms), &Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Returns if the moto synth is enabled. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Returns if the moto synth is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "IsEnabled", nullptr, nullptr, sizeof(SynthComponentMoto_eventIsEnabled_Parms), Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics
	{
		struct SynthComponentMoto_eventSetRPM_Parms
		{
			float InRPM;
			float InTimeSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRPM;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InRPM = { "InRPM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentMoto_eventSetRPM_Parms, InRPM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InTimeSec = { "InTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentMoto_eventSetRPM_Parms, InTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InTimeSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Sets the RPM of the granular engine directly. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets the RPM of the granular engine directly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "SetRPM", nullptr, nullptr, sizeof(SynthComponentMoto_eventSetRPM_Parms), Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_SetRPM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics
	{
		struct SynthComponentMoto_eventSetSettings_Parms
		{
			FMotoSynthRuntimeSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SynthComponentMoto_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Sets a moto synth settings dynamically. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets a moto synth settings dynamically." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "SetSettings", nullptr, nullptr, sizeof(SynthComponentMoto_eventSetSettings_Parms), Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthComponentMoto_NoRegister()
	{
		return USynthComponentMoto::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponentMoto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotoSynthPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotoSynthPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponentMoto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponentMoto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentMoto_GetRPMRange, "GetRPMRange" }, // 1583175685
		{ &Z_Construct_UFunction_USynthComponentMoto_IsEnabled, "IsEnabled" }, // 1849339116
		{ &Z_Construct_UFunction_USynthComponentMoto_SetRPM, "SetRPM" }, // 1561560598
		{ &Z_Construct_UFunction_USynthComponentMoto_SetSettings, "SetSettings" }, // 1334476946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentMoto.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/* The moto synth preset to use for the moto synth component. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "The moto synth preset to use for the moto synth component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset = { "MotoSynthPreset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponentMoto, MotoSynthPreset), Z_Construct_UClass_UMotoSynthPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData[] = {
		{ "Category", "MotoSynth" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "500.0" },
		{ "Comment", "/* Sets the starting RPM of the engine */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets the starting RPM of the engine" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USynthComponentMoto, RPM), METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponentMoto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentMoto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentMoto_Statics::ClassParams = {
		&USynthComponentMoto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponentMoto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USynthComponentMoto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthComponentMoto, 123760297);
	template<> MOTOSYNTH_API UClass* StaticClass<USynthComponentMoto>()
	{
		return USynthComponentMoto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthComponentMoto(Z_Construct_UClass_USynthComponentMoto, &USynthComponentMoto::StaticClass, TEXT("/Script/MotoSynth"), TEXT("USynthComponentMoto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentMoto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
