// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyAccess/Public/PropertyEventInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyEventInterfaces() {}
// Cross Module References
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyEventBroadcaster_NoRegister();
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyEventBroadcaster();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PropertyAccess();
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyEventSubscriber_NoRegister();
	PROPERTYACCESS_API UClass* Z_Construct_UClass_UPropertyEventSubscriber();
// End Cross Module References
	void UPropertyEventBroadcaster::StaticRegisterNativesUPropertyEventBroadcaster()
	{
	}
	UClass* Z_Construct_UClass_UPropertyEventBroadcaster_NoRegister()
	{
		return UPropertyEventBroadcaster::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyEventBroadcaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyEventBroadcaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEventBroadcaster_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyEventInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyEventBroadcaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPropertyEventBroadcaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyEventBroadcaster_Statics::ClassParams = {
		&UPropertyEventBroadcaster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyEventBroadcaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyEventBroadcaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyEventBroadcaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyEventBroadcaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyEventBroadcaster, 4283615979);
	template<> PROPERTYACCESS_API UClass* StaticClass<UPropertyEventBroadcaster>()
	{
		return UPropertyEventBroadcaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyEventBroadcaster(Z_Construct_UClass_UPropertyEventBroadcaster, &UPropertyEventBroadcaster::StaticClass, TEXT("/Script/PropertyAccess"), TEXT("UPropertyEventBroadcaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyEventBroadcaster);
	void UPropertyEventSubscriber::StaticRegisterNativesUPropertyEventSubscriber()
	{
	}
	UClass* Z_Construct_UClass_UPropertyEventSubscriber_NoRegister()
	{
		return UPropertyEventSubscriber::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyEventSubscriber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyEventSubscriber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyEventSubscriber_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyEventInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyEventSubscriber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPropertyEventSubscriber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyEventSubscriber_Statics::ClassParams = {
		&UPropertyEventSubscriber::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyEventSubscriber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyEventSubscriber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyEventSubscriber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyEventSubscriber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyEventSubscriber, 3595829529);
	template<> PROPERTYACCESS_API UClass* StaticClass<UPropertyEventSubscriber>()
	{
		return UPropertyEventSubscriber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyEventSubscriber(Z_Construct_UClass_UPropertyEventSubscriber, &UPropertyEventSubscriber::StaticClass, TEXT("/Script/PropertyAccess"), TEXT("UPropertyEventSubscriber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyEventSubscriber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
