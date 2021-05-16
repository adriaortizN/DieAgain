// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;
struct FGuid;
struct FARPlaneUpdatePayload;
enum class EARObjectClassification : uint8; struct FLinearColor;
enum class EPlaneComponentDebugMode : uint8;
struct FARPointUpdatePayload;
struct FARFaceUpdatePayload;
enum class EFaceComponentDebugMode : uint8;
struct FARImageUpdatePayload;
enum class EImageComponentDebugMode : uint8;
struct FARQRCodeUpdatePayload;
enum class EQRCodeComponentDebugMode : uint8;
struct FARPoseUpdatePayload;
enum class EPoseComponentDebugMode : uint8;
struct FAREnvironmentProbeUpdatePayload;
struct FARObjectUpdatePayload;
struct FARMeshUpdatePayload;
struct FARGeoAnchorUpdatePayload;
enum class EGeoAnchorComponentDebugMode : uint8;
#ifdef AUGMENTEDREALITY_ARComponent_generated_h
#error "ARComponent.generated.h already included, missing '#pragma once' in ARComponent.h"
#endif
#define AUGMENTEDREALITY_ARComponent_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARGeoAnchorUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARMeshUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARObjectUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FAREnvironmentProbeUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPoseUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARQRCodeUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARImageUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARFaceUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPointUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPlaneUpdatePayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSessionPayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSessionPayload>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_RPC_WRAPPERS \
	virtual void UpdateVisualization_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_Payload); \
	DECLARE_FUNCTION(execUpdateVisualization); \
	DECLARE_FUNCTION(execGetMRMesh); \
	DECLARE_FUNCTION(execSetNativeID);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateVisualization_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_Payload); \
	DECLARE_FUNCTION(execUpdateVisualization); \
	DECLARE_FUNCTION(execGetMRMesh); \
	DECLARE_FUNCTION(execSetNativeID);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_EVENT_PARMS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARComponent(); \
	friend struct Z_Construct_UClass_UARComponent_Statics; \
