// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyAccess/Public/PropertyAccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyAccess() {}
// Cross Module References
	PROPERTYACCESS_API UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType();
	UPackage* Z_Construct_UPackage__Script_PropertyAccess();
	PROPERTYACCESS_API UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType();
	PROPERTYACCESS_API UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessLibrary();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessSegment();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessPath();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirection();
	PROPERTYACCESS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
// End Cross Module References
	static UEnum* EPropertyAccessCopyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("EPropertyAccessCopyType"));
		}
		return Singleton;
	}
	template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessCopyType>()
	{
		return EPropertyAccessCopyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyAccessCopyType(EPropertyAccessCopyType_StaticEnum, TEXT("/Script/PropertyAccess"), TEXT("EPropertyAccessCopyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType_Hash() { return 1476584250U; }
	UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyAccessCopyType"), 0, Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyAccessCopyType::None", (int64)EPropertyAccessCopyType::None },
				{ "EPropertyAccessCopyType::Plain", (int64)EPropertyAccessCopyType::Plain },
				{ "EPropertyAccessCopyType::Complex", (int64)EPropertyAccessCopyType::Complex },
				{ "EPropertyAccessCopyType::Bool", (int64)EPropertyAccessCopyType::Bool },
				{ "EPropertyAccessCopyType::Struct", (int64)EPropertyAccessCopyType::Struct },
				{ "EPropertyAccessCopyType::Object", (int64)EPropertyAccessCopyType::Object },
				{ "EPropertyAccessCopyType::Name", (int64)EPropertyAccessCopyType::Name },
				{ "EPropertyAccessCopyType::Array", (int64)EPropertyAccessCopyType::Array },
				{ "EPropertyAccessCopyType::PromoteBoolToByte", (int64)EPropertyAccessCopyType::PromoteBoolToByte },
				{ "EPropertyAccessCopyType::PromoteBoolToInt32", (int64)EPropertyAccessCopyType::PromoteBoolToInt32 },
				{ "EPropertyAccessCopyType::PromoteBoolToInt64", (int64)EPropertyAccessCopyType::PromoteBoolToInt64 },
				{ "EPropertyAccessCopyType::PromoteBoolToFloat", (int64)EPropertyAccessCopyType::PromoteBoolToFloat },
				{ "EPropertyAccessCopyType::PromoteByteToInt32", (int64)EPropertyAccessCopyType::PromoteByteToInt32 },
				{ "EPropertyAccessCopyType::PromoteByteToInt64", (int64)EPropertyAccessCopyType::PromoteByteToInt64 },
				{ "EPropertyAccessCopyType::PromoteByteToFloat", (int64)EPropertyAccessCopyType::PromoteByteToFloat },
				{ "EPropertyAccessCopyType::PromoteInt32ToInt64", (int64)EPropertyAccessCopyType::PromoteInt32ToInt64 },
				{ "EPropertyAccessCopyType::PromoteInt32ToFloat", (int64)EPropertyAccessCopyType::PromoteInt32ToFloat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Comment", "// Array needs special handling for fixed size arrays\n" },
				{ "Array.Name", "EPropertyAccessCopyType::Array" },
				{ "Array.ToolTip", "Array needs special handling for fixed size arrays" },
				{ "Bool.Comment", "// Read and write properties using bool property helpers, as source/dest could be bitfield or boolean\n" },
				{ "Bool.Name", "EPropertyAccessCopyType::Bool" },
				{ "Bool.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfield or boolean" },
				{ "Complex.Comment", "// For more complex data types, we need to call the properties copy function\n" },
				{ "Complex.Name", "EPropertyAccessCopyType::Complex" },
				{ "Complex.ToolTip", "For more complex data types, we need to call the properties copy function" },
				{ "ModuleRelativePath", "Public/PropertyAccess.h" },
				{ "Name.Comment", "// FName needs special case because its size changes between editor/compiler and runtime.\n" },
				{ "Name.Name", "EPropertyAccessCopyType::Name" },
				{ "Name.ToolTip", "FName needs special case because its size changes between editor/compiler and runtime." },
				{ "None.Comment", "// No copying\n" },
				{ "None.Name", "EPropertyAccessCopyType::None" },
				{ "None.ToolTip", "No copying" },
				{ "Object.Comment", "// Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc.\n" },
				{ "Object.Name", "EPropertyAccessCopyType::Object" },
				{ "Object.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc." },
				{ "Plain.Comment", "// For plain old data types, we do a simple memcpy.\n" },
				{ "Plain.Name", "EPropertyAccessCopyType::Plain" },
				{ "Plain.ToolTip", "For plain old data types, we do a simple memcpy." },
				{ "PromoteBoolToByte.Comment", "// Promote the type during the copy\n// Bool promotions\n" },
				{ "PromoteBoolToByte.Name", "EPropertyAccessCopyType::PromoteBoolToByte" },
				{ "PromoteBoolToByte.ToolTip", "Promote the type during the copy\nBool promotions" },
				{ "PromoteBoolToFloat.Name", "EPropertyAccessCopyType::PromoteBoolToFloat" },
				{ "PromoteBoolToInt32.Name", "EPropertyAccessCopyType::PromoteBoolToInt32" },
				{ "PromoteBoolToInt64.Name", "EPropertyAccessCopyType::PromoteBoolToInt64" },
				{ "PromoteByteToFloat.Name", "EPropertyAccessCopyType::PromoteByteToFloat" },
				{ "PromoteByteToInt32.Comment", "// Byte promotions\n" },
				{ "PromoteByteToInt32.Name", "EPropertyAccessCopyType::PromoteByteToInt32" },
				{ "PromoteByteToInt32.ToolTip", "Byte promotions" },
				{ "PromoteByteToInt64.Name", "EPropertyAccessCopyType::PromoteByteToInt64" },
				{ "PromoteInt32ToFloat.Name", "EPropertyAccessCopyType::PromoteInt32ToFloat" },
				{ "PromoteInt32ToInt64.Comment", "// Int32 promotions\n" },
				{ "PromoteInt32ToInt64.Name", "EPropertyAccessCopyType::PromoteInt32ToInt64" },
				{ "PromoteInt32ToInt64.ToolTip", "Int32 promotions" },
				{ "Struct.Comment", "// Use struct copy operation, as this needs to correctly handle CPP struct ops\n" },
				{ "Struct.Name", "EPropertyAccessCopyType::Struct" },
				{ "Struct.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PropertyAccess,
				nullptr,
				"EPropertyAccessCopyType",
				"EPropertyAccessCopyType",
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
	static UEnum* EPropertyAccessObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("EPropertyAccessObjectType"));
		}
		return Singleton;
	}
	template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessObjectType>()
	{
		return EPropertyAccessObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyAccessObjectType(EPropertyAccessObjectType_StaticEnum, TEXT("/Script/PropertyAccess"), TEXT("EPropertyAccessObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType_Hash() { return 2167578516U; }
	UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyAccessObjectType"), 0, Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyAccessObjectType::None", (int64)EPropertyAccessObjectType::None },
				{ "EPropertyAccessObjectType::Object", (int64)EPropertyAccessObjectType::Object },
				{ "EPropertyAccessObjectType::WeakObject", (int64)EPropertyAccessObjectType::WeakObject },
				{ "EPropertyAccessObjectType::SoftObject", (int64)EPropertyAccessObjectType::SoftObject },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// For object nodes, we need to know what type of object we are looking at so we can cast appropriately\n" },
				{ "ModuleRelativePath", "Public/PropertyAccess.h" },
				{ "None.Comment", "// Access is not an object\n" },
				{ "None.Name", "EPropertyAccessObjectType::None" },
				{ "None.ToolTip", "Access is not an object" },
				{ "Object.Comment", "// Access is an object\n" },
				{ "Object.Name", "EPropertyAccessObjectType::Object" },
				{ "Object.ToolTip", "Access is an object" },
				{ "SoftObject.Comment", "// Access is a soft object\n" },
				{ "SoftObject.Name", "EPropertyAccessObjectType::SoftObject" },
				{ "SoftObject.ToolTip", "Access is a soft object" },
				{ "ToolTip", "For object nodes, we need to know what type of object we are looking at so we can cast appropriately" },
				{ "WeakObject.Comment", "// Access is a weak object\n" },
				{ "WeakObject.Name", "EPropertyAccessObjectType::WeakObject" },
				{ "WeakObject.ToolTip", "Access is a weak object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PropertyAccess,
				nullptr,
				"EPropertyAccessObjectType",
				"EPropertyAccessObjectType",
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
	static UEnum* EPropertyAccessIndirectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("EPropertyAccessIndirectionType"));
		}
		return Singleton;
	}
	template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessIndirectionType>()
	{
		return EPropertyAccessIndirectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyAccessIndirectionType(EPropertyAccessIndirectionType_StaticEnum, TEXT("/Script/PropertyAccess"), TEXT("EPropertyAccessIndirectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType_Hash() { return 3287618905U; }
	UEnum* Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyAccessIndirectionType"), 0, Get_Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyAccessIndirectionType::Offset", (int64)EPropertyAccessIndirectionType::Offset },
				{ "EPropertyAccessIndirectionType::Object", (int64)EPropertyAccessIndirectionType::Object },
				{ "EPropertyAccessIndirectionType::Array", (int64)EPropertyAccessIndirectionType::Array },
				{ "EPropertyAccessIndirectionType::ScriptFunction", (int64)EPropertyAccessIndirectionType::ScriptFunction },
				{ "EPropertyAccessIndirectionType::NativeFunction", (int64)EPropertyAccessIndirectionType::NativeFunction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Comment", "// Access node indexes a dynamic array\n" },
				{ "Array.Name", "EPropertyAccessIndirectionType::Array" },
				{ "Array.ToolTip", "Access node indexes a dynamic array" },
				{ "Comment", "// The type of an indirection\n" },
				{ "ModuleRelativePath", "Public/PropertyAccess.h" },
				{ "NativeFunction.Comment", "// Access node calls a native function to get a value\n" },
				{ "NativeFunction.Name", "EPropertyAccessIndirectionType::NativeFunction" },
				{ "NativeFunction.ToolTip", "Access node calls a native function to get a value" },
				{ "Object.Comment", "// Access node needs to dereference an object at its current address\n" },
				{ "Object.Name", "EPropertyAccessIndirectionType::Object" },
				{ "Object.ToolTip", "Access node needs to dereference an object at its current address" },
				{ "Offset.Comment", "// Access node is a simple basePtr + offset\n" },
				{ "Offset.Name", "EPropertyAccessIndirectionType::Offset" },
				{ "Offset.ToolTip", "Access node is a simple basePtr + offset" },
				{ "ScriptFunction.Comment", "// Access node calls a script function to get a value\n" },
				{ "ScriptFunction.Name", "EPropertyAccessIndirectionType::ScriptFunction" },
				{ "ScriptFunction.ToolTip", "Access node calls a script function to get a value" },
				{ "ToolTip", "The type of an indirection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PropertyAccess,
				nullptr,
				"EPropertyAccessIndirectionType",
				"EPropertyAccessIndirectionType",
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
class UScriptStruct* FPropertyAccessLibrary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessLibrary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessLibrary, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessLibrary"), sizeof(FPropertyAccessLibrary), Get_Z_Construct_UScriptStruct_FPropertyAccessLibrary_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessLibrary>()
{
	return FPropertyAccessLibrary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessLibrary(FPropertyAccessLibrary::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessLibrary"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessLibrary
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessLibrary()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessLibrary")),new UScriptStruct::TCppStructOps<FPropertyAccessLibrary>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessLibrary;
	struct Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathSegments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcPaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyBatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyBatches;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcAccesses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcAccesses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcAccesses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestAccesses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestAccesses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestAccesses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Indirections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indirections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indirections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventAccessIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventAccessIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventAccessIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A library of property paths used within a specific context (e.g. a class) */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A library of property paths used within a specific context (e.g. a class)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessLibrary>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_Inner = { "PathSegments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData[] = {
		{ "Comment", "// All path segments in this library.\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All path segments in this library." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments = { "PathSegments", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, PathSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_Inner = { "SrcPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData[] = {
		{ "Comment", "// All source paths\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All source paths" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths = { "SrcPaths", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, SrcPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_Inner = { "DestPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData[] = {
		{ "Comment", "// All destination paths\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All destination paths" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths = { "DestPaths", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, DestPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData[] = {
		{ "ArraySizeEnum", "/Script/PropertyAccess.EPropertyAccessCopyBatch" },
		{ "Comment", "// All copy operations\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All copy operations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches = { "CopyBatches", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CopyBatches, FPropertyAccessLibrary), STRUCT_OFFSET(FPropertyAccessLibrary, CopyBatches), Z_Construct_UScriptStruct_FPropertyAccessCopyBatch, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses_Inner = { "SrcAccesses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses_MetaData[] = {
		{ "Comment", "// All source property accesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All source property accesses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses = { "SrcAccesses", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, SrcAccesses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses_Inner = { "DestAccesses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses_MetaData[] = {
		{ "Comment", "// All destination accesses (that are copied to our instances).\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All destination accesses (that are copied to our instances)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses = { "DestAccesses", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, DestAccesses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections_Inner = { "Indirections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessIndirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections_MetaData[] = {
		{ "Comment", "// Indirections\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Indirections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections = { "Indirections", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, Indirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices_Inner = { "EventAccessIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices_MetaData[] = {
		{ "Comment", "// Indexes into the SrcAccesses array to allow faster iteration of all event accesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Indexes into the SrcAccesses array to allow faster iteration of all event accesses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices = { "EventAccessIndices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessLibrary, EventAccessIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcAccesses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestAccesses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_Indirections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_EventAccessIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessLibrary",
		sizeof(FPropertyAccessLibrary),
		alignof(FPropertyAccessLibrary),
		Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessLibrary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessLibrary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessLibrary"), sizeof(FPropertyAccessLibrary), Get_Z_Construct_UScriptStruct_FPropertyAccessLibrary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessLibrary_Hash() { return 493652025U; }
class UScriptStruct* FPropertyAccessCopyBatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessCopyBatch"), sizeof(FPropertyAccessCopyBatch), Get_Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessCopyBatch>()
{
	return FPropertyAccessCopyBatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessCopyBatch(FPropertyAccessCopyBatch::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessCopyBatch"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopyBatch
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopyBatch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessCopyBatch")),new UScriptStruct::TCppStructOps<FPropertyAccessCopyBatch>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopyBatch;
	struct Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Copies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Copies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Copies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessCopyBatch>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_Inner = { "Copies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyAccessCopy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies = { "Copies", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessCopyBatch, Copies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessCopyBatch",
		sizeof(FPropertyAccessCopyBatch),
		alignof(FPropertyAccessCopyBatch),
		Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessCopyBatch"), sizeof(FPropertyAccessCopyBatch), Get_Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Hash() { return 2734492599U; }
class UScriptStruct* FPropertyAccessCopy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessCopy, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessCopy"), sizeof(FPropertyAccessCopy), Get_Z_Construct_UScriptStruct_FPropertyAccessCopy_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessCopy>()
{
	return FPropertyAccessCopy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessCopy(FPropertyAccessCopy::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessCopy"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopy
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessCopy")),new UScriptStruct::TCppStructOps<FPropertyAccessCopy>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessCopy;
	struct Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AccessIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestAccessStartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestAccessStartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestAccessEndIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestAccessEndIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A property copy, represents a one-to-many copy operation\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A property copy, represents a one-to-many copy operation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessCopy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData[] = {
		{ "Comment", "// Index into the library's Accesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index into the library's Accesses" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex = { "AccessIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessCopy, AccessIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData[] = {
		{ "Comment", "// Index of the first of the library's DescAccesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the first of the library's DescAccesses" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex = { "DestAccessStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessCopy, DestAccessStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData[] = {
		{ "Comment", "// Index of the last of the library's DescAccesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the last of the library's DescAccesses" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex = { "DestAccessEndIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessCopy, DestAccessEndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessCopy, Type), Z_Construct_UEnum_PropertyAccess_EPropertyAccessCopyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessCopy",
		sizeof(FPropertyAccessCopy),
		alignof(FPropertyAccessCopy),
		Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessCopy"), sizeof(FPropertyAccessCopy), Get_Z_Construct_UScriptStruct_FPropertyAccessCopy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessCopy_Hash() { return 1554820465U; }
class UScriptStruct* FPropertyAccessPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessPath, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessPath"), sizeof(FPropertyAccessPath), Get_Z_Construct_UScriptStruct_FPropertyAccessPath_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessPath>()
{
	return FPropertyAccessPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessPath(FPropertyAccessPath::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessPath"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessPath
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessPath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessPath")),new UScriptStruct::TCppStructOps<FPropertyAccessPath>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessPath;
	struct Z_Construct_UScriptStruct_FPropertyAccessPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSegmentStartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathSegmentStartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathSegmentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathSegmentCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEvents_MetaData[];
#endif
		static void NewProp_bHasEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A property access path. References a string of property access segments.\n// These are resolved at load time to create corresponding FPropertyAccess entries\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A property access path. References a string of property access segments.\nThese are resolved at load time to create corresponding FPropertyAccess entries" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessPath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData[] = {
		{ "Comment", "// Index into the library's path segments. Used to provide a starting point for a path resolve\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index into the library's path segments. Used to provide a starting point for a path resolve" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex = { "PathSegmentStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessPath, PathSegmentStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData[] = {
		{ "Comment", "// The count of the path segments.\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The count of the path segments." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount = { "PathSegmentCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessPath, PathSegmentCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents_MetaData[] = {
		{ "Comment", "// Whether this access has events in its path\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Whether this access has events in its path" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents_SetBit(void* Obj)
	{
		((FPropertyAccessPath*)Obj)->bHasEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents = { "bHasEvents", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPropertyAccessPath), &Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_bHasEvents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessPath",
		sizeof(FPropertyAccessPath),
		alignof(FPropertyAccessPath),
		Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessPath"), sizeof(FPropertyAccessPath), Get_Z_Construct_UScriptStruct_FPropertyAccessPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessPath_Hash() { return 2606876835U; }
class UScriptStruct* FPropertyAccessSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessSegment, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessSegment"), sizeof(FPropertyAccessSegment), Get_Z_Construct_UScriptStruct_FPropertyAccessSegment_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessSegment>()
{
	return FPropertyAccessSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessSegment(FPropertyAccessSegment::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessSegment"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessSegment
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessSegment")),new UScriptStruct::TCppStructOps<FPropertyAccessSegment>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessSegment;
	struct Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A segment of a 'property path' used to access an object's properties from another location\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A segment of a 'property path' used to access an object's properties from another location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The sub-component of the property path, a single value between .'s of the path */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The sub-component of the property path, a single value between .'s of the path" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The Class or ScriptStruct that was used last to resolve Name to a property. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The Class or ScriptStruct that was used last to resolve Name to a property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData[] = {
		{ "Comment", "/** The cached property on the Struct that this Name resolved to at compile time. If this is a Function segment, then this is the return property of the function. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The cached property on the Struct that this Name resolved to at compile time. If this is a Function segment, then this is the return property of the function." },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** If this segment is a function, EPropertyAccessSegmentFlags::Function flag will be present and this value will be valid */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "If this segment is a function, EPropertyAccessSegmentFlags::Function flag will be present and this value will be valid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The optional array index. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The optional array index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** @see EPropertyAccessSegmentFlags */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "@see EPropertyAccessSegmentFlags" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessSegment, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessSegment",
		sizeof(FPropertyAccessSegment),
		alignof(FPropertyAccessSegment),
		Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessSegment"), sizeof(FPropertyAccessSegment), Get_Z_Construct_UScriptStruct_FPropertyAccessSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessSegment_Hash() { return 4270898995U; }
class UScriptStruct* FPropertyAccessIndirectionChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessIndirectionChain"), sizeof(FPropertyAccessIndirectionChain), Get_Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessIndirectionChain>()
{
	return FPropertyAccessIndirectionChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessIndirectionChain(FPropertyAccessIndirectionChain::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessIndirectionChain"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirectionChain
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirectionChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessIndirectionChain")),new UScriptStruct::TCppStructOps<FPropertyAccessIndirectionChain>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirectionChain;
	struct Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectionStartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndirectionStartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectionEndIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndirectionEndIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A single property access list. This is a list of FPropertyAccessIndirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A single property access list. This is a list of FPropertyAccessIndirection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessIndirectionChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData[] = {
		{ "Comment", "// Leaf property\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Leaf property" },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirectionChain, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData[] = {
		{ "Comment", "// Index of the first indirection of a property access\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the first indirection of a property access" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex = { "IndirectionStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData[] = {
		{ "Comment", "// Index of the last indirection of a property access\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the last indirection of a property access" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex = { "IndirectionEndIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionEndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_EventId_MetaData[] = {
		{ "Comment", "// If this access is an event, then this will be the event Id of the property\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "If this access is an event, then this will be the event Id of the property" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirectionChain, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessIndirectionChain",
		sizeof(FPropertyAccessIndirectionChain),
		alignof(FPropertyAccessIndirectionChain),
		Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessIndirectionChain"), sizeof(FPropertyAccessIndirectionChain), Get_Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Hash() { return 336108504U; }
class UScriptStruct* FPropertyAccessIndirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYACCESS_API uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessIndirection, Z_Construct_UPackage__Script_PropertyAccess(), TEXT("PropertyAccessIndirection"), sizeof(FPropertyAccessIndirection), Get_Z_Construct_UScriptStruct_FPropertyAccessIndirection_Hash());
	}
	return Singleton;
}
template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<FPropertyAccessIndirection>()
{
	return FPropertyAccessIndirection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyAccessIndirection(FPropertyAccessIndirection::StaticStruct, TEXT("/Script/PropertyAccess"), TEXT("PropertyAccessIndirection"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirection
{
	FScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyAccessIndirection")),new UScriptStruct::TCppStructOps<FPropertyAccessIndirection>);
	}
} ScriptStruct_PropertyAccess_StaticRegisterNativesFPropertyAccessIndirection;
	struct Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_ArrayProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnBufferAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnBufferAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Runtime-generated access node.\n// Represents:\n// - An offset within an object \n// - An indirection to follow (object, array, function)\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Runtime-generated access node.\nRepresents:\n- An offset within an object\n- An indirection to follow (object, array, function)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessIndirection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayProperty_MetaData[] = {
		{ "Comment", "// Array property if this is an array indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Array property if this is an array indirection" },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayProperty = { "ArrayProperty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, ArrayProperty), &FArrayProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "// Function if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Function if this is a script of native function indirection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData[] = {
		{ "Comment", "// Return buffer size if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Return buffer size if this is a script of native function indirection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize = { "ReturnBufferSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData[] = {
		{ "Comment", "// Return buffer alignment if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Return buffer alignment if this is a script of native function indirection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment = { "ReturnBufferAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "// Array index if this is an array indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Array index if this is an array indirection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "// Offset of this indirection within its containing object\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Offset of this indirection within its containing object" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Comment", "// Object type if this is an object indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Object type if this is an object indirection" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, ObjectType), Z_Construct_UEnum_PropertyAccess_EPropertyAccessObjectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// The type of this indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The type of this indirection" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyAccessIndirection, Type), Z_Construct_UEnum_PropertyAccess_EPropertyAccessIndirectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyAccess,
		nullptr,
		&NewStructOps,
		"PropertyAccessIndirection",
		sizeof(FPropertyAccessIndirection),
		alignof(FPropertyAccessIndirection),
		Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyAccess();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyAccessIndirection"), sizeof(FPropertyAccessIndirection), Get_Z_Construct_UScriptStruct_FPropertyAccessIndirection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyAccessIndirection_Hash() { return 2785708093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
