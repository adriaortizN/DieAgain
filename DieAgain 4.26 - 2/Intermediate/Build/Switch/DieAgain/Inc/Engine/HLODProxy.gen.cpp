// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/HLODProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
// End Cross Module References
	void UHLODProxy::StaticRegisterNativesUHLODProxy()
	{
	}
	UClass* Z_Construct_UClass_UHLODProxy_NoRegister()
	{
		return UHLODProxy::StaticClass();
	}
	struct Z_Construct_UClass_UHLODProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OwningMap;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxyMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProxyMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HLODActors_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HLODActors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HLODActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HLODActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This asset acts as a proxy to a static mesh for ALODActors to display */" },
		{ "IncludePath", "Engine/HLODProxy.h" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "This asset acts as a proxy to a static mesh for ALODActors to display" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** Keep hold of the level in the editor to allow for package cleaning etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "Keep hold of the level in the editor to allow for package cleaning etc." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap = { "OwningMap", nullptr, (EPropertyFlags)0x0044000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxy, OwningMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** All the mesh proxies we contain */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "All the mesh proxies we contain" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxy, ProxyMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp = { "HLODActors", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp = { "HLODActors_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors = { "HLODActors", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODProxy, HLODActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxy_Statics::ClassParams = {
		&UHLODProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHLODProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHLODProxy, 3742173559);
	template<> ENGINE_API UClass* StaticClass<UHLODProxy>()
	{
		return UHLODProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHLODProxy(Z_Construct_UClass_UHLODProxy, &UHLODProxy::StaticClass, TEXT("/Script/Engine"), TEXT("UHLODProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
