// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/GenlockedTimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedTimecodeProvider() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedTimecodeProvider::StaticRegisterNativesUGenlockedTimecodeProvider()
	{
	}
	UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister()
	{
		return UGenlockedTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGenlockToCount_MetaData[];
#endif
		static void NewProp_bUseGenlockToCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGenlockToCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This timecode provider base class will try to use the engine genlock sync to adjust its count.\n */" },
		{ "IncludePath", "GenlockedTimecodeProvider.h" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "This timecode provider base class will try to use the engine genlock sync to adjust its count." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use Genlock Sync to update Timecode count */" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "Use Genlock Sync to update Timecode count" },
	};
#endif
	void Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit(void* Obj)
	{
		((UGenlockedTimecodeProvider*)Obj)->bUseGenlockToCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount = { "bUseGenlockToCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenlockedTimecodeProvider), &Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams = {
		&UGenlockedTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenlockedTimecodeProvider, 1830969150);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedTimecodeProvider>()
	{
		return UGenlockedTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenlockedTimecodeProvider(Z_Construct_UClass_UGenlockedTimecodeProvider, &UGenlockedTimecodeProvider::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UGenlockedTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
