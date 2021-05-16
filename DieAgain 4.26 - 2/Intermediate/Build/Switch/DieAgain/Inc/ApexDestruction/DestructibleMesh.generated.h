// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APEXDESTRUCTION_DestructibleMesh_generated_h
#error "DestructibleMesh.generated.h already included, missing '#pragma once' in DestructibleMesh.h"
#endif
#define APEXDESTRUCTION_DestructibleMesh_generated_h

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_420_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleParameters>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_359_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleSpecialHierarchyDepths>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleAdvancedParameters>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDebrisParameters>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDamageParameters>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleParametersFlag>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDepthParameters>();

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_SPARSE_DATA
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_RPC_WRAPPERS
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleMesh, APEXDESTRUCTION_API)


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestructibleMesh(); \
	friend struct Z_Construct_UClass_UDestructibleMesh_Statics; \
public: \
	DECLARE_CLASS(UDestructibleMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), APEXDESTRUCTION_API) \
	DECLARE_SERIALIZER(UDestructibleMesh) \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleMesh(); \
	friend struct Z_Construct_UClass_UDestructibleMesh_Statics; \
public: \
	DECLARE_CLASS(UDestructibleMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), APEXDESTRUCTION_API) \
	DECLARE_SERIALIZER(UDestructibleMesh) \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTION_API, UDestructibleMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APEXDESTRUCTION_API UDestructibleMesh(UDestructibleMesh&&); \
	APEXDESTRUCTION_API UDestructibleMesh(const UDestructibleMesh&); \
public:


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APEXDESTRUCTION_API UDestructibleMesh(UDestructibleMesh&&); \
	APEXDESTRUCTION_API UDestructibleMesh(const UDestructibleMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTION_API, UDestructibleMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleMesh)


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_455_PROLOG
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_SPARSE_DATA \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_INCLASS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_SPARSE_DATA \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_458_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestructibleMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APEXDESTRUCTION_API UClass* StaticClass<class UDestructibleMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h


#define FOREACH_ENUM_EIMPACTDAMAGEOVERRIDE(op) \
	op(IDO_None) \
	op(IDO_On) \
	op(IDO_Off) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
