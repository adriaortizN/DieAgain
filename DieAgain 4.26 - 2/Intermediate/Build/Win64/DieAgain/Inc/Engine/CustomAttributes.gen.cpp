// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/CustomAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAttributes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedStringCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting();
// End Cross Module References
	static UEnum* ECustomAttributeBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomAttributeBlendType, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomAttributeBlendType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomAttributeBlendType>()
	{
		return ECustomAttributeBlendType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomAttributeBlendType(ECustomAttributeBlendType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomAttributeBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Hash() { return 2219230462U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomAttributeBlendType"), 0, Get_Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomAttributeBlendType::Override", (int64)ECustomAttributeBlendType::Override },
				{ "ECustomAttributeBlendType::Blend", (int64)ECustomAttributeBlendType::Blend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blend.Comment", "/** Blends Custom attributes according to weights per pose */" },
				{ "Blend.Name", "ECustomAttributeBlendType::Blend" },
				{ "Blend.ToolTip", "Blends Custom attributes according to weights per pose" },
				{ "DevelopmentStatus", "Experimental" },
				{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
				{ "Override.Comment", "/** Overrides Custom attributes according to highest weighted pose */" },
				{ "Override.Name", "ECustomAttributeBlendType::Override" },
				{ "Override.ToolTip", "Overrides Custom attributes according to highest weighted pose" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECustomAttributeBlendType",
				"ECustomAttributeBlendType",
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
class UScriptStruct* FBakedCustomAttributePerBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData, Z_Construct_UPackage__Script_Engine(), TEXT("BakedCustomAttributePerBoneData"), sizeof(FBakedCustomAttributePerBoneData), Get_Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedCustomAttributePerBoneData>()
{
	return FBakedCustomAttributePerBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedCustomAttributePerBoneData(FBakedCustomAttributePerBoneData::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedCustomAttributePerBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedCustomAttributePerBoneData
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedCustomAttributePerBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedCustomAttributePerBoneData")),new UScriptStruct::TCppStructOps<FBakedCustomAttributePerBoneData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedCustomAttributePerBoneData;
	struct Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringAttributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntAttributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure describing baked custom attributes for a single bone (index) */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Structure describing baked custom attributes for a single bone (index)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedCustomAttributePerBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_Inner = { "StringAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedStringCustomAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes = { "StringAttributes", nullptr, (EPropertyFlags)0x0010000000020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, StringAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_Inner = { "IntAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes = { "IntAttributes", nullptr, (EPropertyFlags)0x0010000000020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, IntAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_Inner = { "FloatAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedFloatCustomAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes = { "FloatAttributes", nullptr, (EPropertyFlags)0x0010000000020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, FloatAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedCustomAttributePerBoneData",
		sizeof(FBakedCustomAttributePerBoneData),
		alignof(FBakedCustomAttributePerBoneData),
		Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedCustomAttributePerBoneData"), sizeof(FBakedCustomAttributePerBoneData), Get_Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Hash() { return 3158598984U; }
class UScriptStruct* FBakedFloatCustomAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("BakedFloatCustomAttribute"), sizeof(FBakedFloatCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedFloatCustomAttribute>()
{
	return FBakedFloatCustomAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedFloatCustomAttribute(FBakedFloatCustomAttribute::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedFloatCustomAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedFloatCustomAttribute
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedFloatCustomAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedFloatCustomAttribute")),new UScriptStruct::TCppStructOps<FBakedFloatCustomAttribute>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedFloatCustomAttribute;
	struct Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** (Baked) float custom attribute, uses FSimpleCurve for evaluation instead of FVariant array */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "(Baked) float custom attribute, uses FSimpleCurve for evaluation instead of FVariant array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedFloatCustomAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedFloatCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedFloatCustomAttribute, FloatCurve), Z_Construct_UScriptStruct_FSimpleCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedFloatCustomAttribute",
		sizeof(FBakedFloatCustomAttribute),
		alignof(FBakedFloatCustomAttribute),
		Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedFloatCustomAttribute"), sizeof(FBakedFloatCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Hash() { return 1016722215U; }
class UScriptStruct* FBakedIntegerCustomAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("BakedIntegerCustomAttribute"), sizeof(FBakedIntegerCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedIntegerCustomAttribute>()
{
	return FBakedIntegerCustomAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedIntegerCustomAttribute(FBakedIntegerCustomAttribute::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedIntegerCustomAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedIntegerCustomAttribute
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedIntegerCustomAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedIntegerCustomAttribute")),new UScriptStruct::TCppStructOps<FBakedIntegerCustomAttribute>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedIntegerCustomAttribute;
	struct Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** (Baked) int32 custom attribute, uses FIntegralCurve for evaluation instead of FVariant array */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "(Baked) int32 custom attribute, uses FIntegralCurve for evaluation instead of FVariant array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedIntegerCustomAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedIntegerCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve = { "IntCurve", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedIntegerCustomAttribute, IntCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedIntegerCustomAttribute",
		sizeof(FBakedIntegerCustomAttribute),
		alignof(FBakedIntegerCustomAttribute),
		Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedIntegerCustomAttribute"), sizeof(FBakedIntegerCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Hash() { return 1723998499U; }
class UScriptStruct* FBakedStringCustomAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedStringCustomAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("BakedStringCustomAttribute"), sizeof(FBakedStringCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedStringCustomAttribute>()
{
	return FBakedStringCustomAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedStringCustomAttribute(FBakedStringCustomAttribute::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedStringCustomAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedStringCustomAttribute
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedStringCustomAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedStringCustomAttribute")),new UScriptStruct::TCppStructOps<FBakedStringCustomAttribute>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedStringCustomAttribute;
	struct Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** (Baked) string custom attribute, uses FStringCurve for evaluation instead of FVariant array */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "(Baked) string custom attribute, uses FStringCurve for evaluation instead of FVariant array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedStringCustomAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedStringCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBakedStringCustomAttribute, StringCurve), Z_Construct_UScriptStruct_FStringCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedStringCustomAttribute",
		sizeof(FBakedStringCustomAttribute),
		alignof(FBakedStringCustomAttribute),
		Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedStringCustomAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedStringCustomAttribute"), sizeof(FBakedStringCustomAttribute), Get_Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Hash() { return 2401305267U; }
class UScriptStruct* FCustomAttributePerBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttributePerBoneData, Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttributePerBoneData"), sizeof(FCustomAttributePerBoneData), Get_Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttributePerBoneData>()
{
	return FCustomAttributePerBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomAttributePerBoneData(FCustomAttributePerBoneData::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomAttributePerBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomAttributePerBoneData
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomAttributePerBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomAttributePerBoneData")),new UScriptStruct::TCppStructOps<FCustomAttributePerBoneData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomAttributePerBoneData;
	struct Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure describing custom attributes for a single bone (index) */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Structure describing custom attributes for a single bone (index)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttributePerBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttributePerBoneData, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttributePerBoneData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttributePerBoneData",
		sizeof(FCustomAttributePerBoneData),
		alignof(FCustomAttributePerBoneData),
		Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomAttributePerBoneData"), sizeof(FCustomAttributePerBoneData), Get_Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Hash() { return 2889113328U; }
class UScriptStruct* FCustomAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttribute"), sizeof(FCustomAttribute), Get_Z_Construct_UScriptStruct_FCustomAttribute_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttribute>()
{
	return FCustomAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomAttribute(FCustomAttribute::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomAttribute
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomAttribute")),new UScriptStruct::TCppStructOps<FCustomAttribute>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomAttribute;
	struct Z_Construct_UScriptStruct_FCustomAttribute_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariantType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariantType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomAttribute" },
		{ "Comment", "/** Name of this attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of this attribute" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttribute, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData[] = {
		{ "Category", "CustomAttribute" },
		{ "Comment", "/** (FVariant) type contained by Values array */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "(FVariant) type contained by Values array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType = { "VariantType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttribute, VariantType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "Comment", "/** Time keys (should match number of Value entries) */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Time keys (should match number of Value entries)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttribute, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttribute",
		sizeof(FCustomAttribute),
		alignof(FCustomAttribute),
		Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomAttribute"), sizeof(FCustomAttribute), Get_Z_Construct_UScriptStruct_FCustomAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomAttribute_Hash() { return 1213995595U; }
class UScriptStruct* FCustomAttributeSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomAttributeSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttributeSetting, Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttributeSetting"), sizeof(FCustomAttributeSetting), Get_Z_Construct_UScriptStruct_FCustomAttributeSetting_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttributeSetting>()
{
	return FCustomAttributeSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomAttributeSetting(FCustomAttributeSetting::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomAttributeSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomAttributeSetting
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomAttributeSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomAttributeSetting")),new UScriptStruct::TCppStructOps<FCustomAttributeSetting>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomAttributeSetting;
	struct Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meaning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Meaning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttributeSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomAttributeSetting" },
		{ "Comment", "/** Name of the custom attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttributeSetting, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData[] = {
		{ "Category", "CustomAttributeSetting" },
		{ "Comment", "/** Optional property describing the meaning (or role) of the custom attribute, allowing to add context to an attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Optional property describing the meaning (or role) of the custom attribute, allowing to add context to an attribute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning = { "Meaning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAttributeSetting, Meaning), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttributeSetting",
		sizeof(FCustomAttributeSetting),
		alignof(FCustomAttributeSetting),
		Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomAttributeSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomAttributeSetting"), sizeof(FCustomAttributeSetting), Get_Z_Construct_UScriptStruct_FCustomAttributeSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomAttributeSetting_Hash() { return 3846452244U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
