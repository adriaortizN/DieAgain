// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase() {}
// Cross Module References
	PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	void UDEPRECATED_PhysicalMaterialPropertyBase::StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister()
	{
		return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PhysicalMaterialPropertyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams = {
		&UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x020832A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_PhysicalMaterialPropertyBase, 3472844928);
	template<> PHYSICSCORE_API UClass* StaticClass<UDEPRECATED_PhysicalMaterialPropertyBase>()
	{
		return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_PhysicalMaterialPropertyBase(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, &UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass, TEXT("/Script/PhysicsCore"), TEXT("UDEPRECATED_PhysicalMaterialPropertyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PhysicalMaterialPropertyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
