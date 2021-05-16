// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UDestructibleMesh;
#ifdef APEXDESTRUCTION_DestructibleComponent_generated_h
#error "DestructibleComponent.generated.h already included, missing '#pragma once' in DestructibleComponent.h"
#endif
#define APEXDESTRUCTION_DestructibleComponent_generated_h

#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_41_DELEGATE \
struct _Script_ApexDestruction_eventComponentFractureSignature_Parms \
{ \
	FVector HitPoint; \
	FVector HitDirection; \
}; \
static inline void FComponentFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentFractureSignature, FVector const& HitPoint, FVector const& HitDirection) \
{ \
	_Script_ApexDestruction_eventComponentFractureSignature_Parms Parms; \
	Parms.HitPoint=HitPoint; \
	Parms.HitDirection=HitDirection; \
	ComponentFractureSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_SPARSE_DATA
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDestructibleMesh); \
	DECLARE_FUNCTION(execSetDestructibleMesh); \
	DECLARE_FUNCTION(execApplyRadiusDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDestructibleMesh); \
	DECLARE_FUNCTION(execSetDestructibleMesh); \
	DECLARE_FUNCTION(execApplyRadiusDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#if WITH_EDITORONLY_DATA
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleComponent, NO_API)


#else
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ARCHIVESERIALIZER
#endif
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend struct Z_Construct_UClass_UDestructibleComponent_Statics; \
public: \
	DECLARE_CLASS(UDestructibleComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent) \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDestructibleComponent*>(this); }


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend struct Z_Construct_UClass_UDestructibleComponent_Statics; \
public: \
	DECLARE_CLASS(UDestructibleComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent) \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDestructibleComponent*>(this); }


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleComponent(UDestructibleComponent&&); \
	NO_API UDestructibleComponent(const UDestructibleComponent&); \
public:


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleComponent(UDestructibleComponent&&); \
	NO_API UDestructibleComponent(const UDestructibleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent)


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_50_PROLOG
#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_SPARSE_DATA \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_INCLASS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_SPARSE_DATA \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestructibleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APEXDESTRUCTION_API UClass* StaticClass<class UDestructibleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
