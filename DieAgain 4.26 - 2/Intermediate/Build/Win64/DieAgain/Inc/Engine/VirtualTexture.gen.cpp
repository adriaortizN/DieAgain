// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/VirtualTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
// End Cross Module References
	void UVirtualTexture::StaticRegisterNativesUVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTexture_NoRegister()
	{
		return UVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class */" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture_Statics::ClassParams = {
		&UVirtualTexture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTexture, 2403909976);
	template<> ENGINE_API UClass* StaticClass<UVirtualTexture>()
	{
		return UVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTexture(Z_Construct_UClass_UVirtualTexture, &UVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture)
	void ULightMapVirtualTexture::StaticRegisterNativesULightMapVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVirtualTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class */" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams = {
		&ULightMapVirtualTexture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightMapVirtualTexture, 860687053);
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture>()
	{
		return ULightMapVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapVirtualTexture(Z_Construct_UClass_ULightMapVirtualTexture, &ULightMapVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture);
	void URuntimeVirtualTextureStreamingProxy::StaticRegisterNativesURuntimeVirtualTextureStreamingProxy()
	{
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister()
	{
		return URuntimeVirtualTextureStreamingProxy::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureStreamingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams = {
		&URuntimeVirtualTextureStreamingProxy::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTextureStreamingProxy, 2823010015);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureStreamingProxy>()
	{
		return URuntimeVirtualTextureStreamingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTextureStreamingProxy(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy, &URuntimeVirtualTextureStreamingProxy::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTextureStreamingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureStreamingProxy);
	void UVirtualTexture2D::StaticRegisterNativesUVirtualTexture2D()
	{
	}
	UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister()
	{
		return UVirtualTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinuousUpdate_MetaData[];
#endif
		static void NewProp_bContinuousUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinuousUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[];
#endif
		static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture2D_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Virtual Texture with locally configurable build settings.\n * A raw UTexture2D can also represent a Virtual Texture but uses the one and only per-project build settings.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Virtual Texture with locally configurable build settings.\nA raw UTexture2D can also represent a Virtual Texture but uses the one and only per-project build settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualTexture2D, Settings), Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_SetBit(void* Obj)
	{
		((UVirtualTexture2D*)Obj)->bContinuousUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate = { "bContinuousUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualTexture2D), &Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
	{
		((UVirtualTexture2D*)Obj)->bSinglePhysicalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualTexture2D), &Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture2D_Statics::ClassParams = {
		&UVirtualTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualTexture2D, 4129536118);
	template<> ENGINE_API UClass* StaticClass<UVirtualTexture2D>()
	{
		return UVirtualTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualTexture2D(Z_Construct_UClass_UVirtualTexture2D, &UVirtualTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("UVirtualTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
