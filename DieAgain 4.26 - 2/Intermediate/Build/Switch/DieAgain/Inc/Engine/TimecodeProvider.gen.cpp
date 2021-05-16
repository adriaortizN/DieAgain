// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeProvider() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	static UEnum* ETimecodeProviderSynchronizationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, Z_Construct_UPackage__Script_Engine(), TEXT("ETimecodeProviderSynchronizationState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>()
	{
		return ETimecodeProviderSynchronizationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimecodeProviderSynchronizationState(ETimecodeProviderSynchronizationState_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimecodeProviderSynchronizationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Hash() { return 2316817895U; }
	UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimecodeProviderSynchronizationState"), 0, Get_Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimecodeProviderSynchronizationState::Closed", (int64)ETimecodeProviderSynchronizationState::Closed },
				{ "ETimecodeProviderSynchronizationState::Error", (int64)ETimecodeProviderSynchronizationState::Error },
				{ "ETimecodeProviderSynchronizationState::Synchronized", (int64)ETimecodeProviderSynchronizationState::Synchronized },
				{ "ETimecodeProviderSynchronizationState::Synchronizing", (int64)ETimecodeProviderSynchronizationState::Synchronizing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closed.Comment", "/** TimecodeProvider has not been initialized or has been shutdown. */" },
				{ "Closed.Name", "ETimecodeProviderSynchronizationState::Closed" },
				{ "Closed.ToolTip", "TimecodeProvider has not been initialized or has been shutdown." },
				{ "Comment", "/**\n * Possible states of TimecodeProvider.\n */" },
				{ "Error.Comment", "/** Unrecoverable error occurred during Synchronization. */" },
				{ "Error.Name", "ETimecodeProviderSynchronizationState::Error" },
				{ "Error.ToolTip", "Unrecoverable error occurred during Synchronization." },
				{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
				{ "Synchronized.Comment", "/** TimecodeProvider is currently synchronized with the source. */" },
				{ "Synchronized.Name", "ETimecodeProviderSynchronizationState::Synchronized" },
				{ "Synchronized.ToolTip", "TimecodeProvider is currently synchronized with the source." },
				{ "Synchronizing.Comment", "/** TimecodeProvider is initialized and being prepared for synchronization. */" },
				{ "Synchronizing.Name", "ETimecodeProviderSynchronizationState::Synchronizing" },
				{ "Synchronizing.ToolTip", "TimecodeProvider is initialized and being prepared for synchronization." },
				{ "ToolTip", "Possible states of TimecodeProvider." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETimecodeProviderSynchronizationState",
				"ETimecodeProviderSynchronizationState",
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
	DEFINE_FUNCTION(UTimecodeProvider::execGetSynchronizationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimecodeProviderSynchronizationState*)Z_Param__Result=P_THIS->GetSynchronizationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetDelayedTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedQualifiedFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDelayedQualifiedFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetQualifiedFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetQualifiedFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execFetchAndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchAndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execFetchTimecode)
	{
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_OutFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchTimecode(Z_Param_Out_OutFrameTime);
		P_NATIVE_END;
	}
	void UTimecodeProvider::StaticRegisterNativesUTimecodeProvider()
	{
		UClass* Class = UTimecodeProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchAndUpdate", &UTimecodeProvider::execFetchAndUpdate },
			{ "FetchTimecode", &UTimecodeProvider::execFetchTimecode },
			{ "GetDelayedQualifiedFrameTime", &UTimecodeProvider::execGetDelayedQualifiedFrameTime },
			{ "GetDelayedTimecode", &UTimecodeProvider::execGetDelayedTimecode },
			{ "GetFrameRate", &UTimecodeProvider::execGetFrameRate },
			{ "GetQualifiedFrameTime", &UTimecodeProvider::execGetQualifiedFrameTime },
			{ "GetSynchronizationState", &UTimecodeProvider::execGetSynchronizationState },
			{ "GetTimecode", &UTimecodeProvider::execGetTimecode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Update the state of the provider. Call it to ensure timecode and state are updated.\n\x09 * It is suggested to fetch timecode from its source and cache it for the getters.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Update the state of the provider. Call it to ensure timecode and state are updated.\nIt is suggested to fetch timecode from its source and cache it for the getters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchAndUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventFetchTimecode_Parms
		{
			FQualifiedFrameTime OutFrameTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFrameTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime = { "OutFrameTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventFetchTimecode_Parms, OutFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimecodeProvider_eventFetchTimecode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimecodeProvider_eventFetchTimecode_Parms), &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Fetch current timecode from its source. e.g. From hardware/network/file/etc.\n\x09 * It is recommended to cache the fetched timecode.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Fetch current timecode from its source. e.g. From hardware/network/file/etc.\nIt is recommended to cache the fetched timecode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchTimecode", nullptr, nullptr, sizeof(TimecodeProvider_eventFetchTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time with FrameDelay applied.\n\x09 * Only assume valid when GetSynchronizationState() returns Synchronized.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time with FrameDelay applied.\nOnly assume valid when GetSynchronizationState() returns Synchronized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedQualifiedFrameTime", nullptr, nullptr, sizeof(TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms), Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimecodeProvider_eventGetDelayedTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the delayed frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the delayed frame time converted into a timecode value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedTimecode", nullptr, nullptr, sizeof(TimecodeProvider_eventGetDelayedTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimecodeProvider_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame rate of the frame time. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame rate of the frame time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(TimecodeProvider_eventGetFrameRate_Parms), Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventGetQualifiedFrameTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time. \n\x09 * Since it may be called several times per frame, it is suggested to return a cached value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time.\nSince it may be called several times per frame, it is suggested to return a cached value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetQualifiedFrameTime", nullptr, nullptr, sizeof(TimecodeProvider_eventGetQualifiedFrameTime_Parms), Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics
	{
		struct TimecodeProvider_eventGetSynchronizationState_Parms
		{
			ETimecodeProviderSynchronizationState ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetSynchronizationState_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetSynchronizationState", nullptr, nullptr, sizeof(TimecodeProvider_eventGetSynchronizationState_Parms), Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimecodeProvider_eventGetTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimecodeProvider_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame time converted into a timecode value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetTimecode", nullptr, nullptr, sizeof(TimecodeProvider_eventGetTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister()
	{
		return UTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimecodeProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate, "FetchAndUpdate" }, // 713659563
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode, "FetchTimecode" }, // 1664359069
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime, "GetDelayedQualifiedFrameTime" }, // 3378147345
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode, "GetDelayedTimecode" }, // 1087429487
		{ &Z_Construct_UFunction_UTimecodeProvider_GetFrameRate, "GetFrameRate" }, // 2671599062
		{ &Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime, "GetQualifiedFrameTime" }, // 546872108
		{ &Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState, "GetSynchronizationState" }, // 2660557953
		{ &Z_Construct_UFunction_UTimecodeProvider_GetTimecode, "GetTimecode" }, // 1416380499
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class responsible of fetching a timecode from a source.\n * Note, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\n * the current system Timecode and Framerate.\n */" },
		{ "IncludePath", "Engine/TimecodeProvider.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "A class responsible of fetching a timecode from a source.\nNote, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\nthe current system Timecode and Framerate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n\x09 * @see GetDelayedQualifiedFrameTime, GetDelayedTimecode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n@see GetDelayedQualifiedFrameTime, GetDelayedTimecode" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimecodeProvider, FrameDelay), METADATA_PARAMS(Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams = {
		&UTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimecodeProvider, 834079377);
	template<> ENGINE_API UClass* StaticClass<UTimecodeProvider>()
	{
		return UTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimecodeProvider(Z_Construct_UClass_UTimecodeProvider, &UTimecodeProvider::StaticClass, TEXT("/Script/Engine"), TEXT("UTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
