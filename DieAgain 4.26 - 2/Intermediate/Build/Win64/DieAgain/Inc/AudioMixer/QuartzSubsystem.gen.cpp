// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Public/Quartz/QuartzSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuartzSubsystem() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMaxLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripMaxLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMinLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripMinLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripAverageLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripAverageLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMaxLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMinLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadAverageLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMaxLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMinLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadAverageLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execDoesClockExist)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesClockExist(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetHandleForClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuartzClockHandle**)Z_Param__Result=P_THIS->GetHandleForClock(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execCreateNewClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_GET_STRUCT(FQuartzClockSettings,Z_Param_InSettings);
		P_GET_UBOOL(Z_Param_bOverrideSettingsIfClockExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuartzClockHandle**)Z_Param__Result=P_THIS->CreateNewClock(Z_Param_WorldContextObject,Z_Param_ClockName,Z_Param_InSettings,Z_Param_bOverrideSettingsIfClockExists);
		P_NATIVE_END;
	}
	void UQuartzSubsystem::StaticRegisterNativesUQuartzSubsystem()
	{
		UClass* Class = UQuartzSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewClock", &UQuartzSubsystem::execCreateNewClock },
			{ "DoesClockExist", &UQuartzSubsystem::execDoesClockExist },
			{ "GetAudioRenderThreadToGameThreadAverageLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency },
			{ "GetAudioRenderThreadToGameThreadMaxLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency },
			{ "GetAudioRenderThreadToGameThreadMinLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency },
			{ "GetGameThreadToAudioRenderThreadAverageLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency },
			{ "GetGameThreadToAudioRenderThreadMaxLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency },
			{ "GetGameThreadToAudioRenderThreadMinLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency },
			{ "GetHandleForClock", &UQuartzSubsystem::execGetHandleForClock },
			{ "GetRoundTripAverageLatency", &UQuartzSubsystem::execGetRoundTripAverageLatency },
			{ "GetRoundTripMaxLatency", &UQuartzSubsystem::execGetRoundTripMaxLatency },
			{ "GetRoundTripMinLatency", &UQuartzSubsystem::execGetRoundTripMinLatency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics
	{
		struct QuartzSubsystem_eventCreateNewClock_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			FQuartzClockSettings InSettings;
			bool bOverrideSettingsIfClockExists;
			UQuartzClockHandle* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSettingsIfClockExists;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, InSettings), Z_Construct_UScriptStruct_FQuartzClockSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventCreateNewClock_Parms*)Obj)->bOverrideSettingsIfClockExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists = { "bOverrideSettingsIfClockExists", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventCreateNewClock_Parms), &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Clock Creation\n// create a new clock (or return handle if clock already exists)\n" },
		{ "CPP_Default_bOverrideSettingsIfClockExists", "false" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Clock Creation\ncreate a new clock (or return handle if clock already exists)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "CreateNewClock", nullptr, nullptr, sizeof(QuartzSubsystem_eventCreateNewClock_Parms), Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics
	{
		struct QuartzSubsystem_eventDoesClockExist_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventDoesClockExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventDoesClockExist_Parms), &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// returns true if the clock exists\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "returns true if the clock exists" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DoesClockExist", nullptr, nullptr, sizeof(QuartzSubsystem_eventDoesClockExist_Parms), Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Audio Render Thread -> Game thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Audio Render Thread -> Game thread)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Game thread -> Audio Render Thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Game thread -> Audio Render Thread)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics
	{
		struct QuartzSubsystem_eventGetHandleForClock_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			UQuartzClockHandle* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// get handle for existing clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "get handle for existing clock" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetHandleForClock", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetHandleForClock_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripAverageLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Round trip)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Round trip)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripMaxLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripMinLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister()
	{
		return UQuartzSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UQuartzSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuartzSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuartzSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock, "CreateNewClock" }, // 2184406967
		{ &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist, "DoesClockExist" }, // 2010633990
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency, "GetAudioRenderThreadToGameThreadAverageLatency" }, // 3123283490
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency, "GetAudioRenderThreadToGameThreadMaxLatency" }, // 3522361653
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency, "GetAudioRenderThreadToGameThreadMinLatency" }, // 1926538246
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency, "GetGameThreadToAudioRenderThreadAverageLatency" }, // 3558138033
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency, "GetGameThreadToAudioRenderThreadMaxLatency" }, // 1265307339
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency, "GetGameThreadToAudioRenderThreadMinLatency" }, // 136629239
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock, "GetHandleForClock" }, // 35816757
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency, "GetRoundTripAverageLatency" }, // 414716971
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency, "GetRoundTripMaxLatency" }, // 2620479750
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency, "GetRoundTripMinLatency" }, // 2756536461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Quartz" },
		{ "IncludePath", "Quartz/QuartzSubsystem.h" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuartzSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuartzSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams = {
		&UQuartzSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuartzSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuartzSubsystem, 170029429);
	template<> AUDIOMIXER_API UClass* StaticClass<UQuartzSubsystem>()
	{
		return UQuartzSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuartzSubsystem(Z_Construct_UClass_UQuartzSubsystem, &UQuartzSubsystem::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UQuartzSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuartzSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
