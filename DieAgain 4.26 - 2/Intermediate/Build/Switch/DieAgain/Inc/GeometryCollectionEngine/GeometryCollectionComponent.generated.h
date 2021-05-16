// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCollectionComponent;
struct FChaosBreakEvent;
struct FGeometryCollectionRepData;
enum class EGeometryCollectionPhysicsTypeEnum : uint8;
class UFieldSystemMetaData;
class UFieldNodeBase;
struct FVector;
struct FChaosPhysicsCollisionInfo;
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h
#error "GeometryCollectionComponent.generated.h already included, missing '#pragma once' in GeometryCollectionComponent.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRepData>();

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeomComponentCacheParameters>();

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_517_DELEGATE \
struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms \
{ \
	UGeometryCollectionComponent* FracturedComponent; \
}; \
static inline void FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent) \
{ \
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms Parms; \
	Parms.FracturedComponent=FracturedComponent; \
	NotifyGeometryCollectionPhysicsLoadingStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_510_DELEGATE \
struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms \
{ \
	UGeometryCollectionComponent* FracturedComponent; \
}; \
static inline void FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent) \
{ \
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms Parms; \
	Parms.FracturedComponent=FracturedComponent; \
	NotifyGeometryCollectionPhysicsStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_36_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms \
{ \
	FChaosBreakEvent BreakEvent; \
}; \
static inline void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms Parms; \
	Parms.BreakEvent=BreakEvent; \
	OnChaosBreakEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_RPC_WRAPPERS \
	virtual void NetAbandonCluster_Implementation(int32 TransformIndex); \
 \
	DECLARE_FUNCTION(execNetAbandonCluster); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField);


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetAbandonCluster_Implementation(int32 TransformIndex); \
 \
	DECLARE_FUNCTION(execNetAbandonCluster); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField);


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_EVENT_PARMS \
	struct GeometryCollectionComponent_eventNetAbandonCluster_Parms \
	{ \
		int32 TransformIndex; \
	}; \
	struct GeometryCollectionComponent_eventReceivePhysicsCollision_Parms \
	{ \
		FChaosPhysicsCollisionInfo CollisionInfo; \
	};


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollectionComponent(UGeometryCollectionComponent&&); \
	NO_API UGeometryCollectionComponent(const UGeometryCollectionComponent&); \
public:


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollectionComponent(UGeometryCollectionComponent&&); \
	NO_API UGeometryCollectionComponent(const UGeometryCollectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bNotifyBreaks() { return STRUCT_OFFSET(UGeometryCollectionComponent, bNotifyBreaks); } \
	FORCEINLINE static uint32 __PPO__bNotifyCollisions() { return STRUCT_OFFSET(UGeometryCollectionComponent, bNotifyCollisions); } \
	FORCEINLINE static uint32 __PPO__bEnableReplication() { return STRUCT_OFFSET(UGeometryCollectionComponent, bEnableReplication); } \
	FORCEINLINE static uint32 __PPO__bEnableAbandonAfterLevel() { return STRUCT_OFFSET(UGeometryCollectionComponent, bEnableAbandonAfterLevel); } \
	FORCEINLINE static uint32 __PPO__ReplicationAbandonClusterLevel() { return STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationAbandonClusterLevel); } \
	FORCEINLINE static uint32 __PPO__RepData() { return STRUCT_OFFSET(UGeometryCollectionComponent, RepData); } \
	FORCEINLINE static uint32 __PPO__DummyBodySetup() { return STRUCT_OFFSET(UGeometryCollectionComponent, DummyBodySetup); }


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_322_PROLOG \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_EVENT_PARMS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_INCLASS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_325_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCollectionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UGeometryCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
