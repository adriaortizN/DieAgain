// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/BodySetupCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetupCore() {}
// Cross Module References
	PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
// End Cross Module References
	void UBodySetupCore::StaticRegisterNativesUBodySetupCore()
	{
	}
	UClass* Z_Construct_UClass_UBodySetupCore_NoRegister()
	{
		return UBodySetupCore::StaticClass();
	}
	struct Z_Construct_UClass_UBodySetupCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionReponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionReponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySetupCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BodySetupCore.h" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetupCore, BoneName), METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 *\x09If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType = { "PhysicsType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetupCore, PhysicsType), Z_Construct_UEnum_PhysicsCore_EPhysicsType, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate **/" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetupCore, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Type for this body. This eventually changes response to collision to others **/" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Type for this body. This eventually changes response to collision to others *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse = { "CollisionReponse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySetupCore, CollisionReponse), Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetupCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySetupCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetupCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodySetupCore_Statics::ClassParams = {
		&UBodySetupCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodySetupCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodySetupCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodySetupCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodySetupCore, 1323622980);
	template<> PHYSICSCORE_API UClass* StaticClass<UBodySetupCore>()
	{
		return UBodySetupCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodySetupCore(Z_Construct_UClass_UBodySetupCore, &UBodySetupCore::StaticClass, TEXT("/Script/PhysicsCore"), TEXT("UBodySetupCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySetupCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
