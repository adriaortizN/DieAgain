// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/PhysicsSettingsCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettingsCore() {}
// Cross Module References
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicsSettingsCore_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicsSettingsCore();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration();
// End Cross Module References
	void UPhysicsSettingsCore::StaticRegisterNativesUPhysicsSettingsCore()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsSettingsCore_NoRegister()
	{
		return UPhysicsSettingsCore::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsSettingsCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultGravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTerminalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTerminalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFluidFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulateScratchMemorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimulateScratchMemorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollAggregateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RagdollAggregateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriangleMeshTriangleMinAreaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShapeSharing_MetaData[];
#endif
		static void NewProp_bEnableShapeSharing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShapeSharing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePCM_MetaData[];
#endif
		static void NewProp_bEnablePCM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePCM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStabilization_MetaData[];
#endif
		static void NewProp_bEnableStabilization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStabilization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingLocks_MetaData[];
#endif
		static void NewProp_bWarnMissingLocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingLocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable2DPhysics_MetaData[];
#endif
		static void NewProp_bEnable2DPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable2DPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultHasComplexCollision_MetaData[];
#endif
		static void NewProp_bDefaultHasComplexCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultHasComplexCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceThresholdVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceThresholdVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactOffsetMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactOffsetMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinContactOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinContactOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxContactOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxContactOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateSkeletalMeshOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeComplexity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultShapeComplexity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SolverOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsSettingsCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default physics settings.\n */" },
		{ "DisplayName", "Physics" },
		{ "IncludePath", "PhysicsSettingsCore.h" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Default physics settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultGravityZ_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "/** Default gravity. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Default gravity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultGravityZ = { "DefaultGravityZ", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, DefaultGravityZ), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultGravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultGravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultTerminalVelocity_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "/** Default terminal velocity for Physics Volumes. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Default terminal velocity for Physics Volumes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultTerminalVelocity = { "DefaultTerminalVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, DefaultTerminalVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultTerminalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultTerminalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultFluidFriction_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "/** Default fluid friction for Physics Volumes. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Default fluid friction for Physics Volumes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultFluidFriction = { "DefaultFluidFriction", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, DefaultFluidFriction), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultFluidFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultFluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SimulateScratchMemorySize_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount of memory to reserve for PhysX simulate(), this is per pxscene and will be rounded up to the next 16K boundary */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Amount of memory to reserve for PhysX simulate(), this is per pxscene and will be rounded up to the next 16K boundary" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SimulateScratchMemorySize = { "SimulateScratchMemorySize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, SimulateScratchMemorySize), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SimulateScratchMemorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SimulateScratchMemorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RagdollAggregateThreshold_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMax", "127" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Threshold for ragdoll bodies above which they will be added to an aggregate before being added to the scene */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Threshold for ragdoll bodies above which they will be added to an aggregate before being added to the scene" },
		{ "UIMax", "127" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RagdollAggregateThreshold = { "RagdollAggregateThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, RagdollAggregateThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RagdollAggregateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RagdollAggregateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Triangles from triangle meshes (BSP) with an area less than or equal to this value will be removed from physics collision data. Set to less than 0 to disable. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Triangles from triangle meshes (BSP) with an area less than or equal to this value will be removed from physics collision data. Set to less than 0 to disable." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold = { "TriangleMeshTriangleMinAreaThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, TriangleMeshTriangleMinAreaThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Enables shape sharing between sync and async scene for static rigid actors */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Enables shape sharing between sync and async scene for static rigid actors" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bEnableShapeSharing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing = { "bEnableShapeSharing", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Enables persistent contact manifolds. This will generate fewer contact points, but with more accuracy. Reduces stability of stacking, but can help energy conservation.*/" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Enables persistent contact manifolds. This will generate fewer contact points, but with more accuracy. Reduces stability of stacking, but can help energy conservation." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bEnablePCM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM = { "bEnablePCM", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Enables stabilization of contacts for slow moving bodies. This will help improve the stability of stacking.*/" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Enables stabilization of contacts for slow moving bodies. This will help improve the stability of stacking." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bEnableStabilization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization = { "bEnableStabilization", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Whether to warn when physics locks are used incorrectly. Turning this off is not recommended and should only be used by very advanced users. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Whether to warn when physics locks are used incorrectly. Turning this off is not recommended and should only be used by very advanced users." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bWarnMissingLocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks = { "bWarnMissingLocks", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Can 2D physics be used (Box2D)? */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Can 2D physics be used (Box2D)?" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bEnable2DPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics = { "bEnable2DPhysics", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_MetaData[] = {
		{ "Comment", "/**\n\x09*  If true, static meshes will use per poly collision as complex collision by default. If false the default behavior is the same as UseSimpleAsComplex. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "If true, static meshes will use per poly collision as complex collision by default. If false the default behavior is the same as UseSimpleAsComplex." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bDefaultHasComplexCollision_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision = { "bDefaultHasComplexCollision", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_BounceThresholdVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum relative velocity required for an object to bounce. A typical value for simulation stability is about 0.2 * gravity*/" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Minimum relative velocity required for an object to bounce. A typical value for simulation stability is about 0.2 * gravity" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_BounceThresholdVelocity = { "BounceThresholdVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, BounceThresholdVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_BounceThresholdVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_BounceThresholdVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_FrictionCombineMode_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Friction combine mode, controls how friction is computed for multiple materials. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_FrictionCombineMode = { "FrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, FrictionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_FrictionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_FrictionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RestitutionCombineMode_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Restitution combine mode, controls how restitution is computed for multiple materials. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RestitutionCombineMode = { "RestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, RestitutionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RestitutionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RestitutionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Max angular velocity that a simulated object can achieve.*/" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Max angular velocity that a simulated object can achieve." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, MaxAngularVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Max velocity which may be used to depenetrate simulated physics objects. 0 means no maximum. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Max velocity which may be used to depenetrate simulated physics objects. 0 means no maximum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxDepenetrationVelocity = { "MaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, MaxDepenetrationVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxDepenetrationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_ContactOffsetMultiplier_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Contact offset multiplier. When creating a physics shape we look at its bounding volume and multiply its minimum value by this multiplier. A bigger number will generate contact points earlier which results in higher stability at the cost of performance. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Contact offset multiplier. When creating a physics shape we look at its bounding volume and multiply its minimum value by this multiplier. A bigger number will generate contact points earlier which results in higher stability at the cost of performance." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_ContactOffsetMultiplier = { "ContactOffsetMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, ContactOffsetMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_ContactOffsetMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_ContactOffsetMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MinContactOffset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Min Contact offset. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Min Contact offset." },
		{ "UIMin", "0.0001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MinContactOffset = { "MinContactOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, MinContactOffset), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MinContactOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MinContactOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxContactOffset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Max Contact offset. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Max Contact offset." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxContactOffset = { "MaxContactOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, MaxContactOffset), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxContactOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxContactOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09*  If true, simulate physics for this component on a dedicated server.\n\x09*  This should be set if simulating physics and replicating with a dedicated server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "If true, simulate physics for this component on a dedicated server.\nThis should be set if simulating physics and replicating with a dedicated server." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit(void* Obj)
	{
		((UPhysicsSettingsCore*)Obj)->bSimulateSkeletalMeshOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer = { "bSimulateSkeletalMeshOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettingsCore), &Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultShapeComplexity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09*  Determines the default physics shape complexity. */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Determines the default physics shape complexity." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultShapeComplexity = { "DefaultShapeComplexity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, DefaultShapeComplexity), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultShapeComplexity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultShapeComplexity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SolverOptions_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Options to apply to Chaos solvers on creation */" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsCore.h" },
		{ "ToolTip", "Options to apply to Chaos solvers on creation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SolverOptions = { "SolverOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettingsCore, SolverOptions), Z_Construct_UScriptStruct_FChaosSolverConfiguration, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SolverOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SolverOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSettingsCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultTerminalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultFluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SimulateScratchMemorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RagdollAggregateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_BounceThresholdVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_FrictionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_RestitutionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_ContactOffsetMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MinContactOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_MaxContactOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_DefaultShapeComplexity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_SolverOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsSettingsCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSettingsCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSettingsCore_Statics::ClassParams = {
		&UPhysicsSettingsCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsSettingsCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettingsCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettingsCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsSettingsCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsSettingsCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsSettingsCore, 401190673);
	template<> PHYSICSCORE_API UClass* StaticClass<UPhysicsSettingsCore>()
	{
		return UPhysicsSettingsCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSettingsCore(Z_Construct_UClass_UPhysicsSettingsCore, &UPhysicsSettingsCore::StaticClass, TEXT("/Script/PhysicsCore"), TEXT("UPhysicsSettingsCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSettingsCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
