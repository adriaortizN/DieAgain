// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArray() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceArray::StaticRegisterNativesUNiagaraDataInterfaceArray()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister()
	{
		return UNiagaraDataInterfaceArray::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxElements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceArray.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData[] = {
		{ "Category", "Array" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
		{ "ToolTip", "When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements = { "MaxElements", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArray, MaxElements), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams = {
		&UNiagaraDataInterfaceArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceArray, 289036267);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArray>()
	{
		return UNiagaraDataInterfaceArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceArray(Z_Construct_UClass_UNiagaraDataInterfaceArray, &UNiagaraDataInterfaceArray::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
