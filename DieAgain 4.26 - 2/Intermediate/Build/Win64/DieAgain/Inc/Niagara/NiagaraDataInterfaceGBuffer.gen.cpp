// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceGBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGBuffer() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGBuffer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceGBuffer::StaticRegisterNativesUNiagaraDataInterfaceGBuffer()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_NoRegister()
	{
		return UNiagaraDataInterfaceGBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "GBuffer" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceGBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceGBuffer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGBuffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::ClassParams = {
		&UNiagaraDataInterfaceGBuffer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGBuffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceGBuffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceGBuffer, 1269614293);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGBuffer>()
	{
		return UNiagaraDataInterfaceGBuffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceGBuffer(Z_Construct_UClass_UNiagaraDataInterfaceGBuffer, &UNiagaraDataInterfaceGBuffer::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceGBuffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGBuffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
