// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentSettings() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNiagaraEmitterNameSettingsRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterNameSettingsRef"), sizeof(FNiagaraEmitterNameSettingsRef), Get_Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterNameSettingsRef>()
{
	return FNiagaraEmitterNameSettingsRef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraEmitterNameSettingsRef(FNiagaraEmitterNameSettingsRef::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraEmitterNameSettingsRef"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterNameSettingsRef
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterNameSettingsRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraEmitterNameSettingsRef")),new UScriptStruct::TCppStructOps<FNiagaraEmitterNameSettingsRef>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraEmitterNameSettingsRef;
	struct Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SystemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Emitter Name Settings Reference" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterNameSettingsRef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterNameSettingsRef, SystemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterNameSettingsRef, EmitterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterNameSettingsRef",
		sizeof(FNiagaraEmitterNameSettingsRef),
		alignof(FNiagaraEmitterNameSettingsRef),
		Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraEmitterNameSettingsRef"), sizeof(FNiagaraEmitterNameSettingsRef), Get_Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Hash() { return 476328053U; }
	void UNiagaraComponentSettings::StaticRegisterNativesUNiagaraComponentSettings()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraComponentSettings_NoRegister()
	{
		return UNiagaraComponentSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SuppressActivationList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressActivationList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SuppressActivationList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForceAutoPooolingList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceAutoPooolingList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ForceAutoPooolingList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuppressEmitterList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressEmitterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SuppressEmitterList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraComponentSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_ElementProp = { "SuppressActivationList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList = { "SuppressActivationList", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, SuppressActivationList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_ElementProp = { "ForceAutoPooolingList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList = { "ForceAutoPooolingList", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, ForceAutoPooolingList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_ElementProp = { "SuppressEmitterList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData[] = {
		{ "Comment", "/** \n\x09\x09""Config file to tweak individual emitters being disabled. Syntax is as follows for the config file:\n\x09\x09[/Script/Niagara.NiagaraComponentSettings]\n\x09\x09SuppressEmitterList=((SystemName=\"BasicSpriteSystem\",EmitterName=\"BasicSprite001\"))\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
		{ "ToolTip", "Config file to tweak individual emitters being disabled. Syntax is as follows for the config file:\n[/Script/Niagara.NiagaraComponentSettings]\nSuppressEmitterList=((SystemName=\"BasicSpriteSystem\",EmitterName=\"BasicSprite001\"))" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList = { "SuppressEmitterList", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, SuppressEmitterList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::ClassParams = {
		&UNiagaraComponentSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponentSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraComponentSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraComponentSettings, 443747335);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentSettings>()
	{
		return UNiagaraComponentSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraComponentSettings(Z_Construct_UClass_UNiagaraComponentSettings, &UNiagaraComponentSettings::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraComponentSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
