// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesia/Classes/OnsetNRT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetNRT() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UOnsetNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
// End Cross Module References
	void UOnsetNRTSettings::StaticRegisterNativesUOnsetNRTSettings()
	{
	}
	UClass* Z_Construct_UClass_UOnsetNRTSettings_NoRegister()
	{
		return UOnsetNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnsetNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[];
#endif
		static void NewProp_bDownmixToMono_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GranularityInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GranularityInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnsetNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRTSettings\n *\n * Settings for a UOnsetNRT analyzer.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRTSettings\n\nSettings for a UOnsetNRT analyzer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own onset result." },
	};
#endif
	void Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
	{
		((UOnsetNRTSettings*)Obj)->bDownmixToMono = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnsetNRTSettings), &Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Onset timestamp granularity onsets. Lower granularity takes longer to compute. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Onset timestamp granularity onsets. Lower granularity takes longer to compute." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds = { "GranularityInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnsetNRTSettings, GranularityInSeconds), METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sensitivity of onset detector. Higher sensitivity will find more onsets. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Sensitivity of onset detector. Higher sensitivity will find more onsets." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnsetNRTSettings, Sensitivity), METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnsetNRTSettings, MinimumFrequency), METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for onset anlaysis. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Starting frequency for onset anlaysis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnsetNRTSettings, MaximumFrequency), METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_GranularityInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_Sensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MinimumFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_MaximumFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnsetNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRTSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams = {
		&UOnsetNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnsetNRTSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnsetNRTSettings, 3952180506);
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRTSettings>()
	{
		return UOnsetNRTSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnsetNRTSettings(Z_Construct_UClass_UOnsetNRTSettings, &UOnsetNRTSettings::StaticClass, TEXT("/Script/AudioSynesthesia"), TEXT("UOnsetNRTSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRTSettings);
	DEFINE_FUNCTION(UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnsetNRT::execGetChannelOnsetsBetweenTimes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetTimestamps);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutOnsetStrengths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChannelOnsetsBetweenTimes(Z_Param_InStartSeconds,Z_Param_InEndSeconds,Z_Param_InChannel,Z_Param_Out_OutOnsetTimestamps,Z_Param_Out_OutOnsetStrengths);
		P_NATIVE_END;
	}
	void UOnsetNRT::StaticRegisterNativesUOnsetNRT()
	{
		UClass* Class = UOnsetNRT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannelOnsetsBetweenTimes", &UOnsetNRT::execGetChannelOnsetsBetweenTimes },
			{ "GetNormalizedChannelOnsetsBetweenTimes", &UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics
	{
		struct OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms
		{
			float InStartSeconds;
			float InEndSeconds;
			int32 InChannel;
			TArray<float> OutOnsetTimestamps;
			TArray<float> OutOnsetStrengths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Returns onsets which occured between start and end timestamps. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Returns onsets which occured between start and end timestamps." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetChannelOnsetsBetweenTimes", nullptr, nullptr, sizeof(OnsetNRT_eventGetChannelOnsetsBetweenTimes_Parms), Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics
	{
		struct OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms
		{
			float InStartSeconds;
			float InEndSeconds;
			int32 InChannel;
			TArray<float> OutOnsetTimestamps;
			TArray<float> OutOnsetStrengths;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEndSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InEndSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOnsetTimestamps_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutOnsetTimestamps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOnsetStrengths_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutOnsetStrengths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds = { "InStartSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InStartSeconds), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds = { "InEndSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InEndSeconds), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps = { "OutOnsetTimestamps", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths = { "OutOnsetStrengths", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms, OutOnsetStrengths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InStartSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InEndSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_InChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetTimestamps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::NewProp_OutOnsetStrengths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel cqt of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "Get a specific channel cqt of the analyzed sound at a given time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNRT, nullptr, "GetNormalizedChannelOnsetsBetweenTimes", nullptr, nullptr, sizeof(OnsetNRT_eventGetNormalizedChannelOnsetsBetweenTimes_Parms), Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnsetNRT_NoRegister()
	{
		return UOnsetNRT::StaticClass();
	}
	struct Z_Construct_UClass_UOnsetNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnsetNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnsetNRT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes, "GetChannelOnsetsBetweenTimes" }, // 376677768
		{ &Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, "GetNormalizedChannelOnsetsBetweenTimes" }, // 1638257690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UOnsetNRT\n *\n * UOnsetNRT calculates the temporal evolution of constant q transform for a given \n * sound. Onset is available for individual channels or the overall sound asset.\n */" },
		{ "IncludePath", "OnsetNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "UOnsetNRT\n\nUOnsetNRT calculates the temporal evolution of constant q transform for a given\nsound. Onset is available for individual channels or the overall sound asset." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/OnsetNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnsetNRT, Settings), Z_Construct_UClass_UOnsetNRTSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNRT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNRT_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnsetNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNRT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNRT_Statics::ClassParams = {
		&UOnsetNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnsetNRT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnsetNRT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnsetNRT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnsetNRT, 2967004395);
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UOnsetNRT>()
	{
		return UOnsetNRT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnsetNRT(Z_Construct_UClass_UOnsetNRT, &UOnsetNRT::StaticClass, TEXT("/Script/AudioSynesthesia"), TEXT("UOnsetNRT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNRT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
