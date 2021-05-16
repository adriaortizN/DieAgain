// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/LODSyncInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULODSyncInterface::StaticRegisterNativesULODSyncInterface()
	{
	}
	UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister()
	{
		return ULODSyncInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULODSyncInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODSyncInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/LODSyncInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODSyncInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILODSyncInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams = {
		&ULODSyncInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODSyncInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULODSyncInterface, 311384466);
	template<> ENGINE_API UClass* StaticClass<ULODSyncInterface>()
	{
		return ULODSyncInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULODSyncInterface(Z_Construct_UClass_ULODSyncInterface, &ULODSyncInterface::StaticClass, TEXT("/Script/Engine"), TEXT("ULODSyncInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
