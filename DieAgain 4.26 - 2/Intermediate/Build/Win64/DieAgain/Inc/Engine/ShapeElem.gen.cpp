// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ShapeElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
// End Cross Module References
class UScriptStruct* FKShapeElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKShapeElem, Z_Construct_UPackage__Script_Engine(), TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKShapeElem>()
{
	return FKShapeElem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKShapeElem(FKShapeElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KShapeElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKShapeElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKShapeElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KShapeElem")),new UScriptStruct::TCppStructOps<FKShapeElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKShapeElem;
	struct Z_Construct_UScriptStruct_FKShapeElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGenerated_MetaData[];
#endif
		static void NewProp_bIsGenerated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGenerated;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContributeToMass_MetaData[];
#endif
		static void NewProp_bContributeToMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContributeToMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Sphere shape used for collision */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Sphere shape used for collision" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKShapeElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKShapeElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Offset used when generating contact points. This allows you to smooth out\n\x09\x09the Minkowski sum by radius R. Useful for making objects slide smoothly\n\x09\x09on top of irregularities  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Offset used when generating contact points. This allows you to smooth out\n              the Minkowski sum by radius R. Useful for making objects slide smoothly\n              on top of irregularities" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset = { "RestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKShapeElem, RestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_MetaData[] = {
		{ "Comment", "/** True when the shape was created by the engine and was not imported. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "True when the shape was created by the engine and was not imported." },
	};
#endif
	void Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_SetBit(void* Obj)
	{
		((FKShapeElem*)Obj)->bIsGenerated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated = { "bIsGenerated", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKShapeElem), &Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** User-defined name for this shape */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "User-defined name for this shape" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKShapeElem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** True if this shape should contribute to the overall mass of the body it\n\x09\x09""belongs to. This lets you create extra collision volumes which do not affect\n\x09\x09the mass properties of an object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "True if this shape should contribute to the overall mass of the body it\n              belongs to. This lets you create extra collision volumes which do not affect\n              the mass properties of an object." },
	};
#endif
	void Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit(void* Obj)
	{
		((FKShapeElem*)Obj)->bContributeToMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass = { "bContributeToMass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKShapeElem), &Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Course per-primitive collision filtering. This allows for individual primitives to\n\x09\x09""be toggled in and out of sim and query collision without changing filtering details. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Course per-primitive collision filtering. This allows for individual primitives to\n              be toggled in and out of sim and query collision without changing filtering details." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKShapeElem, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bIsGenerated,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_CollisionEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKShapeElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KShapeElem",
		sizeof(FKShapeElem),
		alignof(FKShapeElem),
		Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKShapeElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash() { return 2043186352U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
