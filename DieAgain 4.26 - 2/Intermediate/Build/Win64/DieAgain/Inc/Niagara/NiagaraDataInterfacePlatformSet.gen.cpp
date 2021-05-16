// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfacePlatformSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePlatformSet() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
// End Cross Module References
	void UNiagaraDataInterfacePlatformSet::StaticRegisterNativesUNiagaraDataInterfacePlatformSet()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister()
	{
		return UNiagaraDataInterfacePlatformSet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::Class_MetaDataParams[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Data Interface allowing querying of the current platform set. */" },
		{ "DisplayName", "Platform Set" },
		{ "IncludePath", "NiagaraDataInterfacePlatformSet.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePlatformSet.h" },
		{ "ToolTip", "Data Interface allowing querying of the current platform set." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Platform Set" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePlatformSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfacePlatformSet, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePlatformSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::ClassParams = {
		&UNiagaraDataInterfacePlatformSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfacePlatformSet, 3825756369);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePlatformSet>()
	{
		return UNiagaraDataInterfacePlatformSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfacePlatformSet(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet, &UNiagaraDataInterfacePlatformSet::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfacePlatformSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePlatformSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
