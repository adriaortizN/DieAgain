// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARDependencyHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARDependencyHandler() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceAvailability();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
// End Cross Module References
	static UEnum* EARServicePermissionRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServicePermissionRequestResult"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServicePermissionRequestResult>()
	{
		return EARServicePermissionRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARServicePermissionRequestResult(EARServicePermissionRequestResult_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARServicePermissionRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Hash() { return 786802214U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARServicePermissionRequestResult"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARServicePermissionRequestResult::Granted", (int64)EARServicePermissionRequestResult::Granted },
				{ "EARServicePermissionRequestResult::Denied", (int64)EARServicePermissionRequestResult::Denied },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Denied.Comment", "/** The permission is denied by the user */" },
				{ "Denied.Name", "EARServicePermissionRequestResult::Denied" },
				{ "Denied.ToolTip", "The permission is denied by the user" },
				{ "Granted.Comment", "/** The permission is granted by the user */" },
				{ "Granted.Name", "EARServicePermissionRequestResult::Granted" },
				{ "Granted.ToolTip", "The permission is granted by the user" },
				{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARServicePermissionRequestResult",
				"EARServicePermissionRequestResult",
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
	static UEnum* EARServiceInstallRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServiceInstallRequestResult"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceInstallRequestResult>()
	{
		return EARServiceInstallRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARServiceInstallRequestResult(EARServiceInstallRequestResult_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARServiceInstallRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Hash() { return 2326465219U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARServiceInstallRequestResult"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARServiceInstallRequestResult::Installed", (int64)EARServiceInstallRequestResult::Installed },
				{ "EARServiceInstallRequestResult::DeviceNotCompatible", (int64)EARServiceInstallRequestResult::DeviceNotCompatible },
				{ "EARServiceInstallRequestResult::UserDeclinedInstallation", (int64)EARServiceInstallRequestResult::UserDeclinedInstallation },
				{ "EARServiceInstallRequestResult::FatalError", (int64)EARServiceInstallRequestResult::FatalError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DeviceNotCompatible.Comment", "/** The device is not capable of running the AR service */" },
				{ "DeviceNotCompatible.Name", "EARServiceInstallRequestResult::DeviceNotCompatible" },
				{ "DeviceNotCompatible.ToolTip", "The device is not capable of running the AR service" },
				{ "FatalError.Comment", "/** Other error while installing the AR service */" },
				{ "FatalError.Name", "EARServiceInstallRequestResult::FatalError" },
				{ "FatalError.ToolTip", "Other error while installing the AR service" },
				{ "Installed.Comment", "/** AR service is installed */" },
				{ "Installed.Name", "EARServiceInstallRequestResult::Installed" },
				{ "Installed.ToolTip", "AR service is installed" },
				{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
				{ "UserDeclinedInstallation.Comment", "/** The user declined the request to install the AR service */" },
				{ "UserDeclinedInstallation.Name", "EARServiceInstallRequestResult::UserDeclinedInstallation" },
				{ "UserDeclinedInstallation.ToolTip", "The user declined the request to install the AR service" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARServiceInstallRequestResult",
				"EARServiceInstallRequestResult",
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
	static UEnum* EARServiceAvailability_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServiceAvailability"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceAvailability>()
	{
		return EARServiceAvailability_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARServiceAvailability(EARServiceAvailability_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARServiceAvailability"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Hash() { return 3807950849U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceAvailability()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARServiceAvailability"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARServiceAvailability::UnknownError", (int64)EARServiceAvailability::UnknownError },
				{ "EARServiceAvailability::UnknownChecking", (int64)EARServiceAvailability::UnknownChecking },
				{ "EARServiceAvailability::UnknownTimedOut", (int64)EARServiceAvailability::UnknownTimedOut },
				{ "EARServiceAvailability::UnsupportedDeviceNotCapable", (int64)EARServiceAvailability::UnsupportedDeviceNotCapable },
				{ "EARServiceAvailability::SupportedNotInstalled", (int64)EARServiceAvailability::SupportedNotInstalled },
				{ "EARServiceAvailability::SupportedVersionTooOld", (int64)EARServiceAvailability::SupportedVersionTooOld },
				{ "EARServiceAvailability::SupportedInstalled", (int64)EARServiceAvailability::SupportedInstalled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
				{ "SupportedInstalled.Comment", "/** AR service is supported and installed */" },
				{ "SupportedInstalled.Name", "EARServiceAvailability::SupportedInstalled" },
				{ "SupportedInstalled.ToolTip", "AR service is supported and installed" },
				{ "SupportedNotInstalled.Comment", "/** AR service is not installed */" },
				{ "SupportedNotInstalled.Name", "EARServiceAvailability::SupportedNotInstalled" },
				{ "SupportedNotInstalled.ToolTip", "AR service is not installed" },
				{ "SupportedVersionTooOld.Comment", "/** AR service is installed but the version is too old */" },
				{ "SupportedVersionTooOld.Name", "EARServiceAvailability::SupportedVersionTooOld" },
				{ "SupportedVersionTooOld.ToolTip", "AR service is installed but the version is too old" },
				{ "UnknownChecking.Comment", "/** Availability is being checked */" },
				{ "UnknownChecking.Name", "EARServiceAvailability::UnknownChecking" },
				{ "UnknownChecking.ToolTip", "Availability is being checked" },
				{ "UnknownError.Comment", "/** Availability is unknown due to an error during checking */" },
				{ "UnknownError.Name", "EARServiceAvailability::UnknownError" },
				{ "UnknownError.ToolTip", "Availability is unknown due to an error during checking" },
				{ "UnknownTimedOut.Comment", "/** Availability is unknown due to timeout during checking */" },
				{ "UnknownTimedOut.Name", "EARServiceAvailability::UnknownTimedOut" },
				{ "UnknownTimedOut.ToolTip", "Availability is unknown due to timeout during checking" },
				{ "UnsupportedDeviceNotCapable.Comment", "/** The device is not capable of running the AR service */" },
				{ "UnsupportedDeviceNotCapable.Name", "EARServiceAvailability::UnsupportedDeviceNotCapable" },
				{ "UnsupportedDeviceNotCapable.ToolTip", "The device is not capable of running the AR service" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARServiceAvailability",
				"EARServiceAvailability",
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
	DEFINE_FUNCTION(UARDependencyHandler::execStartARSessionLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartARSessionLatent(Z_Param_WorldContextObject,Z_Param_SessionConfig,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execRequestARSessionPermission)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServicePermissionRequestResult,Z_Param_Out_OutPermissionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestARSessionPermission(Z_Param_WorldContextObject,Z_Param_SessionConfig,Z_Param_LatentInfo,(EARServicePermissionRequestResult&)(Z_Param_Out_OutPermissionResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execInstallARService)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServiceInstallRequestResult,Z_Param_Out_OutInstallResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstallARService(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EARServiceInstallRequestResult&)(Z_Param_Out_OutInstallResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execCheckARServiceAvailability)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServiceAvailability,Z_Param_Out_OutAvailability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckARServiceAvailability(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EARServiceAvailability&)(Z_Param_Out_OutAvailability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execGetARDependencyHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARDependencyHandler**)Z_Param__Result=UARDependencyHandler::GetARDependencyHandler();
		P_NATIVE_END;
	}
	void UARDependencyHandler::StaticRegisterNativesUARDependencyHandler()
	{
		UClass* Class = UARDependencyHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckARServiceAvailability", &UARDependencyHandler::execCheckARServiceAvailability },
			{ "GetARDependencyHandler", &UARDependencyHandler::execGetARDependencyHandler },
			{ "InstallARService", &UARDependencyHandler::execInstallARService },
			{ "RequestARSessionPermission", &UARDependencyHandler::execRequestARSessionPermission },
			{ "StartARSessionLatent", &UARDependencyHandler::execStartARSessionLatent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics
	{
		struct ARDependencyHandler_eventCheckARServiceAvailability_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EARServiceAvailability OutAvailability;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutAvailability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutAvailability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability = { "OutAvailability", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, OutAvailability), Z_Construct_UEnum_AugmentedReality_EARServiceAvailability, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to check AR availability on the current platform. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to check AR availability on the current platform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "CheckARServiceAvailability", nullptr, nullptr, sizeof(ARDependencyHandler_eventCheckARServiceAvailability_Parms), Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics
	{
		struct ARDependencyHandler_eventGetARDependencyHandler_Parms
		{
			UARDependencyHandler* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventGetARDependencyHandler_Parms, ReturnValue), Z_Construct_UClass_UARDependencyHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/**\n\x09 * @return the dependency handler for the current platform.\n\x09 * Can return null if the current platform doesn't support AR, or the AR system doesn't require dependency handling.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "@return the dependency handler for the current platform.\nCan return null if the current platform doesn't support AR, or the AR system doesn't require dependency handling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "GetARDependencyHandler", nullptr, nullptr, sizeof(ARDependencyHandler_eventGetARDependencyHandler_Parms), Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics
	{
		struct ARDependencyHandler_eventInstallARService_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EARServiceInstallRequestResult OutInstallResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutInstallResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutInstallResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult = { "OutInstallResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, OutInstallResult), Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to install AR service on the current platform. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to install AR service on the current platform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "InstallARService", nullptr, nullptr, sizeof(ARDependencyHandler_eventInstallARService_Parms), Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_InstallARService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics
	{
		struct ARDependencyHandler_eventRequestARSessionPermission_Parms
		{
			UObject* WorldContextObject;
			UARSessionConfig* SessionConfig;
			FLatentActionInfo LatentInfo;
			EARServicePermissionRequestResult OutPermissionResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutPermissionResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutPermissionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult = { "OutPermissionResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, OutPermissionResult), Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_SessionConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to request permission to run the supplied session configuration. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to request permission to run the supplied session configuration." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "RequestARSessionPermission", nullptr, nullptr, sizeof(ARDependencyHandler_eventRequestARSessionPermission_Parms), Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics
	{
		struct ARDependencyHandler_eventStartARSessionLatent_Parms
		{
			UObject* WorldContextObject;
			UARSessionConfig* SessionConfig;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_SessionConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/**\n\x09 * Latent action to start AR session.\n\x09 * Will make sure dependency and permission issues are resolved internally, only returns the AR session starts successfully.\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to start AR session.\nWill make sure dependency and permission issues are resolved internally, only returns the AR session starts successfully." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "StartARSessionLatent", nullptr, nullptr, sizeof(ARDependencyHandler_eventStartARSessionLatent_Parms), Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARDependencyHandler_NoRegister()
	{
		return UARDependencyHandler::StaticClass();
	}
	struct Z_Construct_UClass_UARDependencyHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARDependencyHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARDependencyHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability, "CheckARServiceAvailability" }, // 283410906
		{ &Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler, "GetARDependencyHandler" }, // 3083540152
		{ &Z_Construct_UFunction_UARDependencyHandler_InstallARService, "InstallARService" }, // 4262715382
		{ &Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission, "RequestARSessionPermission" }, // 3701753705
		{ &Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent, "StartARSessionLatent" }, // 3347445881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "" },
		{ "Comment", "/**\n * Helper class that allows the user to explicitly request AR service installation and permission granting.\n * Recommended flow for explicit management:\n * 1. Call \"GetARDependencyHandler\" to get a handler, if valid:\n * 2. Call \"CheckARServiceAvailability\" to check availability, if the device is supported:\n * 3. Call \"InstallARService\" to install AR service dependency, if installed:\n * 4. Call \"RequestARSessionPermission\" to request permission, if granted:\n * 5. Call \"UARBlueprintLibrary::StartARSession\" to start the session.\n * Alternatively, you can also call \"StartARSessionLatent\" which handles dependency and permission internally.\n */" },
		{ "IncludePath", "ARDependencyHandler.h" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Helper class that allows the user to explicitly request AR service installation and permission granting.\nRecommended flow for explicit management:\n1. Call \"GetARDependencyHandler\" to get a handler, if valid:\n2. Call \"CheckARServiceAvailability\" to check availability, if the device is supported:\n3. Call \"InstallARService\" to install AR service dependency, if installed:\n4. Call \"RequestARSessionPermission\" to request permission, if granted:\n5. Call \"UARBlueprintLibrary::StartARSession\" to start the session.\nAlternatively, you can also call \"StartARSessionLatent\" which handles dependency and permission internally." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARDependencyHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARDependencyHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARDependencyHandler_Statics::ClassParams = {
		&UARDependencyHandler::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARDependencyHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARDependencyHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARDependencyHandler, 1455904124);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARDependencyHandler>()
	{
		return UARDependencyHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARDependencyHandler(Z_Construct_UClass_UARDependencyHandler, &UARDependencyHandler::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARDependencyHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARDependencyHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
