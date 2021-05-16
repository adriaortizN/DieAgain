// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CollisionProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionResponse();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRedirector();
// End Cross Module References
class UScriptStruct* FCustomProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomProfile, Z_Construct_UPackage__Script_Engine(), TEXT("CustomProfile"), sizeof(FCustomProfile), Get_Z_Construct_UScriptStruct_FCustomProfile_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomProfile>()
{
	return FCustomProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomProfile(FCustomProfile::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomProfile"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomProfile
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomProfile")),new UScriptStruct::TCppStructOps<FCustomProfile>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomProfile;
	struct Z_Construct_UScriptStruct_FCustomProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomResponses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomProfile_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for custom profiles.\n *\n * if you'd like to just add custom channels, not changing anything else engine defined\n * if you'd like to override all about profile, please use \n * +Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for custom profiles.\n\nif you'd like to just add custom channels, not changing anything else engine defined\nif you'd like to override all about profile, please use\n+Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of new profile to add */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name of new profile to add" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_Inner = { "CustomResponses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses = { "CustomResponses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomProfile, CustomResponses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomProfile",
		sizeof(FCustomProfile),
		alignof(FCustomProfile),
		Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomProfile"), sizeof(FCustomProfile), Get_Z_Construct_UScriptStruct_FCustomProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomProfile_Hash() { return 3746213694U; }
class UScriptStruct* FCustomChannelSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomChannelSetup, Z_Construct_UPackage__Script_Engine(), TEXT("CustomChannelSetup"), sizeof(FCustomChannelSetup), Get_Z_Construct_UScriptStruct_FCustomChannelSetup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomChannelSetup>()
{
	return FCustomChannelSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomChannelSetup(FCustomChannelSetup::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomChannelSetup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomChannelSetup")),new UScriptStruct::TCppStructOps<FCustomChannelSetup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomChannelSetup;
	struct Z_Construct_UScriptStruct_FCustomChannelSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceType_MetaData[];
#endif
		static void NewProp_bTraceType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticObject_MetaData[];
#endif
		static void NewProp_bStaticObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for custom channel setup information.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for custom channel setup information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomChannelSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel_MetaData[] = {
		{ "Comment", "/** Which channel you'd like to customize **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Which channel you'd like to customize *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomChannelSetup, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse_MetaData[] = {
		{ "Comment", "/** Default Response for the channel */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Default Response for the channel" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse = { "DefaultResponse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomChannelSetup, DefaultResponse), Z_Construct_UEnum_Engine_ECollisionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_MetaData[] = {
		{ "Comment", "/** Sets meta data TraceType=\"1\" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types**/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Sets meta data TraceType=\"1\" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types*" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_SetBit(void* Obj)
	{
		((FCustomChannelSetup*)Obj)->bTraceType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType = { "bTraceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomChannelSetup), &Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_MetaData[] = {
		{ "Comment", "/** Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects *" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_SetBit(void* Obj)
	{
		((FCustomChannelSetup*)Obj)->bStaticObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject = { "bStaticObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomChannelSetup), &Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name used in editor and metadata to refer to this channel */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name used in editor and metadata to refer to this channel" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomChannelSetup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomChannelSetup",
		sizeof(FCustomChannelSetup),
		alignof(FCustomChannelSetup),
		Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomChannelSetup"), sizeof(FCustomChannelSetup), Get_Z_Construct_UScriptStruct_FCustomChannelSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomChannelSetup_Hash() { return 1493785349U; }
class UScriptStruct* FCollisionResponseTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponseTemplate, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponseTemplate"), sizeof(FCollisionResponseTemplate), Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionResponseTemplate>()
{
	return FCollisionResponseTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionResponseTemplate(FCollisionResponseTemplate::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionResponseTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionResponseTemplate")),new UScriptStruct::TCppStructOps<FCollisionResponseTemplate>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionResponseTemplate;
	struct Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanModify_MetaData[];
#endif
		static void NewProp_bCanModify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectTypeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomResponses;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpMessage;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for collision response templates.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for collision response templates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponseTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of collision profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name of collision profile" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponseTemplate, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Comment", "/** Type of collision used for things with this profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Type of collision used for things with this profile" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponseTemplate, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_MetaData[] = {
		{ "Comment", "/** If this profile can be modified by games */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "If this profile can be modified by games" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_SetBit(void* Obj)
	{
		((FCollisionResponseTemplate*)Obj)->bCanModify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify = { "bCanModify", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCollisionResponseTemplate), &Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName_MetaData[] = {
		{ "Comment", "/** Collision object type to use for things with this profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Collision object type to use for things with this profile" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName = { "ObjectTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponseTemplate, ObjectTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_Inner = { "CustomResponses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses = { "CustomResponses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponseTemplate, CustomResponses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage_MetaData[] = {
		{ "Comment", "/** Help message for collision profile **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Help message for collision profile *" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage = { "HelpMessage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponseTemplate, HelpMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollisionResponseTemplate",
		sizeof(FCollisionResponseTemplate),
		alignof(FCollisionResponseTemplate),
		Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionResponseTemplate"), sizeof(FCollisionResponseTemplate), Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_Hash() { return 169805819U; }
class UScriptStruct* FCollisionProfileName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionProfileName, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionProfileName"), sizeof(FCollisionProfileName), Get_Z_Construct_UScriptStruct_FCollisionProfileName_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionProfileName>()
{
	return FCollisionProfileName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionProfileName(FCollisionProfileName::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionProfileName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionProfileName")),new UScriptStruct::TCppStructOps<FCollisionProfileName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionProfileName;
	struct Z_Construct_UScriptStruct_FCollisionProfileName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionProfileName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure representing a collision profile name, this gets a special UI in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure representing a collision profile name, this gets a special UI in the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionProfileName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionProfileName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionProfileName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollisionProfileName",
		sizeof(FCollisionProfileName),
		alignof(FCollisionProfileName),
		Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionProfileName"), sizeof(FCollisionProfileName), Get_Z_Construct_UScriptStruct_FCollisionProfileName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionProfileName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionProfileName_Hash() { return 3069820825U; }
	void UCollisionProfile::StaticRegisterNativesUCollisionProfile()
	{
	}
	UClass* Z_Construct_UClass_UCollisionProfile_NoRegister()
	{
		return UCollisionProfile::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultChannelResponses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChannelResponses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultChannelResponses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditProfiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionChannelRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelRedirects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Set up and modify collision settings.\n */" },
		{ "DisplayName", "Collision" },
		{ "IncludePath", "Engine/CollisionProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Set up and modify collision settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollisionResponseTemplate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_MetaData[] = {
		{ "Comment", "/** List of all profiles, engine and game-specific */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "List of all profiles, engine and game-specific" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionProfile, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_Inner = { "DefaultChannelResponses", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomChannelSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_MetaData[] = {
		{ "Comment", "/** Game-specific overrides to default responses to collision channels */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Game-specific overrides to default responses to collision channels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses = { "DefaultChannelResponses", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionProfile, DefaultChannelResponses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_Inner = { "EditProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_MetaData[] = {
		{ "Comment", "/** Game-specific overrides to engine profiles */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Game-specific overrides to engine profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles = { "EditProfiles", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionProfile, EditProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_Inner = { "ProfileRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_MetaData[] = {
		{ "Comment", "/** Used to handle renaming profiles */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Used to handle renaming profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects = { "ProfileRedirects", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionProfile, ProfileRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_Inner = { "CollisionChannelRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_MetaData[] = {
		{ "Comment", "/** Used to handle renaming collision channels */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Used to handle renaming collision channels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects = { "CollisionChannelRedirects", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionProfile, CollisionChannelRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollisionProfile_Statics::ClassParams = {
		&UCollisionProfile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollisionProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollisionProfile, 2284434791);
	template<> ENGINE_API UClass* StaticClass<UCollisionProfile>()
	{
		return UCollisionProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollisionProfile(Z_Construct_UClass_UCollisionProfile, &UCollisionProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UCollisionProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
