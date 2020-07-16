// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DieAgain/TestActorC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorC() {}
// Cross Module References
	DIEAGAIN_API UClass* Z_Construct_UClass_ATestActorC_NoRegister();
	DIEAGAIN_API UClass* Z_Construct_UClass_ATestActorC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DieAgain();
// End Cross Module References
	void ATestActorC::StaticRegisterNativesATestActorC()
	{
	}
	UClass* Z_Construct_UClass_ATestActorC_NoRegister()
	{
		return ATestActorC::StaticClass();
	}
	struct Z_Construct_UClass_ATestActorC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActorC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DieAgain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActorC.h" },
		{ "ModuleRelativePath", "TestActorC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActorC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActorC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestActorC_Statics::ClassParams = {
		&ATestActorC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActorC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestActorC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActorC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestActorC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestActorC, 3579582899);
	template<> DIEAGAIN_API UClass* StaticClass<ATestActorC>()
	{
		return ATestActorC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestActorC(Z_Construct_UClass_ATestActorC, &ATestActorC::StaticClass, TEXT("/Script/DieAgain"), TEXT("ATestActorC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActorC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
