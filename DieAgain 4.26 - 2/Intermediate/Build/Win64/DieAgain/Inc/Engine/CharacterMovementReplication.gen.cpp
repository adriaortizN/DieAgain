// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/CharacterMovementReplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementReplication() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterMoveResponsePackedBits>() == std::is_polymorphic<FCharacterNetworkSerializationPackedBits>(), "USTRUCT FCharacterMoveResponsePackedBits cannot be polymorphic unless super FCharacterNetworkSerializationPackedBits is polymorphic");

class UScriptStruct* FCharacterMoveResponsePackedBits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits, Z_Construct_UPackage__Script_Engine(), TEXT("CharacterMoveResponsePackedBits"), sizeof(FCharacterMoveResponsePackedBits), Get_Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterMoveResponsePackedBits>()
{
	return FCharacterMoveResponsePackedBits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterMoveResponsePackedBits(FCharacterMoveResponsePackedBits::StaticStruct, TEXT("/Script/Engine"), TEXT("CharacterMoveResponsePackedBits"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCharacterMoveResponsePackedBits
{
	FScriptStruct_Engine_StaticRegisterNativesFCharacterMoveResponsePackedBits()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterMoveResponsePackedBits")),new UScriptStruct::TCppStructOps<FCharacterMoveResponsePackedBits>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCharacterMoveResponsePackedBits;
	struct Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used internally to handle serialization of FCharacterMoveResponseDataContainer over the network.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Structure used internally to handle serialization of FCharacterMoveResponseDataContainer over the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMoveResponsePackedBits>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits,
		&NewStructOps,
		"CharacterMoveResponsePackedBits",
		sizeof(FCharacterMoveResponsePackedBits),
		alignof(FCharacterMoveResponsePackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterMoveResponsePackedBits"), sizeof(FCharacterMoveResponsePackedBits), Get_Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Hash() { return 1926548199U; }

static_assert(std::is_polymorphic<FCharacterServerMovePackedBits>() == std::is_polymorphic<FCharacterNetworkSerializationPackedBits>(), "USTRUCT FCharacterServerMovePackedBits cannot be polymorphic unless super FCharacterNetworkSerializationPackedBits is polymorphic");

class UScriptStruct* FCharacterServerMovePackedBits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits, Z_Construct_UPackage__Script_Engine(), TEXT("CharacterServerMovePackedBits"), sizeof(FCharacterServerMovePackedBits), Get_Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterServerMovePackedBits>()
{
	return FCharacterServerMovePackedBits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterServerMovePackedBits(FCharacterServerMovePackedBits::StaticStruct, TEXT("/Script/Engine"), TEXT("CharacterServerMovePackedBits"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCharacterServerMovePackedBits
{
	FScriptStruct_Engine_StaticRegisterNativesFCharacterServerMovePackedBits()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterServerMovePackedBits")),new UScriptStruct::TCppStructOps<FCharacterServerMovePackedBits>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCharacterServerMovePackedBits;
	struct Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used internally to handle serialization of FCharacterNetworkMoveDataContainer over the network.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Structure used internally to handle serialization of FCharacterNetworkMoveDataContainer over the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterServerMovePackedBits>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits,
		&NewStructOps,
		"CharacterServerMovePackedBits",
		sizeof(FCharacterServerMovePackedBits),
		alignof(FCharacterServerMovePackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterServerMovePackedBits"), sizeof(FCharacterServerMovePackedBits), Get_Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Hash() { return 78734224U; }
class UScriptStruct* FCharacterNetworkSerializationPackedBits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits, Z_Construct_UPackage__Script_Engine(), TEXT("CharacterNetworkSerializationPackedBits"), sizeof(FCharacterNetworkSerializationPackedBits), Get_Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterNetworkSerializationPackedBits>()
{
	return FCharacterNetworkSerializationPackedBits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterNetworkSerializationPackedBits(FCharacterNetworkSerializationPackedBits::StaticStruct, TEXT("/Script/Engine"), TEXT("CharacterNetworkSerializationPackedBits"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCharacterNetworkSerializationPackedBits
{
	FScriptStruct_Engine_StaticRegisterNativesFCharacterNetworkSerializationPackedBits()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterNetworkSerializationPackedBits")),new UScriptStruct::TCppStructOps<FCharacterNetworkSerializationPackedBits>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCharacterNetworkSerializationPackedBits;
	struct Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Intermediate data stream used for network serialization of Character RPC data.\n * This is basically an array of bits that is packed/unpacked via NetSerialize into custom data structs on the sending and receiving ends.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Intermediate data stream used for network serialization of Character RPC data.\nThis is basically an array of bits that is packed/unpacked via NetSerialize into custom data structs on the sending and receiving ends." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterNetworkSerializationPackedBits>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CharacterNetworkSerializationPackedBits",
		sizeof(FCharacterNetworkSerializationPackedBits),
		alignof(FCharacterNetworkSerializationPackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterNetworkSerializationPackedBits"), sizeof(FCharacterNetworkSerializationPackedBits), Get_Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Hash() { return 3599427882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
