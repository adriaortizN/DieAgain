// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/VolumetricCloudComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricCloudComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
// End Cross Module References
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowTracingDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowTracingDistance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowReflectionSampleCountScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowReflectionSampleCountScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowViewSampleCountScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowViewSampleCountScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetReflectionSampleCountScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflectionSampleCountScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetViewSampleCountScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewSampleCountScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetSkyLightCloudBottomOcclusion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkyLightCloudBottomOcclusion(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetbUsePerSampleAtmosphericLightTransmittance)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbUsePerSampleAtmosphericLightTransmittance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetGroundAlbedo)
	{
		P_GET_STRUCT(FColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroundAlbedo(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetPlanetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlanetRadius(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetTracingMaxDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTracingMaxDistance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetTracingStartMaxDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTracingStartMaxDistance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetLayerHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerHeight(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumetricCloudComponent::execSetLayerBottomAltitude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerBottomAltitude(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UVolumetricCloudComponent::StaticRegisterNativesUVolumetricCloudComponent()
	{
		UClass* Class = UVolumetricCloudComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetbUsePerSampleAtmosphericLightTransmittance", &UVolumetricCloudComponent::execSetbUsePerSampleAtmosphericLightTransmittance },
			{ "SetGroundAlbedo", &UVolumetricCloudComponent::execSetGroundAlbedo },
			{ "SetLayerBottomAltitude", &UVolumetricCloudComponent::execSetLayerBottomAltitude },
			{ "SetLayerHeight", &UVolumetricCloudComponent::execSetLayerHeight },
			{ "SetMaterial", &UVolumetricCloudComponent::execSetMaterial },
			{ "SetPlanetRadius", &UVolumetricCloudComponent::execSetPlanetRadius },
			{ "SetReflectionSampleCountScale", &UVolumetricCloudComponent::execSetReflectionSampleCountScale },
			{ "SetShadowReflectionSampleCountScale", &UVolumetricCloudComponent::execSetShadowReflectionSampleCountScale },
			{ "SetShadowTracingDistance", &UVolumetricCloudComponent::execSetShadowTracingDistance },
			{ "SetShadowViewSampleCountScale", &UVolumetricCloudComponent::execSetShadowViewSampleCountScale },
			{ "SetSkyLightCloudBottomOcclusion", &UVolumetricCloudComponent::execSetSkyLightCloudBottomOcclusion },
			{ "SetTracingMaxDistance", &UVolumetricCloudComponent::execSetTracingMaxDistance },
			{ "SetTracingStartMaxDistance", &UVolumetricCloudComponent::execSetTracingStartMaxDistance },
			{ "SetViewSampleCountScale", &UVolumetricCloudComponent::execSetViewSampleCountScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics
	{
		struct VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms), &Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Use Per Sample Atmospheric Light Transmittance" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetbUsePerSampleAtmosphericLightTransmittance", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics
	{
		struct VolumetricCloudComponent_eventSetGroundAlbedo_Parms
		{
			FColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetGroundAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetGroundAlbedo", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetGroundAlbedo_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics
	{
		struct VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetLayerBottomAltitude", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics
	{
		struct VolumetricCloudComponent_eventSetLayerHeight_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetLayerHeight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetLayerHeight", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetLayerHeight_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics
	{
		struct VolumetricCloudComponent_eventSetMaterial_Parms
		{
			UMaterialInterface* NewValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetMaterial_Parms, NewValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetMaterial", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetMaterial_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics
	{
		struct VolumetricCloudComponent_eventSetPlanetRadius_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetPlanetRadius_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetPlanetRadius", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetPlanetRadius_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics
	{
		struct VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetReflectionSampleCountScale", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics
	{
		struct VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowReflectionSampleCountScale", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics
	{
		struct VolumetricCloudComponent_eventSetShadowTracingDistance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowTracingDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowTracingDistance", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetShadowTracingDistance_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics
	{
		struct VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowViewSampleCountScale", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics
	{
		struct VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetSkyLightCloudBottomOcclusion", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics
	{
		struct VolumetricCloudComponent_eventSetTracingMaxDistance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetTracingMaxDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetTracingMaxDistance", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetTracingMaxDistance_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics
	{
		struct VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetTracingStartMaxDistance", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics
	{
		struct VolumetricCloudComponent_eventSetViewSampleCountScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetViewSampleCountScale", nullptr, nullptr, sizeof(VolumetricCloudComponent_eventSetViewSampleCountScale_Parms), Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister()
	{
		return UVolumetricCloudComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVolumetricCloudComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerBottomAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LayerBottomAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracingStartMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TracingStartMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracingMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TracingMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlanetRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData[];
#endif
		static void NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePerSampleAtmosphericLightTransmittance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightCloudBottomOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyLightCloudBottomOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewSampleCountScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewSampleCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionSampleCountScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionSampleCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowViewSampleCountScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowViewSampleCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowReflectionSampleCountScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowReflectionSampleCountScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowTracingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowTracingDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumetricCloudComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVolumetricCloudComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance, "SetbUsePerSampleAtmosphericLightTransmittance" }, // 3806500083
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo, "SetGroundAlbedo" }, // 1591469128
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude, "SetLayerBottomAltitude" }, // 1896557864
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight, "SetLayerHeight" }, // 2842306191
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial, "SetMaterial" }, // 2152696504
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius, "SetPlanetRadius" }, // 1243821195
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale, "SetReflectionSampleCountScale" }, // 479840365
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale, "SetShadowReflectionSampleCountScale" }, // 894926948
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance, "SetShadowTracingDistance" }, // 3705446544
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale, "SetShadowViewSampleCountScale" }, // 40452145
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion, "SetSkyLightCloudBottomOcclusion" }, // 4285829433
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance, "SetTracingMaxDistance" }, // 4004529742
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance, "SetTracingStartMaxDistance" }, // 1077368037
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale, "SetViewSampleCountScale" }, // 483597386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component that represents a participating media material around a planet, e.g. clouds.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/VolumetricCloudComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "A component that represents a participating media material around a planet, e.g. clouds." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The altitude at which the cloud layer starts. (kilometers above the ground) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The altitude at which the cloud layer starts. (kilometers above the ground)" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude = { "LayerBottomAltitude", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, LayerBottomAltitude), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The altitude at which the cloud layer ends. (kilometers above the ground) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The altitude at which the cloud layer ends. (kilometers above the ground)" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight = { "LayerHeight", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, LayerHeight), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** The maximum distance of the volumetric surface before which we will accept to start tracing. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The maximum distance of the volumetric surface before which we will accept to start tracing. (kilometers)" },
		{ "UIMax", "500.000000" },
		{ "UIMin", "100.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance = { "TracingStartMaxDistance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingStartMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The maximum distance that will be traced inside the cloud layer. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The maximum distance that will be traced inside the cloud layer. (kilometers)" },
		{ "UIMax", "500.000000" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance = { "TracingMaxDistance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius_MetaData[] = {
		{ "Category", "Planet" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The planet radius used when there is not SkyAtmosphere component present in the scene. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The planet radius used when there is not SkyAtmosphere component present in the scene." },
		{ "UIMax", "7000.000000" },
		{ "UIMin", "100.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius = { "PlanetRadius", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, PlanetRadius), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** \n\x09 * The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere. \n\x09 * This is only used by the cloud material when the 'Volumetric Advanced' node have GroundContribution enabled.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere.\nThis is only used by the cloud material when the 'Volumetric Advanced' node have GroundContribution enabled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Cloud Material" },
		{ "Comment", "/** The material describing the cloud volume. It must be a Volume domain material. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The material describing the cloud volume. It must be a Volume domain material." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "Comment", "/** Whether to apply atmosphere transmittance per sample, instead of using the light global transmittance. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "Whether to apply atmosphere transmittance per sample, instead of using the light global transmittance." },
	};
#endif
	void Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit(void* Obj)
	{
		((UVolumetricCloudComponent*)Obj)->bUsePerSampleAtmosphericLightTransmittance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance = { "bUsePerSampleAtmosphericLightTransmittance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVolumetricCloudComponent), &Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Occlude the sky light contribution at the bottom of the cloud layer. This is a fast approximation to sky lighting being occluded by cloud without having to trace rays or sample AO texture. Ignored if the cloud material explicitely sets the ambient occlusion value. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "Occlude the sky light contribution at the bottom of the cloud layer. This is a fast approximation to sky lighting being occluded by cloud without having to trace rays or sample AO texture. Ignored if the cloud material explicitely sets the ambient occlusion value." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion = { "SkyLightCloudBottomOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, SkyLightCloudBottomOcclusion), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the tracing sample count in primary views. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ViewRaySampleCountMax'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the tracing sample count in primary views. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ViewRaySampleCountMax'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale = { "ViewSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ViewSampleCountScale), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the tracing sample count in reflection views. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ReflectionRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the tracing sample count in reflection views. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ReflectionRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale = { "ReflectionSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ReflectionSampleCountScale), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the shadow tracing sample count in primary views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ViewRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow tracing sample count in primary views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ViewRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale = { "ShadowViewSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowViewSampleCountScale), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the shadow tracing sample count in reflection views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ReflectionRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow tracing sample count in reflection views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ReflectionRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale = { "ShadowReflectionSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowReflectionSampleCountScale), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 * The shadow tracing distance in kilometers, only used with Advanced Output ray marched shadows.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "The shadow tracing distance in kilometers, only used with Advanced Output ray marched shadows." },
		{ "UIMax", "50" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance = { "ShadowTracingDistance", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowTracingDistance), METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumetricCloudComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumetricCloudComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::ClassParams = {
		&UVolumetricCloudComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumetricCloudComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumetricCloudComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVolumetricCloudComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVolumetricCloudComponent, 3029974850);
	template<> ENGINE_API UClass* StaticClass<UVolumetricCloudComponent>()
	{
		return UVolumetricCloudComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVolumetricCloudComponent(Z_Construct_UClass_UVolumetricCloudComponent, &UVolumetricCloudComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UVolumetricCloudComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumetricCloudComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumetricCloudComponent)
	void AVolumetricCloud::StaticRegisterNativesAVolumetricCloud()
	{
	}
	UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister()
	{
		return AVolumetricCloud::StaticClass();
	}
	struct Z_Construct_UClass_AVolumetricCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloudComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumetricCloudComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolumetricCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumetricCloud_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a participating media material around a planet, e.g. clouds.\n * @see TODO address to the documentation.\n */" },
		{ "HideCategories", "Info Object Input Input Collision" },
		{ "IncludePath", "Components/VolumetricCloudComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a participating media material around a planet, e.g. clouds.\n@see TODO address to the documentation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent = { "VolumetricCloudComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVolumetricCloud, VolumetricCloudComponent), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolumetricCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumetricCloud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVolumetricCloud_Statics::ClassParams = {
		&AVolumetricCloud::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVolumetricCloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVolumetricCloud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVolumetricCloud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVolumetricCloud, 108836053);
	template<> ENGINE_API UClass* StaticClass<AVolumetricCloud>()
	{
		return AVolumetricCloud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVolumetricCloud(Z_Construct_UClass_AVolumetricCloud, &AVolumetricCloud::StaticClass, TEXT("/Script/Engine"), TEXT("AVolumetricCloud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricCloud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
