// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApexDestruction_init() {}
	APEXDESTRUCTION_API UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ActorFractureSignature__DelegateSignature();
	APEXDESTRUCTION_API UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ApexDestruction()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ApexDestruction_ActorFractureSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ApexDestruction",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x963E399A,
				0xB5C5A6FC,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
