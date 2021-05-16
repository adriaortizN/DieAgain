// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceSkeletalMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSkeletalMesh() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ENDISkeletalMesh_SkinningMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SkinningMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SkinningMode>()
	{
		return ENDISkeletalMesh_SkinningMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISkeletalMesh_SkinningMode(ENDISkeletalMesh_SkinningMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDISkeletalMesh_SkinningMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Hash() { return 1347877269U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISkeletalMesh_SkinningMode"), 0, Get_Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISkeletalMesh_SkinningMode::Invalid", (int64)ENDISkeletalMesh_SkinningMode::Invalid },
				{ "ENDISkeletalMesh_SkinningMode::None", (int64)ENDISkeletalMesh_SkinningMode::None },
				{ "ENDISkeletalMesh_SkinningMode::SkinOnTheFly", (int64)ENDISkeletalMesh_SkinningMode::SkinOnTheFly },
				{ "ENDISkeletalMesh_SkinningMode::PreSkin", (int64)ENDISkeletalMesh_SkinningMode::PreSkin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "ENDISkeletalMesh_SkinningMode::Invalid" },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
				{ "None.Comment", "/**\n\x09No skinning, use for reference pose only.\n\x09- Bone and socket sampling will be calculated on demand.\n\x09- Triangle and vertex sampling will be calculated on demand.\n\x09*/" },
				{ "None.Name", "ENDISkeletalMesh_SkinningMode::None" },
				{ "None.ToolTip", "No skinning, use for reference pose only.\n- Bone and socket sampling will be calculated on demand.\n- Triangle and vertex sampling will be calculated on demand." },
				{ "PreSkin.Comment", "/**\n\x09Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated up front (Note: CPU Access required).\n\x09*/" },
				{ "PreSkin.Name", "ENDISkeletalMesh_SkinningMode::PreSkin" },
				{ "PreSkin.ToolTip", "Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated up front (Note: CPU Access required)." },
				{ "SkinOnTheFly.Comment", "/**\n\x09Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required).\n\x09*/" },
				{ "SkinOnTheFly.Name", "ENDISkeletalMesh_SkinningMode::SkinOnTheFly" },
				{ "SkinOnTheFly.ToolTip", "Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDISkeletalMesh_SkinningMode",
				"ENDISkeletalMesh_SkinningMode",
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
	static UEnum* ENDISkeletalMesh_SourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SourceMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SourceMode>()
	{
		return ENDISkeletalMesh_SourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISkeletalMesh_SourceMode(ENDISkeletalMesh_SourceMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDISkeletalMesh_SourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Hash() { return 214175709U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISkeletalMesh_SourceMode"), 0, Get_Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISkeletalMesh_SourceMode::Default", (int64)ENDISkeletalMesh_SourceMode::Default },
				{ "ENDISkeletalMesh_SourceMode::Source", (int64)ENDISkeletalMesh_SourceMode::Source },
				{ "ENDISkeletalMesh_SourceMode::AttachParent", (int64)ENDISkeletalMesh_SourceMode::AttachParent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
				{ "AttachParent.Name", "ENDISkeletalMesh_SourceMode::AttachParent" },
				{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
				{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
				{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n\x09- When no source is specified, fall back on attached actor or component.\n\x09*/" },
				{ "Default.Name", "ENDISkeletalMesh_SourceMode::Default" },
				{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n- When no source is specified, fall back on attached actor or component." },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
				{ "Source.Comment", "/**\n\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n\x09*/" },
				{ "Source.Name", "ENDISkeletalMesh_SourceMode::Source" },
				{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDISkeletalMesh_SourceMode",
				"ENDISkeletalMesh_SourceMode",
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
	void UNiagaraDataInterfaceSkeletalMesh::StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister()
	{
		return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshUserParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshUserParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinningMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinningMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinningMode;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SamplingRegions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SamplingRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeMeshLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WholeMeshLOD;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FilteredBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeBone_MetaData[];
#endif
		static void NewProp_bExcludeBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[];
#endif
		static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of skeletal meshes. */" },
		{ "DisplayName", "Skeletal Mesh" },
		{ "IncludePath", "NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of skeletal meshes." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Skeletal Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Skeletal Mesh Component to attach to." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter = { "MeshUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode = { "SkinningMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SkinningMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner = { "SamplingRegions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions = { "SamplingRegions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If no regions are specified, we'll sample the whole mesh at this LODIndex. -1 indicates to use the last LOD.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "If no regions are specified, we'll sample the whole mesh at this LODIndex. -1 indicates to use the last LOD." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD = { "WholeMeshLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, WholeMeshLOD), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/**\n\x09Optionally remove a single bone from Random / Random Unfiltered access.\n\x09You can still include this bone in filtered list and access using the direct index functionality.\n\x09*/" },
		{ "EditCondition", "bExcludeBone" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Optionally remove a single bone from Random / Random Unfiltered access.\nYou can still include this bone in filtered list and access using the direct index functionality." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bExcludeBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone = { "bExcludeBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bRequireCurrentFrameData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceSkeletalMesh, 833897492);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSkeletalMesh>()
	{
		return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceSkeletalMesh(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh, &UNiagaraDataInterfaceSkeletalMesh::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceSkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSkeletalMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
