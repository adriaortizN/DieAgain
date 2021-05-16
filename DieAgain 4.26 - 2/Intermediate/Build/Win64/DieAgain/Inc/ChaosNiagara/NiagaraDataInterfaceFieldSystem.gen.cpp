// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Classes/NiagaraDataInterfaceFieldSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceFieldSystem() {}
// Cross Module References
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_NoRegister();
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UNiagaraDataInterfaceFieldSystem::StaticRegisterNativesUNiagaraDataInterfaceFieldSystem()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_NoRegister()
	{
		return UNiagaraDataInterfaceFieldSystem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::Class_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Field System" },
		{ "IncludePath", "NiagaraDataInterfaceFieldSystem.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_BlueprintSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Blue print. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "Blue print." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_BlueprintSource = { "BlueprintSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceFieldSystem, BlueprintSource), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_BlueprintSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_BlueprintSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceFieldSystem, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_FieldDimensions_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_FieldDimensions = { "FieldDimensions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceFieldSystem, FieldDimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_FieldDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_FieldDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MinBounds_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceFieldSystem, MinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The source actor from which to sample */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceFieldSystem.h" },
		{ "ToolTip", "The source actor from which to sample" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceFieldSystem, MaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MaxBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_BlueprintSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_SourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_FieldDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::NewProp_MaxBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceFieldSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::ClassParams = {
		&UNiagaraDataInterfaceFieldSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceFieldSystem, 1834305450);
	template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceFieldSystem>()
	{
		return UNiagaraDataInterfaceFieldSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceFieldSystem(Z_Construct_UClass_UNiagaraDataInterfaceFieldSystem, &UNiagaraDataInterfaceFieldSystem::StaticClass, TEXT("/Script/ChaosNiagara"), TEXT("UNiagaraDataInterfaceFieldSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceFieldSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
