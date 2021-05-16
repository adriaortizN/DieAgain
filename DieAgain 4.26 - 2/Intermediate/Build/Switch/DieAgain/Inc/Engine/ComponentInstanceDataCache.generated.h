// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentInstanceDataCache_generated_h
#error "ComponentInstanceDataCache.generated.h already included, missing '#pragma once' in ComponentInstanceDataCache.h"
#endif
#define ENGINE_ComponentInstanceDataCache_generated_h

#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SourceComponentTemplate() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTemplate); } \
	FORCEINLINE static uint32 __PPO__SourceComponentCreationMethod() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentCreationMethod); } \
	FORCEINLINE static uint32 __PPO__SourceComponentTypeSerializedIndex() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTypeSerializedIndex); } \
	FORCEINLINE static uint32 __PPO__SavedProperties() { return STRUCT_OFFSET(FActorComponentInstanceData, SavedProperties); } \
	FORCEINLINE static uint32 __PPO__UniqueTransientPackage() { return STRUCT_OFFSET(FActorComponentInstanceData, UniqueTransientPackage); } \
	FORCEINLINE static uint32 __PPO__DuplicatedObjects() { return STRUCT_OFFSET(FActorComponentInstanceData, DuplicatedObjects); } \
	FORCEINLINE static uint32 __PPO__ReferencedObjects() { return STRUCT_OFFSET(FActorComponentInstanceData, ReferencedObjects); } \
	FORCEINLINE static uint32 __PPO__ReferencedNames() { return STRUCT_OFFSET(FActorComponentInstanceData, ReferencedNames); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentDuplicatedObjectData>();

#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponentInstanceDataTransientOuter(); \
	friend struct Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics; \
public: \
	DECLARE_CLASS(UActorComponentInstanceDataTransientOuter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentInstanceDataTransientOuter)


#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUActorComponentInstanceDataTransientOuter(); \
	friend struct Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics; \
public: \
	DECLARE_CLASS(UActorComponentInstanceDataTransientOuter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentInstanceDataTransientOuter)


#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponentInstanceDataTransientOuter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponentInstanceDataTransientOuter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentInstanceDataTransientOuter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentInstanceDataTransientOuter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentInstanceDataTransientOuter(UActorComponentInstanceDataTransientOuter&&); \
	NO_API UActorComponentInstanceDataTransientOuter(const UActorComponentInstanceDataTransientOuter&); \
public:


#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponentInstanceDataTransientOuter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentInstanceDataTransientOuter(UActorComponentInstanceDataTransientOuter&&); \
	NO_API UActorComponentInstanceDataTransientOuter(const UActorComponentInstanceDataTransientOuter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentInstanceDataTransientOuter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentInstanceDataTransientOuter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponentInstanceDataTransientOuter)


#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_62_PROLOG
#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_INCLASS \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorComponentInstanceDataTransientOuter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h


#define FOREACH_ENUM_ECOMPONENTCREATIONMETHOD(op) \
	op(EComponentCreationMethod::Native) \
	op(EComponentCreationMethod::SimpleConstructionScript) \
	op(EComponentCreationMethod::UserConstructionScript) \
	op(EComponentCreationMethod::Instance) 

enum class EComponentCreationMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
