// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_PhysicsSettingsCore_generated_h
#error "PhysicsSettingsCore.generated.h already included, missing '#pragma once' in PhysicsSettingsCore.h"
#endif
#define PHYSICSCORE_PhysicsSettingsCore_generated_h

#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA
#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSettingsCore(); \
	friend struct Z_Construct_UClass_UPhysicsSettingsCore_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettingsCore, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettingsCore) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSettingsCore(); \
	friend struct Z_Construct_UClass_UPhysicsSettingsCore_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettingsCore, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettingsCore) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettingsCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettingsCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettingsCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettingsCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettingsCore(UPhysicsSettingsCore&&); \
	NO_API UPhysicsSettingsCore(const UPhysicsSettingsCore&); \
public:


#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettingsCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettingsCore(UPhysicsSettingsCore&&); \
	NO_API UPhysicsSettingsCore(const UPhysicsSettingsCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettingsCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettingsCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettingsCore)


#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_18_PROLOG
#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSettingsCore."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UPhysicsSettingsCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
