// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_BodySetupCore_generated_h
#error "BodySetupCore.generated.h already included, missing '#pragma once' in BodySetupCore.h"
#endif
#define PHYSICSCORE_BodySetupCore_generated_h

#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_SPARSE_DATA
#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodySetupCore(); \
	friend struct Z_Construct_UClass_UBodySetupCore_Statics; \
public: \
	DECLARE_CLASS(UBodySetupCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UBodySetupCore)


#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetupCore(); \
	friend struct Z_Construct_UClass_UBodySetupCore_Statics; \
public: \
	DECLARE_CLASS(UBodySetupCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UBodySetupCore)


#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodySetupCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetupCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodySetupCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetupCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodySetupCore(UBodySetupCore&&); \
	NO_API UBodySetupCore(const UBodySetupCore&); \
public:


#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodySetupCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodySetupCore(UBodySetupCore&&); \
	NO_API UBodySetupCore(const UBodySetupCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodySetupCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetupCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetupCore)


#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_17_PROLOG
#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_SPARSE_DATA \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_SPARSE_DATA \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodySetupCore."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UBodySetupCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
