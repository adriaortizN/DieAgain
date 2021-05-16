// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/INodeAndChannelMappings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINodeAndChannelMappings() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UNodeAndChannelMappings::StaticRegisterNativesUNodeAndChannelMappings()
	{
	}
	UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister()
	{
		return UNodeAndChannelMappings::StaticClass();
	}
	struct Z_Construct_UClass_UNodeAndChannelMappings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeAndChannelMappings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/INodeAndChannelMappings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeAndChannelMappings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeAndChannelMappings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams = {
		&UNodeAndChannelMappings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeAndChannelMappings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNodeAndChannelMappings, 2089583317);
	template<> MOVIESCENE_API UClass* StaticClass<UNodeAndChannelMappings>()
	{
		return UNodeAndChannelMappings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeAndChannelMappings(Z_Construct_UClass_UNodeAndChannelMappings, &UNodeAndChannelMappings::StaticClass, TEXT("/Script/MovieScene"), TEXT("UNodeAndChannelMappings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeAndChannelMappings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
