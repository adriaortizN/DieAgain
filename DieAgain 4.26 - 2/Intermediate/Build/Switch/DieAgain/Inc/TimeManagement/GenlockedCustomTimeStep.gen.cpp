// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/GenlockedCustomTimeStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedCustomTimeStep::StaticRegisterNativesUGenlockedCustomTimeStep()
	{
	}
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFixedFrameRateCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class to control the Engine Timestep from a Genlock signal.\n */" },
		{ "IncludePath", "GenlockedCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine Timestep from a Genlock signal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedCustomTimeStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams = {
		&UGenlockedCustomTimeStep::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenlockedCustomTimeStep, 3720076715);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedCustomTimeStep>()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenlockedCustomTimeStep(Z_Construct_UClass_UGenlockedCustomTimeStep, &UGenlockedCustomTimeStep::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UGenlockedCustomTimeStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedCustomTimeStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
