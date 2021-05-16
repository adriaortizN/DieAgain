// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterface2DArrayTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterface2DArrayTexture() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
// End Cross Module References
	void UNiagaraDataInterface2DArrayTexture::StaticRegisterNativesUNiagaraDataInterface2DArrayTexture()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister()
	{
		return UNiagaraDataInterface2DArrayTexture::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Data Interface allowing sampling of a texture */" },
		{ "DisplayName", "2D Array Texture Sample" },
		{ "IncludePath", "NiagaraDataInterface2DArrayTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterface2DArrayTexture.h" },
		{ "ToolTip", "Data Interface allowing sampling of a texture" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterface2DArrayTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterface2DArrayTexture, Texture), Z_Construct_UClass_UTexture2DArray_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterface2DArrayTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::ClassParams = {
		&UNiagaraDataInterface2DArrayTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterface2DArrayTexture, 3315831488);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterface2DArrayTexture>()
	{
		return UNiagaraDataInterface2DArrayTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterface2DArrayTexture(Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture, &UNiagaraDataInterface2DArrayTexture::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterface2DArrayTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterface2DArrayTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
