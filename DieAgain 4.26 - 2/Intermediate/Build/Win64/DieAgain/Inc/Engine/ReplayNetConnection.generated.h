// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplayNetConnection_generated_h
#error "ReplayNetConnection.generated.h already included, missing '#pragma once' in ReplayNetConnection.h"
#endif
#define ENGINE_ReplayNetConnection_generated_h

#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplayNetConnection, NO_API)


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplayNetConnection(); \
	friend struct Z_Construct_UClass_UReplayNetConnection_Statics; \
public: \
	DECLARE_CLASS(UReplayNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplayNetConnection) \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReplayNetConnection(); \
	friend struct Z_Construct_UClass_UReplayNetConnection_Statics; \
public: \
	DECLARE_CLASS(UReplayNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplayNetConnection) \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplayNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplayNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplayNetConnection(UReplayNetConnection&&); \
	NO_API UReplayNetConnection(const UReplayNetConnection&); \
public:


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplayNetConnection(UReplayNetConnection&&); \
	NO_API UReplayNetConnection(const UReplayNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplayNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayNetConnection)


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplayNetConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
