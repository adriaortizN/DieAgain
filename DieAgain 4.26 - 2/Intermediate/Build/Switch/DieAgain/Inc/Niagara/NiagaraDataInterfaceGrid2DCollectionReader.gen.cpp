// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceGrid2DCollectionReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid2DCollectionReader() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceGrid2DCollectionReader::StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_NoRegister()
	{
		return UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmitterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DIName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DIName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "Comment", "// #todo(dmp): base class has all the RW attributes, even though we only care about the attributes that query the grid.  Cleaning this up would be great\n" },
		{ "DisplayName", "Grid2D Collection Reader" },
		{ "Experimental", "" },
		{ "HideCategories", "Grid RW" },
		{ "IncludePath", "NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "ToolTip", "#todo(dmp): base class has all the RW attributes, even though we only care about the attributes that query the grid.  Cleaning this up would be great" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Reader" },
		{ "Comment", "// Name of the emitter to read from\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "ToolTip", "Name of the emitter to read from" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData[] = {
		{ "Category", "Reader" },
		{ "Comment", "// Name of the Grid2DCollection Data Interface on the emitter\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid2DCollectionReader.h" },
		{ "ToolTip", "Name of the Grid2DCollection Data Interface on the emitter" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName = { "DIName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2DCollectionReader, DIName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_EmitterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::NewProp_DIName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid2DCollectionReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceGrid2DCollectionReader, 3682313330);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid2DCollectionReader>()
	{
		return UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceGrid2DCollectionReader(Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollectionReader, &UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceGrid2DCollectionReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid2DCollectionReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
