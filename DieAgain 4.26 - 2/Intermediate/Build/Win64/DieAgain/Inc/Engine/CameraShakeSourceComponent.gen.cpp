// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraShakeSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeSourceComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ECameraShakeAttenuation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeAttenuation, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeAttenuation"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeAttenuation>()
	{
		return ECameraShakeAttenuation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraShakeAttenuation(ECameraShakeAttenuation_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraShakeAttenuation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Hash() { return 2591875575U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraShakeAttenuation"), 0, Get_Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraShakeAttenuation::Linear", (int64)ECameraShakeAttenuation::Linear },
				{ "ECameraShakeAttenuation::Quadratic", (int64)ECameraShakeAttenuation::Quadratic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Linear.Name", "ECameraShakeAttenuation::Linear" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
				{ "Quadratic.Name", "ECameraShakeAttenuation::Quadratic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraShakeAttenuation",
				"ECameraShakeAttenuation",
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
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execGetAttenuationFactor)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationFactor(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakes)
	{
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakes(Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakesOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_InCameraShake);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakesOfType(Z_Param_InCameraShake,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStartCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_InCameraShake);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCameraShake(Z_Param_InCameraShake,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UCameraShakeSourceComponent::StaticRegisterNativesUCameraShakeSourceComponent()
	{
		UClass* Class = UCameraShakeSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationFactor", &UCameraShakeSourceComponent::execGetAttenuationFactor },
			{ "Start", &UCameraShakeSourceComponent::execStart },
			{ "StartCameraShake", &UCameraShakeSourceComponent::execStartCameraShake },
			{ "StopAllCameraShakes", &UCameraShakeSourceComponent::execStopAllCameraShakes },
			{ "StopAllCameraShakesOfType", &UCameraShakeSourceComponent::execStopAllCameraShakesOfType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics
	{
		struct CameraShakeSourceComponent_eventGetAttenuationFactor_Parms
		{
			FVector Location;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Computes an attenuation factor from this source */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Computes an attenuation factor from this source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "GetAttenuationFactor", nullptr, nullptr, sizeof(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics
	{
		struct CameraShakeSourceComponent_eventStartCameraShake_Parms
		{
			TSubclassOf<UCameraShakeBase>  InCameraShake;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, InCameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Starts a new camera shake originating from this source, and apply it on all player controllers */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Starts a new camera shake originating from this source, and apply it on all player controllers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StartCameraShake", nullptr, nullptr, sizeof(CameraShakeSourceComponent_eventStartCameraShake_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics
	{
		struct CameraShakeSourceComponent_eventStopAllCameraShakes_Parms
		{
			bool bImmediately;
		};
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((CameraShakeSourceComponent_eventStopAllCameraShakes_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops all currently active camera shakes that are originating from this source from all player controllers */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops all currently active camera shakes that are originating from this source from all player controllers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakes", nullptr, nullptr, sizeof(CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics
	{
		struct CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms
		{
			TSubclassOf<UCameraShakeBase>  InCameraShake;
			bool bImmediately;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms, InCameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops a camera shake originating from this source */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops a camera shake originating from this source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakesOfType", nullptr, nullptr, sizeof(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister()
	{
		return UCameraShakeSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attenuation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSpriteTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditorSpriteTextureScale;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraShakeSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor, "GetAttenuationFactor" }, // 3457541908
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_Start, "Start" }, // 49289451
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake, "StartCameraShake" }, // 602543021
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes, "StopAllCameraShakes" }, // 3979699959
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType, "StopAllCameraShakesOfType" }, // 3943179316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraShakeSourceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation profile for how camera shakes' intensity falls off with distance */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "The attenuation profile for how camera shakes' intensity falls off with distance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, Attenuation), Z_Construct_UEnum_Engine_ECameraShakeAttenuation, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Under this distance from the source, the camera shakes are at full intensity */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Under this distance from the source, the camera shakes are at full intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius = { "InnerAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, InnerAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Outside of this distance from the source, the camera shakes don't apply at all */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Outside of this distance from the source, the camera shakes don't apply at all" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius = { "OuterAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, OuterAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UCameraShakeSourceComponent*)Obj)->bAutoStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraShakeSourceComponent), &Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData[] = {
		{ "Comment", "/** Sprite to display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite to display in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture = { "EditorSpriteTexture", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite scaling for display in the editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale = { "EditorSpriteTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTextureScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeSourceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams = {
		&UCameraShakeSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShakeSourceComponent, 1127259314);
	template<> ENGINE_API UClass* StaticClass<UCameraShakeSourceComponent>()
	{
		return UCameraShakeSourceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShakeSourceComponent(Z_Construct_UClass_UCameraShakeSourceComponent, &UCameraShakeSourceComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShakeSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
