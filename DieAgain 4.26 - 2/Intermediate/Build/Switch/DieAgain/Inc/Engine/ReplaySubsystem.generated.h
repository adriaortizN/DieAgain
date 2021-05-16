// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplaySubsystem_generated_h
#error "ReplaySubsystem.generated.h already included, missing '#pragma once' in ReplaySubsystem.h"
#endif
#define ENGINE_ReplaySubsystem_generated_h

#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplaySubsystem(); \
	friend struct Z_Construct_UClass_UReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplaySubsystem)


#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReplaySubsystem(); \
	friend struct Z_Construct_UClass_UReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplaySubsystem)


#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplaySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplaySubsystem(UReplaySubsystem&&); \
	NO_API UReplaySubsystem(const UReplaySubsystem&); \
public:


#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplaySubsystem(UReplaySubsystem&&); \
	NO_API UReplaySubsystem(const UReplaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaySubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplaySubsystem)


#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
