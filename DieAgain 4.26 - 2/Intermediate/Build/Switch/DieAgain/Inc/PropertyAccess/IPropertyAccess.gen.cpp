// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyAccess/Public/IPropertyAccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPropertyAccess() {}
// Cross Module References
	PROPERTYACCESS_API UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyBatch();
	UPackage* Z_Construct_UPackage__Script_PropertyAccess();
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyAccess_NoRegister();
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyAccess();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* EPropertyAccessCopyBatch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyBatch, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("EPropertyAccessCopyBatch"));
		}
		return Singleton;
	}
	template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessCopyBatch>()
	{
		return EPropertyAccessCopyBatch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyAccessCopyBatch(EPropertyAccessCopyBatch_StaticEnum, TEXT("/Script/PropertyAccess"), TEXT("EPropertyAccessCopyBatch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyBatch_Hash() { return 64319843U; }
	UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyBatch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyAccessCopyBatch"), 0, Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyBatch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyAccessCopyBatch::InternalUnbatched", (int64)EPropertyAccessCopyBatch::InternalUnbatched },
				{ "EPropertyAccessCopyBatch::ExternalUnbatched", (int64)EPropertyAccessCopyBatch::ExternalUnbatched },
				{ "EPropertyAccessCopyBatch::InternalBatched", (int64)EPropertyAccessCopyBatch::InternalBatched },
				{ "EPropertyAccessCopyBatch::ExternalBatched", (int64)EPropertyAccessCopyBatch::ExternalBatched },
				{ "EPropertyAccessCopyBatch::Count", (int64)EPropertyAccessCopyBatch::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// The various types of property copy\n" },
				{ "Count.Name", "EPropertyAccessCopyBatch::Count" },
				{ "ExternalBatched.Comment", "// A copy of external->internal data, batched\n" },
				{ "ExternalBatched.Name", "EPropertyAccessCopyBatch::ExternalBatched" },
				{ "ExternalBatched.ToolTip", "A copy of external->internal data, batched" },
				{ "ExternalUnbatched.Comment", "// A copy of external->internal data, unbatched\n" },
				{ "ExternalUnbatched.Name", "EPropertyAccessCopyBatch::ExternalUnbatched" },
				{ "ExternalUnbatched.ToolTip", "A copy of external->internal data, unbatched" },
				{ "InternalBatched.Comment", "// A copy of internal->internal data, batched\n" },
				{ "InternalBatched.Name", "EPropertyAccessCopyBatch::InternalBatched" },
				{ "InternalBatched.ToolTip", "A copy of internal->internal data, batched" },
				{ "InternalUnbatched.Comment", "// A copy of internal->internal data, unbatched\n" },
				{ "InternalUnbatched.Name", "EPropertyAccessCopyBatch::InternalUnbatched" },
				{ "InternalUnbatched.ToolTip", "A copy of internal->internal data, unbatched" },
				{ "ModuleRelativePath", "Public/IPropertyAccess.h" },
				{ "ToolTip", "The various types of property copy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PropertyAccess,
				nullptr,
				"EPropertyAccessCopyBatch",
				"EPropertyAccessCopyBatch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPropertyAccess::StaticRegisterNativesUPropertyAccess()
	{
	}
	UClass* Z_Construct_UClass_UPropertyAccess_NoRegister()
	{
		return UPropertyAccess::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyAccess_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyAccess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyAccess_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPropertyAccess.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyAccess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPropertyAccess>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyAccess_Statics::ClassParams = {
		&UPropertyAccess::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyAccess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyAccess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyAccess()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyAccess_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyAccess, 192220144);
	template<> PROPERTYACCESS_API UClass* StaticClass<UPropertyAccess>()
	{
		return UPropertyAccess::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyAccess(Z_Construct_UClass_UPropertyAccess, &UPropertyAccess::StaticClass, TEXT("/Script/PropertyAccess"), TEXT("UPropertyAccess"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyAccess);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
