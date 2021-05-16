// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceLandscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLandscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceLandscape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Data Interface allowing sampling of a Landscape */" },
		{ "DisplayName", "Landscape Sample" },
		{ "IncludePath", "NiagaraDataInterfaceLandscape.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "ToolTip", "Data Interface allowing sampling of a Landscape" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape = { "SourceLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceLandscape), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceLandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams = {
		&UNiagaraDataInterfaceLandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceLandscape, 3623782186);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceLandscape>()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceLandscape(Z_Construct_UClass_UNiagaraDataInterfaceLandscape, &UNiagaraDataInterfaceLandscape::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceLandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceLandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
