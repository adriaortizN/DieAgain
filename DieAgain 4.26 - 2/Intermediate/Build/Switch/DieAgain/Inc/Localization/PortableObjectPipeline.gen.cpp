// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Localization/Public/PortableObjectPipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortableObjectPipeline() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat();
	UPackage* Z_Construct_UPackage__Script_Localization();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
// End Cross Module References
	static UEnum* EPortableObjectFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_EPortableObjectFormat, Z_Construct_UPackage__Script_Localization(), TEXT("EPortableObjectFormat"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<EPortableObjectFormat>()
	{
		return EPortableObjectFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPortableObjectFormat(EPortableObjectFormat_StaticEnum, TEXT("/Script/Localization"), TEXT("EPortableObjectFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_EPortableObjectFormat_Hash() { return 3894543668U; }
	UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPortableObjectFormat"), 0, Get_Z_Construct_UEnum_Localization_EPortableObjectFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPortableObjectFormat::Unreal", (int64)EPortableObjectFormat::Unreal },
				{ "EPortableObjectFormat::Crowdin", (int64)EPortableObjectFormat::Crowdin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Crowdin.Comment", "/**\n\x09 * The PO file uses the Crowdin format.\n\x09 *\n\x09 * When using the \"Identical Text Identity and Source Text\" collapse mode:\n\x09 *\x09- msgctxt is unused.\n\x09 *\x09- msgid contains the Unreal identity of the entry.\n\x09 *\x09- msgstr contains the source string (for the native culture), or the translation (for foreign cultures).\n\x09 *\x09- X-Crowdin-SourceKey header attribute specifies that msgstr is used as the source text from the native culture.\n\x09 *\n\x09 * When using the \"Identical Namespace and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal namespace of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 */" },
				{ "Crowdin.Name", "EPortableObjectFormat::Crowdin" },
				{ "Crowdin.ToolTip", "The PO file uses the Crowdin format.\n\nWhen using the \"Identical Text Identity and Source Text\" collapse mode:\n     - msgctxt is unused.\n     - msgid contains the Unreal identity of the entry.\n     - msgstr contains the source string (for the native culture), or the translation (for foreign cultures).\n     - X-Crowdin-SourceKey header attribute specifies that msgstr is used as the source text from the native culture.\n\nWhen using the \"Identical Namespace and Source Text\" collapse mode:\n     - msgctxt contains the Unreal namespace of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation." },
				{ "ModuleRelativePath", "Public/PortableObjectPipeline.h" },
				{ "Unreal.Comment", "/**\n\x09 * The PO file uses the Unreal format.\n\x09 *\n\x09 * When using the \"Identical Text Identity and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal identity of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 *\n\x09 * When using the \"Identical Namespace and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal namespace of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 */" },
				{ "Unreal.Name", "EPortableObjectFormat::Unreal" },
				{ "Unreal.ToolTip", "The PO file uses the Unreal format.\n\nWhen using the \"Identical Text Identity and Source Text\" collapse mode:\n     - msgctxt contains the Unreal identity of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation.\n\nWhen using the \"Identical Namespace and Source Text\" collapse mode:\n     - msgctxt contains the Unreal namespace of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"EPortableObjectFormat",
				"EPortableObjectFormat",
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
	static UEnum* ELocalizedTextCollapseMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizedTextCollapseMode"));
		}
		return Singleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizedTextCollapseMode>()
	{
		return ELocalizedTextCollapseMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizedTextCollapseMode(ELocalizedTextCollapseMode_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizedTextCollapseMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Hash() { return 3518939671U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizedTextCollapseMode"), 0, Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizedTextCollapseMode::IdenticalTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalTextIdAndSource },
				{ "ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource },
				{ "ELocalizedTextCollapseMode::IdenticalNamespaceAndSource", (int64)ELocalizedTextCollapseMode::IdenticalNamespaceAndSource },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IdenticalNamespaceAndSource.Comment", "/** Collapse texts with the same namespace and source text (legacy pre-4.14 behavior). */" },
				{ "IdenticalNamespaceAndSource.DisplayName", "Identical Namespace and Source Text" },
				{ "IdenticalNamespaceAndSource.Name", "ELocalizedTextCollapseMode::IdenticalNamespaceAndSource" },
				{ "IdenticalNamespaceAndSource.ToolTip", "Collapse texts with the same namespace and source text (legacy pre-4.14 behavior)." },
				{ "IdenticalPackageIdTextIdAndSource.Comment", "/** Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior, removed in 4.17). */" },
				{ "IdenticalPackageIdTextIdAndSource.DisplayName", "Identical Package ID, Text Identity (Namespace + Key) and Source Text" },
				{ "IdenticalPackageIdTextIdAndSource.Hidden", "" },
				{ "IdenticalPackageIdTextIdAndSource.Name", "ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource" },
				{ "IdenticalPackageIdTextIdAndSource.ToolTip", "Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior, removed in 4.17)." },
				{ "IdenticalTextIdAndSource.Comment", "/** Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior). */" },
				{ "IdenticalTextIdAndSource.DisplayName", "Identical Text Identity (Namespace + Key) and Source Text" },
				{ "IdenticalTextIdAndSource.Name", "ELocalizedTextCollapseMode::IdenticalTextIdAndSource" },
				{ "IdenticalTextIdAndSource.ToolTip", "Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior)." },
				{ "ModuleRelativePath", "Public/PortableObjectPipeline.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				"ELocalizedTextCollapseMode",
				"ELocalizedTextCollapseMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
