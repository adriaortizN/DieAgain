// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/BodySetupEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetupEnums() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
// End Cross Module References
	static UEnum* EBodyCollisionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EBodyCollisionResponse"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EBodyCollisionResponse::Type>()
	{
		return EBodyCollisionResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyCollisionResponse(EBodyCollisionResponse_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EBodyCollisionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Hash() { return 3058841985U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyCollisionResponse"), 0, Get_Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyCollisionResponse::BodyCollision_Enabled", (int64)EBodyCollisionResponse::BodyCollision_Enabled },
				{ "EBodyCollisionResponse::BodyCollision_Disabled", (int64)EBodyCollisionResponse::BodyCollision_Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BodyCollision_Disabled.DisplayName", "Disabled" },
				{ "BodyCollision_Disabled.Name", "EBodyCollisionResponse::BodyCollision_Disabled" },
				{ "BodyCollision_Enabled.DisplayName", "Enabled" },
				{ "BodyCollision_Enabled.Name", "EBodyCollisionResponse::BodyCollision_Enabled" },
				{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EBodyCollisionResponse",
				"EBodyCollisionResponse::Type",
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
	static UEnum* EPhysicsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicsType, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EPhysicsType"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicsType>()
	{
		return EPhysicsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsType(EPhysicsType_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("EPhysicsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_EPhysicsType_Hash() { return 3900219489U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsType"), 0, Get_Z_Construct_UEnum_PhysicsCore_EPhysicsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PhysType_Default", (int64)PhysType_Default },
				{ "PhysType_Kinematic", (int64)PhysType_Kinematic },
				{ "PhysType_Simulated", (int64)PhysType_Simulated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
				{ "PhysType_Default.Comment", "/** Follow owner. */" },
				{ "PhysType_Default.DisplayName", "Default" },
				{ "PhysType_Default.Name", "PhysType_Default" },
				{ "PhysType_Default.ToolTip", "Follow owner." },
				{ "PhysType_Kinematic.Comment", "/** Do not follow owner, but make kinematic. */" },
				{ "PhysType_Kinematic.DisplayName", "Kinematic" },
				{ "PhysType_Kinematic.Name", "PhysType_Kinematic" },
				{ "PhysType_Kinematic.ToolTip", "Do not follow owner, but make kinematic." },
				{ "PhysType_Simulated.Comment", "/** Do not follow owner, but simulate. */" },
				{ "PhysType_Simulated.DisplayName", "Simulated" },
				{ "PhysType_Simulated.Name", "PhysType_Simulated" },
				{ "PhysType_Simulated.ToolTip", "Do not follow owner, but simulate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"EPhysicsType",
				"EPhysicsType",
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
	static UEnum* ECollisionTraceFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, Z_Construct_UPackage__Script_PhysicsCore(), TEXT("ECollisionTraceFlag"));
		}
		return Singleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<ECollisionTraceFlag>()
	{
		return ECollisionTraceFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionTraceFlag(ECollisionTraceFlag_StaticEnum, TEXT("/Script/PhysicsCore"), TEXT("ECollisionTraceFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Hash() { return 3807153083U; }
	UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhysicsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionTraceFlag"), 0, Get_Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CTF_UseDefault", (int64)CTF_UseDefault },
				{ "CTF_UseSimpleAndComplex", (int64)CTF_UseSimpleAndComplex },
				{ "CTF_UseSimpleAsComplex", (int64)CTF_UseSimpleAsComplex },
				{ "CTF_UseComplexAsSimple", (int64)CTF_UseComplexAsSimple },
				{ "CTF_MAX", (int64)CTF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CTF_MAX.Name", "CTF_MAX" },
				{ "CTF_UseComplexAsSimple.Comment", "/** Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.) */" },
				{ "CTF_UseComplexAsSimple.DisplayName", "Use Complex Collision As Simple" },
				{ "CTF_UseComplexAsSimple.Name", "CTF_UseComplexAsSimple" },
				{ "CTF_UseComplexAsSimple.ToolTip", "Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.)" },
				{ "CTF_UseDefault.Comment", "/** Use project physics settings (DefaultShapeComplexity) */" },
				{ "CTF_UseDefault.DisplayName", "Project Default" },
				{ "CTF_UseDefault.Name", "CTF_UseDefault" },
				{ "CTF_UseDefault.ToolTip", "Use project physics settings (DefaultShapeComplexity)" },
				{ "CTF_UseSimpleAndComplex.Comment", "/** Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries.*/" },
				{ "CTF_UseSimpleAndComplex.DisplayName", "Simple And Complex" },
				{ "CTF_UseSimpleAndComplex.Name", "CTF_UseSimpleAndComplex" },
				{ "CTF_UseSimpleAndComplex.ToolTip", "Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries." },
				{ "CTF_UseSimpleAsComplex.Comment", "/** Create only simple shapes. Use simple shapes for all scene queries and collision tests.*/" },
				{ "CTF_UseSimpleAsComplex.DisplayName", "Use Simple Collision As Complex" },
				{ "CTF_UseSimpleAsComplex.Name", "CTF_UseSimpleAsComplex" },
				{ "CTF_UseSimpleAsComplex.ToolTip", "Create only simple shapes. Use simple shapes for all scene queries and collision tests." },
				{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
				nullptr,
				"ECollisionTraceFlag",
				"ECollisionTraceFlag",
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
