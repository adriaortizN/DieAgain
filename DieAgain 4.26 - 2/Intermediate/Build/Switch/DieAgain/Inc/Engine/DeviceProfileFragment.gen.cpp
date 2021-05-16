// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/DeviceProfiles/DeviceProfileFragment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileFragment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDeviceProfileFragment::StaticRegisterNativesUDeviceProfileFragment()
	{
	}
	UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister()
	{
		return UDeviceProfileFragment::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceProfileFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceProfileFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfileFragment.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileFragment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceProfileFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileFragment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams = {
		&UDeviceProfileFragment::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceProfileFragment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceProfileFragment, 4027539100);
	template<> ENGINE_API UClass* StaticClass<UDeviceProfileFragment>()
	{
		return UDeviceProfileFragment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceProfileFragment(Z_Construct_UClass_UDeviceProfileFragment, &UDeviceProfileFragment::StaticClass, TEXT("/Script/Engine"), TEXT("UDeviceProfileFragment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileFragment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
