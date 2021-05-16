// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsDOF();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsSettings();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicsSettingsCore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyErrorCorrection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings();
// End Cross Module References
	static UEnum* ESettingsLockedAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsLockedAxis"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESettingsLockedAxis::Type>()
	{
		return ESettingsLockedAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsLockedAxis(ESettingsLockedAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsLockedAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_Hash() { return 1878076840U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsLockedAxis"), 0, Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsLockedAxis::None", (int64)ESettingsLockedAxis::None },
				{ "ESettingsLockedAxis::X", (int64)ESettingsLockedAxis::X },
				{ "ESettingsLockedAxis::Y", (int64)ESettingsLockedAxis::Y },
				{ "ESettingsLockedAxis::Z", (int64)ESettingsLockedAxis::Z },
				{ "ESettingsLockedAxis::Invalid", (int64)ESettingsLockedAxis::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Comment", "/** Used for backwards compatibility. Indicates that we've updated into the new struct. */" },
				{ "Invalid.Name", "ESettingsLockedAxis::Invalid" },
				{ "Invalid.ToolTip", "Used for backwards compatibility. Indicates that we've updated into the new struct." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "None.Comment", "/** No axis is locked. */" },
				{ "None.Name", "ESettingsLockedAxis::None" },
				{ "None.ToolTip", "No axis is locked." },
				{ "X.Comment", "/** Lock movement along the x-axis. */" },
				{ "X.Name", "ESettingsLockedAxis::X" },
				{ "X.ToolTip", "Lock movement along the x-axis." },
				{ "Y.Comment", "/** Lock movement along the y-axis. */" },
				{ "Y.Name", "ESettingsLockedAxis::Y" },
				{ "Y.ToolTip", "Lock movement along the y-axis." },
				{ "Z.Comment", "/** Lock movement along the z-axis. */" },
				{ "Z.Name", "ESettingsLockedAxis::Z" },
				{ "Z.ToolTip", "Lock movement along the z-axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESettingsLockedAxis",
				"ESettingsLockedAxis::Type",
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
	static UEnum* ESettingsDOF_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsDOF"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESettingsDOF::Type>()
	{
		return ESettingsDOF_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsDOF(ESettingsDOF_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsDOF"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsDOF_Hash() { return 2231289011U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsDOF()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsDOF"), 0, Get_Z_Construct_UEnum_Engine_ESettingsDOF_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsDOF::Full3D", (int64)ESettingsDOF::Full3D },
				{ "ESettingsDOF::YZPlane", (int64)ESettingsDOF::YZPlane },
				{ "ESettingsDOF::XZPlane", (int64)ESettingsDOF::XZPlane },
				{ "ESettingsDOF::XYPlane", (int64)ESettingsDOF::XYPlane },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Full3D.Comment", "/** Allows for full 3D movement and rotation. */" },
				{ "Full3D.Name", "ESettingsDOF::Full3D" },
				{ "Full3D.ToolTip", "Allows for full 3D movement and rotation." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "XYPlane.Comment", "/** Allows 2D movement along the X-Y plane. */" },
				{ "XYPlane.Name", "ESettingsDOF::XYPlane" },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.Comment", "/** Allows 2D movement along the X-Z plane. */" },
				{ "XZPlane.Name", "ESettingsDOF::XZPlane" },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.Comment", "/** Allows 2D movement along the Y-Z plane. */" },
				{ "YZPlane.Name", "ESettingsDOF::YZPlane" },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESettingsDOF",
				"ESettingsDOF::Type",
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
class UScriptStruct* FChaosPhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ChaosPhysicsSettings"), sizeof(FChaosPhysicsSettings), Get_Z_Construct_UScriptStruct_FChaosPhysicsSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChaosPhysicsSettings>()
{
	return FChaosPhysicsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosPhysicsSettings(FChaosPhysicsSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ChaosPhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFChaosPhysicsSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFChaosPhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosPhysicsSettings")),new UScriptStruct::TCppStructOps<FChaosPhysicsSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFChaosPhysicsSettings;
	struct Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultThreadingModel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultThreadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultThreadingModel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DedicatedThreadTickMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DedicatedThreadTickMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DedicatedThreadTickMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DedicatedThreadBufferMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DedicatedThreadBufferMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DedicatedThreadBufferMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n  * Settings container for Chaos physics engine settings, accessed in Chaos through a setting provider interface.\n  * See: IChaosSettingsProvider\n  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Settings container for Chaos physics engine settings, accessed in Chaos through a setting provider interface.\nSee: IChaosSettingsProvider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosPhysicsSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Default threading model to use on module initialisation. Can be switched at runtime using p.Chaos.ThreadingModel */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default threading model to use on module initialisation. Can be switched at runtime using p.Chaos.ThreadingModel" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel = { "DefaultThreadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DefaultThreadingModel), Z_Construct_UEnum_Chaos_EChaosThreadingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** The framerate/timestep ticking mode when running with a dedicated thread */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The framerate/timestep ticking mode when running with a dedicated thread" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode = { "DedicatedThreadTickMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DedicatedThreadTickMode), Z_Construct_UEnum_Chaos_EChaosSolverTickMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** The buffering mode to use when running with a dedicated thread */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The buffering mode to use when running with a dedicated thread" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode = { "DedicatedThreadBufferMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DedicatedThreadBufferMode), Z_Construct_UEnum_Chaos_EChaosBufferMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ChaosPhysicsSettings",
		sizeof(FChaosPhysicsSettings),
		alignof(FChaosPhysicsSettings),
		Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosPhysicsSettings"), sizeof(FChaosPhysicsSettings), Get_Z_Construct_UScriptStruct_FChaosPhysicsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosPhysicsSettings_Hash() { return 1949387982U; }
class UScriptStruct* FPhysicalSurfaceName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceName, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicalSurfaceName>()
{
	return FPhysicalSurfaceName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSurfaceName(FPhysicalSurfaceName::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalSurfaceName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSurfaceName")),new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName;
	struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents the name of physical surfaces.\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Structure that represents the name of physical surfaces." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSurfaceName, Type), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSurfaceName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicalSurfaceName",
		sizeof(FPhysicalSurfaceName),
		alignof(FPhysicalSurfaceName),
		Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_Hash() { return 4200506565U; }
	void UPhysicsSettings::StaticRegisterNativesUPhysicsSettings()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister()
	{
		return UPhysicsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicErrorCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicErrorCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDegreesOfFreedom_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultDegreesOfFreedom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressFaceRemapTable_MetaData[];
#endif
		static void NewProp_bSuppressFaceRemapTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressFaceRemapTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUVFromHitResults_MetaData[];
#endif
		static void NewProp_bSupportUVFromHitResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUVFromHitResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveActors_MetaData[];
#endif
		static void NewProp_bDisableActiveActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicStaticPairs_MetaData[];
#endif
		static void NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicStaticPairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicKinematicPairs_MetaData[];
#endif
		static void NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicKinematicPairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCCD_MetaData[];
#endif
		static void NewProp_bDisableCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEnhancedDeterminism_MetaData[];
#endif
		static void NewProp_bEnableEnhancedDeterminism_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEnhancedDeterminism;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPhysicsMinDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPhysicsMinDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateAnimPhysicsAfterReset_MetaData[];
#endif
		static void NewProp_bSimulateAnimPhysicsAfterReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateAnimPhysicsAfterReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubstepping_MetaData[];
#endif
		static void NewProp_bSubstepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubstepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubsteppingAsync_MetaData[];
#endif
		static void NewProp_bSubsteppingAsync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubsteppingAsync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubstepDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSubstepDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubsteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSubsteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncSceneSmoothingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncSceneSmoothingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAverageFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAverageFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysXTreeRebuildRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PhysXTreeRebuildRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBroadphaseSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBroadphaseSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDeltaVelocityForHitEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDeltaVelocityForHitEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChaosSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsSettingsCore,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default physics settings.\n */" },
		{ "DisplayName", "Physics" },
		{ "IncludePath", "PhysicsEngine/PhysicsSettings.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default physics settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Error correction data for replicating simulated physics (rigid bodies) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Error correction data for replicating simulated physics (rigid bodies)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection = { "PhysicErrorCorrection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, PhysicErrorCorrection), Z_Construct_UScriptStruct_FRigidBodyErrorCorrection, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, LockedAxis_DEPRECATED), Z_Construct_UEnum_Engine_ESettingsLockedAxis, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom = { "DefaultDegreesOfFreedom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, DefaultDegreesOfFreedom), Z_Construct_UEnum_Engine_ESettingsDOF, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09*  If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSuppressFaceRemapTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable = { "bSuppressFaceRemapTable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support UV From Hit Results" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSupportUVFromHitResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults = { "bSupportUVFromHitResults", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09* If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableActiveActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors = { "bDisableActiveActors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableKinematicStaticPairs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs = { "bDisableKinematicStaticPairs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableKinematicKinematicPairs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs = { "bDisableKinematicKinematicPairs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09*  If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD = { "bDisableCCD", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** If set to true, the scene will use enhanced determinism at the cost of a bit more resources. See eENABLE_ENHANCED_DETERMINISM to learn about the specifics */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If set to true, the scene will use enhanced determinism at the cost of a bit more resources. See eENABLE_ENHANCED_DETERMINISM to learn about the specifics" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnableEnhancedDeterminism = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism = { "bEnableEnhancedDeterminism", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Delta Time below which anim dynamics and rigidbody nodes will not simulate. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Min Delta Time below which anim dynamics and rigidbody nodes will not simulate." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime = { "AnimPhysicsMinDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, AnimPhysicsMinDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Whether to simulate anim physics nodes in the tick where they're reset. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to simulate anim physics nodes in the tick where they're reset." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSimulateAnimPhysicsAfterReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset = { "bSimulateAnimPhysicsAfterReset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Max Physics Delta Time to be clamped. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max Physics Delta Time to be clamped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime = { "MaxPhysicsDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, MaxPhysicsDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSubstepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping = { "bSubstepping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSubsteppingAsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync = { "bSubsteppingAsync", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Max delta time (in seconds) for an individual simulation substep. */" },
		{ "editcondition", "bSubStepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max delta time (in seconds) for an individual simulation substep." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime = { "MaxSubstepDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, MaxSubstepDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max number of substeps for physics simulation. */" },
		{ "editcondition", "bSubstepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max number of substeps for physics simulation." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps = { "MaxSubsteps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, MaxSubsteps), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Physics delta time smoothing factor for sync scene. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time smoothing factor for sync scene." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor = { "SyncSceneSmoothingFactor", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, SyncSceneSmoothingFactor), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Physics delta time initial average. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time initial average." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate = { "InitialAverageFrameRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, InitialAverageFrameRate), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built" },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate = { "PhysXTreeRebuildRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, PhysXTreeRebuildRate), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner = { "PhysicalSurfaces", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData[] = {
		{ "Category", "PhysicalSurfaces" },
		{ "Comment", "// PhysicalMaterial Surface Types\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "PhysicalMaterial Surface Types" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces = { "PhysicalSurfaces", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, PhysicalSurfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings = { "DefaultBroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, DefaultBroadphaseSettings), Z_Construct_UScriptStruct_FBroadphaseSettings, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Minimum velocity delta required on a collinding object for Chaos to send a hit event */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Minimum velocity delta required on a collinding object for Chaos to send a hit event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents = { "MinDeltaVelocityForHitEvents", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, MinDeltaVelocityForHitEvents), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos physics engine settings */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Chaos physics engine settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings = { "ChaosSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSettings, ChaosSettings), Z_Construct_UScriptStruct_FChaosPhysicsSettings, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams = {
		&UPhysicsSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsSettings, 1558083245);
	template<> ENGINE_API UClass* StaticClass<UPhysicsSettings>()
	{
		return UPhysicsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSettings(Z_Construct_UClass_UPhysicsSettings, &UPhysicsSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
