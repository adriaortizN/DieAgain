// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/MagicLeapARPinComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinComponent() {}
// Cross Module References
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinComponent();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPARPIN_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapARPinState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MAGICLEAPARPIN_API UEnum* Z_Construct_UEnum_MagicLeapARPin_EMagicLeapAutoPinType();
	MAGICLEAPARPIN_API UEnum* Z_Construct_UEnum_MagicLeapARPin_EMagicLeapARPinType();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics
	{
		struct MagicLeapARPinComponent_eventMagicLeapARPinDataLoadAttemptCompleted_Parms
		{
			bool bDataRestored;
		};
		static void NewProp_bDataRestored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDataRestored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::NewProp_bDataRestored_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventMagicLeapARPinDataLoadAttemptCompleted_Parms*)Obj)->bDataRestored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::NewProp_bDataRestored = { "bDataRestored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventMagicLeapARPinDataLoadAttemptCompleted_Parms), &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::NewProp_bDataRestored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::NewProp_bDataRestored,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Delegate used to notify that the pin data associated with this component's ObjectUID has been successfully loaded or not.\n\x09 * @param bDataRestored True if the pin data was loaded, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Delegate used to notify that the pin data associated with this component's ObjectUID has been successfully loaded or not.\n@param bDataRestored True if the pin data was loaded, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventMagicLeapARPinDataLoadAttemptCompleted_Parms), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Delegate used to notify the instigating blueprint that an entity (component or actor) has lost a previously obtained pin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Delegate used to notify the instigating blueprint that an entity (component or actor) has lost a previously obtained pin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PersistentEntityPinLost__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics
	{
		struct MagicLeapARPinComponent_eventPersistentEntityPinned_Parms
		{
			bool bRestoredOrSynced;
		};
		static void NewProp_bRestoredOrSynced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoredOrSynced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPersistentEntityPinned_Parms*)Obj)->bRestoredOrSynced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced = { "bRestoredOrSynced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPersistentEntityPinned_Parms), &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Delegate used to notify the instigating blueprint that an entity (component or actor) has been successfully pinned to the real-world.\n\x09 * Indicates that the transform of the pinned entity is now locked. App needs to call UnPin() if it wants to move the entity again.\n\x09 * @param bRestoredOrSynced True if the entity was pinned as a result of Pin data being restored from local storage or replicatred over network, false if pinned by an explicit PinSceneComponent() or PinActor() call from the app.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Delegate used to notify the instigating blueprint that an entity (component or actor) has been successfully pinned to the real-world.\nIndicates that the transform of the pinned entity is now locked. App needs to call UnPin() if it wants to move the entity again.\n@param bRestoredOrSynced True if the entity was pinned as a result of Pin data being restored from local storage or replicatred over network, false if pinned by an explicit PinSceneComponent() or PinActor() call from the app." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PersistentEntityPinned__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPersistentEntityPinned_Parms), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execAttemptPinDataRestorationAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttemptPinDataRestorationAsync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execAttemptPinDataRestoration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttemptPinDataRestoration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinState)
	{
		P_GET_STRUCT_REF(FMagicLeapARPinState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPinState(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execTryGetPinData)
	{
		P_GET_OBJECT(UClass,Z_Param_InPinDataClass);
		P_GET_UBOOL_REF(Z_Param_Out_OutPinDataValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMagicLeapARPinSaveGame**)Z_Param__Result=P_THIS->TryGetPinData(Z_Param_InPinDataClass,Z_Param_Out_OutPinDataValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinData)
	{
		P_GET_OBJECT(UClass,Z_Param_PinDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMagicLeapARPinSaveGame**)Z_Param__Result=P_THIS->GetPinData(Z_Param_PinDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinnedPinID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPinnedPinID(Z_Param_Out_PinID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinRestoredOrSynced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinRestoredOrSynced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execIsPinned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPinned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execUnPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinActor(Z_Param_ActorToPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinSceneComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinSceneComponent(Z_Param_ComponentToPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinToRestoredOrSyncedID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinToRestoredOrSyncedID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinToBestFit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PinToBestFit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinToID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinToID(Z_Param_Out_PinID);
		P_NATIVE_END;
	}
	void UMagicLeapARPinComponent::StaticRegisterNativesUMagicLeapARPinComponent()
	{
		UClass* Class = UMagicLeapARPinComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttemptPinDataRestoration", &UMagicLeapARPinComponent::execAttemptPinDataRestoration },
			{ "AttemptPinDataRestorationAsync", &UMagicLeapARPinComponent::execAttemptPinDataRestorationAsync },
			{ "GetPinData", &UMagicLeapARPinComponent::execGetPinData },
			{ "GetPinnedPinID", &UMagicLeapARPinComponent::execGetPinnedPinID },
			{ "GetPinState", &UMagicLeapARPinComponent::execGetPinState },
			{ "IsPinned", &UMagicLeapARPinComponent::execIsPinned },
			{ "PinActor", &UMagicLeapARPinComponent::execPinActor },
			{ "PinRestoredOrSynced", &UMagicLeapARPinComponent::execPinRestoredOrSynced },
			{ "PinSceneComponent", &UMagicLeapARPinComponent::execPinSceneComponent },
			{ "PinToBestFit", &UMagicLeapARPinComponent::execPinToBestFit },
			{ "PinToID", &UMagicLeapARPinComponent::execPinToID },
			{ "PinToRestoredOrSyncedID", &UMagicLeapARPinComponent::execPinToRestoredOrSyncedID },
			{ "TryGetPinData", &UMagicLeapARPinComponent::execTryGetPinData },
			{ "UnPin", &UMagicLeapARPinComponent::execUnPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics
	{
		struct MagicLeapARPinComponent_eventAttemptPinDataRestoration_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventAttemptPinDataRestoration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventAttemptPinDataRestoration_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* If BeginPlay() is called before app sets ObjectUID (can happen when\n\x09* component is spawned at runtime or actor that includes this component\n\x09* is spawned at runtime), this function can be called to attempt a fresh\n\x09* restoration.\n\x09* @return true of pin data was retored, false otherwise\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated and will be removed in 0.24.2 release. Use AttemptPinDataRestorationAsync instead." },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "If BeginPlay() is called before app sets ObjectUID (can happen when\ncomponent is spawned at runtime or actor that includes this component\nis spawned at runtime), this function can be called to attempt a fresh\nrestoration.\n@return true of pin data was retored, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "AttemptPinDataRestoration", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventAttemptPinDataRestoration_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* If BeginPlay() is called before app sets ObjectUID (can happen when\n\x09* component is spawned at runtime or actor that includes this component\n\x09* is spawned at runtime), this function can be called to attempt a fresh\n\x09* restoration. It loads the pin data from disk asynchronously. \n\x09* The OnPinDataLoadAttemptCompleted event is called to indicate whether \n\x09* the data was succesfully loaded or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "If BeginPlay() is called before app sets ObjectUID (can happen when\ncomponent is spawned at runtime or actor that includes this component\nis spawned at runtime), this function can be called to attempt a fresh\nrestoration. It loads the pin data from disk asynchronously.\nThe OnPinDataLoadAttemptCompleted event is called to indicate whether\nthe data was succesfully loaded or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "AttemptPinDataRestorationAsync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinData_Parms
		{
			TSubclassOf<UMagicLeapARPinSaveGame>  PinDataClass;
			UMagicLeapARPinSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PinDataClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_PinDataClass = { "PinDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinData_Parms, PinDataClass), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinData_Parms, ReturnValue), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_PinDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Retrieves the data associated with this pin. Make sure to call this only after setting a proper ObjectID value.\n\x09 * @param PinDataClass The user defined save game class used by this pin.  Note that this must match the PinDataClass property.\n\x09 * @return The save game instance associated with this pin instance.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated and will be removed in 0.24.2 release. Use TryGetPinData() instead." },
		{ "DeterminesOutputType", "PinDataClass" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Retrieves the data associated with this pin. Make sure to call this only after setting a proper ObjectID value.\n@param PinDataClass The user defined save game class used by this pin.  Note that this must match the PinDataClass property.\n@return The save game instance associated with this pin instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinData", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinData_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinnedPinID_Parms
		{
			FGuid PinID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinnedPinID_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventGetPinnedPinID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventGetPinnedPinID_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_PinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Get the ID of the Pin the entity (component or actor) is currently pinned to.\n\x09 * @param PinID Output param for the ID of the Pin.\n\x09 * @return True if an entity is currently pinned by this component and the output param is successfully populated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Get the ID of the Pin the entity (component or actor) is currently pinned to.\n@param PinID Output param for the ID of the Pin.\n@return True if an entity is currently pinned by this component and the output param is successfully populated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinnedPinID", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinnedPinID_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinState_Parms
		{
			FMagicLeapARPinState State;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinState_Parms, State), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventGetPinState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventGetPinState_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the state of this Pin.\n\x09* @param State Output state of the Pin. Valid only if return value is true.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Returns the state of this Pin.\n@param State Output state of the Pin. Valid only if return value is true.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinState", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinState_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics
	{
		struct MagicLeapARPinComponent_eventIsPinned_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventIsPinned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventIsPinned_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * True if an entity (component or actor) is currently pinned by this component.\n\x09 * If true, the entity's transform will be locked. App needs to call UnPin() if it wants to move it again.\n\x09 * If false, and you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay().\n\x09 * @return True if an entity (component or actor) is currently pinned by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "True if an entity (component or actor) is currently pinned by this component.\nIf true, the entity's transform will be locked. App needs to call UnPin() if it wants to move it again.\nIf false, and you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay().\n@return True if an entity (component or actor) is currently pinned by this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "IsPinned", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventIsPinned_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics
	{
		struct MagicLeapARPinComponent_eventPinActor_Parms
		{
			AActor* ActorToPin;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ActorToPin = { "ActorToPin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventPinActor_Parms, ActorToPin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinActor_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ActorToPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Deprecated and can no longer be used to pin any actor other than the owner of this component.\n\x09 * Set bShouldPinActor to true and call PinToBestFit(), PinToID() or PinToRestoredOrSyncedID() instead.\n\x09 * If this component's owner is passed to this function, PinToBestFit() is called internally.\n\x09 * @param ActorToPin Only accepts the owner of this component\n\x09 * @return true if the Actor was accepted to be pinned, false otherwise.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Will be removed in MLSDK 0.25.0. Set bShouldPinActor to true and call PinToBestFit(), PinToID() or PinToRestoredOrSyncedID()." },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Deprecated and can no longer be used to pin any actor other than the owner of this component.\nSet bShouldPinActor to true and call PinToBestFit(), PinToID() or PinToRestoredOrSyncedID() instead.\nIf this component's owner is passed to this function, PinToBestFit() is called internally.\n@param ActorToPin Only accepts the owner of this component\n@return true if the Actor was accepted to be pinned, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinActor", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinActor_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics
	{
		struct MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * True if the AR Pin for the unique ID ObjectUID was restored from the app's local storage or was repliated over network.\n\x09 * Implies if content was already pinned earlier. Does not imply if that restored Pin is available in the current environment.\n\x09 * @return True if the Pin data was restored from local storage or network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "True if the AR Pin for the unique ID ObjectUID was restored from the app's local storage or was repliated over network.\nImplies if content was already pinned earlier. Does not imply if that restored Pin is available in the current environment.\n@return True if the Pin data was restored from local storage or network." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinRestoredOrSynced", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics
	{
		struct MagicLeapARPinComponent_eventPinSceneComponent_Parms
		{
			USceneComponent* ComponentToPin;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventPinSceneComponent_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData)) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinSceneComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinSceneComponent_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Deprecated and can no longer be used to pin any scene component other than itself. Use PinToBestFit(), PinToID() or PinToRestoredOrSyncedID() instead.\n\x09 * If a reference to itself passed to this function, PinToBestFit() is called internally.\n\x09 * @param ComponentToPin Only accepts 'this' / 'self'\n\x09 * @return true if the component was accepted to be pinned, false otherwise.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Will be removed in MLSDK 0.25.0. Can pin only itself (will pin its children with it). Use PinToBestFit(), PinToID() or PinToRestoredOrSyncedID()." },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Deprecated and can no longer be used to pin any scene component other than itself. Use PinToBestFit(), PinToID() or PinToRestoredOrSyncedID() instead.\nIf a reference to itself passed to this function, PinToBestFit() is called internally.\n@param ComponentToPin Only accepts 'this' / 'self'\n@return true if the component was accepted to be pinned, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinSceneComponent", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinSceneComponent_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Pin this component (or owner actor if bShouldPinActor is true) to the ARPin that is the best fit based on its location and\n\x09 * desired type. If UMagicLeapARPinFunctionLibrary::QueryARPins() is implemented on this platform, pins of type SearchPinTypes\n\x09 * will be searched within the SearchVolume (250cm radius by default) and the closest one will be selected. Otherwise, a simple\n\x09 * search of the closest pin will be used to get the desired ARPin.\n\x09 * OnPersistentEntityPinned event will be fired when a suitable ARPin is found for this component.\n\x09 * The component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin this component (or owner actor if bShouldPinActor is true) to the ARPin that is the best fit based on its location and\ndesired type. If UMagicLeapARPinFunctionLibrary::QueryARPins() is implemented on this platform, pins of type SearchPinTypes\nwill be searched within the SearchVolume (250cm radius by default) and the closest one will be selected. Otherwise, a simple\nsearch of the closest pin will be used to get the desired ARPin.\nOnPersistentEntityPinned event will be fired when a suitable ARPin is found for this component.\nThe component's transform will then be locked. App needs to call UnPin() if it wants to move the component again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinToBestFit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics
	{
		struct MagicLeapARPinComponent_eventPinToID_Parms
		{
			FGuid PinID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_PinID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventPinToID_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_PinID_MetaData)) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinToID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinToID_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_PinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Pin this component (or owner actor if bShouldPinActor is true) to the specified PinID.\n\x09 * If this pin exists in the environment, OnPersistentEntityPinned event will be fired in the next Tick.\n\x09 * The component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n\x09 * @param PinID ID of the ARPin to attach this component (or owner actor) to.\n\x09 * @return true if the provided pin exists in the environment, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin this component (or owner actor if bShouldPinActor is true) to the specified PinID.\nIf this pin exists in the environment, OnPersistentEntityPinned event will be fired in the next Tick.\nThe component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n@param PinID ID of the ARPin to attach this component (or owner actor) to.\n@return true if the provided pin exists in the environment, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinToID", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinToID_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics
	{
		struct MagicLeapARPinComponent_eventPinToRestoredOrSyncedID_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinToRestoredOrSyncedID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinToRestoredOrSyncedID_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Pin this component (or owner actor if bShouldPinActor is true) to the PinID that was restored from a previous session\n\x09 * or was synced voer the network.\n\x09 * OnPersistentEntityPinned event will be fired when the restored pin will be found in the environment.\n\x09 * The component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n\x09 * @return true if some ARPin data has been restored or synced, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin this component (or owner actor if bShouldPinActor is true) to the PinID that was restored from a previous session\nor was synced voer the network.\nOnPersistentEntityPinned event will be fired when the restored pin will be found in the environment.\nThe component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n@return true if some ARPin data has been restored or synced, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinToRestoredOrSyncedID", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinToRestoredOrSyncedID_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics
	{
		struct MagicLeapARPinComponent_eventTryGetPinData_Parms
		{
			TSubclassOf<UMagicLeapARPinSaveGame>  InPinDataClass;
			bool OutPinDataValid;
			UMagicLeapARPinSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InPinDataClass;
		static void NewProp_OutPinDataValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutPinDataValid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_InPinDataClass = { "InPinDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventTryGetPinData_Parms, InPinDataClass), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_OutPinDataValid_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventTryGetPinData_Parms*)Obj)->OutPinDataValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_OutPinDataValid = { "OutPinDataValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventTryGetPinData_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_OutPinDataValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventTryGetPinData_Parms, ReturnValue), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_InPinDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_OutPinDataValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Tries to retreive the data associated with this pin. Returns false if the data hasnt been loaded from the disk yet.\n\x09 * In that case, wait until the OnPinDataLoadAttemptCompleted event is called.\n\x09 * @param InPinDataClass The user defined save game class used by this pin. Note that this must match the PinDataClass property. Used for auto casting the return value.\n\x09 * @param OutPinData The save game instance associated with this pin instance, only valid if function returns true.\n\x09 * @return True if pin data was successfully loaded, false otherwise.\n\x09 */" },
		{ "DeterminesOutputType", "InPinDataClass" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Tries to retreive the data associated with this pin. Returns false if the data hasnt been loaded from the disk yet.\nIn that case, wait until the OnPinDataLoadAttemptCompleted event is called.\n@param InPinDataClass The user defined save game class used by this pin. Note that this must match the PinDataClass property. Used for auto casting the return value.\n@param OutPinData The save game instance associated with this pin instance, only valid if function returns true.\n@return True if pin data was successfully loaded, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "TryGetPinData", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventTryGetPinData_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Detach or un-pin the currently pinned entity (component) from the real-world.\n\x09 * Call this if you want to change the transform of a pinned entity.\n\x09 * Note that if you still want your content to persist, you will have to call PinToBestFit() or PinToID() before EndPlay().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Detach or un-pin the currently pinned entity (component) from the real-world.\nCall this if you want to change the transform of a pinned entity.\nNote that if you still want your content to persist, you will have to call PinToBestFit() or PinToID() before EndPlay()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "UnPin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapARPinComponent_NoRegister()
	{
		return UMagicLeapARPinComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapARPinComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoPinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPinActor_MetaData[];
#endif
		static void NewProp_bShouldPinActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPinActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PinDataClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchPinTypes_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchPinTypes_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchPinTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SearchPinTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPersistentEntityPinned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistentEntityPinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPersistentEntityPinLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistentEntityPinLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPinDataLoadAttemptCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPinDataLoadAttemptCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedCFUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinnedCFUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinnedSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapARPinComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapARPinComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestoration, "AttemptPinDataRestoration" }, // 3549586477
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_AttemptPinDataRestorationAsync, "AttemptPinDataRestorationAsync" }, // 3768955627
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData, "GetPinData" }, // 2324184945
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID, "GetPinnedPinID" }, // 622542037
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState, "GetPinState" }, // 1870121556
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned, "IsPinned" }, // 414596543
		{ &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature, "MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature" }, // 1187795494
		{ &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature, "PersistentEntityPinLost__DelegateSignature" }, // 1693097645
		{ &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature, "PersistentEntityPinned__DelegateSignature" }, // 3510932148
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor, "PinActor" }, // 2453141718
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced, "PinRestoredOrSynced" }, // 1193897873
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent, "PinSceneComponent" }, // 1149884524
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinToBestFit, "PinToBestFit" }, // 296164008
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinToID, "PinToID" }, // 475464008
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinToRestoredOrSyncedID, "PinToRestoredOrSyncedID" }, // 4289585024
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_TryGetPinData, "TryGetPinData" }, // 2531430051
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin, "UnPin" }, // 530084871
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** Component to make content persist at locations in the real world. */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagicLeapARPinComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Component to make content persist at locations in the real world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Unique ID for this component to save the meta data for the Pin and make content persistent.\n\x09 * This name has to be unique across all instances of the MagicLeapARPinComponent class.\n\x09 * If empty, the name of the owner actor will be used.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Unique ID for this component to save the meta data for the Pin and make content persistent.\nThis name has to be unique across all instances of the MagicLeapARPinComponent class.\nIf empty, the name of the owner actor will be used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID = { "ObjectUID", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, ObjectUID), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Index to get the save game data for the pin */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Index to get the save game data for the pin" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Mode for automatically pinning this component or it's owner actor to real-world. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Mode for automatically pinning this component or it's owner actor to real-world." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType = { "AutoPinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, AutoPinType), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapAutoPinType, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Pin this component's owner actor instead of just the component itself. Relevant only when using 'OnlyOnDataRestoration' or 'Always' as AutoPinType. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin this component's owner actor instead of just the component itself. Relevant only when using 'OnlyOnDataRestoration' or 'Always' as AutoPinType." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_SetBit(void* Obj)
	{
		((UMagicLeapARPinComponent*)Obj)->bShouldPinActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor = { "bShouldPinActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapARPinComponent), &Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** The user defined save game class associated with this pin.  Note that this MUST match the type passed into GetPinData().*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "The user defined save game class associated with this pin.  Note that this MUST match the type passed into GetPinData()." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass = { "PinDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinDataClass), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_ElementProp = { "SearchPinTypes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapARPin_EMagicLeapARPinType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Pin types to look for when attempting to pin this component. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin types to look for when attempting to pin this component." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes = { "SearchPinTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, SearchPinTypes), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchVolume_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Volume to search for an ARPin in. The position and scaled radius (in Unreal Units) of this sphere is used to look for an ARPin of type SearchPinTypes. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Volume to search for an ARPin in. The position and scaled radius (in Unreal Units) of this sphere is used to look for an ARPin of type SearchPinTypes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchVolume = { "SearchVolume", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, SearchVolume), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData[] = {
		{ "Comment", "/** Fired when an entity is successfully pinned by this component. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Fired when an entity is successfully pinned by this component." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned = { "OnPersistentEntityPinned", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, OnPersistentEntityPinned), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData[] = {
		{ "Comment", "/** Fired when an entity loses its pin. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Fired when an entity loses its pin." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost = { "OnPersistentEntityPinLost", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, OnPersistentEntityPinLost), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPinDataLoadAttemptCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPinDataLoadAttemptCompleted = { "OnPinDataLoadAttemptCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, OnPinDataLoadAttemptCompleted), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPinDataLoadAttemptCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPinDataLoadAttemptCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID = { "PinnedCFUID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedCFUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent = { "PinnedSceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData = { "PinData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinData), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchPinTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_SearchVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPinDataLoadAttemptCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapARPinComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapARPinComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::ClassParams = {
		&UMagicLeapARPinComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapARPinComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapARPinComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapARPinComponent, 97886181);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<UMagicLeapARPinComponent>()
	{
		return UMagicLeapARPinComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapARPinComponent(Z_Construct_UClass_UMagicLeapARPinComponent, &UMagicLeapARPinComponent::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("UMagicLeapARPinComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapARPinComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
