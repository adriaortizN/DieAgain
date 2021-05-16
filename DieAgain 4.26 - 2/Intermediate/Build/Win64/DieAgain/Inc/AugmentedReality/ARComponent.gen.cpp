// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARComponent() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionPayload();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARAltitudeSource();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARMeshUpdatePayload();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARObjectUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPoseUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARImageUpdatePayload();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARFaceUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPointUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPlaneUpdatePayload();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent();
// End Cross Module References
	static UEnum* EGeoAnchorComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EGeoAnchorComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EGeoAnchorComponentDebugMode>()
	{
		return EGeoAnchorComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EGeoAnchorComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Hash() { return 84562038U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGeoAnchorComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGeoAnchorComponentDebugMode::None", (int64)EGeoAnchorComponentDebugMode::None },
				{ "EGeoAnchorComponentDebugMode::ShowGeoData", (int64)EGeoAnchorComponentDebugMode::ShowGeoData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EGeoAnchorComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowGeoData.Comment", "/** Display Geo related data */" },
				{ "ShowGeoData.Name", "EGeoAnchorComponentDebugMode::ShowGeoData" },
				{ "ShowGeoData.ToolTip", "Display Geo related data" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EGeoAnchorComponentDebugMode",
				"EGeoAnchorComponentDebugMode",
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
	static UEnum* EPoseComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EPoseComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPoseComponentDebugMode>()
	{
		return EPoseComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPoseComponentDebugMode(EPoseComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EPoseComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Hash() { return 1315968459U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPoseComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPoseComponentDebugMode::None", (int64)EPoseComponentDebugMode::None },
				{ "EPoseComponentDebugMode::ShowSkeleton", (int64)EPoseComponentDebugMode::ShowSkeleton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EPoseComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowSkeleton.Comment", "/** Show the skeleton with debug draw */" },
				{ "ShowSkeleton.Name", "EPoseComponentDebugMode::ShowSkeleton" },
				{ "ShowSkeleton.ToolTip", "Show the skeleton with debug draw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EPoseComponentDebugMode",
				"EPoseComponentDebugMode",
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
	static UEnum* EQRCodeComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EQRCodeComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EQRCodeComponentDebugMode>()
	{
		return EQRCodeComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQRCodeComponentDebugMode(EQRCodeComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EQRCodeComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Hash() { return 2393708524U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQRCodeComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQRCodeComponentDebugMode::None", (int64)EQRCodeComponentDebugMode::None },
				{ "EQRCodeComponentDebugMode::ShowQRCode", (int64)EQRCodeComponentDebugMode::ShowQRCode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EQRCodeComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowQRCode.Comment", "/** Show info about the detected QR code */" },
				{ "ShowQRCode.Name", "EQRCodeComponentDebugMode::ShowQRCode" },
				{ "ShowQRCode.ToolTip", "Show info about the detected QR code" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EQRCodeComponentDebugMode",
				"EQRCodeComponentDebugMode",
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
	static UEnum* EImageComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EImageComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EImageComponentDebugMode>()
	{
		return EImageComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImageComponentDebugMode(EImageComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EImageComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Hash() { return 1923043589U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImageComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImageComponentDebugMode::None", (int64)EImageComponentDebugMode::None },
				{ "EImageComponentDebugMode::ShowDetectedImage", (int64)EImageComponentDebugMode::ShowDetectedImage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EImageComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowDetectedImage.Comment", "/** Display info about the detected image */" },
				{ "ShowDetectedImage.Name", "EImageComponentDebugMode::ShowDetectedImage" },
				{ "ShowDetectedImage.ToolTip", "Display info about the detected image" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EImageComponentDebugMode",
				"EImageComponentDebugMode",
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
	static UEnum* EARFaceTransformMixing_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTransformMixing"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTransformMixing>()
	{
		return EARFaceTransformMixing_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceTransformMixing(EARFaceTransformMixing_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceTransformMixing"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Hash() { return 1027139005U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceTransformMixing"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceTransformMixing::ComponentOnly", (int64)EARFaceTransformMixing::ComponentOnly },
				{ "EARFaceTransformMixing::ComponentLocationTrackedRotation", (int64)EARFaceTransformMixing::ComponentLocationTrackedRotation },
				{ "EARFaceTransformMixing::ComponentWithTracked", (int64)EARFaceTransformMixing::ComponentWithTracked },
				{ "EARFaceTransformMixing::TrackingOnly", (int64)EARFaceTransformMixing::TrackingOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ComponentLocationTrackedRotation.Comment", "/** Use the component's location and apply the rotation from the tracked mesh */" },
				{ "ComponentLocationTrackedRotation.Name", "EARFaceTransformMixing::ComponentLocationTrackedRotation" },
				{ "ComponentLocationTrackedRotation.ToolTip", "Use the component's location and apply the rotation from the tracked mesh" },
				{ "ComponentOnly.Comment", "/** Uses the component's transform exclusively. Only setting for non-tracked meshes */" },
				{ "ComponentOnly.Name", "EARFaceTransformMixing::ComponentOnly" },
				{ "ComponentOnly.ToolTip", "Uses the component's transform exclusively. Only setting for non-tracked meshes" },
				{ "ComponentWithTracked.Comment", "/** Concatenate the component and the tracked face transforms */" },
				{ "ComponentWithTracked.Name", "EARFaceTransformMixing::ComponentWithTracked" },
				{ "ComponentWithTracked.ToolTip", "Concatenate the component and the tracked face transforms" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "TrackingOnly.Comment", "/** Use only the tracked face transform */" },
				{ "TrackingOnly.Name", "EARFaceTransformMixing::TrackingOnly" },
				{ "TrackingOnly.ToolTip", "Use only the tracked face transform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFaceTransformMixing",
				"EARFaceTransformMixing",
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
	static UEnum* EFaceComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EFaceComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EFaceComponentDebugMode>()
	{
		return EFaceComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFaceComponentDebugMode(EFaceComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EFaceComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Hash() { return 2731160872U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFaceComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFaceComponentDebugMode::None", (int64)EFaceComponentDebugMode::None },
				{ "EFaceComponentDebugMode::ShowEyeVectors", (int64)EFaceComponentDebugMode::ShowEyeVectors },
				{ "EFaceComponentDebugMode::ShowFaceMesh", (int64)EFaceComponentDebugMode::ShowFaceMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EFaceComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowEyeVectors.Comment", "/** Display vectors for both eyes */" },
				{ "ShowEyeVectors.Name", "EFaceComponentDebugMode::ShowEyeVectors" },
				{ "ShowEyeVectors.ToolTip", "Display vectors for both eyes" },
				{ "ShowFaceMesh.Comment", "/** Display the face mesh in wireframe */" },
				{ "ShowFaceMesh.Name", "EFaceComponentDebugMode::ShowFaceMesh" },
				{ "ShowFaceMesh.ToolTip", "Display the face mesh in wireframe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EFaceComponentDebugMode",
				"EFaceComponentDebugMode",
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
	static UEnum* EPlaneComponentDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EPlaneComponentDebugMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPlaneComponentDebugMode>()
	{
		return EPlaneComponentDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlaneComponentDebugMode(EPlaneComponentDebugMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EPlaneComponentDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Hash() { return 331780805U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlaneComponentDebugMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaneComponentDebugMode::None", (int64)EPlaneComponentDebugMode::None },
				{ "EPlaneComponentDebugMode::ShowNetworkRole", (int64)EPlaneComponentDebugMode::ShowNetworkRole },
				{ "EPlaneComponentDebugMode::ShowClassification", (int64)EPlaneComponentDebugMode::ShowClassification },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Comment", "/** The debug mode is disabled */" },
				{ "None.Name", "EPlaneComponentDebugMode::None" },
				{ "None.ToolTip", "The debug mode is disabled" },
				{ "ShowClassification.Comment", "/** Use different coloration to indicate the classification of this plane */" },
				{ "ShowClassification.Name", "EPlaneComponentDebugMode::ShowClassification" },
				{ "ShowClassification.ToolTip", "Use different coloration to indicate the classification of this plane" },
				{ "ShowNetworkRole.Comment", "/** Use different coloration to indicate if the plane belongs to the local or remote client */" },
				{ "ShowNetworkRole.Name", "EPlaneComponentDebugMode::ShowNetworkRole" },
				{ "ShowNetworkRole.ToolTip", "Use different coloration to indicate if the plane belongs to the local or remote client" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EPlaneComponentDebugMode",
				"EPlaneComponentDebugMode",
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
	static UEnum* EARSessionConfigFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionConfigFlags"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionConfigFlags>()
	{
		return EARSessionConfigFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionConfigFlags(EARSessionConfigFlags_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionConfigFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Hash() { return 2788260901U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionConfigFlags"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionConfigFlags::None", (int64)EARSessionConfigFlags::None },
				{ "EARSessionConfigFlags::GenerateMeshData", (int64)EARSessionConfigFlags::GenerateMeshData },
				{ "EARSessionConfigFlags::RenderMeshDataInWireframe", (int64)EARSessionConfigFlags::RenderMeshDataInWireframe },
				{ "EARSessionConfigFlags::GenerateCollisionForMeshData", (int64)EARSessionConfigFlags::GenerateCollisionForMeshData },
				{ "EARSessionConfigFlags::GenerateNavMeshForMeshData", (int64)EARSessionConfigFlags::GenerateNavMeshForMeshData },
				{ "EARSessionConfigFlags::UseMeshDataForOcclusion", (int64)EARSessionConfigFlags::UseMeshDataForOcclusion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GenerateCollisionForMeshData.Name", "EARSessionConfigFlags::GenerateCollisionForMeshData" },
				{ "GenerateMeshData.Name", "EARSessionConfigFlags::GenerateMeshData" },
				{ "GenerateNavMeshForMeshData.Name", "EARSessionConfigFlags::GenerateNavMeshForMeshData" },
				{ "ModuleRelativePath", "Public/ARComponent.h" },
				{ "None.Name", "EARSessionConfigFlags::None" },
				{ "RenderMeshDataInWireframe.Name", "EARSessionConfigFlags::RenderMeshDataInWireframe" },
				{ "UseMeshDataForOcclusion.Name", "EARSessionConfigFlags::UseMeshDataForOcclusion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARSessionConfigFlags",
				"EARSessionConfigFlags",
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
class UScriptStruct* FARGeoAnchorUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARGeoAnchorUpdatePayload"), sizeof(FARGeoAnchorUpdatePayload), Get_Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARGeoAnchorUpdatePayload>()
{
	return FARGeoAnchorUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARGeoAnchorUpdatePayload(FARGeoAnchorUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARGeoAnchorUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARGeoAnchorUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARGeoAnchorUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARGeoAnchorUpdatePayload")),new UScriptStruct::TCppStructOps<FARGeoAnchorUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARGeoAnchorUpdatePayload;
	struct Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltitudeMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AltitudeMeters;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AltitudeSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltitudeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AltitudeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnchorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARGeoAnchorUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters = { "AltitudeMeters", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AltitudeMeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource = { "AltitudeSource", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AltitudeSource), Z_Construct_UEnum_AugmentedReality_EARAltitudeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName = { "AnchorName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AnchorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARGeoAnchorUpdatePayload",
		sizeof(FARGeoAnchorUpdatePayload),
		alignof(FARGeoAnchorUpdatePayload),
		Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARGeoAnchorUpdatePayload"), sizeof(FARGeoAnchorUpdatePayload), Get_Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Hash() { return 3557941282U; }
class UScriptStruct* FARMeshUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARMeshUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARMeshUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARMeshUpdatePayload"), sizeof(FARMeshUpdatePayload), Get_Z_Construct_UScriptStruct_FARMeshUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARMeshUpdatePayload>()
{
	return FARMeshUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARMeshUpdatePayload(FARMeshUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARMeshUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARMeshUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARMeshUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARMeshUpdatePayload")),new UScriptStruct::TCppStructOps<FARMeshUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARMeshUpdatePayload;
	struct Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARMeshUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARMeshUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARMeshUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARMeshUpdatePayload, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARMeshUpdatePayload",
		sizeof(FARMeshUpdatePayload),
		alignof(FARMeshUpdatePayload),
		Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARMeshUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARMeshUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARMeshUpdatePayload"), sizeof(FARMeshUpdatePayload), Get_Z_Construct_UScriptStruct_FARMeshUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARMeshUpdatePayload_Hash() { return 32598075U; }
class UScriptStruct* FARObjectUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARObjectUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARObjectUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARObjectUpdatePayload"), sizeof(FARObjectUpdatePayload), Get_Z_Construct_UScriptStruct_FARObjectUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARObjectUpdatePayload>()
{
	return FARObjectUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARObjectUpdatePayload(FARObjectUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARObjectUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARObjectUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARObjectUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARObjectUpdatePayload")),new UScriptStruct::TCppStructOps<FARObjectUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARObjectUpdatePayload;
	struct Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARObjectUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARObjectUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARObjectUpdatePayload",
		sizeof(FARObjectUpdatePayload),
		alignof(FARObjectUpdatePayload),
		Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARObjectUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARObjectUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARObjectUpdatePayload"), sizeof(FARObjectUpdatePayload), Get_Z_Construct_UScriptStruct_FARObjectUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARObjectUpdatePayload_Hash() { return 1181279495U; }
class UScriptStruct* FAREnvironmentProbeUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("AREnvironmentProbeUpdatePayload"), sizeof(FAREnvironmentProbeUpdatePayload), Get_Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FAREnvironmentProbeUpdatePayload>()
{
	return FAREnvironmentProbeUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAREnvironmentProbeUpdatePayload(FAREnvironmentProbeUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("AREnvironmentProbeUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFAREnvironmentProbeUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFAREnvironmentProbeUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AREnvironmentProbeUpdatePayload")),new UScriptStruct::TCppStructOps<FAREnvironmentProbeUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFAREnvironmentProbeUpdatePayload;
	struct Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAREnvironmentProbeUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAREnvironmentProbeUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"AREnvironmentProbeUpdatePayload",
		sizeof(FAREnvironmentProbeUpdatePayload),
		alignof(FAREnvironmentProbeUpdatePayload),
		Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AREnvironmentProbeUpdatePayload"), sizeof(FAREnvironmentProbeUpdatePayload), Get_Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Hash() { return 2003034658U; }
class UScriptStruct* FARPoseUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARPoseUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPoseUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPoseUpdatePayload"), sizeof(FARPoseUpdatePayload), Get_Z_Construct_UScriptStruct_FARPoseUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPoseUpdatePayload>()
{
	return FARPoseUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARPoseUpdatePayload(FARPoseUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARPoseUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARPoseUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARPoseUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARPoseUpdatePayload")),new UScriptStruct::TCppStructOps<FARPoseUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARPoseUpdatePayload;
	struct Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JointTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPoseUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPoseUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_Inner = { "JointTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms = { "JointTransforms", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPoseUpdatePayload, JointTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPoseUpdatePayload",
		sizeof(FARPoseUpdatePayload),
		alignof(FARPoseUpdatePayload),
		Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPoseUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARPoseUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARPoseUpdatePayload"), sizeof(FARPoseUpdatePayload), Get_Z_Construct_UScriptStruct_FARPoseUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARPoseUpdatePayload_Hash() { return 3815985356U; }
class UScriptStruct* FARQRCodeUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARQRCodeUpdatePayload"), sizeof(FARQRCodeUpdatePayload), Get_Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARQRCodeUpdatePayload>()
{
	return FARQRCodeUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARQRCodeUpdatePayload(FARQRCodeUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARQRCodeUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARQRCodeUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARQRCodeUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARQRCodeUpdatePayload")),new UScriptStruct::TCppStructOps<FARQRCodeUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARQRCodeUpdatePayload;
	struct Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QRCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QRCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARQRCodeUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARQRCodeUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARQRCodeUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARQRCodeUpdatePayload, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode = { "QRCode", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARQRCodeUpdatePayload, QRCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARQRCodeUpdatePayload",
		sizeof(FARQRCodeUpdatePayload),
		alignof(FARQRCodeUpdatePayload),
		Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARQRCodeUpdatePayload"), sizeof(FARQRCodeUpdatePayload), Get_Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Hash() { return 1454666132U; }
class UScriptStruct* FARImageUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARImageUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARImageUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARImageUpdatePayload"), sizeof(FARImageUpdatePayload), Get_Z_Construct_UScriptStruct_FARImageUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARImageUpdatePayload>()
{
	return FARImageUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARImageUpdatePayload(FARImageUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARImageUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARImageUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARImageUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARImageUpdatePayload")),new UScriptStruct::TCppStructOps<FARImageUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARImageUpdatePayload;
	struct Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EstimatedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARImageUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARImageUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARImageUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage = { "DetectedImage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARImageUpdatePayload, DetectedImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize = { "EstimatedSize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARImageUpdatePayload, EstimatedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARImageUpdatePayload",
		sizeof(FARImageUpdatePayload),
		alignof(FARImageUpdatePayload),
		Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARImageUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARImageUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARImageUpdatePayload"), sizeof(FARImageUpdatePayload), Get_Z_Construct_UScriptStruct_FARImageUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARImageUpdatePayload_Hash() { return 2871994107U; }
class UScriptStruct* FARFaceUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARFaceUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARFaceUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARFaceUpdatePayload"), sizeof(FARFaceUpdatePayload), Get_Z_Construct_UScriptStruct_FARFaceUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARFaceUpdatePayload>()
{
	return FARFaceUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARFaceUpdatePayload(FARFaceUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARFaceUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARFaceUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARFaceUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARFaceUpdatePayload")),new UScriptStruct::TCppStructOps<FARFaceUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARFaceUpdatePayload;
	struct Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEyePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEyePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARFaceUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFaceUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition = { "LeftEyePosition", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFaceUpdatePayload, LeftEyePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition = { "RightEyePosition", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFaceUpdatePayload, RightEyePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFaceUpdatePayload, LookAtTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARFaceUpdatePayload",
		sizeof(FARFaceUpdatePayload),
		alignof(FARFaceUpdatePayload),
		Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARFaceUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARFaceUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARFaceUpdatePayload"), sizeof(FARFaceUpdatePayload), Get_Z_Construct_UScriptStruct_FARFaceUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARFaceUpdatePayload_Hash() { return 356585155U; }
class UScriptStruct* FARPointUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARPointUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPointUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPointUpdatePayload"), sizeof(FARPointUpdatePayload), Get_Z_Construct_UScriptStruct_FARPointUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPointUpdatePayload>()
{
	return FARPointUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARPointUpdatePayload(FARPointUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARPointUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARPointUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARPointUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARPointUpdatePayload")),new UScriptStruct::TCppStructOps<FARPointUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARPointUpdatePayload;
	struct Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPointUpdatePayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPointUpdatePayload",
		sizeof(FARPointUpdatePayload),
		alignof(FARPointUpdatePayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPointUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARPointUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARPointUpdatePayload"), sizeof(FARPointUpdatePayload), Get_Z_Construct_UScriptStruct_FARPointUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARPointUpdatePayload_Hash() { return 2769501479U; }
class UScriptStruct* FARPlaneUpdatePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPlaneUpdatePayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPlaneUpdatePayload"), sizeof(FARPlaneUpdatePayload), Get_Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPlaneUpdatePayload>()
{
	return FARPlaneUpdatePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARPlaneUpdatePayload(FARPlaneUpdatePayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARPlaneUpdatePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARPlaneUpdatePayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARPlaneUpdatePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARPlaneUpdatePayload")),new UScriptStruct::TCppStructOps<FARPlaneUpdatePayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARPlaneUpdatePayload;
	struct Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundaryVertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundaryVertices;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPlaneUpdatePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_Inner = { "BoundaryVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices = { "BoundaryVertices", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, BoundaryVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlaneUpdatePayload, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPlaneUpdatePayload",
		sizeof(FARPlaneUpdatePayload),
		alignof(FARPlaneUpdatePayload),
		Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPlaneUpdatePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARPlaneUpdatePayload"), sizeof(FARPlaneUpdatePayload), Get_Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Hash() { return 1689793055U; }
class UScriptStruct* FARSessionPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARSessionPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSessionPayload, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSessionPayload"), sizeof(FARSessionPayload), Get_Z_Construct_UScriptStruct_FARSessionPayload_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSessionPayload>()
{
	return FARSessionPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARSessionPayload(FARSessionPayload::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARSessionPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionPayload
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARSessionPayload")),new UScriptStruct::TCppStructOps<FARSessionPayload>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionPayload;
	struct Z_Construct_UScriptStruct_FARSessionPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfigFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWireframeMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultWireframeMeshMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSessionPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags = { "ConfigFlags", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSessionPayload, ConfigFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSessionPayload, DefaultMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial = { "DefaultWireframeMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARSessionPayload, DefaultWireframeMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSessionPayload",
		sizeof(FARSessionPayload),
		alignof(FARSessionPayload),
		Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSessionPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARSessionPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARSessionPayload"), sizeof(FARSessionPayload), Get_Z_Construct_UScriptStruct_FARSessionPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARSessionPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARSessionPayload_Hash() { return 872263135U; }
	DEFINE_FUNCTION(UARComponent::execOnRep_Payload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Payload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execUpdateVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVisualization_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execGetMRMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetMRMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execSetNativeID)
	{
		P_GET_STRUCT(FGuid,Z_Param_NativeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeID(Z_Param_NativeID);
		P_NATIVE_END;
	}
	static FName NAME_UARComponent_ReceiveRemove = FName(TEXT("ReceiveRemove"));
	void UARComponent::ReceiveRemove()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARComponent_ReceiveRemove),NULL);
	}
	static FName NAME_UARComponent_UpdateVisualization = FName(TEXT("UpdateVisualization"));
	void UARComponent::UpdateVisualization()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARComponent_UpdateVisualization),NULL);
	}
	void UARComponent::StaticRegisterNativesUARComponent()
	{
		UClass* Class = UARComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMRMesh", &UARComponent::execGetMRMesh },
			{ "OnRep_Payload", &UARComponent::execOnRep_Payload },
			{ "SetNativeID", &UARComponent::execSetNativeID },
			{ "UpdateVisualization", &UARComponent::execUpdateVisualization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARComponent_GetMRMesh_Statics
	{
		struct ARComponent_eventGetMRMesh_Parms
		{
			UMRMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARComponent_eventGetMRMesh_Parms, ReturnValue), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "GetMRMesh", nullptr, nullptr, sizeof(ARComponent_eventGetMRMesh_Parms), Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_GetMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "OnRep_Payload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_OnRep_Payload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is removed, called on server and clients. */" },
		{ "DisplayName", "Remove" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is removed, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "ReceiveRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_ReceiveRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_SetNativeID_Statics
	{
		struct ARComponent_eventSetNativeID_Parms
		{
			FGuid NativeID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARComponent_SetNativeID_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARComponent_eventSetNativeID_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARComponent_SetNativeID_Statics::NewProp_NativeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_SetNativeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "SetNativeID", nullptr, nullptr, sizeof(ARComponent_eventSetNativeID_Parms), Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_SetNativeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARComponent_SetNativeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "DisplayName", "Update Visualization" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "UpdateVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_UpdateVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARComponent_NoRegister()
	{
		return UARComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultReplication_MetaData[];
#endif
		static void NewProp_bUseDefaultReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWireframeMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultWireframeMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTrackedGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTrackedGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARComponent_GetMRMesh, "GetMRMesh" }, // 1519810450
		{ &Z_Construct_UFunction_UARComponent_OnRep_Payload, "OnRep_Payload" }, // 2900789336
		{ &Z_Construct_UFunction_UARComponent_ReceiveRemove, "ReceiveRemove" }, // 644520210
		{ &Z_Construct_UFunction_UARComponent_SetNativeID, "SetNativeID" }, // 1332944100
		{ &Z_Construct_UFunction_UARComponent_UpdateVisualization, "UpdateVisualization" }, // 3588191048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n * ARComponent handles replication and visualization update for AR tracked geometries\n * ARComponent is created in either multiplayer or local only environment\n *\n * To customize the visualization logic, override 'UpdateVisualization' in Blueprint\n * or 'UpdateVisualization_Implementation' in C++\n *\n * To customize the replication logic, disable 'bUseDefaultReplication' and implement\n * your own replication logic when the ARComponent is updated (see how 'Update' is implemented in the sub classes)\n *\n * A MRMeshComponent will be created if mesh visualization is enabled (see UARSessionConfig::bGenerateMeshDataFromTrackedGeometry)\n * It can be accessed via 'GetMRMesh' or 'UARTrackedGeometry::GetUnderlyingMesh'\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "ARComponent handles replication and visualization update for AR tracked geometries\nARComponent is created in either multiplayer or local only environment\n\nTo customize the visualization logic, override 'UpdateVisualization' in Blueprint\nor 'UpdateVisualization_Implementation' in C++\n\nTo customize the replication logic, disable 'bUseDefaultReplication' and implement\nyour own replication logic when the ARComponent is updated (see how 'Update' is implemented in the sub classes)\n\nA MRMeshComponent will be created if mesh visualization is enabled (see UARSessionConfig::bGenerateMeshDataFromTrackedGeometry)\nIt can be accessed via 'GetMRMesh' or 'UARTrackedGeometry::GetUnderlyingMesh'" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARComponent, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** If the default replication logic should be used for this component */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "If the default replication logic should be used for this component" },
	};
#endif
	void Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_SetBit(void* Obj)
	{
		((UARComponent*)Obj)->bUseDefaultReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication = { "bUseDefaultReplication", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARComponent), &Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n\x09 * The default material to be used for the generated mesh component.\n\x09 * If not set, the DefaultMeshMaterial from ARSessionConfig will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The default material to be used for the generated mesh component.\nIf not set, the DefaultMeshMaterial from ARSessionConfig will be used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARComponent, DefaultMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n\x09 * The default wireframe material to be used for the generated mesh component.\n\x09 * If not set, the DefaultMeshMaterial from ARSessionConfig will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The default wireframe material to be used for the generated mesh component.\nIf not set, the DefaultMeshMaterial from ARSessionConfig will be used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial = { "DefaultWireframeMeshMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARComponent, DefaultWireframeMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent = { "MRMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARComponent, MRMeshComponent), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData[] = {
		{ "Comment", "/** The tracked geometry used for updating this component, only set on \"local\" client */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The tracked geometry used for updating this component, only set on \"local\" client" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry = { "MyTrackedGeometry", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARComponent, MyTrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARComponent_Statics::ClassParams = {
		&UARComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARComponent, 3412441992);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARComponent>()
	{
		return UARComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARComponent(Z_Construct_UClass_UARComponent, &UARComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARComponent"), false, nullptr, nullptr, nullptr);

	void UARComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NativeID(TEXT("NativeID"));

		const bool bIsValid = true
			&& Name_NativeID == ClassReps[(int32)ENetFields_Private::NativeID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARComponent);
	DEFINE_FUNCTION(UARPlaneComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPlaneUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execGetObjectClassificationDebugColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EARObjectClassification,FLinearColor>*)Z_Param__Result=UARPlaneComponent::GetObjectClassificationDebugColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execSetObjectClassificationDebugColors)
	{
		P_GET_TMAP_REF(EARObjectClassification,FLinearColor,Z_Param_Out_InColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPlaneComponent::SetObjectClassificationDebugColors(Z_Param_Out_InColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execSetPlaneComponentDebugMode)
	{
		P_GET_ENUM(EPlaneComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARPlaneComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPlaneComponent::ReceiveAdd(FARPlaneUpdatePayload const& Payload)
	{
		ARPlaneComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPlaneComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPlaneComponent::ReceiveUpdate(FARPlaneUpdatePayload const& Payload)
	{
		ARPlaneComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPlaneComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPlaneComponent::ServerUpdatePayload(FARPlaneUpdatePayload const& NewPayload)
	{
		ARPlaneComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ServerUpdatePayload),&Parms);
	}
	void UARPlaneComponent::StaticRegisterNativesUARPlaneComponent()
	{
		UClass* Class = UARPlaneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectClassificationDebugColors", &UARPlaneComponent::execGetObjectClassificationDebugColors },
			{ "ServerUpdatePayload", &UARPlaneComponent::execServerUpdatePayload },
			{ "SetObjectClassificationDebugColors", &UARPlaneComponent::execSetObjectClassificationDebugColors },
			{ "SetPlaneComponentDebugMode", &UARPlaneComponent::execSetPlaneComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics
	{
		struct ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms
		{
			TMap<EARObjectClassification,FLinearColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "GetObjectClassificationDebugColors", nullptr, nullptr, sizeof(ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms), Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPlaneComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPlaneComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPlaneComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics
	{
		struct ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms
		{
			TMap<EARObjectClassification,FLinearColor> InColors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColors_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InColors_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InColors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InColors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_ValueProp = { "InColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp = { "InColors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors = { "InColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms, InColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "SetObjectClassificationDebugColors", nullptr, nullptr, sizeof(ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms), Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics
	{
		struct ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms
		{
			EPlaneComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "SetPlaneComponentDebugMode", nullptr, nullptr, sizeof(ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms), Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister()
	{
		return UARPlaneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPlaneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPlaneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPlaneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors, "GetObjectClassificationDebugColors" }, // 1586120817
		{ &Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd, "ReceiveAdd" }, // 563601643
		{ &Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate, "ReceiveUpdate" }, // 360408854
		{ &Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 971634319
		{ &Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors, "SetObjectClassificationDebugColors" }, // 2143352273
		{ &Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode, "SetPlaneComponentDebugMode" }, // 233984742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPlaneComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPlaneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPlaneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARPlaneComponent_Statics::ClassParams = {
		&UARPlaneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPlaneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARPlaneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARPlaneComponent, 774269443);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPlaneComponent>()
	{
		return UARPlaneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPlaneComponent(Z_Construct_UClass_UARPlaneComponent, &UARPlaneComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPlaneComponent"), false, nullptr, nullptr, nullptr);

	void UARPlaneComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPlaneComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPlaneComponent);
	DEFINE_FUNCTION(UARPointComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPointUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	static FName NAME_UARPointComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPointComponent::ReceiveAdd(FARPointUpdatePayload const& Payload)
	{
		ARPointComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPointComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPointComponent::ReceiveUpdate(FARPointUpdatePayload const& Payload)
	{
		ARPointComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPointComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPointComponent::ServerUpdatePayload(FARPointUpdatePayload const& NewPayload)
	{
		ARPointComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ServerUpdatePayload),&Parms);
	}
	void UARPointComponent::StaticRegisterNativesUARPointComponent()
	{
		UClass* Class = UARPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARPointComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPointComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPointComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPointComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPointComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPointComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPointComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPointComponent_NoRegister()
	{
		return UARPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPointComponent_ReceiveAdd, "ReceiveAdd" }, // 2086761311
		{ &Z_Construct_UFunction_UARPointComponent_ReceiveUpdate, "ReceiveUpdate" }, // 3025389268
		{ &Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 3079654293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPointComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPointComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARPointComponent_Statics::ClassParams = {
		&UARPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPointComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARPointComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARPointComponent, 3021744739);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPointComponent>()
	{
		return UARPointComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPointComponent(Z_Construct_UClass_UARPointComponent, &UARPointComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPointComponent"), false, nullptr, nullptr, nullptr);

	void UARPointComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPointComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPointComponent);
	DEFINE_FUNCTION(UARFaceComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARFaceUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceComponent::execSetFaceComponentDebugMode)
	{
		P_GET_ENUM(EFaceComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARFaceComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARFaceComponent::ReceiveAdd(FARFaceUpdatePayload const& Payload)
	{
		ARFaceComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARFaceComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARFaceComponent::ReceiveUpdate(FARFaceUpdatePayload const& Payload)
	{
		ARFaceComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARFaceComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARFaceComponent::ServerUpdatePayload(FARFaceUpdatePayload const& NewPayload)
	{
		ARFaceComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ServerUpdatePayload),&Parms);
	}
	void UARFaceComponent::StaticRegisterNativesUARFaceComponent()
	{
		UClass* Class = UARFaceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARFaceComponent::execServerUpdatePayload },
			{ "SetFaceComponentDebugMode", &UARFaceComponent::execSetFaceComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARFaceComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARFaceComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARFaceComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics
	{
		struct ARFaceComponent_eventSetFaceComponentDebugMode_Parms
		{
			EFaceComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARFaceComponent_eventSetFaceComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "SetFaceComponentDebugMode", nullptr, nullptr, sizeof(ARFaceComponent_eventSetFaceComponentDebugMode_Parms), Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARFaceComponent_NoRegister()
	{
		return UARFaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARFaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateVertexNormal_MetaData[];
#endif
		static void NewProp_bUpdateVertexNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateVertexNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFaceOutOfScreen_MetaData[];
#endif
		static void NewProp_bFaceOutOfScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceOutOfScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARFaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARFaceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARFaceComponent_ReceiveAdd, "ReceiveAdd" }, // 2774062585
		{ &Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate, "ReceiveUpdate" }, // 3087705135
		{ &Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 2449958157
		{ &Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode, "SetFaceComponentDebugMode" }, // 2898319202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09""Determines how the transform from tracking data and the component's transform are mixed together. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Determines how the transform from tracking data and the component's transform are mixed together." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting = { "TransformSetting", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARFaceComponent, TransformSetting), Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09Whether to automatically update the vertex normal when the mesh is updated. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Whether to automatically update the vertex normal when the mesh is updated." },
	};
#endif
	void Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_SetBit(void* Obj)
	{
		((UARFaceComponent*)Obj)->bUpdateVertexNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal = { "bUpdateVertexNormal", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARFaceComponent), &Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09Whether the mesh should be rotated so that it's facing out of the screen. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Whether the mesh should be rotated so that it's facing out of the screen." },
	};
#endif
	void Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_SetBit(void* Obj)
	{
		((UARFaceComponent*)Obj)->bFaceOutOfScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen = { "bFaceOutOfScreen", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARFaceComponent), &Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARFaceComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARFaceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARFaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARFaceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARFaceComponent_Statics::ClassParams = {
		&UARFaceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARFaceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARFaceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARFaceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARFaceComponent, 740550995);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARFaceComponent>()
	{
		return UARFaceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARFaceComponent(Z_Construct_UClass_UARFaceComponent, &UARFaceComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARFaceComponent"), false, nullptr, nullptr, nullptr);

	void UARFaceComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARFaceComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARFaceComponent);
	DEFINE_FUNCTION(UARImageComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARImageUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARImageComponent::execSetImageComponentDebugMode)
	{
		P_GET_ENUM(EImageComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARImageComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARImageComponent::ReceiveAdd(FARImageUpdatePayload const& Payload)
	{
		ARImageComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARImageComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARImageComponent::ReceiveUpdate(FARImageUpdatePayload const& Payload)
	{
		ARImageComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARImageComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARImageComponent::ServerUpdatePayload(FARImageUpdatePayload const& NewPayload)
	{
		ARImageComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ServerUpdatePayload),&Parms);
	}
	void UARImageComponent::StaticRegisterNativesUARImageComponent()
	{
		UClass* Class = UARImageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARImageComponent::execServerUpdatePayload },
			{ "SetImageComponentDebugMode", &UARImageComponent::execSetImageComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARImageComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARImageComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARImageComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARImageComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARImageComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARImageComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics
	{
		struct ARImageComponent_eventSetImageComponentDebugMode_Parms
		{
			EImageComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARImageComponent_eventSetImageComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "SetImageComponentDebugMode", nullptr, nullptr, sizeof(ARImageComponent_eventSetImageComponentDebugMode_Parms), Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARImageComponent_NoRegister()
	{
		return UARImageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARImageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARImageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARImageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARImageComponent_ReceiveAdd, "ReceiveAdd" }, // 3766635710
		{ &Z_Construct_UFunction_UARImageComponent_ReceiveUpdate, "ReceiveUpdate" }, // 580962675
		{ &Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1049804910
		{ &Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode, "SetImageComponentDebugMode" }, // 4215218562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARImageComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARImageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARImageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARImageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARImageComponent_Statics::ClassParams = {
		&UARImageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARImageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARImageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARImageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARImageComponent, 3581744226);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARImageComponent>()
	{
		return UARImageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARImageComponent(Z_Construct_UClass_UARImageComponent, &UARImageComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARImageComponent"), false, nullptr, nullptr, nullptr);

	void UARImageComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARImageComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARImageComponent);
	DEFINE_FUNCTION(UARQRCodeComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARQRCodeUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARQRCodeComponent::execSetQRCodeComponentDebugMode)
	{
		P_GET_ENUM(EQRCodeComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARQRCodeComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARQRCodeComponent::ReceiveAdd(FARQRCodeUpdatePayload const& Payload)
	{
		ARQRCodeComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARQRCodeComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARQRCodeComponent::ReceiveUpdate(FARQRCodeUpdatePayload const& Payload)
	{
		ARQRCodeComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARQRCodeComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARQRCodeComponent::ServerUpdatePayload(FARQRCodeUpdatePayload const& NewPayload)
	{
		ARQRCodeComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ServerUpdatePayload),&Parms);
	}
	void UARQRCodeComponent::StaticRegisterNativesUARQRCodeComponent()
	{
		UClass* Class = UARQRCodeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARQRCodeComponent::execServerUpdatePayload },
			{ "SetQRCodeComponentDebugMode", &UARQRCodeComponent::execSetQRCodeComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARQRCodeComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARQRCodeComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARQRCodeComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARQRCodeComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARQRCodeComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARQRCodeComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics
	{
		struct ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms
		{
			EQRCodeComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "SetQRCodeComponentDebugMode", nullptr, nullptr, sizeof(ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms), Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister()
	{
		return UARQRCodeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARQRCodeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARQRCodeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARQRCodeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd, "ReceiveAdd" }, // 105891172
		{ &Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2791465294
		{ &Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1078499780
		{ &Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode, "SetQRCodeComponentDebugMode" }, // 4263828280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARQRCodeComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARQRCodeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARQRCodeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARQRCodeComponent_Statics::ClassParams = {
		&UARQRCodeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARQRCodeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARQRCodeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARQRCodeComponent, 725702791);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARQRCodeComponent>()
	{
		return UARQRCodeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARQRCodeComponent(Z_Construct_UClass_UARQRCodeComponent, &UARQRCodeComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARQRCodeComponent"), false, nullptr, nullptr, nullptr);

	void UARQRCodeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARQRCodeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARQRCodeComponent);
	DEFINE_FUNCTION(UARPoseComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPoseUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPoseComponent::execSetPoseComponentDebugMode)
	{
		P_GET_ENUM(EPoseComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARPoseComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPoseComponent::ReceiveAdd(FARPoseUpdatePayload const& Payload)
	{
		ARPoseComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPoseComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPoseComponent::ReceiveUpdate(FARPoseUpdatePayload const& Payload)
	{
		ARPoseComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPoseComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPoseComponent::ServerUpdatePayload(FARPoseUpdatePayload const& NewPayload)
	{
		ARPoseComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ServerUpdatePayload),&Parms);
	}
	void UARPoseComponent::StaticRegisterNativesUARPoseComponent()
	{
		UClass* Class = UARPoseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARPoseComponent::execServerUpdatePayload },
			{ "SetPoseComponentDebugMode", &UARPoseComponent::execSetPoseComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPoseComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPoseComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPoseComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPoseComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPoseComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPoseComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics
	{
		struct ARPoseComponent_eventSetPoseComponentDebugMode_Parms
		{
			EPoseComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPoseComponent_eventSetPoseComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "SetPoseComponentDebugMode", nullptr, nullptr, sizeof(ARPoseComponent_eventSetPoseComponentDebugMode_Parms), Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPoseComponent_NoRegister()
	{
		return UARPoseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPoseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPoseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPoseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPoseComponent_ReceiveAdd, "ReceiveAdd" }, // 186481365
		{ &Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2916752176
		{ &Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 3930519435
		{ &Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode, "SetPoseComponentDebugMode" }, // 483742027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARPoseComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPoseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPoseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPoseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARPoseComponent_Statics::ClassParams = {
		&UARPoseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPoseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPoseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARPoseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARPoseComponent, 1919469691);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPoseComponent>()
	{
		return UARPoseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPoseComponent(Z_Construct_UClass_UARPoseComponent, &UARPoseComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPoseComponent"), false, nullptr, nullptr, nullptr);

	void UARPoseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPoseComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPoseComponent);
	DEFINE_FUNCTION(UAREnvironmentProbeComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FAREnvironmentProbeUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	static FName NAME_UAREnvironmentProbeComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UAREnvironmentProbeComponent::ReceiveAdd(FAREnvironmentProbeUpdatePayload const& Payload)
	{
		AREnvironmentProbeComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UAREnvironmentProbeComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UAREnvironmentProbeComponent::ReceiveUpdate(FAREnvironmentProbeUpdatePayload const& Payload)
	{
		AREnvironmentProbeComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UAREnvironmentProbeComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UAREnvironmentProbeComponent::ServerUpdatePayload(FAREnvironmentProbeUpdatePayload const& NewPayload)
	{
		AREnvironmentProbeComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ServerUpdatePayload),&Parms);
	}
	void UAREnvironmentProbeComponent::StaticRegisterNativesUAREnvironmentProbeComponent()
	{
		UClass* Class = UAREnvironmentProbeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UAREnvironmentProbeComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AREnvironmentProbeComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AREnvironmentProbeComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AREnvironmentProbeComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister()
	{
		return UAREnvironmentProbeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd, "ReceiveAdd" }, // 1274307179
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate, "ReceiveUpdate" }, // 1225412027
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1933758415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentProbeComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentProbeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::ClassParams = {
		&UAREnvironmentProbeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentProbeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAREnvironmentProbeComponent, 1747232419);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentProbeComponent>()
	{
		return UAREnvironmentProbeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAREnvironmentProbeComponent(Z_Construct_UClass_UAREnvironmentProbeComponent, &UAREnvironmentProbeComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UAREnvironmentProbeComponent"), false, nullptr, nullptr, nullptr);

	void UAREnvironmentProbeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAREnvironmentProbeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentProbeComponent);
	DEFINE_FUNCTION(UARObjectComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARObjectUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	static FName NAME_UARObjectComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARObjectComponent::ReceiveAdd(FARObjectUpdatePayload const& Payload)
	{
		ARObjectComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARObjectComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARObjectComponent::ReceiveUpdate(FARObjectUpdatePayload const& Payload)
	{
		ARObjectComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARObjectComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARObjectComponent::ServerUpdatePayload(FARObjectUpdatePayload const& NewPayload)
	{
		ARObjectComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ServerUpdatePayload),&Parms);
	}
	void UARObjectComponent::StaticRegisterNativesUARObjectComponent()
	{
		UClass* Class = UARObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARObjectComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARObjectComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARObjectComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARObjectComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARObjectComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARObjectComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARObjectComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARObjectComponent_NoRegister()
	{
		return UARObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARObjectComponent_ReceiveAdd, "ReceiveAdd" }, // 407783715
		{ &Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate, "ReceiveUpdate" }, // 3066907335
		{ &Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 4236655175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARObjectComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARObjectComponent_Statics::ClassParams = {
		&UARObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARObjectComponent, 934782186);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARObjectComponent>()
	{
		return UARObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARObjectComponent(Z_Construct_UClass_UARObjectComponent, &UARObjectComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARObjectComponent"), false, nullptr, nullptr, nullptr);

	void UARObjectComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARObjectComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARObjectComponent);
	DEFINE_FUNCTION(UARMeshComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARMeshUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	static FName NAME_UARMeshComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARMeshComponent::ReceiveAdd(FARMeshUpdatePayload const& Payload)
	{
		ARMeshComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARMeshComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARMeshComponent::ReceiveUpdate(FARMeshUpdatePayload const& Payload)
	{
		ARMeshComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARMeshComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARMeshComponent::ServerUpdatePayload(FARMeshUpdatePayload const& NewPayload)
	{
		ARMeshComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ServerUpdatePayload),&Parms);
	}
	void UARMeshComponent::StaticRegisterNativesUARMeshComponent()
	{
		UClass* Class = UARMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARMeshComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARMeshComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARMeshComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARMeshComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARMeshComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARMeshComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARMeshComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARMeshComponent_NoRegister()
	{
		return UARMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARMeshComponent_ReceiveAdd, "ReceiveAdd" }, // 4291737987
		{ &Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate, "ReceiveUpdate" }, // 147889968
		{ &Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1134696321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARMeshComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARMeshComponent_Statics::ClassParams = {
		&UARMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARMeshComponent, 4144241563);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARMeshComponent>()
	{
		return UARMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARMeshComponent(Z_Construct_UClass_UARMeshComponent, &UARMeshComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARMeshComponent"), false, nullptr, nullptr, nullptr);

	void UARMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMeshComponent);
	DEFINE_FUNCTION(UARGeoAnchorComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARGeoAnchorUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoAnchorComponent::execSetGeoAnchorComponentDebugMode)
	{
		P_GET_ENUM(EGeoAnchorComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	static FName NAME_UARGeoAnchorComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARGeoAnchorComponent::ReceiveAdd(FARGeoAnchorUpdatePayload const& Payload)
	{
		ARGeoAnchorComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARGeoAnchorComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARGeoAnchorComponent::ReceiveUpdate(FARGeoAnchorUpdatePayload const& Payload)
	{
		ARGeoAnchorComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARGeoAnchorComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARGeoAnchorComponent::ServerUpdatePayload(FARGeoAnchorUpdatePayload const& NewPayload)
	{
		ARGeoAnchorComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ServerUpdatePayload),&Parms);
	}
	void UARGeoAnchorComponent::StaticRegisterNativesUARGeoAnchorComponent()
	{
		UClass* Class = UARGeoAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARGeoAnchorComponent::execServerUpdatePayload },
			{ "SetGeoAnchorComponentDebugMode", &UARGeoAnchorComponent::execSetGeoAnchorComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGeoAnchorComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGeoAnchorComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGeoAnchorComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics
	{
		struct ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms
		{
			EGeoAnchorComponentDebugMode NewDebugMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "SetGeoAnchorComponentDebugMode", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister()
	{
		return UARGeoAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARGeoAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGeoAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGeoAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd, "ReceiveAdd" }, // 1148891360
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate, "ReceiveUpdate" }, // 122280065
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 2999511306
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode, "SetGeoAnchorComponentDebugMode" }, // 1097674093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGeoAnchorComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGeoAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGeoAnchorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARGeoAnchorComponent_Statics::ClassParams = {
		&UARGeoAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGeoAnchorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARGeoAnchorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARGeoAnchorComponent, 3397322974);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGeoAnchorComponent>()
	{
		return UARGeoAnchorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARGeoAnchorComponent(Z_Construct_UClass_UARGeoAnchorComponent, &UARGeoAnchorComponent::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARGeoAnchorComponent"), false, nullptr, nullptr, nullptr);

	void UARGeoAnchorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARGeoAnchorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGeoAnchorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
