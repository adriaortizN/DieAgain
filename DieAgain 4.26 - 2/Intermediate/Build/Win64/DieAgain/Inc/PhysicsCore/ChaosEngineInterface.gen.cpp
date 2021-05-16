// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEngineInterface() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintFrame();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ESleepFamily();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
// End Cross Module References
	static UEnum* ELinearConstraintMotion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("ELinearConstraintMotion"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<ELinearConstraintMotion>()
	{
		return ELinearConstraintMotion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELinearConstraintMotion(ELinearConstraintMotion_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("ELinearConstraintMotion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion_Hash() { return 1684241967U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELinearConstraintMotion"), 0, Get_Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LCM_Free", (int64)LCM_Free },
				{ "LCM_Limited", (int64)LCM_Limited },
				{ "LCM_Locked", (int64)LCM_Locked },
				{ "LCM_MAX", (int64)LCM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// LINEAR DOF\n" },
				{ "LCM_Free.Comment", "/** No constraint against this axis. */" },
				{ "LCM_Free.DisplayName", "Free" },
				{ "LCM_Free.Name", "LCM_Free" },
				{ "LCM_Free.ToolTip", "No constraint against this axis." },
				{ "LCM_Limited.Comment", "/** Limited freedom along this axis. */" },
				{ "LCM_Limited.DisplayName", "Limited" },
				{ "LCM_Limited.Name", "LCM_Limited" },
				{ "LCM_Limited.ToolTip", "Limited freedom along this axis." },
				{ "LCM_Locked.Comment", "/** Fully constraint against this axis. */" },
				{ "LCM_Locked.DisplayName", "Locked" },
				{ "LCM_Locked.Name", "LCM_Locked" },
				{ "LCM_Locked.ToolTip", "Fully constraint against this axis." },
				{ "LCM_MAX.Name", "LCM_MAX" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "ToolTip", "LINEAR DOF" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"ELinearConstraintMotion",
				"ELinearConstraintMotion",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConstraintFrame_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EConstraintFrame, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EConstraintFrame"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EConstraintFrame::Type>()
	{
		return EConstraintFrame_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintFrame(EConstraintFrame_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EConstraintFrame"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EConstraintFrame_Hash() { return 1836857802U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintFrame()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintFrame"), 0, Get_Z_Construct_UEnum_PhysicsCore_EConstraintFrame_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintFrame::Frame1", (int64)EConstraintFrame::Frame1 },
				{ "EConstraintFrame::Frame2", (int64)EConstraintFrame::Frame2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum to indicate which context frame we use for physical constraints */" },
				{ "Frame1.Name", "EConstraintFrame::Frame1" },
				{ "Frame2.Name", "EConstraintFrame::Frame2" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "ToolTip", "Enum to indicate which context frame we use for physical constraints" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EConstraintFrame",
				"EConstraintFrame::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAngularConstraintMotion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EAngularConstraintMotion"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EAngularConstraintMotion>()
	{
		return EAngularConstraintMotion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAngularConstraintMotion(EAngularConstraintMotion_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EAngularConstraintMotion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion_Hash() { return 214915545U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAngularConstraintMotion"), 0, Get_Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACM_Free", (int64)ACM_Free },
				{ "ACM_Limited", (int64)ACM_Limited },
				{ "ACM_Locked", (int64)ACM_Locked },
				{ "ACM_MAX", (int64)ACM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACM_Free.Comment", "/** No constraint against this axis. */" },
				{ "ACM_Free.DisplayName", "Free" },
				{ "ACM_Free.Name", "ACM_Free" },
				{ "ACM_Free.ToolTip", "No constraint against this axis." },
				{ "ACM_Limited.Comment", "/** Limited freedom along this axis. */" },
				{ "ACM_Limited.DisplayName", "Limited" },
				{ "ACM_Limited.Name", "ACM_Limited" },
				{ "ACM_Limited.ToolTip", "Limited freedom along this axis." },
				{ "ACM_Locked.Comment", "/** Fully constraint against this axis. */" },
				{ "ACM_Locked.DisplayName", "Locked" },
				{ "ACM_Locked.Name", "ACM_Locked" },
				{ "ACM_Locked.ToolTip", "Fully constraint against this axis." },
				{ "ACM_MAX.Name", "ACM_MAX" },
				{ "Comment", "/** Specifies angular degrees of freedom */" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "ToolTip", "Specifies angular degrees of freedom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EAngularConstraintMotion",
				"EAngularConstraintMotion",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESleepFamily_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ESleepFamily, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("ESleepFamily"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<ESleepFamily>()
	{
		return ESleepFamily_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESleepFamily(ESleepFamily_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("ESleepFamily"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_ESleepFamily_Hash() { return 2800517028U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_ESleepFamily()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESleepFamily"), 0, Get_Z_Construct_UEnum_PhysicsCore_ESleepFamily_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESleepFamily::Normal", (int64)ESleepFamily::Normal },
				{ "ESleepFamily::Sensitive", (int64)ESleepFamily::Sensitive },
				{ "ESleepFamily::Custom", (int64)ESleepFamily::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Presets of values used in considering when put this body to sleep. */" },
				{ "Custom.Comment", "/** Specify your own sleep threshold multiplier */" },
				{ "Custom.Name", "ESleepFamily::Custom" },
				{ "Custom.ToolTip", "Specify your own sleep threshold multiplier" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "Normal.Comment", "/** Engine defaults. */" },
				{ "Normal.Name", "ESleepFamily::Normal" },
				{ "Normal.ToolTip", "Engine defaults." },
				{ "Sensitive.Comment", "/** A family of values with a lower sleep threshold; good for slower pendulum-like physics. */" },
				{ "Sensitive.Name", "ESleepFamily::Sensitive" },
				{ "Sensitive.ToolTip", "A family of values with a lower sleep threshold; good for slower pendulum-like physics." },
				{ "ToolTip", "Presets of values used in considering when put this body to sleep." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"ESleepFamily",
				"ESleepFamily",
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
	static UEnum* ERadialImpulseFalloff_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("ERadialImpulseFalloff"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<ERadialImpulseFalloff>()
	{
		return ERadialImpulseFalloff_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERadialImpulseFalloff(ERadialImpulseFalloff_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("ERadialImpulseFalloff"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff_Hash() { return 1919160856U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERadialImpulseFalloff"), 0, Get_Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RIF_Constant", (int64)RIF_Constant },
				{ "RIF_Linear", (int64)RIF_Linear },
				{ "RIF_MAX", (int64)RIF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum for controlling the falloff of strength of a radial impulse as a function of distance from Origin. */" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "RIF_Constant.Comment", "/** Impulse is a constant strength, up to the limit of its range. */" },
				{ "RIF_Constant.Name", "RIF_Constant" },
				{ "RIF_Constant.ToolTip", "Impulse is a constant strength, up to the limit of its range." },
				{ "RIF_Linear.Comment", "/** Impulse should get linearly weaker the further from origin. */" },
				{ "RIF_Linear.Name", "RIF_Linear" },
				{ "RIF_Linear.ToolTip", "Impulse should get linearly weaker the further from origin." },
				{ "RIF_MAX.Name", "RIF_MAX" },
				{ "ToolTip", "Enum for controlling the falloff of strength of a radial impulse as a function of distance from Origin." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"ERadialImpulseFalloff",
				"ERadialImpulseFalloff",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPhysicalSurface_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EPhysicalSurface"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicalSurface>()
	{
		return EPhysicalSurface_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicalSurface(EPhysicalSurface_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EPhysicalSurface"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EPhysicalSurface_Hash() { return 1770378598U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicalSurface"), 0, Get_Z_Construct_UEnum_PhysicsCore_EPhysicalSurface_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SurfaceType_Default", (int64)SurfaceType_Default },
				{ "SurfaceType1", (int64)SurfaceType1 },
				{ "SurfaceType2", (int64)SurfaceType2 },
				{ "SurfaceType3", (int64)SurfaceType3 },
				{ "SurfaceType4", (int64)SurfaceType4 },
				{ "SurfaceType5", (int64)SurfaceType5 },
				{ "SurfaceType6", (int64)SurfaceType6 },
				{ "SurfaceType7", (int64)SurfaceType7 },
				{ "SurfaceType8", (int64)SurfaceType8 },
				{ "SurfaceType9", (int64)SurfaceType9 },
				{ "SurfaceType10", (int64)SurfaceType10 },
				{ "SurfaceType11", (int64)SurfaceType11 },
				{ "SurfaceType12", (int64)SurfaceType12 },
				{ "SurfaceType13", (int64)SurfaceType13 },
				{ "SurfaceType14", (int64)SurfaceType14 },
				{ "SurfaceType15", (int64)SurfaceType15 },
				{ "SurfaceType16", (int64)SurfaceType16 },
				{ "SurfaceType17", (int64)SurfaceType17 },
				{ "SurfaceType18", (int64)SurfaceType18 },
				{ "SurfaceType19", (int64)SurfaceType19 },
				{ "SurfaceType20", (int64)SurfaceType20 },
				{ "SurfaceType21", (int64)SurfaceType21 },
				{ "SurfaceType22", (int64)SurfaceType22 },
				{ "SurfaceType23", (int64)SurfaceType23 },
				{ "SurfaceType24", (int64)SurfaceType24 },
				{ "SurfaceType25", (int64)SurfaceType25 },
				{ "SurfaceType26", (int64)SurfaceType26 },
				{ "SurfaceType27", (int64)SurfaceType27 },
				{ "SurfaceType28", (int64)SurfaceType28 },
				{ "SurfaceType29", (int64)SurfaceType29 },
				{ "SurfaceType30", (int64)SurfaceType30 },
				{ "SurfaceType31", (int64)SurfaceType31 },
				{ "SurfaceType32", (int64)SurfaceType32 },
				{ "SurfaceType33", (int64)SurfaceType33 },
				{ "SurfaceType34", (int64)SurfaceType34 },
				{ "SurfaceType35", (int64)SurfaceType35 },
				{ "SurfaceType36", (int64)SurfaceType36 },
				{ "SurfaceType37", (int64)SurfaceType37 },
				{ "SurfaceType38", (int64)SurfaceType38 },
				{ "SurfaceType39", (int64)SurfaceType39 },
				{ "SurfaceType40", (int64)SurfaceType40 },
				{ "SurfaceType41", (int64)SurfaceType41 },
				{ "SurfaceType42", (int64)SurfaceType42 },
				{ "SurfaceType43", (int64)SurfaceType43 },
				{ "SurfaceType44", (int64)SurfaceType44 },
				{ "SurfaceType45", (int64)SurfaceType45 },
				{ "SurfaceType46", (int64)SurfaceType46 },
				{ "SurfaceType47", (int64)SurfaceType47 },
				{ "SurfaceType48", (int64)SurfaceType48 },
				{ "SurfaceType49", (int64)SurfaceType49 },
				{ "SurfaceType50", (int64)SurfaceType50 },
				{ "SurfaceType51", (int64)SurfaceType51 },
				{ "SurfaceType52", (int64)SurfaceType52 },
				{ "SurfaceType53", (int64)SurfaceType53 },
				{ "SurfaceType54", (int64)SurfaceType54 },
				{ "SurfaceType55", (int64)SurfaceType55 },
				{ "SurfaceType56", (int64)SurfaceType56 },
				{ "SurfaceType57", (int64)SurfaceType57 },
				{ "SurfaceType58", (int64)SurfaceType58 },
				{ "SurfaceType59", (int64)SurfaceType59 },
				{ "SurfaceType60", (int64)SurfaceType60 },
				{ "SurfaceType61", (int64)SurfaceType61 },
				{ "SurfaceType62", (int64)SurfaceType62 },
				{ "SurfaceType_Max", (int64)SurfaceType_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of surfaces in the game, used by Physical Materials */" },
				{ "ModuleRelativePath", "Public/Chaos/ChaosEngineInterface.h" },
				{ "SurfaceType1.Hidden", "" },
				{ "SurfaceType1.Name", "SurfaceType1" },
				{ "SurfaceType10.Hidden", "" },
				{ "SurfaceType10.Name", "SurfaceType10" },
				{ "SurfaceType11.Hidden", "" },
				{ "SurfaceType11.Name", "SurfaceType11" },
				{ "SurfaceType12.Hidden", "" },
				{ "SurfaceType12.Name", "SurfaceType12" },
				{ "SurfaceType13.Hidden", "" },
				{ "SurfaceType13.Name", "SurfaceType13" },
				{ "SurfaceType14.Hidden", "" },
				{ "SurfaceType14.Name", "SurfaceType14" },
				{ "SurfaceType15.Hidden", "" },
				{ "SurfaceType15.Name", "SurfaceType15" },
				{ "SurfaceType16.Hidden", "" },
				{ "SurfaceType16.Name", "SurfaceType16" },
				{ "SurfaceType17.Hidden", "" },
				{ "SurfaceType17.Name", "SurfaceType17" },
				{ "SurfaceType18.Hidden", "" },
				{ "SurfaceType18.Name", "SurfaceType18" },
				{ "SurfaceType19.Hidden", "" },
				{ "SurfaceType19.Name", "SurfaceType19" },
				{ "SurfaceType2.Hidden", "" },
				{ "SurfaceType2.Name", "SurfaceType2" },
				{ "SurfaceType20.Hidden", "" },
				{ "SurfaceType20.Name", "SurfaceType20" },
				{ "SurfaceType21.Hidden", "" },
				{ "SurfaceType21.Name", "SurfaceType21" },
				{ "SurfaceType22.Hidden", "" },
				{ "SurfaceType22.Name", "SurfaceType22" },
				{ "SurfaceType23.Hidden", "" },
				{ "SurfaceType23.Name", "SurfaceType23" },
				{ "SurfaceType24.Hidden", "" },
				{ "SurfaceType24.Name", "SurfaceType24" },
				{ "SurfaceType25.Hidden", "" },
				{ "SurfaceType25.Name", "SurfaceType25" },
				{ "SurfaceType26.Hidden", "" },
				{ "SurfaceType26.Name", "SurfaceType26" },
				{ "SurfaceType27.Hidden", "" },
				{ "SurfaceType27.Name", "SurfaceType27" },
				{ "SurfaceType28.Hidden", "" },
				{ "SurfaceType28.Name", "SurfaceType28" },
				{ "SurfaceType29.Hidden", "" },
				{ "SurfaceType29.Name", "SurfaceType29" },
				{ "SurfaceType3.Hidden", "" },
				{ "SurfaceType3.Name", "SurfaceType3" },
				{ "SurfaceType30.Hidden", "" },
				{ "SurfaceType30.Name", "SurfaceType30" },
				{ "SurfaceType31.Hidden", "" },
				{ "SurfaceType31.Name", "SurfaceType31" },
				{ "SurfaceType32.Hidden", "" },
				{ "SurfaceType32.Name", "SurfaceType32" },
				{ "SurfaceType33.Hidden", "" },
				{ "SurfaceType33.Name", "SurfaceType33" },
				{ "SurfaceType34.Hidden", "" },
				{ "SurfaceType34.Name", "SurfaceType34" },
				{ "SurfaceType35.Hidden", "" },
				{ "SurfaceType35.Name", "SurfaceType35" },
				{ "SurfaceType36.Hidden", "" },
				{ "SurfaceType36.Name", "SurfaceType36" },
				{ "SurfaceType37.Hidden", "" },
				{ "SurfaceType37.Name", "SurfaceType37" },
				{ "SurfaceType38.Hidden", "" },
				{ "SurfaceType38.Name", "SurfaceType38" },
				{ "SurfaceType39.Hidden", "" },
				{ "SurfaceType39.Name", "SurfaceType39" },
				{ "SurfaceType4.Hidden", "" },
				{ "SurfaceType4.Name", "SurfaceType4" },
				{ "SurfaceType40.Hidden", "" },
				{ "SurfaceType40.Name", "SurfaceType40" },
				{ "SurfaceType41.Hidden", "" },
				{ "SurfaceType41.Name", "SurfaceType41" },
				{ "SurfaceType42.Hidden", "" },
				{ "SurfaceType42.Name", "SurfaceType42" },
				{ "SurfaceType43.Hidden", "" },
				{ "SurfaceType43.Name", "SurfaceType43" },
				{ "SurfaceType44.Hidden", "" },
				{ "SurfaceType44.Name", "SurfaceType44" },
				{ "SurfaceType45.Hidden", "" },
				{ "SurfaceType45.Name", "SurfaceType45" },
				{ "SurfaceType46.Hidden", "" },
				{ "SurfaceType46.Name", "SurfaceType46" },
				{ "SurfaceType47.Hidden", "" },
				{ "SurfaceType47.Name", "SurfaceType47" },
				{ "SurfaceType48.Hidden", "" },
				{ "SurfaceType48.Name", "SurfaceType48" },
				{ "SurfaceType49.Hidden", "" },
				{ "SurfaceType49.Name", "SurfaceType49" },
				{ "SurfaceType5.Hidden", "" },
				{ "SurfaceType5.Name", "SurfaceType5" },
				{ "SurfaceType50.Hidden", "" },
				{ "SurfaceType50.Name", "SurfaceType50" },
				{ "SurfaceType51.Hidden", "" },
				{ "SurfaceType51.Name", "SurfaceType51" },
				{ "SurfaceType52.Hidden", "" },
				{ "SurfaceType52.Name", "SurfaceType52" },
				{ "SurfaceType53.Hidden", "" },
				{ "SurfaceType53.Name", "SurfaceType53" },
				{ "SurfaceType54.Hidden", "" },
				{ "SurfaceType54.Name", "SurfaceType54" },
				{ "SurfaceType55.Hidden", "" },
				{ "SurfaceType55.Name", "SurfaceType55" },
				{ "SurfaceType56.Hidden", "" },
				{ "SurfaceType56.Name", "SurfaceType56" },
				{ "SurfaceType57.Hidden", "" },
				{ "SurfaceType57.Name", "SurfaceType57" },
				{ "SurfaceType58.Hidden", "" },
				{ "SurfaceType58.Name", "SurfaceType58" },
				{ "SurfaceType59.Hidden", "" },
				{ "SurfaceType59.Name", "SurfaceType59" },
				{ "SurfaceType6.Hidden", "" },
				{ "SurfaceType6.Name", "SurfaceType6" },
				{ "SurfaceType60.Hidden", "" },
				{ "SurfaceType60.Name", "SurfaceType60" },
				{ "SurfaceType61.Hidden", "" },
				{ "SurfaceType61.Name", "SurfaceType61" },
				{ "SurfaceType62.Hidden", "" },
				{ "SurfaceType62.Name", "SurfaceType62" },
				{ "SurfaceType7.Hidden", "" },
				{ "SurfaceType7.Name", "SurfaceType7" },
				{ "SurfaceType8.Hidden", "" },
				{ "SurfaceType8.Name", "SurfaceType8" },
				{ "SurfaceType9.Hidden", "" },
				{ "SurfaceType9.Name", "SurfaceType9" },
				{ "SurfaceType_Default.DisplayName", "Default" },
				{ "SurfaceType_Default.Name", "SurfaceType_Default" },
				{ "SurfaceType_Max.Hidden", "" },
				{ "SurfaceType_Max.Name", "SurfaceType_Max" },
				{ "ToolTip", "Types of surfaces in the game, used by Physical Materials" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EPhysicalSurface",
				"EPhysicalSurface",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