public: \
	DECLARE_CLASS(UARComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NativeID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NativeID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_INCLASS \
private: \
	static void StaticRegisterNativesUARComponent(); \
	friend struct Z_Construct_UClass_UARComponent_Statics; \
public: \
	DECLARE_CLASS(UARComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NativeID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NativeID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARComponent(UARComponent&&); \
	NO_API UARComponent(const UARComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARComponent(UARComponent&&); \
	NO_API UARComponent(const UARComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseDefaultReplication() { return STRUCT_OFFSET(UARComponent, bUseDefaultReplication); } \
	FORCEINLINE static uint32 __PPO__DefaultMeshMaterial() { return STRUCT_OFFSET(UARComponent, DefaultMeshMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultWireframeMeshMaterial() { return STRUCT_OFFSET(UARComponent, DefaultWireframeMeshMaterial); } \
	FORCEINLINE static uint32 __PPO__MRMeshComponent() { return STRUCT_OFFSET(UARComponent, MRMeshComponent); } \
	FORCEINLINE static uint32 __PPO__MyTrackedGeometry() { return STRUCT_OFFSET(UARComponent, MyTrackedGeometry); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_229_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPlaneUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPlaneUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execGetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetPlaneComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPlaneUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPlaneUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execGetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetPlaneComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_EVENT_PARMS \
	struct ARPlaneComponent_eventReceiveAdd_Parms \
	{ \
		FARPlaneUpdatePayload Payload; \
	}; \
	struct ARPlaneComponent_eventReceiveUpdate_Parms \
	{ \
		FARPlaneUpdatePayload Payload; \
	}; \
	struct ARPlaneComponent_eventServerUpdatePayload_Parms \
	{ \
		FARPlaneUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneComponent(); \
	friend struct Z_Construct_UClass_UARPlaneComponent_Statics; \
public: \
	DECLARE_CLASS(UARPlaneComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_INCLASS \
private: \
	static void StaticRegisterNativesUARPlaneComponent(); \
	friend struct Z_Construct_UClass_UARPlaneComponent_Statics; \
public: \
	DECLARE_CLASS(UARPlaneComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPlaneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneComponent(UARPlaneComponent&&); \
	NO_API UARPlaneComponent(const UARPlaneComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneComponent(UARPlaneComponent&&); \
	NO_API UARPlaneComponent(const UARPlaneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARPlaneComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_323_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_326_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPlaneComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPointUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPointUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPointUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPointUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_EVENT_PARMS \
	struct ARPointComponent_eventReceiveAdd_Parms \
	{ \
		FARPointUpdatePayload Payload; \
	}; \
	struct ARPointComponent_eventReceiveUpdate_Parms \
	{ \
		FARPointUpdatePayload Payload; \
	}; \
	struct ARPointComponent_eventServerUpdatePayload_Parms \
	{ \
		FARPointUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPointComponent(); \
	friend struct Z_Construct_UClass_UARPointComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_INCLASS \
private: \
	static void StaticRegisterNativesUARPointComponent(); \
	friend struct Z_Construct_UClass_UARPointComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPointComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointComponent(UARPointComponent&&); \
	NO_API UARPointComponent(const UARPointComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointComponent(UARPointComponent&&); \
	NO_API UARPointComponent(const UARPointComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPointComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARPointComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_364_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_367_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPointComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARFaceUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARFaceUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetFaceComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARFaceUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARFaceUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetFaceComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_EVENT_PARMS \
	struct ARFaceComponent_eventReceiveAdd_Parms \
	{ \
		FARFaceUpdatePayload Payload; \
	}; \
	struct ARFaceComponent_eventReceiveUpdate_Parms \
	{ \
		FARFaceUpdatePayload Payload; \
	}; \
	struct ARFaceComponent_eventServerUpdatePayload_Parms \
	{ \
		FARFaceUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceComponent(); \
	friend struct Z_Construct_UClass_UARFaceComponent_Statics; \
public: \
	DECLARE_CLASS(UARFaceComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_INCLASS \
private: \
	static void StaticRegisterNativesUARFaceComponent(); \
	friend struct Z_Construct_UClass_UARFaceComponent_Statics; \
public: \
	DECLARE_CLASS(UARFaceComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARFaceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceComponent(UARFaceComponent&&); \
	NO_API UARFaceComponent(const UARFaceComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceComponent(UARFaceComponent&&); \
	NO_API UARFaceComponent(const UARFaceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformSetting() { return STRUCT_OFFSET(UARFaceComponent, TransformSetting); } \
	FORCEINLINE static uint32 __PPO__bUpdateVertexNormal() { return STRUCT_OFFSET(UARFaceComponent, bUpdateVertexNormal); } \
	FORCEINLINE static uint32 __PPO__bFaceOutOfScreen() { return STRUCT_OFFSET(UARFaceComponent, bFaceOutOfScreen); } \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARFaceComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_419_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_422_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARFaceComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARImageUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARImageUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetImageComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARImageUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARImageUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetImageComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_EVENT_PARMS \
	struct ARImageComponent_eventReceiveAdd_Parms \
	{ \
		FARImageUpdatePayload Payload; \
	}; \
	struct ARImageComponent_eventReceiveUpdate_Parms \
	{ \
		FARImageUpdatePayload Payload; \
	}; \
	struct ARImageComponent_eventServerUpdatePayload_Parms \
	{ \
		FARImageUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARImageComponent(); \
	friend struct Z_Construct_UClass_UARImageComponent_Statics; \
public: \
	DECLARE_CLASS(UARImageComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARImageComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_INCLASS \
private: \
	static void StaticRegisterNativesUARImageComponent(); \
	friend struct Z_Construct_UClass_UARImageComponent_Statics; \
public: \
	DECLARE_CLASS(UARImageComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARImageComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARImageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARImageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARImageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARImageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARImageComponent(UARImageComponent&&); \
	NO_API UARImageComponent(const UARImageComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARImageComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARImageComponent(UARImageComponent&&); \
	NO_API UARImageComponent(const UARImageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARImageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARImageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARImageComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARImageComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_481_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_484_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARImageComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARQRCodeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARQRCodeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetQRCodeComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARQRCodeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARQRCodeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetQRCodeComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_EVENT_PARMS \
	struct ARQRCodeComponent_eventReceiveAdd_Parms \
	{ \
		FARQRCodeUpdatePayload Payload; \
	}; \
	struct ARQRCodeComponent_eventReceiveUpdate_Parms \
	{ \
		FARQRCodeUpdatePayload Payload; \
	}; \
	struct ARQRCodeComponent_eventServerUpdatePayload_Parms \
	{ \
		FARQRCodeUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARQRCodeComponent(); \
	friend struct Z_Construct_UClass_UARQRCodeComponent_Statics; \
public: \
	DECLARE_CLASS(UARQRCodeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARQRCodeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_INCLASS \
private: \
	static void StaticRegisterNativesUARQRCodeComponent(); \
	friend struct Z_Construct_UClass_UARQRCodeComponent_Statics; \
public: \
	DECLARE_CLASS(UARQRCodeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARQRCodeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARQRCodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARQRCodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARQRCodeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARQRCodeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARQRCodeComponent(UARQRCodeComponent&&); \
	NO_API UARQRCodeComponent(const UARQRCodeComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARQRCodeComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARQRCodeComponent(UARQRCodeComponent&&); \
	NO_API UARQRCodeComponent(const UARQRCodeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARQRCodeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARQRCodeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARQRCodeComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARQRCodeComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_525_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_528_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARQRCodeComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPoseUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPoseUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetPoseComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPoseUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPoseUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetPoseComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_EVENT_PARMS \
	struct ARPoseComponent_eventReceiveAdd_Parms \
	{ \
		FARPoseUpdatePayload Payload; \
	}; \
	struct ARPoseComponent_eventReceiveUpdate_Parms \
	{ \
		FARPoseUpdatePayload Payload; \
	}; \
	struct ARPoseComponent_eventServerUpdatePayload_Parms \
	{ \
		FARPoseUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPoseComponent(); \
	friend struct Z_Construct_UClass_UARPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UARPoseComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPoseComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_INCLASS \
private: \
	static void StaticRegisterNativesUARPoseComponent(); \
	friend struct Z_Construct_UClass_UARPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UARPoseComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPoseComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPoseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPoseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPoseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPoseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPoseComponent(UARPoseComponent&&); \
	NO_API UARPoseComponent(const UARPoseComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPoseComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPoseComponent(UARPoseComponent&&); \
	NO_API UARPoseComponent(const UARPoseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPoseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPoseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPoseComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARPoseComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_569_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_572_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPoseComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FAREnvironmentProbeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FAREnvironmentProbeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FAREnvironmentProbeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FAREnvironmentProbeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_EVENT_PARMS \
	struct AREnvironmentProbeComponent_eventReceiveAdd_Parms \
	{ \
		FAREnvironmentProbeUpdatePayload Payload; \
	}; \
	struct AREnvironmentProbeComponent_eventReceiveUpdate_Parms \
	{ \
		FAREnvironmentProbeUpdatePayload Payload; \
	}; \
	struct AREnvironmentProbeComponent_eventServerUpdatePayload_Parms \
	{ \
		FAREnvironmentProbeUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentProbeComponent(); \
	friend struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentProbeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentProbeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_INCLASS \
private: \
	static void StaticRegisterNativesUAREnvironmentProbeComponent(); \
	friend struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentProbeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentProbeComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentProbeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAREnvironmentProbeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentProbeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentProbeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentProbeComponent(UAREnvironmentProbeComponent&&); \
	NO_API UAREnvironmentProbeComponent(const UAREnvironmentProbeComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentProbeComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentProbeComponent(UAREnvironmentProbeComponent&&); \
	NO_API UAREnvironmentProbeComponent(const UAREnvironmentProbeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentProbeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentProbeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentProbeComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UAREnvironmentProbeComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_603_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_606_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UAREnvironmentProbeComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARObjectUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARObjectUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARObjectUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARObjectUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_EVENT_PARMS \
	struct ARObjectComponent_eventReceiveAdd_Parms \
	{ \
		FARObjectUpdatePayload Payload; \
	}; \
	struct ARObjectComponent_eventReceiveUpdate_Parms \
	{ \
		FARObjectUpdatePayload Payload; \
	}; \
	struct ARObjectComponent_eventServerUpdatePayload_Parms \
	{ \
		FARObjectUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARObjectComponent(); \
	friend struct Z_Construct_UClass_UARObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UARObjectComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARObjectComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_INCLASS \
private: \
	static void StaticRegisterNativesUARObjectComponent(); \
	friend struct Z_Construct_UClass_UARObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UARObjectComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARObjectComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARObjectComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARObjectComponent(UARObjectComponent&&); \
	NO_API UARObjectComponent(const UARObjectComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARObjectComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARObjectComponent(UARObjectComponent&&); \
	NO_API UARObjectComponent(const UARObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARObjectComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARObjectComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_630_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_633_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARObjectComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARMeshUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARMeshUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARMeshUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARMeshUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_EVENT_PARMS \
	struct ARMeshComponent_eventReceiveAdd_Parms \
	{ \
		FARMeshUpdatePayload Payload; \
	}; \
	struct ARMeshComponent_eventReceiveUpdate_Parms \
	{ \
		FARMeshUpdatePayload Payload; \
	}; \
	struct ARMeshComponent_eventServerUpdatePayload_Parms \
	{ \
		FARMeshUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshComponent(); \
	friend struct Z_Construct_UClass_UARMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UARMeshComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_INCLASS \
private: \
	static void StaticRegisterNativesUARMeshComponent(); \
	friend struct Z_Construct_UClass_UARMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UARMeshComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshComponent(UARMeshComponent&&); \
	NO_API UARMeshComponent(const UARMeshComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshComponent(UARMeshComponent&&); \
	NO_API UARMeshComponent(const UARMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARMeshComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_657_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_660_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARMeshComponent>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARGeoAnchorUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARGeoAnchorUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetGeoAnchorComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARGeoAnchorUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARGeoAnchorUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetGeoAnchorComponentDebugMode);


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_EVENT_PARMS \
	struct ARGeoAnchorComponent_eventReceiveAdd_Parms \
	{ \
		FARGeoAnchorUpdatePayload Payload; \
	}; \
	struct ARGeoAnchorComponent_eventReceiveUpdate_Parms \
	{ \
		FARGeoAnchorUpdatePayload Payload; \
	}; \
	struct ARGeoAnchorComponent_eventServerUpdatePayload_Parms \
	{ \
		FARGeoAnchorUpdatePayload NewPayload; \
	};


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchorComponent(); \
	friend struct Z_Construct_UClass_UARGeoAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchorComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchorComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_INCLASS \
private: \
	static void StaticRegisterNativesUARGeoAnchorComponent(); \
	friend struct Z_Construct_UClass_UARGeoAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchorComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchorComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoAnchorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchorComponent(UARGeoAnchorComponent&&); \
	NO_API UARGeoAnchorComponent(const UARGeoAnchorComponent&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchorComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchorComponent(UARGeoAnchorComponent&&); \
	NO_API UARGeoAnchorComponent(const UARGeoAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchorComponent)


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedPayload() { return STRUCT_OFFSET(UARGeoAnchorComponent, ReplicatedPayload); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_695_PROLOG \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_EVENT_PARMS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_698_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h


#define FOREACH_ENUM_EGEOANCHORCOMPONENTDEBUGMODE(op) \
	op(EGeoAnchorComponentDebugMode::None) \
	op(EGeoAnchorComponentDebugMode::ShowGeoData) 

enum class EGeoAnchorComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EGeoAnchorComponentDebugMode>();

#define FOREACH_ENUM_EPOSECOMPONENTDEBUGMODE(op) \
	op(EPoseComponentDebugMode::None) \
	op(EPoseComponentDebugMode::ShowSkeleton) 

enum class EPoseComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPoseComponentDebugMode>();

#define FOREACH_ENUM_EQRCODECOMPONENTDEBUGMODE(op) \
	op(EQRCodeComponentDebugMode::None) \
	op(EQRCodeComponentDebugMode::ShowQRCode) 

enum class EQRCodeComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EQRCodeComponentDebugMode>();

#define FOREACH_ENUM_EIMAGECOMPONENTDEBUGMODE(op) \
	op(EImageComponentDebugMode::None) \
	op(EImageComponentDebugMode::ShowDetectedImage) 

enum class EImageComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EImageComponentDebugMode>();

#define FOREACH_ENUM_EARFACETRANSFORMMIXING(op) \
	op(EARFaceTransformMixing::ComponentOnly) \
	op(EARFaceTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceTransformMixing::ComponentWithTracked) \
	op(EARFaceTransformMixing::TrackingOnly) 

enum class EARFaceTransformMixing : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTransformMixing>();

#define FOREACH_ENUM_EFACECOMPONENTDEBUGMODE(op) \
	op(EFaceComponentDebugMode::None) \
	op(EFaceComponentDebugMode::ShowEyeVectors) \
	op(EFaceComponentDebugMode::ShowFaceMesh) 

enum class EFaceComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EFaceComponentDebugMode>();

#define FOREACH_ENUM_EPLANECOMPONENTDEBUGMODE(op) \
	op(EPlaneComponentDebugMode::None) \
	op(EPlaneComponentDebugMode::ShowNetworkRole) \
	op(EPlaneComponentDebugMode::ShowClassification) 

enum class EPlaneComponentDebugMode : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPlaneComponentDebugMode>();

#define FOREACH_ENUM_EARSESSIONCONFIGFLAGS(op) \
	op(EARSessionConfigFlags::None) \
	op(EARSessionConfigFlags::GenerateMeshData) \
	op(EARSessionConfigFlags::RenderMeshDataInWireframe) \
	op(EARSessionConfigFlags::GenerateCollisionForMeshData) \
	op(EARSessionConfigFlags::GenerateNavMeshForMeshData) \
	op(EARSessionConfigFlags::UseMeshDataForOcclusion) 

enum class EARSessionConfigFlags : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionConfigFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
