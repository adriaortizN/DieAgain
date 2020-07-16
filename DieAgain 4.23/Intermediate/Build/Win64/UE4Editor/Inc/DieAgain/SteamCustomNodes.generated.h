// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIEAGAIN_SteamCustomNodes_generated_h
#error "SteamCustomNodes.generated.h already included, missing '#pragma once' in SteamCustomNodes.h"
#endif
#define DIEAGAIN_SteamCustomNodes_generated_h

#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenStore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DLC_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamCustomNodes::OpenStore(Z_Param_DLC_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBIsAppInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamCustomNodes::BIsAppInstalled(Z_Param_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBIsDlcInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamCustomNodes::BIsDlcInstalled(Z_Param_AppID); \
		P_NATIVE_END; \
	}


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenStore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DLC_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamCustomNodes::OpenStore(Z_Param_DLC_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBIsAppInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamCustomNodes::BIsAppInstalled(Z_Param_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBIsDlcInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USteamCustomNodes::BIsDlcInstalled(Z_Param_AppID); \
		P_NATIVE_END; \
	}


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCustomNodes(); \
	friend struct Z_Construct_UClass_USteamCustomNodes_Statics; \
public: \
	DECLARE_CLASS(USteamCustomNodes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DieAgain"), NO_API) \
	DECLARE_SERIALIZER(USteamCustomNodes)


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCustomNodes(); \
	friend struct Z_Construct_UClass_USteamCustomNodes_Statics; \
public: \
	DECLARE_CLASS(USteamCustomNodes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DieAgain"), NO_API) \
	DECLARE_SERIALIZER(USteamCustomNodes)


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCustomNodes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCustomNodes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCustomNodes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCustomNodes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCustomNodes(USteamCustomNodes&&); \
	NO_API USteamCustomNodes(const USteamCustomNodes&); \
public:


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCustomNodes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCustomNodes(USteamCustomNodes&&); \
	NO_API USteamCustomNodes(const USteamCustomNodes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCustomNodes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCustomNodes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCustomNodes)


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_PRIVATE_PROPERTY_OFFSET
#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_20_PROLOG
#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_RPC_WRAPPERS \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_INCLASS \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_PRIVATE_PROPERTY_OFFSET \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_INCLASS_NO_PURE_DECLS \
	DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIEAGAIN_API UClass* StaticClass<class USteamCustomNodes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DieAgain_4_23_Source_DieAgain_Public_SteamCustomNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
