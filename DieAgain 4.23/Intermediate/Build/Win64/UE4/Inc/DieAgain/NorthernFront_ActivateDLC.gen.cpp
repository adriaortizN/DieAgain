// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DieAgain/NorthernFront_ActivateDLC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNorthernFront_ActivateDLC() {}
// Cross Module References
	DIEAGAIN_API UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC_NoRegister();
	DIEAGAIN_API UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DieAgain();
// End Cross Module References
	void ANorthernFront_ActivateDLC::StaticRegisterNativesANorthernFront_ActivateDLC()
	{
	}
	UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC_NoRegister()
	{
		return ANorthernFront_ActivateDLC::StaticClass();
	}
	struct Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DieAgain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NorthernFront_ActivateDLC.h" },
		{ "ModuleRelativePath", "NorthernFront_ActivateDLC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANorthernFront_ActivateDLC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::ClassParams = {
		&ANorthernFront_ActivateDLC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANorthernFront_ActivateDLC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANorthernFront_ActivateDLC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANorthernFront_ActivateDLC, 167263412);
	template<> DIEAGAIN_API UClass* StaticClass<ANorthernFront_ActivateDLC>()
	{
		return ANorthernFront_ActivateDLC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANorthernFront_ActivateDLC(Z_Construct_UClass_ANorthernFront_ActivateDLC, &ANorthernFront_ActivateDLC::StaticClass, TEXT("/Script/DieAgain"), TEXT("ANorthernFront_ActivateDLC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANorthernFront_ActivateDLC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
