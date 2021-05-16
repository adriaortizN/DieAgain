// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMessageDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMessageDataBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraMessageDataBase::StaticRegisterNativesUNiagaraMessageDataBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister()
	{
		return UNiagaraMessageDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMessageDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMessageDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMessageDataBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraMessageDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMessageDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMessageDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMessageDataBase_Statics::ClassParams = {
		&UNiagaraMessageDataBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMessageDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraMessageDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraMessageDataBase, 752720748);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraMessageDataBase>()
	{
		return UNiagaraMessageDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraMessageDataBase(Z_Construct_UClass_UNiagaraMessageDataBase, &UNiagaraMessageDataBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraMessageDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMessageDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
