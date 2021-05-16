// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponentRendererProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentRendererProperties() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FNiagaraComponentPropertyBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraComponentPropertyBinding"), sizeof(FNiagaraComponentPropertyBinding), Get_Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraComponentPropertyBinding>()
{
	return FNiagaraComponentPropertyBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraComponentPropertyBinding(FNiagaraComponentPropertyBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraComponentPropertyBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraComponentPropertyBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraComponentPropertyBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraComponentPropertyBinding")),new UScriptStruct::TCppStructOps<FNiagaraComponentPropertyBinding>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraComponentPropertyBinding;
	struct Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataSetterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetadataSetterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WritableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WritableValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraComponentPropertyBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding = { "AttributeBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, AttributeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Actual name of the property we are bound to */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Actual name of the property we are bound to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Comment", "/** Type of the target property (used for auto-conversion) */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Type of the target property (used for auto-conversion)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, PropertyType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData[] = {
		{ "Comment", "/** (Optional) name of the property setter as defined in the metadata */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "(Optional) name of the property setter as defined in the metadata" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName = { "MetadataSetterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, MetadataSetterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_WritableValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_WritableValue = { "WritableValue", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, WritableValue), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_WritableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_WritableValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_WritableValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraComponentPropertyBinding",
		sizeof(FNiagaraComponentPropertyBinding),
		alignof(FNiagaraComponentPropertyBinding),
		Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraComponentPropertyBinding"), sizeof(FNiagaraComponentPropertyBinding), Get_Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Hash() { return 3634874254U; }
	void UNiagaraComponentRendererProperties::StaticRegisterNativesUNiagaraComponentRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister()
	{
		return UNiagaraComponentRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentCountLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ComponentCountLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssignComponentsOnParticleID_MetaData[];
#endif
		static void NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssignComponentsOnParticleID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData[];
#endif
		static void NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCreateComponentsOnParticleSpawn;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeComponents_MetaData[];
#endif
		static void NewProp_bVisualizeComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeComponents;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Component Renderer" },
		{ "IncludePath", "NiagaraComponentRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** The scene component class to instantiate */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The scene component class to instantiate" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentRendererProperties, ComponentType), Z_Construct_UClass_USceneComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** The max number of components that this emitter will spawn or update each frame. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The max number of components that this emitter will spawn or update each frame." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit = { "ComponentCountLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentRendererProperties, ComponentCountLimit), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentRendererProperties, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\n\x09 * Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\nDisabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bAssignComponentsOnParticleID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID = { "bAssignComponentsOnParticleID", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then new components can only be created on newly spawned particles. If a particle is not able to create a component on it's first frame (e.g. because the component\n\x09 * limit was reached) then it will be blocked from spawning a component on subsequent frames. */" },
		{ "EditConition", "bAssignComponentsOnParticleID" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then new components can only be created on newly spawned particles. If a particle is not able to create a component on it's first frame (e.g. because the component\nlimit was reached) then it will be blocked from spawning a component on subsequent frames." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bOnlyCreateComponentsOnParticleSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn = { "bOnlyCreateComponentsOnParticleSpawn", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then the editor visualization is enabled for the component; has no effect in-game. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then the editor visualization is enabled for the component; has no effect in-game." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bVisualizeComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents = { "bVisualizeComponents", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData[] = {
		{ "Category", "Component Properties" },
		{ "Comment", "/** The object template used to create new components at runtime. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The object template used to create new components at runtime." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent = { "TemplateComponent", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentRendererProperties, TemplateComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentRendererProperties, PropertyBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::ClassParams = {
		&UNiagaraComponentRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraComponentRendererProperties, 591720482);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentRendererProperties>()
	{
		return UNiagaraComponentRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraComponentRendererProperties(Z_Construct_UClass_UNiagaraComponentRendererProperties, &UNiagaraComponentRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraComponentRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentRendererProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
