// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuartzQuantizationUtilities() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuarztQuantizationReference();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzDelegateType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTimeSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzPulseOverrideStep();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQuartzCommandEventBP_Parms
		{
			EQuartzCommandDelegateSubType EventType;
			FName Name;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEventBP_Parms, EventType), Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEventBP_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzCommandEventBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnQuartzCommandEventBP_Parms), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQuartzCommandEvent_Parms
		{
			EQuartzCommandDelegateSubType EventType;
			FName Name;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEvent_Parms, EventType), Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzCommandEvent_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzCommandEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnQuartzCommandEvent_Parms), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQuartzMetronomeEventBP_Parms
		{
			FName ClockName;
			EQuartzCommandQuantization QuantizationType;
			int32 NumBars;
			int32 Beat;
			float BeatFraction;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBars;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Beat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatFraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_NumBars = { "NumBars", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, NumBars), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, Beat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_BeatFraction = { "BeatFraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms, BeatFraction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_QuantizationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_NumBars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_Beat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::NewProp_BeatFraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzMetronomeEventBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnQuartzMetronomeEventBP_Parms), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQuartzMetronomeEvent_Parms
		{
			FName ClockName;
			EQuartzCommandQuantization QuantizationType;
			int32 NumBars;
			int32 Beat;
			float BeatFraction;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBars;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Beat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatFraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_NumBars = { "NumBars", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, NumBars), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, Beat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_BeatFraction = { "BeatFraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnQuartzMetronomeEvent_Parms, BeatFraction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_QuantizationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_NumBars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_Beat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::NewProp_BeatFraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate Declarations\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Delegate Declarations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQuartzMetronomeEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnQuartzMetronomeEvent_Parms), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EQuartzCommandDelegateSubType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType, Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzCommandDelegateSubType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandDelegateSubType>()
	{
		return EQuartzCommandDelegateSubType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuartzCommandDelegateSubType(EQuartzCommandDelegateSubType_StaticEnum, TEXT("/Script/Engine"), TEXT("EQuartzCommandDelegateSubType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Hash() { return 1145670635U; }
	UEnum* Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuartzCommandDelegateSubType"), 0, Get_Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuartzCommandDelegateSubType::CommandOnFailedToQueue", (int64)EQuartzCommandDelegateSubType::CommandOnFailedToQueue },
				{ "EQuartzCommandDelegateSubType::CommandOnQueued", (int64)EQuartzCommandDelegateSubType::CommandOnQueued },
				{ "EQuartzCommandDelegateSubType::CommandOnCanceled", (int64)EQuartzCommandDelegateSubType::CommandOnCanceled },
				{ "EQuartzCommandDelegateSubType::CommandOnAboutToStart", (int64)EQuartzCommandDelegateSubType::CommandOnAboutToStart },
				{ "EQuartzCommandDelegateSubType::CommandOnStarted", (int64)EQuartzCommandDelegateSubType::CommandOnStarted },
				{ "EQuartzCommandDelegateSubType::Count", (int64)EQuartzCommandDelegateSubType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CommandOnAboutToStart.DisplayName", "About To Start" },
				{ "CommandOnAboutToStart.Name", "EQuartzCommandDelegateSubType::CommandOnAboutToStart" },
				{ "CommandOnAboutToStart.ToolTip", "execute off this to be in sync w/ sound starting" },
				{ "CommandOnCanceled.DisplayName", "Canceled" },
				{ "CommandOnCanceled.Name", "EQuartzCommandDelegateSubType::CommandOnCanceled" },
				{ "CommandOnCanceled.ToolTip", "The command was stopped before it could execute" },
				{ "CommandOnFailedToQueue.DisplayName", "Failed To Queue" },
				{ "CommandOnFailedToQueue.Name", "EQuartzCommandDelegateSubType::CommandOnFailedToQueue" },
				{ "CommandOnFailedToQueue.ToolTip", "The command will not execute (i.e. Clock doesn't exist or PlayQuantized failed concurrency)" },
				{ "CommandOnQueued.DisplayName", "Queued" },
				{ "CommandOnQueued.Name", "EQuartzCommandDelegateSubType::CommandOnQueued" },
				{ "CommandOnQueued.ToolTip", "The command has been passed to the Audio Render Thread" },
				{ "CommandOnStarted.DisplayName", "Started" },
				{ "CommandOnStarted.Name", "EQuartzCommandDelegateSubType::CommandOnStarted" },
				{ "CommandOnStarted.ToolTip", "the command was just executed on the Audio Render Thrtead" },
				{ "Comment", "// An enumeration for specifying different TYPES of delegates\n" },
				{ "Count.Comment", "//\x09""CommandCompleted\x09\x09\x09UMETA(DisplayName = \"Completed\", ToolTip = \"same as 'Started' unless command is looping\"),\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuartzCommandDelegateSubType::Count" },
				{ "Count.ToolTip", "CommandCompleted                        UMETA(DisplayName = \"Completed\", ToolTip = \"same as 'Started' unless command is looping\")," },
				{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
				{ "ToolTip", "An enumeration for specifying different TYPES of delegates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EQuartzCommandDelegateSubType",
				"EQuartzCommandDelegateSubType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuarztQuantizationReference_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuarztQuantizationReference, Z_Construct_UPackage__Script_Engine(), TEXT("EQuarztQuantizationReference"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EQuarztQuantizationReference>()
	{
		return EQuarztQuantizationReference_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuarztQuantizationReference(EQuarztQuantizationReference_StaticEnum, TEXT("/Script/Engine"), TEXT("EQuarztQuantizationReference"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Hash() { return 3501416447U; }
	UEnum* Z_Construct_UEnum_Engine_EQuarztQuantizationReference()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuarztQuantizationReference"), 0, Get_Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuarztQuantizationReference::BarRelative", (int64)EQuarztQuantizationReference::BarRelative },
				{ "EQuarztQuantizationReference::TransportRelative", (int64)EQuarztQuantizationReference::TransportRelative },
				{ "EQuarztQuantizationReference::CurrentTimeRelative", (int64)EQuarztQuantizationReference::CurrentTimeRelative },
				{ "EQuarztQuantizationReference::Count", (int64)EQuarztQuantizationReference::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BarRelative.DisplayName", "Bar Relative" },
				{ "BarRelative.Name", "EQuarztQuantizationReference::BarRelative" },
				{ "BarRelative.ToolTip", "Will occur on the next occurence of this duration from the start of a bar (i.e. On beat 3)" },
				{ "BlueprintType", "true" },
				{ "Comment", "// An enumeration for specifying quantization boundary reference frame\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuarztQuantizationReference::Count" },
				{ "CurrentTimeRelative.DisplayName", "Current Time Relative" },
				{ "CurrentTimeRelative.Name", "EQuarztQuantizationReference::CurrentTimeRelative" },
				{ "CurrentTimeRelative.ToolTip", "Will occur on the next multiple of this duration from the current time (i.e. In three beats)" },
				{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
				{ "ToolTip", "An enumeration for specifying quantization boundary reference frame" },
				{ "TransportRelative.DisplayName", "Transport Relative" },
				{ "TransportRelative.Name", "EQuarztQuantizationReference::TransportRelative" },
				{ "TransportRelative.ToolTip", "Will occur on the next multiple of this duration since the clock started ticking (i.e. on the next 4 bar boundary)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EQuarztQuantizationReference",
				"EQuarztQuantizationReference",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuartzDelegateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzDelegateType, Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzDelegateType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EQuartzDelegateType>()
	{
		return EQuartzDelegateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuartzDelegateType(EQuartzDelegateType_StaticEnum, TEXT("/Script/Engine"), TEXT("EQuartzDelegateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EQuartzDelegateType_Hash() { return 3238412505U; }
	UEnum* Z_Construct_UEnum_Engine_EQuartzDelegateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuartzDelegateType"), 0, Get_Z_Construct_UEnum_Engine_EQuartzDelegateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuartzDelegateType::MetronomeTick", (int64)EQuartzDelegateType::MetronomeTick },
				{ "EQuartzDelegateType::CommandEvent", (int64)EQuartzDelegateType::CommandEvent },
				{ "EQuartzDelegateType::Count", (int64)EQuartzDelegateType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CommandEvent.Comment", "// uses EAudioMixerCommandQuantization to select subdivision\n" },
				{ "CommandEvent.DisplayName", "Command Event" },
				{ "CommandEvent.Name", "EQuartzDelegateType::CommandEvent" },
				{ "CommandEvent.ToolTip", "uses EAudioMixerCommandQuantization to select subdivision" },
				{ "Comment", "// An enumeration for specifying different TYPES of delegates\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuartzDelegateType::Count" },
				{ "MetronomeTick.DisplayName", "Metronome Tick" },
				{ "MetronomeTick.Name", "EQuartzDelegateType::MetronomeTick" },
				{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
				{ "ToolTip", "An enumeration for specifying different TYPES of delegates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EQuartzDelegateType",
				"EQuartzDelegateType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuartzTimeSignatureQuantization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization, Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzTimeSignatureQuantization"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EQuartzTimeSignatureQuantization>()
	{
		return EQuartzTimeSignatureQuantization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuartzTimeSignatureQuantization(EQuartzTimeSignatureQuantization_StaticEnum, TEXT("/Script/Engine"), TEXT("EQuartzTimeSignatureQuantization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Hash() { return 863168810U; }
	UEnum* Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuartzTimeSignatureQuantization"), 0, Get_Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuartzTimeSignatureQuantization::HalfNote", (int64)EQuartzTimeSignatureQuantization::HalfNote },
				{ "EQuartzTimeSignatureQuantization::QuarterNote", (int64)EQuartzTimeSignatureQuantization::QuarterNote },
				{ "EQuartzTimeSignatureQuantization::EighthNote", (int64)EQuartzTimeSignatureQuantization::EighthNote },
				{ "EQuartzTimeSignatureQuantization::SixteenthNote", (int64)EQuartzTimeSignatureQuantization::SixteenthNote },
				{ "EQuartzTimeSignatureQuantization::ThirtySecondNote", (int64)EQuartzTimeSignatureQuantization::ThirtySecondNote },
				{ "EQuartzTimeSignatureQuantization::Count", (int64)EQuartzTimeSignatureQuantization::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// An enumeration for specifying the denominator of time signatures\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuartzTimeSignatureQuantization::Count" },
				{ "EighthNote.DisplayName", "/8" },
				{ "EighthNote.Name", "EQuartzTimeSignatureQuantization::EighthNote" },
				{ "HalfNote.DisplayName", "/2" },
				{ "HalfNote.Name", "EQuartzTimeSignatureQuantization::HalfNote" },
				{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
				{ "QuarterNote.DisplayName", "/4" },
				{ "QuarterNote.Name", "EQuartzTimeSignatureQuantization::QuarterNote" },
				{ "SixteenthNote.DisplayName", "/16" },
				{ "SixteenthNote.Name", "EQuartzTimeSignatureQuantization::SixteenthNote" },
				{ "ThirtySecondNote.DisplayName", "/32" },
				{ "ThirtySecondNote.Name", "EQuartzTimeSignatureQuantization::ThirtySecondNote" },
				{ "ToolTip", "An enumeration for specifying the denominator of time signatures" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EQuartzTimeSignatureQuantization",
				"EQuartzTimeSignatureQuantization",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuartzCommandQuantization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandQuantization, Z_Construct_UPackage__Script_Engine(), TEXT("EQuartzCommandQuantization"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandQuantization>()
	{
		return EQuartzCommandQuantization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuartzCommandQuantization(EQuartzCommandQuantization_StaticEnum, TEXT("/Script/Engine"), TEXT("EQuartzCommandQuantization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Hash() { return 66045678U; }
	UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuartzCommandQuantization"), 0, Get_Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuartzCommandQuantization::Bar", (int64)EQuartzCommandQuantization::Bar },
				{ "EQuartzCommandQuantization::Beat", (int64)EQuartzCommandQuantization::Beat },
				{ "EQuartzCommandQuantization::ThirtySecondNote", (int64)EQuartzCommandQuantization::ThirtySecondNote },
				{ "EQuartzCommandQuantization::SixteenthNote", (int64)EQuartzCommandQuantization::SixteenthNote },
				{ "EQuartzCommandQuantization::EighthNote", (int64)EQuartzCommandQuantization::EighthNote },
				{ "EQuartzCommandQuantization::QuarterNote", (int64)EQuartzCommandQuantization::QuarterNote },
				{ "EQuartzCommandQuantization::HalfNote", (int64)EQuartzCommandQuantization::HalfNote },
				{ "EQuartzCommandQuantization::WholeNote", (int64)EQuartzCommandQuantization::WholeNote },
				{ "EQuartzCommandQuantization::DottedSixteenthNote", (int64)EQuartzCommandQuantization::DottedSixteenthNote },
				{ "EQuartzCommandQuantization::DottedEighthNote", (int64)EQuartzCommandQuantization::DottedEighthNote },
				{ "EQuartzCommandQuantization::DottedQuarterNote", (int64)EQuartzCommandQuantization::DottedQuarterNote },
				{ "EQuartzCommandQuantization::DottedHalfNote", (int64)EQuartzCommandQuantization::DottedHalfNote },
				{ "EQuartzCommandQuantization::DottedWholeNote", (int64)EQuartzCommandQuantization::DottedWholeNote },
				{ "EQuartzCommandQuantization::SixteenthNoteTriplet", (int64)EQuartzCommandQuantization::SixteenthNoteTriplet },
				{ "EQuartzCommandQuantization::EighthNoteTriplet", (int64)EQuartzCommandQuantization::EighthNoteTriplet },
				{ "EQuartzCommandQuantization::QuarterNoteTriplet", (int64)EQuartzCommandQuantization::QuarterNoteTriplet },
				{ "EQuartzCommandQuantization::HalfNoteTriplet", (int64)EQuartzCommandQuantization::HalfNoteTriplet },
				{ "EQuartzCommandQuantization::Tick", (int64)EQuartzCommandQuantization::Tick },
				{ "EQuartzCommandQuantization::Count", (int64)EQuartzCommandQuantization::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bar.DisplayName", "Bar" },
				{ "Bar.Name", "EQuartzCommandQuantization::Bar" },
				{ "Bar.ToolTip", "(dependent on time signature)" },
				{ "Beat.DisplayName", "Beat" },
				{ "Beat.Name", "EQuartzCommandQuantization::Beat" },
				{ "Beat.ToolTip", "(dependent on time signature and Pulse Override)" },
				{ "BlueprintType", "true" },
				{ "Comment", "// An enumeration for specifying quantization for Quartz commands\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuartzCommandQuantization::Count" },
				{ "DottedEighthNote.DisplayName", "(dotted) 1/8" },
				{ "DottedEighthNote.Name", "EQuartzCommandQuantization::DottedEighthNote" },
				{ "DottedHalfNote.DisplayName", "(dotted) Half" },
				{ "DottedHalfNote.Name", "EQuartzCommandQuantization::DottedHalfNote" },
				{ "DottedQuarterNote.DisplayName", "(dotted) 1/4" },
				{ "DottedQuarterNote.Name", "EQuartzCommandQuantization::DottedQuarterNote" },
				{ "DottedSixteenthNote.DisplayName", "(dotted) 1/16" },
				{ "DottedSixteenthNote.Name", "EQuartzCommandQuantization::DottedSixteenthNote" },
				{ "DottedWholeNote.DisplayName", "(dotted) Whole" },
				{ "DottedWholeNote.Name", "EQuartzCommandQuantization::DottedWholeNote" },
				{ "EighthNote.DisplayName", "1/8" },
				{ "EighthNote.Name", "EQuartzCommandQuantization::EighthNote" },
				{ "EighthNoteTriplet.DisplayName", "1/8 (triplet)" },
				{ "EighthNoteTriplet.Name", "EQuartzCommandQuantization::EighthNoteTriplet" },
				{ "HalfNote.DisplayName", "Half" },
				{ "HalfNote.Name", "EQuartzCommandQuantization::HalfNote" },
				{ "HalfNoteTriplet.DisplayName", "1/2 (triplet)" },
				{ "HalfNoteTriplet.Name", "EQuartzCommandQuantization::HalfNoteTriplet" },
				{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
				{ "QuarterNote.DisplayName", "1/4" },
				{ "QuarterNote.Name", "EQuartzCommandQuantization::QuarterNote" },
				{ "QuarterNoteTriplet.DisplayName", "1/4 (triplet)" },
				{ "QuarterNoteTriplet.Name", "EQuartzCommandQuantization::QuarterNoteTriplet" },
				{ "SixteenthNote.DisplayName", "1/16" },
				{ "SixteenthNote.Name", "EQuartzCommandQuantization::SixteenthNote" },
				{ "SixteenthNoteTriplet.DisplayName", "1/16 (triplet)" },
				{ "SixteenthNoteTriplet.Name", "EQuartzCommandQuantization::SixteenthNoteTriplet" },
				{ "ThirtySecondNote.DisplayName", "1/32" },
				{ "ThirtySecondNote.Name", "EQuartzCommandQuantization::ThirtySecondNote" },
				{ "Tick.DisplayName", "On Tick (Smallest Value, same as 1/32)" },
				{ "Tick.Name", "EQuartzCommandQuantization::Tick" },
				{ "Tick.ToolTip", "(same as 1/32)" },
				{ "ToolTip", "An enumeration for specifying quantization for Quartz commands" },
				{ "WholeNote.DisplayName", "Whole" },
				{ "WholeNote.Name", "EQuartzCommandQuantization::WholeNote" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EQuartzCommandQuantization",
				"EQuartzCommandQuantization",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FQuartzClockSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQuartzClockSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzClockSettings, Z_Construct_UPackage__Script_Engine(), TEXT("QuartzClockSettings"), sizeof(FQuartzClockSettings), Get_Z_Construct_UScriptStruct_FQuartzClockSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzClockSettings>()
{
	return FQuartzClockSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuartzClockSettings(FQuartzClockSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("QuartzClockSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQuartzClockSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFQuartzClockSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuartzClockSettings")),new UScriptStruct::TCppStructOps<FQuartzClockSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQuartzClockSettings;
	struct Z_Construct_UScriptStruct_FQuartzClockSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLevelChange_MetaData[];
#endif
		static void NewProp_bIgnoreLevelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLevelChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UStruct version of settings struct used to initialized a clock\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "UStruct version of settings struct used to initialized a clock" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzClockSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// Time Signature (defaults to 4/4)\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Time Signature (defaults to 4/4)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzClockSettings, TimeSignature), Z_Construct_UScriptStruct_FQuartzTimeSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// should the clock start Ticking\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "should the clock start Ticking" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_SetBit(void* Obj)
	{
		((FQuartzClockSettings*)Obj)->bIgnoreLevelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange = { "bIgnoreLevelChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuartzClockSettings), &Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_TimeSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QuartzClockSettings",
		sizeof(FQuartzClockSettings),
		alignof(FQuartzClockSettings),
		Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuartzClockSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuartzClockSettings"), sizeof(FQuartzClockSettings), Get_Z_Construct_UScriptStruct_FQuartzClockSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuartzClockSettings_Hash() { return 3482762049U; }
class UScriptStruct* FQuartzQuantizationBoundary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, Z_Construct_UPackage__Script_Engine(), TEXT("QuartzQuantizationBoundary"), sizeof(FQuartzQuantizationBoundary), Get_Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzQuantizationBoundary>()
{
	return FQuartzQuantizationBoundary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuartzQuantizationBoundary(FQuartzQuantizationBoundary::StaticStruct, TEXT("/Script/Engine"), TEXT("QuartzQuantizationBoundary"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQuartzQuantizationBoundary
{
	FScriptStruct_Engine_StaticRegisterNativesFQuartzQuantizationBoundary()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuartzQuantizationBoundary")),new UScriptStruct::TCppStructOps<FQuartzQuantizationBoundary>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQuartzQuantizationBoundary;
	struct Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quantization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Quantization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CountingReferencePoint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountingReferencePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CountingReferencePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct used to specify the quantization boundary of an event\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "struct used to specify the quantization boundary of an event" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzQuantizationBoundary>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "Comment", "// resolution we are interested in\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "resolution we are interested in" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization = { "Quantization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, Quantization), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// how many \"Resolutions\" to wait before the onset we care about\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "how many \"Resolutions\" to wait before the onset we care about" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_MetaData[] = {
		{ "Category", "Quantized Audio Clock Settings" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint = { "CountingReferencePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzQuantizationBoundary, CountingReferencePoint), Z_Construct_UEnum_Engine_EQuarztQuantizationReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Quantization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_CountingReferencePoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QuartzQuantizationBoundary",
		sizeof(FQuartzQuantizationBoundary),
		alignof(FQuartzQuantizationBoundary),
		Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuartzQuantizationBoundary"), sizeof(FQuartzQuantizationBoundary), Get_Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Hash() { return 444989083U; }
class UScriptStruct* FQuartzTransportTimeStamp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, Z_Construct_UPackage__Script_Engine(), TEXT("QuartzTransportTimeStamp"), sizeof(FQuartzTransportTimeStamp), Get_Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzTransportTimeStamp>()
{
	return FQuartzTransportTimeStamp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuartzTransportTimeStamp(FQuartzTransportTimeStamp::StaticStruct, TEXT("/Script/Engine"), TEXT("QuartzTransportTimeStamp"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQuartzTransportTimeStamp
{
	FScriptStruct_Engine_StaticRegisterNativesFQuartzTransportTimeStamp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuartzTransportTimeStamp")),new UScriptStruct::TCppStructOps<FQuartzTransportTimeStamp>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQuartzTransportTimeStamp;
	struct Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Transport Time stamp, used for tracking the musical time stamp on a clock\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Transport Time stamp, used for tracking the musical time stamp on a clock" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzTransportTimeStamp>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QuartzTransportTimeStamp",
		sizeof(FQuartzTransportTimeStamp),
		alignof(FQuartzTransportTimeStamp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuartzTransportTimeStamp"), sizeof(FQuartzTransportTimeStamp), Get_Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Hash() { return 2811265373U; }
class UScriptStruct* FQuartzTimeSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQuartzTimeSignature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzTimeSignature, Z_Construct_UPackage__Script_Engine(), TEXT("QuartzTimeSignature"), sizeof(FQuartzTimeSignature), Get_Z_Construct_UScriptStruct_FQuartzTimeSignature_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzTimeSignature>()
{
	return FQuartzTimeSignature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuartzTimeSignature(FQuartzTimeSignature::StaticStruct, TEXT("/Script/Engine"), TEXT("QuartzTimeSignature"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQuartzTimeSignature
{
	FScriptStruct_Engine_StaticRegisterNativesFQuartzTimeSignature()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuartzTimeSignature")),new UScriptStruct::TCppStructOps<FQuartzTimeSignature>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQuartzTimeSignature;
	struct Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBeats_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBeats;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeatType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeatType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalPulseOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalPulseOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionalPulseOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Quartz Time Signature\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Quartz Time Signature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzTimeSignature>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// numerator\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "numerator" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats = { "NumBeats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzTimeSignature, NumBeats), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// denominator\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "denominator" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType = { "BeatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzTimeSignature, BeatType), Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_Inner = { "OptionalPulseOverride", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuartzPulseOverrideStep, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// beat override\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "beat override" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride = { "OptionalPulseOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzTimeSignature, OptionalPulseOverride), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_NumBeats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_BeatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewProp_OptionalPulseOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QuartzTimeSignature",
		sizeof(FQuartzTimeSignature),
		alignof(FQuartzTimeSignature),
		Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuartzTimeSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuartzTimeSignature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuartzTimeSignature"), sizeof(FQuartzTimeSignature), Get_Z_Construct_UScriptStruct_FQuartzTimeSignature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuartzTimeSignature_Hash() { return 1740283078U; }
class UScriptStruct* FQuartzPulseOverrideStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep, Z_Construct_UPackage__Script_Engine(), TEXT("QuartzPulseOverrideStep"), sizeof(FQuartzPulseOverrideStep), Get_Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuartzPulseOverrideStep>()
{
	return FQuartzPulseOverrideStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuartzPulseOverrideStep(FQuartzPulseOverrideStep::StaticStruct, TEXT("/Script/Engine"), TEXT("QuartzPulseOverrideStep"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQuartzPulseOverrideStep
{
	FScriptStruct_Engine_StaticRegisterNativesFQuartzPulseOverrideStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuartzPulseOverrideStep")),new UScriptStruct::TCppStructOps<FQuartzPulseOverrideStep>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQuartzPulseOverrideStep;
	struct Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPulses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPulses;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PulseDuration_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PulseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PulseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows the user to specify non-uniform beat durations in odd meters\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "Allows the user to specify non-uniform beat durations in odd meters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuartzPulseOverrideStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// The number of pulses for this beat duration\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "The number of pulses for this beat duration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses = { "NumberOfPulses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzPulseOverrideStep, NumberOfPulses), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_MetaData[] = {
		{ "Category", "Quantized Audio Clock Time Signature" },
		{ "Comment", "// This Beat duration\n" },
		{ "ModuleRelativePath", "Classes/Sound/QuartzQuantizationUtilities.h" },
		{ "ToolTip", "This Beat duration" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration = { "PulseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuartzPulseOverrideStep, PulseDuration), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_NumberOfPulses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewProp_PulseDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QuartzPulseOverrideStep",
		sizeof(FQuartzPulseOverrideStep),
		alignof(FQuartzPulseOverrideStep),
		Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuartzPulseOverrideStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuartzPulseOverrideStep"), sizeof(FQuartzPulseOverrideStep), Get_Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Hash() { return 2175185288U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
