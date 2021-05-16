// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSwitch/Private/NEXNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNEXNetDriver() {}
// Cross Module References
	ONLINESUBSYSTEMSWITCH_API UClass* Z_Construct_UClass_UNEXNetDriver_NoRegister();
	ONLINESUBSYSTEMSWITCH_API UClass* Z_Construct_UClass_UNEXNetDriver();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSwitch();
	ONLINESUBSYSTEMSWITCH_API UClass* Z_Construct_UClass_UNEXNetConnection_NoRegister();
	ONLINESUBSYSTEMSWITCH_API UClass* Z_Construct_UClass_UNEXNetConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
// End Cross Module References
	void UNEXNetDriver::StaticRegisterNativesUNEXNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UNEXNetDriver_NoRegister()
	{
		return UNEXNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UNEXNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNEXNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSwitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNEXNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NEXNetDriver.h" },
		{ "ModuleRelativePath", "Private/NEXNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNEXNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNEXNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNEXNetDriver_Statics::ClassParams = {
		&UNEXNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNEXNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNEXNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNEXNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNEXNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNEXNetDriver, 4189368207);
	template<> ONLINESUBSYSTEMSWITCH_API UClass* StaticClass<UNEXNetDriver>()
	{
		return UNEXNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNEXNetDriver(Z_Construct_UClass_UNEXNetDriver, &UNEXNetDriver::StaticClass, TEXT("/Script/OnlineSubsystemSwitch"), TEXT("UNEXNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNEXNetDriver);
	void UNEXNetConnection::StaticRegisterNativesUNEXNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UNEXNetConnection_NoRegister()
	{
		return UNEXNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UNEXNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNEXNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSwitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNEXNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NEXNetDriver.h" },
		{ "ModuleRelativePath", "Private/NEXNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNEXNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNEXNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNEXNetConnection_Statics::ClassParams = {
		&UNEXNetConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNEXNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNEXNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNEXNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNEXNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNEXNetConnection, 1562301127);
	template<> ONLINESUBSYSTEMSWITCH_API UClass* StaticClass<UNEXNetConnection>()
	{
		return UNEXNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNEXNetConnection(Z_Construct_UClass_UNEXNetConnection, &UNEXNetConnection::StaticClass, TEXT("/Script/OnlineSubsystemSwitch"), TEXT("UNEXNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNEXNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
