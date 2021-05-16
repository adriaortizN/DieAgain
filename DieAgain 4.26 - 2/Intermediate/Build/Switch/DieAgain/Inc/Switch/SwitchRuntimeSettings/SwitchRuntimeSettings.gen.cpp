// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchRuntimeSettings/Classes/SwitchRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchRuntimeSettings() {}
// Cross Module References
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior();
	UPackage* Z_Construct_UPackage__Script_SwitchRuntimeSettings();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode();
	SWITCHRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode();
	SWITCHRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchAddOnContentChunk();
	SWITCHRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchLeaderboardMapping();
	SWITCHRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchLocalizedTitle();
	SWITCHRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchAgeRating();
	SWITCHRUNTIMESETTINGS_API UClass* Z_Construct_UClass_USwitchRuntimeSettings_NoRegister();
	SWITCHRUNTIMESETTINGS_API UClass* Z_Construct_UClass_USwitchRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
// End Cross Module References
	static UEnum* ESwitchOpusBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchOpusBehavior"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchOpusBehavior>()
	{
		return ESwitchOpusBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchOpusBehavior(ESwitchOpusBehavior_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchOpusBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior_Hash() { return 3071576916U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchOpusBehavior"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchOpusBehavior::Default", (int64)ESwitchOpusBehavior::Default },
				{ "ESwitchOpusBehavior::StreamingSoundsOnly", (int64)ESwitchOpusBehavior::StreamingSoundsOnly },
				{ "ESwitchOpusBehavior::AllOneShots", (int64)ESwitchOpusBehavior::AllOneShots },
				{ "ESwitchOpusBehavior::Nothing", (int64)ESwitchOpusBehavior::Nothing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllOneShots.Comment", "// Only use the Opus hardware decoder for streaming sounds.\n" },
				{ "AllOneShots.Name", "ESwitchOpusBehavior::AllOneShots" },
				{ "AllOneShots.ToolTip", "Only use the Opus hardware decoder for streaming sounds." },
				{ "Default.Name", "ESwitchOpusBehavior::Default" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "Nothing.Comment", "// Use the opus hardware decoder for all non-looping sounds.\n" },
				{ "Nothing.Name", "ESwitchOpusBehavior::Nothing" },
				{ "Nothing.ToolTip", "Use the opus hardware decoder for all non-looping sounds." },
				{ "StreamingSoundsOnly.Name", "ESwitchOpusBehavior::StreamingSoundsOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchOpusBehavior",
				"ESwitchOpusBehavior",
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
	static UEnum* ESwitchLanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchLanguage"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchLanguage>()
	{
		return ESwitchLanguage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchLanguage(ESwitchLanguage_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchLanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage_Hash() { return 285988559U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchLanguage"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchLanguage::AmericanEnglish", (int64)ESwitchLanguage::AmericanEnglish },
				{ "ESwitchLanguage::BritishEnglish", (int64)ESwitchLanguage::BritishEnglish },
				{ "ESwitchLanguage::Japanese", (int64)ESwitchLanguage::Japanese },
				{ "ESwitchLanguage::French", (int64)ESwitchLanguage::French },
				{ "ESwitchLanguage::German", (int64)ESwitchLanguage::German },
				{ "ESwitchLanguage::LatinAmericanSpanish", (int64)ESwitchLanguage::LatinAmericanSpanish },
				{ "ESwitchLanguage::Spanish", (int64)ESwitchLanguage::Spanish },
				{ "ESwitchLanguage::Italian", (int64)ESwitchLanguage::Italian },
				{ "ESwitchLanguage::Dutch", (int64)ESwitchLanguage::Dutch },
				{ "ESwitchLanguage::CanadianFrench", (int64)ESwitchLanguage::CanadianFrench },
				{ "ESwitchLanguage::Portuguese", (int64)ESwitchLanguage::Portuguese },
				{ "ESwitchLanguage::Russian", (int64)ESwitchLanguage::Russian },
				{ "ESwitchLanguage::SimplifiedChinese", (int64)ESwitchLanguage::SimplifiedChinese },
				{ "ESwitchLanguage::TraditionalChinese", (int64)ESwitchLanguage::TraditionalChinese },
				{ "ESwitchLanguage::Korean", (int64)ESwitchLanguage::Korean },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmericanEnglish.Name", "ESwitchLanguage::AmericanEnglish" },
				{ "BritishEnglish.Name", "ESwitchLanguage::BritishEnglish" },
				{ "CanadianFrench.Name", "ESwitchLanguage::CanadianFrench" },
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "Dutch.Name", "ESwitchLanguage::Dutch" },
				{ "French.Name", "ESwitchLanguage::French" },
				{ "German.Name", "ESwitchLanguage::German" },
				{ "Italian.Name", "ESwitchLanguage::Italian" },
				{ "Japanese.Name", "ESwitchLanguage::Japanese" },
				{ "Korean.Name", "ESwitchLanguage::Korean" },
				{ "LatinAmericanSpanish.Name", "ESwitchLanguage::LatinAmericanSpanish" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "Portuguese.Name", "ESwitchLanguage::Portuguese" },
				{ "Russian.Name", "ESwitchLanguage::Russian" },
				{ "SimplifiedChinese.Name", "ESwitchLanguage::SimplifiedChinese" },
				{ "Spanish.Name", "ESwitchLanguage::Spanish" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
				{ "TraditionalChinese.Name", "ESwitchLanguage::TraditionalChinese" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchLanguage",
				"ESwitchLanguage",
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
	static UEnum* ESwitchParentalControl_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchParentalControl"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchParentalControl>()
	{
		return ESwitchParentalControl_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchParentalControl(ESwitchParentalControl_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchParentalControl"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl_Hash() { return 1526055968U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchParentalControl"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchParentalControl::FreeCommunication", (int64)ESwitchParentalControl::FreeCommunication },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "FreeCommunication.Name", "ESwitchParentalControl::FreeCommunication" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchParentalControl",
				"ESwitchParentalControl",
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
	static UEnum* ESwitchRatingOrganization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchRatingOrganization"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchRatingOrganization>()
	{
		return ESwitchRatingOrganization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchRatingOrganization(ESwitchRatingOrganization_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchRatingOrganization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization_Hash() { return 2459749532U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchRatingOrganization"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchRatingOrganization::CERO", (int64)ESwitchRatingOrganization::CERO },
				{ "ESwitchRatingOrganization::GRACGCRB", (int64)ESwitchRatingOrganization::GRACGCRB },
				{ "ESwitchRatingOrganization::GSRMR", (int64)ESwitchRatingOrganization::GSRMR },
				{ "ESwitchRatingOrganization::ESRB", (int64)ESwitchRatingOrganization::ESRB },
				{ "ESwitchRatingOrganization::ClassInd", (int64)ESwitchRatingOrganization::ClassInd },
				{ "ESwitchRatingOrganization::USK", (int64)ESwitchRatingOrganization::USK },
				{ "ESwitchRatingOrganization::PEGI", (int64)ESwitchRatingOrganization::PEGI },
				{ "ESwitchRatingOrganization::PEGIPortugal", (int64)ESwitchRatingOrganization::PEGIPortugal },
				{ "ESwitchRatingOrganization::PEGIBBFC", (int64)ESwitchRatingOrganization::PEGIBBFC },
				{ "ESwitchRatingOrganization::Russian", (int64)ESwitchRatingOrganization::Russian },
				{ "ESwitchRatingOrganization::ACB", (int64)ESwitchRatingOrganization::ACB },
				{ "ESwitchRatingOrganization::OFLC", (int64)ESwitchRatingOrganization::OFLC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACB.Name", "ESwitchRatingOrganization::ACB" },
				{ "CERO.Name", "ESwitchRatingOrganization::CERO" },
				{ "ClassInd.Name", "ESwitchRatingOrganization::ClassInd" },
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "ESRB.Name", "ESwitchRatingOrganization::ESRB" },
				{ "GRACGCRB.Name", "ESwitchRatingOrganization::GRACGCRB" },
				{ "GSRMR.Name", "ESwitchRatingOrganization::GSRMR" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "OFLC.Name", "ESwitchRatingOrganization::OFLC" },
				{ "PEGI.Name", "ESwitchRatingOrganization::PEGI" },
				{ "PEGIBBFC.Name", "ESwitchRatingOrganization::PEGIBBFC" },
				{ "PEGIPortugal.Name", "ESwitchRatingOrganization::PEGIPortugal" },
				{ "Russian.Name", "ESwitchRatingOrganization::Russian" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
				{ "USK.Name", "ESwitchRatingOrganization::USK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchRatingOrganization",
				"ESwitchRatingOrganization",
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
	static UEnum* ESwitchLogoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchLogoType"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchLogoType>()
	{
		return ESwitchLogoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchLogoType(ESwitchLogoType_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchLogoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType_Hash() { return 1697109729U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchLogoType"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchLogoType::LicensedByNintendo", (int64)ESwitchLogoType::LicensedByNintendo },
				{ "ESwitchLogoType::DistributedByNintendo", (int64)ESwitchLogoType::DistributedByNintendo },
				{ "ESwitchLogoType::Nintendo", (int64)ESwitchLogoType::Nintendo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "DistributedByNintendo.Name", "ESwitchLogoType::DistributedByNintendo" },
				{ "LicensedByNintendo.Name", "ESwitchLogoType::LicensedByNintendo" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "Nintendo.Name", "ESwitchLogoType::Nintendo" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchLogoType",
				"ESwitchLogoType",
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
	static UEnum* ESwitchTouchscreenMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchTouchscreenMode"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchTouchscreenMode>()
	{
		return ESwitchTouchscreenMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchTouchscreenMode(ESwitchTouchscreenMode_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchTouchscreenMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode_Hash() { return 1334898310U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchTouchscreenMode"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchTouchscreenMode::Required", (int64)ESwitchTouchscreenMode::Required },
				{ "ESwitchTouchscreenMode::Supported", (int64)ESwitchTouchscreenMode::Supported },
				{ "ESwitchTouchscreenMode::None", (int64)ESwitchTouchscreenMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "None.DisplayName", "Not Used" },
				{ "None.Name", "ESwitchTouchscreenMode::None" },
				{ "Required.DisplayName", "Required" },
				{ "Required.Name", "ESwitchTouchscreenMode::Required" },
				{ "Supported.DisplayName", "Supported" },
				{ "Supported.Name", "ESwitchTouchscreenMode::Supported" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchTouchscreenMode",
				"ESwitchTouchscreenMode",
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
	static UEnum* ESwitchAccountStartupMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("ESwitchAccountStartupMode"));
		}
		return Singleton;
	}
	template<> SWITCHRUNTIMESETTINGS_API UEnum* StaticEnum<ESwitchAccountStartupMode>()
	{
		return ESwitchAccountStartupMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchAccountStartupMode(ESwitchAccountStartupMode_StaticEnum, TEXT("/Script/SwitchRuntimeSettings"), TEXT("ESwitchAccountStartupMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode_Hash() { return 729664324U; }
	UEnum* Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchAccountStartupMode"), 0, Get_Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwitchAccountStartupMode::Required", (int64)ESwitchAccountStartupMode::Required },
				{ "ESwitchAccountStartupMode::RequiredWithNetworkServiceAccountAvailable", (int64)ESwitchAccountStartupMode::RequiredWithNetworkServiceAccountAvailable },
				{ "ESwitchAccountStartupMode::None", (int64)ESwitchAccountStartupMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Note: these names are used directly in the meta file\n" },
				{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
				{ "None.DisplayName", "No account required" },
				{ "None.Name", "ESwitchAccountStartupMode::None" },
				{ "Required.DisplayName", "Account required" },
				{ "Required.Name", "ESwitchAccountStartupMode::Required" },
				{ "RequiredWithNetworkServiceAccountAvailable.DisplayName", "NSA account required" },
				{ "RequiredWithNetworkServiceAccountAvailable.Name", "ESwitchAccountStartupMode::RequiredWithNetworkServiceAccountAvailable" },
				{ "ToolTip", "Note: these names are used directly in the meta file" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
				nullptr,
				"ESwitchAccountStartupMode",
				"ESwitchAccountStartupMode",
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
class UScriptStruct* FSwitchAddOnContentChunk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWITCHRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("SwitchAddOnContentChunk"), sizeof(FSwitchAddOnContentChunk), Get_Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Hash());
	}
	return Singleton;
}
template<> SWITCHRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FSwitchAddOnContentChunk>()
{
	return FSwitchAddOnContentChunk::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwitchAddOnContentChunk(FSwitchAddOnContentChunk::StaticStruct, TEXT("/Script/SwitchRuntimeSettings"), TEXT("SwitchAddOnContentChunk"), false, nullptr, nullptr);
static struct FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAddOnContentChunk
{
	FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAddOnContentChunk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwitchAddOnContentChunk")),new UScriptStruct::TCppStructOps<FSwitchAddOnContentChunk>);
	}
} ScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAddOnContentChunk;
	struct Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ChunkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOnContentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_AddOnContentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds a mapping of Unreal pak chunk IDs to Nintendo Switch AddOnContent index.\n*/" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Holds a mapping of Unreal pak chunk IDs to Nintendo Switch AddOnContent index." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchAddOnContentChunk>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_ChunkId_MetaData[] = {
		{ "Comment", "/** The pak chunk id. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The pak chunk id." },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_ChunkId = { "ChunkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchAddOnContentChunk, ChunkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_ChunkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_ChunkId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_AddOnContentId_MetaData[] = {
		{ "Comment", "/** The Nintendo Switch AddOnContent index. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The Nintendo Switch AddOnContent index." },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_AddOnContentId = { "AddOnContentId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchAddOnContentChunk, AddOnContentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_AddOnContentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_AddOnContentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_Tag_MetaData[] = {
		{ "Comment", "/** The tag/name of the AddOnContent. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The tag/name of the AddOnContent." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchAddOnContentChunk, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_ChunkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_AddOnContentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
		nullptr,
		&NewStructOps,
		"SwitchAddOnContentChunk",
		sizeof(FSwitchAddOnContentChunk),
		alignof(FSwitchAddOnContentChunk),
		Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchAddOnContentChunk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwitchAddOnContentChunk"), sizeof(FSwitchAddOnContentChunk), Get_Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwitchAddOnContentChunk_Hash() { return 885863357U; }
class UScriptStruct* FSwitchLeaderboardMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWITCHRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("SwitchLeaderboardMapping"), sizeof(FSwitchLeaderboardMapping), Get_Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Hash());
	}
	return Singleton;
}
template<> SWITCHRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FSwitchLeaderboardMapping>()
{
	return FSwitchLeaderboardMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwitchLeaderboardMapping(FSwitchLeaderboardMapping::StaticStruct, TEXT("/Script/SwitchRuntimeSettings"), TEXT("SwitchLeaderboardMapping"), false, nullptr, nullptr);
static struct FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLeaderboardMapping
{
	FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLeaderboardMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwitchLeaderboardMapping")),new UScriptStruct::TCppStructOps<FSwitchLeaderboardMapping>);
	}
} ScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLeaderboardMapping;
	struct Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds the game-specific column name and corresponding category ID from Switch services.\n*/" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Holds the game-specific column name and corresponding category ID from Switch services." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchLeaderboardMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "Leaderboard" },
		{ "Comment", "/** The game-specific column name for the stat. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The game-specific column name for the stat." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchLeaderboardMapping, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_CategoryID_MetaData[] = {
		{ "Category", "Leaderboard" },
		{ "Comment", "/** The ID of the corresponding category, which is created on NMAS. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The ID of the corresponding category, which is created on NMAS." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchLeaderboardMapping, CategoryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_CategoryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_CategoryID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::NewProp_CategoryID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
		nullptr,
		&NewStructOps,
		"SwitchLeaderboardMapping",
		sizeof(FSwitchLeaderboardMapping),
		alignof(FSwitchLeaderboardMapping),
		Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchLeaderboardMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwitchLeaderboardMapping"), sizeof(FSwitchLeaderboardMapping), Get_Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwitchLeaderboardMapping_Hash() { return 3624100234U; }
class UScriptStruct* FSwitchLocalizedTitle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWITCHRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchLocalizedTitle, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("SwitchLocalizedTitle"), sizeof(FSwitchLocalizedTitle), Get_Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Hash());
	}
	return Singleton;
}
template<> SWITCHRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FSwitchLocalizedTitle>()
{
	return FSwitchLocalizedTitle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwitchLocalizedTitle(FSwitchLocalizedTitle::StaticStruct, TEXT("/Script/SwitchRuntimeSettings"), TEXT("SwitchLocalizedTitle"), false, nullptr, nullptr);
static struct FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLocalizedTitle
{
	FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLocalizedTitle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwitchLocalizedTitle")),new UScriptStruct::TCppStructOps<FSwitchLocalizedTitle>);
	}
} ScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchLocalizedTitle;
	struct Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Publisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Publisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchLocalizedTitle>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchLocalizedTitle, Language), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchLocalizedTitle, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Publisher_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Publisher = { "Publisher", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchLocalizedTitle, Publisher), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Publisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Publisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::NewProp_Publisher,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
		nullptr,
		&NewStructOps,
		"SwitchLocalizedTitle",
		sizeof(FSwitchLocalizedTitle),
		alignof(FSwitchLocalizedTitle),
		Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchLocalizedTitle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwitchLocalizedTitle"), sizeof(FSwitchLocalizedTitle), Get_Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwitchLocalizedTitle_Hash() { return 3782064337U; }
class UScriptStruct* FSwitchAgeRating::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWITCHRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FSwitchAgeRating_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchAgeRating, Z_Construct_UPackage__Script_SwitchRuntimeSettings(), TEXT("SwitchAgeRating"), sizeof(FSwitchAgeRating), Get_Z_Construct_UScriptStruct_FSwitchAgeRating_Hash());
	}
	return Singleton;
}
template<> SWITCHRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FSwitchAgeRating>()
{
	return FSwitchAgeRating::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwitchAgeRating(FSwitchAgeRating::StaticStruct, TEXT("/Script/SwitchRuntimeSettings"), TEXT("SwitchAgeRating"), false, nullptr, nullptr);
static struct FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAgeRating
{
	FScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAgeRating()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwitchAgeRating")),new UScriptStruct::TCppStructOps<FSwitchAgeRating>);
	}
} ScriptStruct_SwitchRuntimeSettings_StaticRegisterNativesFSwitchAgeRating;
	struct Z_Construct_UScriptStruct_FSwitchAgeRating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Organization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Organization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Organization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Age;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchAgeRating>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization_MetaData[] = {
		{ "Category", "Ratings" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization = { "Organization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchAgeRating, Organization), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchRatingOrganization, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "Ratings" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitchAgeRating, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Age_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Age_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Organization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::NewProp_Age,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
		nullptr,
		&NewStructOps,
		"SwitchAgeRating",
		sizeof(FSwitchAgeRating),
		alignof(FSwitchAgeRating),
		Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchAgeRating()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwitchAgeRating_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SwitchRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwitchAgeRating"), sizeof(FSwitchAgeRating), Get_Z_Construct_UScriptStruct_FSwitchAgeRating_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwitchAgeRating_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwitchAgeRating_Hash() { return 2195301695U; }
	void USwitchRuntimeSettings::StaticRegisterNativesUSwitchRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_USwitchRuntimeSettings_NoRegister()
	{
		return USwitchRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_USwitchRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMobileForwardRenderer_MetaData[];
#endif
		static void NewProp_bUseMobileForwardRenderer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMobileForwardRenderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForwardShading_MetaData[];
#endif
		static void NewProp_bUseForwardShading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForwardShading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportMobileAndDeferred_MetaData[];
#endif
		static void NewProp_bSupportMobileAndDeferred_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportMobileAndDeferred;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseASTCTextures_MetaData[];
#endif
		static void NewProp_bUseASTCTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseASTCTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDXTForUITextures_MetaData[];
#endif
		static void NewProp_bUseDXTForUITextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDXTForUITextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceFields_MetaData[];
#endif
		static void NewProp_bUseDistanceFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSparseTextures_MetaData[];
#endif
		static void NewProp_bUseSparseTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSparseTextures;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchScreenUsage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchScreenUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TouchScreenUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportFourFingerTap_MetaData[];
#endif
		static void NewProp_bSupportFourFingerTap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportFourFingerTap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyConDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoyConDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyConSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoyConSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProControllerDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProControllerDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProControllerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProControllerSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VibrationAttenuationHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VibrationAttenuationHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VibrationAttenuationLF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VibrationAttenuationLF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMaxControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialMaxControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMinControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialMinControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialEnableDualStickControllers_MetaData[];
#endif
		static void NewProp_InitialEnableDualStickControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitialEnableDualStickControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialEnableSingleStickControllers_MetaData[];
#endif
		static void NewProp_InitialEnableSingleStickControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitialEnableSingleStickControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialUseHorizontalSingleStick_MetaData[];
#endif
		static void NewProp_InitialUseHorizontalSingleStick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitialUseHorizontalSingleStick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialEnableSixAxisSensors_MetaData[];
#endif
		static void NewProp_InitialEnableSixAxisSensors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitialEnableSixAxisSensors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialUseRightJoyConForMotion_MetaData[];
#endif
		static void NewProp_InitialUseRightJoyConForMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitialUseRightJoyConForMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialZeroPointDriftMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialZeroPointDriftMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgramId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgramId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ApplicationVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationVersionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationVersionString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SupportedLanguages_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SupportedLanguages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedLanguages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedLanguages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedTitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedTitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedTitles;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParentalControls_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParentalControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentalControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentalControls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgeRatings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgeRatings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgeRatings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddOnContentChunks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOnContentChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddOnContentChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSymbols_MetaData[];
#endif
		static void NewProp_bGenerateSymbols_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSymbols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainThreadStackSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainThreadStackSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMainThreadStackSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugMainThreadStackSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemResourceSizeMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SystemResourceSizeMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveGameSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameJournalSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveGameJournalSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameSizeMaxKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveGameSizeMaxKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameJournalSizeMaxKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveGameJournalSizeMaxKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameOwnerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameOwnerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDataLossConfirmationDialog_MetaData[];
#endif
		static void NewProp_bShowDataLossConfirmationDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDataLossConfirmationDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRouteGameUserSettingsToSaveGame_MetaData[];
#endif
		static void NewProp_bRouteGameUserSettingsToSaveGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRouteGameUserSettingsToSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempDataSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TempDataSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheDataSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheDataSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheDataJournalSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheDataJournalSizeKB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartupAccountMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupAccountMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartupAccountMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartupUserAccountIsOptional_MetaData[];
#endif
		static void NewProp_bStartupUserAccountIsOptional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartupUserAccountIsOptional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserAccountSwitchLock_MetaData[];
#endif
		static void NewProp_bUserAccountSwitchLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserAccountSwitchLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalCommunicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalCommunicationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LdnPassphrase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LdnPassphrase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendPresenceGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendPresenceGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerAccessKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerAccessKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNEXLibrary_MetaData[];
#endif
		static void NewProp_bEnableNEXLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNEXLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConserveBatteryLife_MetaData[];
#endif
		static void NewProp_ConserveBatteryLife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConserveBatteryLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowScreenshots_MetaData[];
#endif
		static void NewProp_bAllowScreenshots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowScreenshots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowVideoCapture_MetaData[];
#endif
		static void NewProp_bAllowVideoCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowVideoCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCrashReporting_MetaData[];
#endif
		static void NewProp_bAllowCrashReporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCrashReporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCustomCrashHandling_MetaData[];
#endif
		static void NewProp_bEnableCustomCrashHandling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCustomCrashHandling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuspendWhileInBackground_MetaData[];
#endif
		static void NewProp_bSuspendWhileInBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspendWhileInBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDemoBuild_MetaData[];
#endif
		static void NewProp_bDemoBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDemoBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAOCInstallWhileRunning_MetaData[];
#endif
		static void NewProp_bAllowAOCInstallWhileRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAOCInstallWhileRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCPUBoostDuringLoad_MetaData[];
#endif
		static void NewProp_bDisableCPUBoostDuringLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCPUBoostDuringLoad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseManualLogoHide_MetaData[];
#endif
		static void NewProp_bUseManualLogoHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseManualLogoHide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemHelpUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SystemHelpUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserCallbackUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserCallbackUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserCallbackableUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserCallbackableUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBindBrowserToUser_MetaData[];
#endif
		static void NewProp_bBindBrowserToUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBindBrowserToUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBrowserPointer_MetaData[];
#endif
		static void NewProp_bShowBrowserPointer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBrowserPointer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumAudioSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumAudioSources;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpusBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpusBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpusBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentHardwareDecodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentHardwareDecodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioMemoryPoolInitialSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioMemoryPoolInitialSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioMemoryPoolIncreaseSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioMemoryPoolIncreaseSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompressionOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAudioStreamCaching_MetaData[];
#endif
		static void NewProp_bUseAudioStreamCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAudioStreamCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheSizeKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSizeOverrideKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxChunkSizeOverrideKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLegacyStreamChunking_MetaData[];
#endif
		static void NewProp_bForceLegacyStreamChunking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLegacyStreamChunking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZerothChunkSizeForLegacyStreamChunking_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZerothChunkSizeForLegacyStreamChunking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResampleForDevice_MetaData[];
#endif
		static void NewProp_bResampleForDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResampleForDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueCookQualityIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundCueCookQualityIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQualityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQualityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoStreamingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoStreamingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCardSizeMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameCardSizeMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCardClockRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameCardClockRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Switch target platform.\n */" },
		{ "IncludePath", "SwitchRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Switch target platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Use the mobile forward rendering path as opposed to the (default) deferred rendering path. */" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use Mobile Forward Renderer" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Use the mobile forward rendering path as opposed to the (default) deferred rendering path." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseMobileForwardRenderer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer = { "bUseMobileForwardRenderer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Use the (high end) forward shading path as opposed to the (default) deferred rendering path. */" },
		{ "ConfigHierarchyEditable", "" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Forward Shading" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Use the (high end) forward shading path as opposed to the (default) deferred rendering path." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseForwardShading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading = { "bUseForwardShading", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Support Mobile and Deferred Rendering Paths" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Generate shaders for both mobile forward and deferred rendering paths, regardless of currently selected path. Allows switching without recook." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bSupportMobileAndDeferred = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred = { "bSupportMobileAndDeferred", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Use ASTC textures instead of DXT */" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use ASTC Textures" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Use ASTC textures instead of DXT" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseASTCTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures = { "bUseASTCTextures", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Use DXT instead of ASTC for UI textures (compression artifacts are less pronounced) */" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Force DXT for UI Textures" },
		{ "EditCondition", "bUseASTCTextures" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Use DXT instead of ASTC for UI textures (compression artifacts are less pronounced)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseDXTForUITextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures = { "bUseDXTForUITextures", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If distance fields are enabled */" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use to enable/disable distance field data to save package size and runtime memory" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If distance fields are enabled" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseDistanceFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields = { "bUseDistanceFields", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If sparse textures are enabled */" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use to enable/disable sparse support for streaming textures" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If sparse textures are enabled" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseSparseTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures = { "bUseSparseTextures", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Controls how the game uses the touchscreen. Due to LotCheck, this will force a full recompile to add/remove the touch APIs from the code.\n// NOTE: Content-only projects will convert to code if this is not the default value!\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Touch Screen Usage (see tooltip)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Controls how the game uses the touchscreen. Due to LotCheck, this will force a full recompile to add/remove the touch APIs from the code.\nNOTE: Content-only projects will convert to code if this is not the default value!" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage = { "TouchScreenUsage", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, TouchScreenUsage), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchTouchscreenMode, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Enable the four finger tap debugging option to show a web page for entering console commands, which will force touch screen usage\n// to Supported in non-Shipping builds (since it needs touch support!)\n// NOTE: Content-only projects will convert to code if this is not the default value!\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Enable Four Finger Tap" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Enable the four finger tap debugging option to show a web page for entering console commands, which will force touch screen usage\nto Supported in non-Shipping builds (since it needs touch support!)\nNOTE: Content-only projects will convert to code if this is not the default value!" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bSupportFourFingerTap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap = { "bSupportFourFingerTap", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConDeadZone_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Joy-Con deadzone setting (0..1)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Joy-Con deadzone setting (0..1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConDeadZone = { "JoyConDeadZone", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, JoyConDeadZone), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConSensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Joy-Con sensitivity (multiplied by the input value, then clamped to 1)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Joy-Con sensitivity (multiplied by the input value, then clamped to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConSensitivity = { "JoyConSensitivity", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, JoyConSensitivity), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerDeadZone_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Pro Controller deadzone setting (0..1)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Pro Controller deadzone setting (0..1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerDeadZone = { "ProControllerDeadZone", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ProControllerDeadZone), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerSensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Pro Controller (multiplied by the input value, then clamped to 1)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Pro Controller (multiplied by the input value, then clamped to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerSensitivity = { "ProControllerSensitivity", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ProControllerSensitivity), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationHF_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// High Frequency Vibration attenuation (0..2)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "High Frequency Vibration attenuation (0..2)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationHF = { "VibrationAttenuationHF", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, VibrationAttenuationHF), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationHF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationLF_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Low Frequency Vibration attenuation (0..2)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Low Frequency Vibration attenuation (0..2)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationLF = { "VibrationAttenuationLF", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, VibrationAttenuationLF), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationLF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationLF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMaxControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the napd.MaxControllers cvar\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the napd.MaxControllers cvar" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMaxControllers = { "InitialMaxControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, InitialMaxControllers), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMaxControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMaxControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMinControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the napd.MinControllers cvar (if fewer than this many are connected, then the Controller Applet will be automatically shown)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the napd.MinControllers cvar (if fewer than this many are connected, then the Controller Applet will be automatically shown)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMinControllers = { "InitialMinControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, InitialMinControllers), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMinControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMinControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.EnableDualStick cvar (if true, Handheld/Pro/Full controller modes will be usable)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.EnableDualStick cvar (if true, Handheld/Pro/Full controller modes will be usable)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->InitialEnableDualStickControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers = { "InitialEnableDualStickControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.EnableSingleStick cvar (if true, left/right single JOYCON controller modes will be usable)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.EnableSingleStick cvar (if true, left/right single JOYCON controller modes will be usable)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->InitialEnableSingleStickControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers = { "InitialEnableSingleStickControllers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.HorizontalSingleStick cvar (if true, left/right JOYCONs will be held horizontally)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.HorizontalSingleStick cvar (if true, left/right JOYCONs will be held horizontally)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->InitialUseHorizontalSingleStick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick = { "InitialUseHorizontalSingleStick", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.EnableSixAxisSensors cvar (if true, six axis sensors for all controllers will be enabled)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.EnableSixAxisSensors cvar (if true, six axis sensors for all controllers will be enabled)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->InitialEnableSixAxisSensors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors = { "InitialEnableSixAxisSensors", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.UseRightSixAxisSensor cvar (if true, the right JoyCon's sensors will drive motion controls)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.UseRightSixAxisSensor cvar (if true, the right JoyCon's sensors will drive motion controls)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->InitialUseRightJoyConForMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion = { "InitialUseRightJoyConForMotion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialZeroPointDriftMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Initial value of the npad.ZeroPointDriftMode cvar (Sets the zero point drift mode of the npad. 0 = loose. 1 = standard. 2 = tight)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Initial value of the npad.ZeroPointDriftMode cvar (Sets the zero point drift mode of the npad. 0 = loose. 1 = standard. 2 = tight)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialZeroPointDriftMode = { "InitialZeroPointDriftMode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, InitialZeroPointDriftMode), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialZeroPointDriftMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialZeroPointDriftMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProgramId_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "// The Application Id used by this project. Projects with the same ID will install on top of each other on device. Must be 0x followed by 16 hex digits\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Application Id (0x################)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The Application Id used by this project. Projects with the same ID will install on top of each other on device. Must be 0x followed by 16 hex digits" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProgramId = { "ProgramId", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ProgramId), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProgramId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProgramId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersion_MetaData[] = {
		{ "Category", "Application" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "0" },
		{ "Comment", "// The current version of the application\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The current version of the application" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersion = { "ApplicationVersion", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ApplicationVersion), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersionString_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "// The readable version of the application (eg. 1.3.1)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The readable version of the application (eg. 1.3.1)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersionString = { "ApplicationVersionString", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ApplicationVersionString), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersionString_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_Inner = { "SupportedLanguages", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLanguage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_MetaData[] = {
		{ "Category", "Language" },
		{ "Comment", "// Supported languages by the application (possible values returned by nn::oe::GetDesiredLanguage() and FPlatformMisc::GetDefaultLocale())\n// If this list is empty, all languages are assumed to be supported\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Supported languages by the application (possible values returned by nn::oe::GetDesiredLanguage() and FPlatformMisc::GetDefaultLocale())\nIf this list is empty, all languages are assumed to be supported" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages = { "SupportedLanguages", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SupportedLanguages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles_Inner = { "LocalizedTitles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitchLocalizedTitle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles_MetaData[] = {
		{ "Category", "Language" },
		{ "Comment", "// Localized title and publisher for as many languages as you want. If this is empty, it will default to using the first entry in \n// SupportedLanguages (or AmericanEnglish if it's empty), and the company name set in the Publisher section in the Project tab of Project Settings\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Localized title and publisher for as many languages as you want. If this is empty, it will default to using the first entry in\nSupportedLanguages (or AmericanEnglish if it's empty), and the company name set in the Publisher section in the Project tab of Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles = { "LocalizedTitles", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LocalizedTitles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_Inner = { "ParentalControls", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchParentalControl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_MetaData[] = {
		{ "Category", "Parental" },
		{ "Comment", "// Parental controls that can be controlled outside of the game. If empty, there are no controls present in the game\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Parental controls that can be controlled outside of the game. If empty, there are no controls present in the game" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls = { "ParentalControls", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ParentalControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings_Inner = { "AgeRatings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitchAgeRating, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings_MetaData[] = {
		{ "Category", "Parental" },
		{ "Comment", "// Age rating settings for multiple ratings boards. See the documentation for what valid ages for each organization\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Age rating settings for multiple ratings boards. See the documentation for what valid ages for each organization" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings = { "AgeRatings", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, AgeRatings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks_Inner = { "AddOnContentChunks", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitchAddOnContentChunk, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Mapping of chunks to Nintendo Switch AddOnContent\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Mapping of chunks to Nintendo Switch AddOnContent" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks = { "AddOnContentChunks", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, AddOnContentChunks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Generate symbols for runtime callstack symbolization (non shipping only).\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Generate Runtime Callstack Symbols" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Generate symbols for runtime callstack symbolization (non shipping only)." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bGenerateSymbols = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols = { "bGenerateSymbols", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MainThreadStackSizeKB_MetaData[] = {
		{ "Category", "Memory" },
		{ "Comment", "// How much memory (in KB) to give the main thread's stack for non-Debug builds. This main thread is NOT the game thread. It only runs the startup code (including global constructors)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Main Thread Stack Size (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "How much memory (in KB) to give the main thread's stack for non-Debug builds. This main thread is NOT the game thread. It only runs the startup code (including global constructors)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MainThreadStackSizeKB = { "MainThreadStackSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MainThreadStackSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MainThreadStackSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MainThreadStackSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_DebugMainThreadStackSizeKB_MetaData[] = {
		{ "Category", "Memory" },
		{ "Comment", "// How much memory (in KB) to give the main thread's stack for Debug builds. This main thread is NOT the game thread. It only runs the startup code (including global constructors)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Main Thread Stack Size For Debug Builds (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "How much memory (in KB) to give the main thread's stack for Debug builds. This main thread is NOT the game thread. It only runs the startup code (including global constructors)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_DebugMainThreadStackSizeKB = { "DebugMainThreadStackSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, DebugMainThreadStackSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_DebugMainThreadStackSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_DebugMainThreadStackSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemResourceSizeMB_MetaData[] = {
		{ "Category", "Memory" },
		{ "ClampMax", "256" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of memory (in MiB) the OS should allocate to use for managing virtual address space. \n// Typically 16Mib, but can be increased to up to 256MiB if you see OS errors when allocating memory (see SDK docs).\n// Set to 0 to disable virtual memory management from the OS.\n// NOTE: Virtual memory support requires compiling against a 3.x.x SDK.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "VM Management Memory Size (MB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The amount of memory (in MiB) the OS should allocate to use for managing virtual address space.\nTypically 16Mib, but can be increased to up to 256MiB if you see OS errors when allocating memory (see SDK docs).\nSet to 0 to disable virtual memory management from the OS.\nNOTE: Virtual memory support requires compiling against a 3.x.x SDK." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemResourceSizeMB = { "SystemResourceSizeMB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SystemResourceSizeMB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemResourceSizeMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemResourceSizeMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Max size of a save game file for your game. The OS will use this value for its own tracking. This is for ALL saves per user, if you have multiple slots!\n// The Switch SDK AuthoringEditor meta editor has a tool for estimating the amount of memory needed. \n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "SaveGame Data Area Size (KB, multiple of 16)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Max size of a save game file for your game. The OS will use this value for its own tracking. This is for ALL saves per user, if you have multiple slots!\nThe Switch SDK AuthoringEditor meta editor has a tool for estimating the amount of memory needed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeKB = { "SaveGameSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SaveGameSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Size of save data \"journaling\" area. For more information, consult the Switch documentation for further details.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "SaveGame Data Area Journaling Size (KB, multiple of 16)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of save data \"journaling\" area. For more information, consult the Switch documentation for further details." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeKB = { "SaveGameJournalSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SaveGameJournalSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeMaxKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Size of the expanded save game file. Used for expanding save games in patches. Consult the Switch documentation for further details and requirements on use.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Extended SaveGame Data Max Size (MB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of the expanded save game file. Used for expanding save games in patches. Consult the Switch documentation for further details and requirements on use." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeMaxKB = { "SaveGameSizeMaxKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SaveGameSizeMaxKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeMaxKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeMaxKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeMaxKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Size of extended save data \"journaling\" area. Consult the Switch documentation for further details and requirements on use.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Extended SaveGame Data Area Journaling Max Size (MB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of extended save data \"journaling\" area. Consult the Switch documentation for further details and requirements on use." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeMaxKB = { "SaveGameJournalSizeMaxKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SaveGameJournalSizeMaxKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeMaxKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeMaxKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameOwnerId_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Owner Id for save data. Generally this should be left blank to use the ProgramId\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "SaveGame Owner Id" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Owner Id for save data. Generally this should be left blank to use the ProgramId" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameOwnerId = { "SaveGameOwnerId", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SaveGameOwnerId), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameOwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameOwnerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// If true, a dialog will be shown indicating potential data loss when the user quits\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If true, a dialog will be shown indicating potential data loss when the user quits" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bShowDataLossConfirmationDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog = { "bShowDataLossConfirmationDialog", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// If true, GGameUserSettingsIni will get routed through the save game system so it will be persistent\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If true, GGameUserSettingsIni will get routed through the save game system so it will be persistent" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bRouteGameUserSettingsToSaveGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame = { "bRouteGameUserSettingsToSaveGame", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TempDataSizeKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Size to set aside for Temp storage (non-persistent)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Temp Storage Size (KB, multiple of 16)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size to set aside for Temp storage (non-persistent)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TempDataSizeKB = { "TempDataSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, TempDataSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TempDataSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TempDataSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataSizeKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Max size set aside for Cache storage (persistent but non-permanent)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Max CacheData Size (KB, multiple of 16)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Max size set aside for Cache storage (persistent but non-permanent)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataSizeKB = { "CacheDataSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, CacheDataSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataJournalSizeKB_MetaData[] = {
		{ "Category", "Save Data" },
		{ "Comment", "// Size of cache data that is \"journalled\". For more information, read the documentation on save games.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "CacheData Journaling Size (KB, multiple of 16)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of cache data that is \"journalled\". For more information, read the documentation on save games." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataJournalSizeKB = { "CacheDataJournalSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, CacheDataJournalSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataJournalSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataJournalSizeKB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode_MetaData[] = {
		{ "Category", "Account" },
		{ "Comment", "// Selects whether or not an account will be chosen by the OS before the title is launched. Removes the need for single-user games (online or not) to have any user selection UI.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Account Mode Before Startup" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Selects whether or not an account will be chosen by the OS before the title is launched. Removes the need for single-user games (online or not) to have any user selection UI." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode = { "StartupAccountMode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, StartupAccountMode), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchAccountStartupMode, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional_MetaData[] = {
		{ "Category", "Account" },
		{ "Comment", "// Whether or not startup user account is optional (see documentation)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Whether or not startup user account is optional (see documentation)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bStartupUserAccountIsOptional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional = { "bStartupUserAccountIsOptional", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock_MetaData[] = {
		{ "Category", "Account" },
		{ "Comment", "// Whether or not to disallow account switching in app\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Whether or not to disallow account switching in app" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUserAccountSwitchLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock = { "bUserAccountSwitchLock", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalCommunicationId_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// The communication Id used during Local Wifi (Ldn) matchmaking. If blank, the ApplicationId will be used.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Ldn Local Communication Id" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The communication Id used during Local Wifi (Ldn) matchmaking. If blank, the ApplicationId will be used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalCommunicationId = { "LocalCommunicationId", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LocalCommunicationId), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalCommunicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalCommunicationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LdnPassphrase_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// The passphrase used by the Local Wifi (Ldn) access point. This must be at least 16 bytes long. Can be in the form XXXXXXXX or 0xYYYYYYYY.\n// If using 0xYYYYYYY, it will be de-hexed, turning 0x42 into 'A', so must be at least 32 characters\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Ldn Passphrase" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The passphrase used by the Local Wifi (Ldn) access point. This must be at least 16 bytes long. Can be in the form XXXXXXXX or 0xYYYYYYYY.\nIf using 0xYYYYYYY, it will be de-hexed, turning 0x42 into 'A', so must be at least 32 characters" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LdnPassphrase = { "LdnPassphrase", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LdnPassphrase), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LdnPassphrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LdnPassphrase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_FriendPresenceGroupId_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// Friend presence Id (needed for sharing across applications). Defaults to the Program Id\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Friend presence Id (needed for sharing across applications). Defaults to the Program Id" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_FriendPresenceGroupId = { "FriendPresenceGroupId", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, FriendPresenceGroupId), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_FriendPresenceGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_FriendPresenceGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerId_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// ID of the game server, which can be found after configuring in OMAS\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "ID of the game server, which can be found after configuring in OMAS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerId = { "GameServerId", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, GameServerId), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerAccessKey_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// Access key of the game server, which can be found after configuring in OMAS\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Access key of the game server, which can be found after configuring in OMAS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerAccessKey = { "GameServerAccessKey", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, GameServerAccessKey), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerAccessKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerAccessKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// Disabling this will compiling out NEX support (Nintendo's online service framework).\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Disabling this will compiling out NEX support (Nintendo's online service framework)." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bEnableNEXLibrary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary = { "bEnableNEXLibrary", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Should handheld mode run at a slower clockrate to conserve battery life? (307MHz vs 384MHz)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Should handheld mode run at a slower clockrate to conserve battery life? (307MHz vs 384MHz)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->ConserveBatteryLife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife = { "ConserveBatteryLife", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationErrorCode_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Optional application error code prefix - 5 characters\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Optional application error code prefix - 5 characters" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationErrorCode = { "ApplicationErrorCode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ApplicationErrorCode), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Enable or Disable the ability to save screenshots from application.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Enable or Disable the ability to save screenshots from application." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bAllowScreenshots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots = { "bAllowScreenshots", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Enable or Disable the ability to capture video in application. Allow Screenshots must also be enabled.\n// NOTE: Setting will be ignored if Allow Screenshots is unchecked.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "EditCondition", "bAllowScreenshots" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Enable or Disable the ability to capture video in application. Allow Screenshots must also be enabled.\nNOTE: Setting will be ignored if Allow Screenshots is unchecked." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bAllowVideoCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture = { "bAllowVideoCapture", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Allow or Deny crash reporting.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Allow Retail Crash Reporting" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Allow or Deny crash reporting." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bAllowCrashReporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting = { "bAllowCrashReporting", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Enable custom crash handling. Writes to the dying message in all build types and symbolicates crashes in non shipping builds.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Enable Custom Crash Handling" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Enable custom crash handling. Writes to the dying message in all build types and symbolicates crashes in non shipping builds." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bEnableCustomCrashHandling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling = { "bEnableCustomCrashHandling", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Suspended while in the background?\n// Can be changed at runtime with \"switch.SuspendInBackground 0/1\" cvar.\n// If true, the ApplicationWillEnterBackgroundDelegate callback WILL NOT be called, ApplicationHasEnteredForegroundDelegate WILL BE.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Suspend Processing In Background" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Suspended while in the background?\nCan be changed at runtime with \"switch.SuspendInBackground 0/1\" cvar.\nIf true, the ApplicationWillEnterBackgroundDelegate callback WILL NOT be called, ApplicationHasEnteredForegroundDelegate WILL BE." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bSuspendWhileInBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground = { "bSuspendWhileInBackground", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Set Demo attribute\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Demo Build" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Set Demo attribute" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bDemoBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild = { "bDemoBuild", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Allow downloading of add on content while running.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Allow AOC Background Download" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Allow downloading of add on content while running." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bAllowAOCInstallWhileRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning = { "bAllowAOCInstallWhileRunning", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Disable CPU boost mode during Engine initialization\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Disable CPU boost during Engine Init" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Disable CPU boost mode during Engine initialization" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bDisableCPUBoostDuringLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad = { "bDisableCPUBoostDuringLoad", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType_MetaData[] = {
		{ "Category", "Logo" },
		{ "Comment", "// Logo type on startup. Most likely you shouldn't change this!\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Logo type on startup. Most likely you shouldn't change this!" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType = { "LogoType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LogoType), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchLogoType, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide_MetaData[] = {
		{ "Category", "Logo" },
		{ "Comment", "// Should the logo wait until _after_ FEngineLoop::PreInit() completes to be hidden\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Delay hiding Nintendo starup overlay after PreInit" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Should the logo wait until _after_ FEngineLoop::PreInit() completes to be hidden" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseManualLogoHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide = { "bUseManualLogoHide", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemHelpUrl_MetaData[] = {
		{ "Category", "Browser" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "System Help URL" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "Tooltip", "If set, then FSlateApplication::Get().ShowSystemHelp() can be called to show this Url (to keep inline with other platforms that support System Help), using the Offline Web Applet\nUse a Url in the form: \"file://content.htdocs/index.html\" and note you will need to add the files to your project's Build/Switch/Resources/HtmlDocument directory" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemHelpUrl = { "SystemHelpUrl", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SystemHelpUrl), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemHelpUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemHelpUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackUrl_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// If set, then when you use the online web browser, this will be set as the prefix for all callback URLs to close the browser and pass a string/url to the game.\n// Note that FOnlineExternalUISwitch::ShowWebURL() CAN override the callback URL\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Callback URL Prefix" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If set, then when you use the online web browser, this will be set as the prefix for all callback URLs to close the browser and pass a string/url to the game.\nNote that FOnlineExternalUISwitch::ShowWebURL() CAN override the callback URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackUrl = { "BrowserCallbackUrl", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, BrowserCallbackUrl), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackableUrl_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// If set, then when you use the online web browser, only URLs starting with this prefix are able to call Callback URLs (limits what pages can close the browser with a callback)\n// Note that FOnlineExternalUISwitch::ShowWebURL() IGNORES this prefix setting\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "URL Prefix That Can Callback" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If set, then when you use the online web browser, only URLs starting with this prefix are able to call Callback URLs (limits what pages can close the browser with a callback)\nNote that FOnlineExternalUISwitch::ShowWebURL() IGNORES this prefix setting" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackableUrl = { "BrowserCallbackableUrl", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, BrowserCallbackableUrl), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackableUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackableUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// If true, then the online web browser will be bound to user 0, which means cookies, etc, will be saved per user. If false, nothing is saved.\n// Note that FOnlineExternalUISwitch::ShowWebURL() can NOT override this behavior\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Bind Browser To First User" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If true, then the online web browser will be bound to user 0, which means cookies, etc, will be saved per user. If false, nothing is saved.\nNote that FOnlineExternalUISwitch::ShowWebURL() can NOT override this behavior" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bBindBrowserToUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser = { "bBindBrowserToUser", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// If true, an analog stick controlled cursor will be shown initially when any browser opens (the user can toggle this with left stick click)\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Show Browser Pointer Initially" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "If true, an analog stick controlled cursor will be shown initially when any browser opens (the user can toggle this with left stick click)" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bShowBrowserPointer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer = { "bShowBrowserPointer", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitchLeaderboardMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// Mapping of leaderboard column names to category IDs created on NMAS.\n" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Mapping of leaderboard column names to category IDs created on NMAS." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LeaderboardMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxNumAudioSources_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "32" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum number of audio sources that can be playing at any given point.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Maximum Simultaneous Audio Sources" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The maximum number of audio sources that can be playing at any given point." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxNumAudioSources = { "MaxNumAudioSources", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MaxNumAudioSources), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxNumAudioSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxNumAudioSources_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Use this to select whether the ADSP is used for decoding just streaming sounds or all non-looping sounds. Non-looping sounds will allow for some gains in memory, but may lead to assets underrunning.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Use Opus Hardware Decoding for:" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Use this to select whether the ADSP is used for decoding just streaming sounds or all non-looping sounds. Non-looping sounds will allow for some gains in memory, but may lead to assets underrunning." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior = { "OpusBehavior", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, OpusBehavior), Z_Construct_UEnum_SwitchRuntimeSettings_ESwitchOpusBehavior, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxConcurrentHardwareDecodes_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum number of decode streams we can start simultaneously on the ADSP. When we need more decode streams, the engine will decode these files on the CPU.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Maximum Concurrent Hardware Decode Streams" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "The maximum number of decode streams we can start simultaneously on the ADSP. When we need more decode streams, the engine will decode these files on the CPU." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxConcurrentHardwareDecodes = { "MaxConcurrentHardwareDecodes", nullptr, (EPropertyFlags)0x0010040000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MaxConcurrentHardwareDecodes), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxConcurrentHardwareDecodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxConcurrentHardwareDecodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolInitialSizeKB_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Size of initial audio memory pool.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Initial Audio Memory Pool Size (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of initial audio memory pool." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolInitialSizeKB = { "AudioMemoryPoolInitialSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, AudioMemoryPoolInitialSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolInitialSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolInitialSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolIncreaseSizeKB_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Size of additional pools if initial pool is exhausted.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Audio Memory Pool Increase Chunk Size (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Size of additional pools if initial pool is exhausted." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolIncreaseSizeKB = { "AudioMemoryPoolIncreaseSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, AudioMemoryPoolIncreaseSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolIncreaseSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolIncreaseSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled spatialization plugins to use on Windows. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled reverb plugins to use on Windows. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled occlusion plugins to use on Windows. */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Various overrides for how this platform should handle compression and decompression */" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Various overrides for how this platform should handle compression and decompression" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionOverrides = { "CompressionOverrides", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, CompressionOverrides), Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** When this is enabled, Actual compressed data will be separated from the USoundWave, and loaded into a cache. */" },
		{ "DisplayName", "Use Stream Caching (Experimental)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "When this is enabled, Actual compressed data will be separated from the USoundWave, and loaded into a cache." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bUseAudioStreamCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching = { "bUseAudioStreamCaching", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook. */" },
		{ "DisplayName", "Max Cache Size (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheSizeKB = { "CacheSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, CacheSizeKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0) */" },
		{ "DisplayName", "Max Chunk Size Override (KB)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB = { "MaxChunkSizeOverrideKB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MaxChunkSizeOverrideKB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This is used to not re-chunk already streaming sounds. Mostly useful if you want to minimize the patch delta between going between non-stream caching and stream caching cooks, or if an audio asset needs some audio in the zeroth chunk. */" },
		{ "DisplayName", "Force Legacy Stream Chunking" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "This is used to not re-chunk already streaming sounds. Mostly useful if you want to minimize the patch delta between going between non-stream caching and stream caching cooks, or if an audio asset needs some audio in the zeroth chunk." },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bForceLegacyStreamChunking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking = { "bForceLegacyStreamChunking", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ZerothChunkSizeForLegacyStreamChunking_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** if Force Legacy Stream Chunking is enabled, this overrides the zeroth chunk size for just legacy audio. */" },
		{ "DisplayName", "Zeroth Chunk Override (Legacy Streaming Only)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "if Force Legacy Stream Chunking is enabled, this overrides the zeroth chunk size for just legacy audio." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ZerothChunkSizeForLegacyStreamChunking = { "ZerothChunkSizeForLegacyStreamChunking", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, ZerothChunkSizeForLegacyStreamChunking), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ZerothChunkSizeForLegacyStreamChunking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ZerothChunkSizeForLegacyStreamChunking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit(void* Obj)
	{
		((USwitchRuntimeSettings*)Obj)->bResampleForDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice = { "bResampleForDevice", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitchRuntimeSettings), &Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker). */" },
		{ "DisplayName", "Sound Cue Cook Quality" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex = { "SoundCueCookQualityIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, SoundCueCookQualityIndex), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "Comment", "// Mapping of which sample rates are used for each sample rate quality for a specific platform.\n" },
		{ "DisplayName", "Max" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Mapping of which sample rates are used for each sample rate quality for a specific platform." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxSampleRate = { "MaxSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MaxSampleRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "High" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_HighSampleRate = { "HighSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, HighSampleRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Medium" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MedSampleRate = { "MedSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MedSampleRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Low" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LowSampleRate = { "LowSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, LowSampleRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Min" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MinSampleRate = { "MinSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, MinSampleRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "// Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged.\n" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionQualityModifier = { "CompressionQualityModifier", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, CompressionQualityModifier), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "// When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk.\n" },
		{ "DisplayName", "Stream All Soundwaves Longer Than:" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AutoStreamingThreshold = { "AutoStreamingThreshold", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, AutoStreamingThreshold), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardSizeMB_MetaData[] = {
		{ "Category", "GameCard" },
		{ "Comment", "// Game Card Size in MB. Power of two from 1 to 32. Leave at 0 for auto, which is suggested.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Size (MB, power of two between 1MB - 32MB. 0 for auto)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Game Card Size in MB. Power of two from 1 to 32. Leave at 0 for auto, which is suggested." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardSizeMB = { "GameCardSizeMB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, GameCardSizeMB), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardSizeMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardSizeMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardClockRate_MetaData[] = {
		{ "Category", "GameCard" },
		{ "Comment", "// Game Card Clock Rate, 25 or 50. Leave at 0 for auto, which is suggested.\n" },
		{ "ConfigHierarchyEditable", "" },
		{ "DisplayName", "Clock Rate (25 or 50. 0 for auto)" },
		{ "ModuleRelativePath", "Classes/SwitchRuntimeSettings.h" },
		{ "ToolTip", "Game Card Clock Rate, 25 or 50. Leave at 0 for auto, which is suggested." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardClockRate = { "GameCardClockRate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitchRuntimeSettings, GameCardClockRate), METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardClockRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardClockRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwitchRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseMobileForwardRenderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseForwardShading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportMobileAndDeferred,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseASTCTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDXTForUITextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseDistanceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseSparseTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TouchScreenUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSupportFourFingerTap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_JoyConSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProControllerSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_VibrationAttenuationLF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMaxControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialMinControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableDualStickControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSingleStickControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseHorizontalSingleStick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialEnableSixAxisSensors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialUseRightJoyConForMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_InitialZeroPointDriftMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ProgramId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationVersionString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SupportedLanguages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalizedTitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ParentalControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AgeRatings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AddOnContentChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bGenerateSymbols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MainThreadStackSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_DebugMainThreadStackSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemResourceSizeMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameSizeMaxKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameJournalSizeMaxKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SaveGameOwnerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowDataLossConfirmationDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bRouteGameUserSettingsToSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_TempDataSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheDataJournalSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_StartupAccountMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bStartupUserAccountIsOptional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUserAccountSwitchLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LocalCommunicationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LdnPassphrase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_FriendPresenceGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameServerAccessKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableNEXLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ConserveBatteryLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ApplicationErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowScreenshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowVideoCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowCrashReporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bEnableCustomCrashHandling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bSuspendWhileInBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDemoBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bAllowAOCInstallWhileRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bDisableCPUBoostDuringLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LogoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseManualLogoHide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SystemHelpUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_BrowserCallbackableUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bBindBrowserToUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bShowBrowserPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LeaderboardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxNumAudioSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OpusBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxConcurrentHardwareDecodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolInitialSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AudioMemoryPoolIncreaseSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bUseAudioStreamCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CacheSizeKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bForceLegacyStreamChunking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_ZerothChunkSizeForLegacyStreamChunking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_bResampleForDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MaxSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_HighSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MedSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_LowSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_MinSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_CompressionQualityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_AutoStreamingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardSizeMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchRuntimeSettings_Statics::NewProp_GameCardClockRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwitchRuntimeSettings_Statics::ClassParams = {
		&USwitchRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwitchRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USwitchRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwitchRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwitchRuntimeSettings, 999835810);
	template<> SWITCHRUNTIMESETTINGS_API UClass* StaticClass<USwitchRuntimeSettings>()
	{
		return USwitchRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitchRuntimeSettings(Z_Construct_UClass_USwitchRuntimeSettings, &USwitchRuntimeSettings::StaticClass, TEXT("/Script/SwitchRuntimeSettings"), TEXT("USwitchRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
