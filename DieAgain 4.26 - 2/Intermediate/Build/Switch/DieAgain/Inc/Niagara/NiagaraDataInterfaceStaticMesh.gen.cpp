// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceStaticMesh() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ENDIStaticMesh_SourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIStaticMesh_SourceMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIStaticMesh_SourceMode>()
	{
		return ENDIStaticMesh_SourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDIStaticMesh_SourceMode(ENDIStaticMesh_SourceMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDIStaticMesh_SourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Hash() { return 3500551181U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDIStaticMesh_SourceMode"), 0, Get_Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDIStaticMesh_SourceMode::Default", (int64)ENDIStaticMesh_SourceMode::Default },
				{ "ENDIStaticMesh_SourceMode::Source", (int64)ENDIStaticMesh_SourceMode::Source },
				{ "ENDIStaticMesh_SourceMode::AttachParent", (int64)ENDIStaticMesh_SourceMode::AttachParent },
				{ "ENDIStaticMesh_SourceMode::DefaultMeshOnly", (int64)ENDIStaticMesh_SourceMode::DefaultMeshOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
				{ "AttachParent.Name", "ENDIStaticMesh_SourceMode::AttachParent" },
				{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
				{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n\x09- When no source is specified, attempt to find a Static Mesh Component on an attached actor or component.\n\x09- If no source actor/component specified and no attached component found, fall back to the \"Default Mesh\" specified.\n\x09*/" },
				{ "Default.Name", "ENDIStaticMesh_SourceMode::Default" },
				{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n- When no source is specified, attempt to find a Static Mesh Component on an attached actor or component.\n- If no source actor/component specified and no attached component found, fall back to the \"Default Mesh\" specified." },
				{ "DefaultMeshOnly.Comment", "/**\n\x09Only use the \"Default Mesh\" specified.\n\x09*/" },
				{ "DefaultMeshOnly.Name", "ENDIStaticMesh_SourceMode::DefaultMeshOnly" },
				{ "DefaultMeshOnly.ToolTip", "Only use the \"Default Mesh\" specified." },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
				{ "Source.Comment", "/**\n\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n\x09*/" },
				{ "Source.Name", "ENDIStaticMesh_SourceMode::Source" },
				{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDIStaticMesh_SourceMode",
				"ENDIStaticMesh_SourceMode",
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
class UScriptStruct* FNDIStaticMeshSectionFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, Z_Construct_UPackage__Script_Niagara(), TEXT("NDIStaticMeshSectionFilter"), sizeof(FNDIStaticMeshSectionFilter), Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIStaticMeshSectionFilter>()
{
	return FNDIStaticMeshSectionFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNDIStaticMeshSectionFilter(FNDIStaticMeshSectionFilter::StaticStruct, TEXT("/Script/Niagara"), TEXT("NDIStaticMeshSectionFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter
{
	FScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NDIStaticMeshSectionFilter")),new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter;
	struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllowedMaterialSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMaterialSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedMaterialSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData[] = {
		{ "Category", "Section Filter" },
		{ "Comment", "/** Only allow sections these material slots. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Only allow sections these material slots." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIStaticMeshSectionFilter, AllowedMaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDIStaticMeshSectionFilter",
		sizeof(FNDIStaticMeshSectionFilter),
		alignof(FNDIStaticMeshSectionFilter),
		Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NDIStaticMeshSectionFilter"), sizeof(FNDIStaticMeshSectionFilter), Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash() { return 4083756187U; }
	void UNiagaraDataInterfaceStaticMesh::StaticRegisterNativesUNiagaraDataInterfaceStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsBodyVelocity_MetaData[];
#endif
		static void NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsBodyVelocity;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of static meshes. */" },
		{ "DisplayName", "Static Mesh" },
		{ "IncludePath", "NiagaraDataInterfaceStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of static meshes." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Static Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Static Mesh Component to attach to." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, DefaultMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Array of filters the can be used to limit sampling to certain sections of the mesh. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Array of filters the can be used to limit sampling to certain sections of the mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter = { "SectionFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SectionFilter), Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceStaticMesh*)Obj)->bUsePhysicsBodyVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity = { "bUsePhysicsBodyVelocity", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** List of filtered sockets to use. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "List of filtered sockets to use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceStaticMesh, 3094501953);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceStaticMesh>()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceStaticMesh(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, &UNiagaraDataInterfaceStaticMesh::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
