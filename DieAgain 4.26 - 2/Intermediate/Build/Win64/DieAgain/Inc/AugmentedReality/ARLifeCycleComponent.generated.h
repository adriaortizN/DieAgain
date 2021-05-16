// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARActor;
class UObject;
struct FGuid;
#ifdef AUGMENTEDREALITY_ARLifeCycleComponent_generated_h
#error "ARLifeCycleComponent.generated.h already included, missing '#pragma once' in ARLifeCycleComponent.h"
#endif
#define AUGMENTEDREALITY_ARLifeCycleComponent_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_38_DELEGATE \
struct ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms \
{ \
	AARActor* Actor; \
}; \
static inline void FInstanceARActorToBeDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorToBeDestroyedDelegate, AARActor* Actor) \
{ \
	ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	InstanceARActorToBeDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_33_DELEGATE \
struct ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms \
{ \
	UClass* ComponentClass; \
	FGuid NativeID; \
	AARActor* SpawnedActor; \
}; \
static inline void FInstanceARActorSpawnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorSpawnedDelegate, UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor) \
{ \
	ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms Parms; \
	Parms.ComponentClass=ComponentClass; \
	Parms.NativeID=NativeID; \
	Parms.SpawnedActor=SpawnedActor; \
	InstanceARActorSpawnedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS \
	virtual bool ServerDestroyARActor_Validate(AARActor* ); \
	virtual void ServerDestroyARActor_Implementation(AARActor* Actor); \
	virtual bool ServerSpawnARActor_Validate(UClass* , FGuid ); \
	virtual void ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID); \
 \
	DECLARE_FUNCTION(execServerDestroyARActor); \
	DECLARE_FUNCTION(execServerSpawnARActor);


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDestroyARActor_Validate(AARActor* ); \
	virtual void ServerDestroyARActor_Implementation(AARActor* Actor); \
	virtual bool ServerSpawnARActor_Validate(UClass* , FGuid ); \
	virtual void ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID); \
 \
	DECLARE_FUNCTION(execServerDestroyARActor); \
	DECLARE_FUNCTION(execServerSpawnARActor);


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_EVENT_PARMS \
	struct ARLifeCycleComponent_eventServerDestroyARActor_Parms \
	{ \
		AARActor* Actor; \
	}; \
	struct ARLifeCycleComponent_eventServerSpawnARActor_Parms \
	{ \
		UClass* ComponentClass; \
		FGuid NativeID; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLifeCycleComponent(); \
	friend struct Z_Construct_UClass_UARLifeCycleComponent_Statics; \
public: \
	DECLARE_CLASS(UARLifeCycleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLifeCycleComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUARLifeCycleComponent(); \
	friend struct Z_Construct_UClass_UARLifeCycleComponent_Statics; \
public: \
	DECLARE_CLASS(UARLifeCycleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLifeCycleComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLifeCycleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLifeCycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLifeCycleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLifeCycleComponent(UARLifeCycleComponent&&); \
	NO_API UARLifeCycleComponent(const UARLifeCycleComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLifeCycleComponent(UARLifeCycleComponent&&); \
	NO_API UARLifeCycleComponent(const UARLifeCycleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLifeCycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLifeCycleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLifeCycleComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_14_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARLifeCycleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
