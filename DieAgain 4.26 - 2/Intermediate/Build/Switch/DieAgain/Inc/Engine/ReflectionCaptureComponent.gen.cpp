// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileReflectionCompression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EMobileReflectionCompression_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileReflectionCompression, Z_Construct_UPackage__Script_Engine(), TEXT("EMobileReflectionCompression"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileReflectionCompression>()
	{
		return EMobileReflectionCompression_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMobileReflectionCompression(EMobileReflectionCompression_StaticEnum, TEXT("/Script/Engine"), TEXT("EMobileReflectionCompression"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMobileReflectionCompression_Hash() { return 1667681166U; }
	UEnum* Z_Construct_UEnum_Engine_EMobileReflectionCompression()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMobileReflectionCompression"), 0, Get_Z_Construct_UEnum_Engine_EMobileReflectionCompression_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMobileReflectionCompression::Default", (int64)EMobileReflectionCompression::Default },
				{ "EMobileReflectionCompression::On", (int64)EMobileReflectionCompression::On },
				{ "EMobileReflectionCompression::Off", (int64)EMobileReflectionCompression::Off },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "EMobileReflectionCompression::Default" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "Off.Name", "EMobileReflectionCompression::Off" },
				{ "On.Name", "EMobileReflectionCompression::On" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMobileReflectionCompression",
				"EMobileReflectionCompression",
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
	static UEnum* EReflectionSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionSourceType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>()
	{
		return EReflectionSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionSourceType(EReflectionSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("EReflectionSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReflectionSourceType_Hash() { return 3099829713U; }
	UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionSourceType"), 0, Get_Z_Construct_UEnum_Engine_EReflectionSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionSourceType::CapturedScene", (int64)EReflectionSourceType::CapturedScene },
				{ "EReflectionSourceType::SpecifiedCubemap", (int64)EReflectionSourceType::SpecifiedCubemap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CapturedScene.Comment", "/** Construct the reflection source from the captured scene*/" },
				{ "CapturedScene.Name", "EReflectionSourceType::CapturedScene" },
				{ "CapturedScene.ToolTip", "Construct the reflection source from the captured scene" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "SpecifiedCubemap.Comment", "/** Construct the reflection source from the specified cubemap. */" },
				{ "SpecifiedCubemap.Name", "EReflectionSourceType::SpecifiedCubemap" },
				{ "SpecifiedCubemap.ToolTip", "Construct the reflection source from the specified cubemap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EReflectionSourceType",
				"EReflectionSourceType",
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
	void UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureOffsetComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileReflectionCompression_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileReflectionCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MobileReflectionCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifyMaxValueRGBM_MetaData[];
#endif
		static void NewProp_bModifyMaxValueRGBM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyMaxValueRGBM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueRGBM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValueRGBM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedEncodedHDRCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedEncodedHDRCubemap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent = { "CaptureOffsetComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Indicates where to get the reflection source from. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates where to get the reflection source from." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType = { "ReflectionSourceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** Indicates if the Reflection will be compressed for mobile. If set to default it will take the project wide setting.*/" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates if the Reflection will be compressed for mobile. If set to default it will take the project wide setting." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression = { "MobileReflectionCompression", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MobileReflectionCompression), Z_Construct_UEnum_Engine_EMobileReflectionCompression, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, SourceCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** A brightness control to scale the captured scene's reflection intensity. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "A brightness control to scale the captured scene's reflection intensity." },
		{ "UIMax", "4" },
		{ "UIMin", ".5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Brightness), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** Indicates if we want to manually modify the MaxRGBM value.*/" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates if we want to manually modify the MaxRGBM value." },
	};
#endif
	void Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_SetBit(void* Obj)
	{
		((UReflectionCaptureComponent*)Obj)->bModifyMaxValueRGBM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM = { "bModifyMaxValueRGBM", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReflectionCaptureComponent), &Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** M values for RGBM, it will dynamically be generated by taking the highest RGB value into account. Explictly modifying it will require a Reflection Re-Capture.*/" },
		{ "EditCondition", "bModifyMaxValueRGBM == true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "M values for RGBM, it will dynamically be generated by taking the highest RGB value into account. Explictly modifying it will require a Reflection Re-Capture." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM = { "MaxValueRGBM", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MaxValueRGBM), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** World space offset to apply before capturing. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "World space offset to apply before capturing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData[] = {
		{ "Comment", "/** Guid for map build data */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Guid for map build data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData[] = {
		{ "Comment", "/** Cached Cubemap texture from MapBuildData used for rendering with the encoded HDR values. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cached Cubemap texture from MapBuildData used for rendering with the encoded HDR values." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap = { "CachedEncodedHDRCubemap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CachedEncodedHDRCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams = {
		&UReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReflectionCaptureComponent, 1599039716);
	template<> ENGINE_API UClass* StaticClass<UReflectionCaptureComponent>()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReflectionCaptureComponent(Z_Construct_UClass_UReflectionCaptureComponent, &UReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReflectionCaptureComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
