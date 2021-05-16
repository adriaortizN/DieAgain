// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EARTrackingState : uint8;
enum class EARCandidateImageOrientation : uint8;
class UTexture2D;
struct FBox;
#ifdef AUGMENTEDREALITY_ARTypes_generated_h
#error "ARTypes.generated.h already included, missing '#pragma once' in ARTypes.h"
#endif
#define AUGMENTEDREALITY_ARTypes_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_586_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARCameraIntrinsics>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_562_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPose3D_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPose3D>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_542_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPose2D_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPose2D>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_522_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSkeletonDefinition>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_474_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARVideoFormat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARVideoFormat>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_243_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSessionStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSessionStatus>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_266_DELEGATE \
struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms \
{ \
	FTransform OldToNewTransform; \
}; \
static inline void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform) \
{ \
	_Script_AugmentedReality_eventOnARTransformUpdated_Parms Parms; \
	Parms.OldToNewTransform=OldToNewTransform; \
	OnARTransformUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_265_DELEGATE \
struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms \
{ \
	EARTrackingState NewTrackingState; \
}; \
static inline void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState) \
{ \
	_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms Parms; \
	Parms.NewTrackingState=NewTrackingState; \
	OnARTrackingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_INCLASS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_268_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTypesDummyClass>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPhysicalHeight); \
	DECLARE_FUNCTION(execGetPhysicalWidth); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execGetCandidateTexture);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPhysicalHeight); \
	DECLARE_FUNCTION(execGetPhysicalWidth); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execGetCandidateTexture);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CandidateTexture() { return STRUCT_OFFSET(UARCandidateImage, CandidateTexture); } \
	FORCEINLINE static uint32 __PPO__FriendlyName() { return STRUCT_OFFSET(UARCandidateImage, FriendlyName); } \
	FORCEINLINE static uint32 __PPO__Width() { return STRUCT_OFFSET(UARCandidateImage, Width); } \
	FORCEINLINE static uint32 __PPO__Height() { return STRUCT_OFFSET(UARCandidateImage, Height); } \
	FORCEINLINE static uint32 __PPO__Orientation() { return STRUCT_OFFSET(UARCandidateImage, Orientation); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_294_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_298_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateImage>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundingBox); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execSetFriendlyName); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execSetCandidateObjectData); \
	DECLARE_FUNCTION(execGetCandidateObjectData);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundingBox); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execSetFriendlyName); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execSetCandidateObjectData); \
	DECLARE_FUNCTION(execGetCandidateObjectData);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CandidateObjectData() { return STRUCT_OFFSET(UARCandidateObject, CandidateObjectData); } \
	FORCEINLINE static uint32 __PPO__FriendlyName() { return STRUCT_OFFSET(UARCandidateObject, FriendlyName); } \
	FORCEINLINE static uint32 __PPO__BoundingBox() { return STRUCT_OFFSET(UARCandidateObject, BoundingBox); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_362_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_366_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h


#define FOREACH_ENUM_EARCANDIDATEIMAGEORIENTATION(op) \
	op(EARCandidateImageOrientation::Landscape) \
	op(EARCandidateImageOrientation::Portrait) 

enum class EARCandidateImageOrientation : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCandidateImageOrientation>();

#define FOREACH_ENUM_EARALTITUDESOURCE(op) \
	op(EARAltitudeSource::Precise) \
	op(EARAltitudeSource::Coarse) \
	op(EARAltitudeSource::UserDefined) \
	op(EARAltitudeSource::Unknown) 

enum class EARAltitudeSource : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARAltitudeSource>();

#define FOREACH_ENUM_EARJOINTTRANSFORMSPACE(op) \
	op(EARJointTransformSpace::Model) \
	op(EARJointTransformSpace::ParentJoint) 

enum class EARJointTransformSpace : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARJointTransformSpace>();

#define FOREACH_ENUM_EAROBJECTCLASSIFICATION(op) \
	op(EARObjectClassification::NotApplicable) \
	op(EARObjectClassification::Unknown) \
	op(EARObjectClassification::Wall) \
	op(EARObjectClassification::Ceiling) \
	op(EARObjectClassification::Floor) \
	op(EARObjectClassification::Table) \
	op(EARObjectClassification::Seat) \
	op(EARObjectClassification::Face) \
	op(EARObjectClassification::Image) \
	op(EARObjectClassification::World) \
	op(EARObjectClassification::SceneObject) \
	op(EARObjectClassification::HandMesh) \
	op(EARObjectClassification::Door) \
	op(EARObjectClassification::Window) 

enum class EARObjectClassification : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARObjectClassification>();

#define FOREACH_ENUM_EARPLANEORIENTATION(op) \
	op(EARPlaneOrientation::Horizontal) \
	op(EARPlaneOrientation::Vertical) \
	op(EARPlaneOrientation::Diagonal) 

enum class EARPlaneOrientation : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneOrientation>();

#define FOREACH_ENUM_EARWORLDMAPPINGSTATE(op) \
	op(EARWorldMappingState::NotAvailable) \
	op(EARWorldMappingState::StillMappingNotRelocalizable) \
	op(EARWorldMappingState::StillMappingRelocalizable) \
	op(EARWorldMappingState::Mapped) 

enum class EARWorldMappingState : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldMappingState>();

#define FOREACH_ENUM_EARSESSIONSTATUS(op) \
	op(EARSessionStatus::NotStarted) \
	op(EARSessionStatus::Running) \
	op(EARSessionStatus::NotSupported) \
	op(EARSessionStatus::FatalError) \
	op(EARSessionStatus::PermissionNotGranted) \
	op(EARSessionStatus::UnsupportedConfiguration) \
	op(EARSessionStatus::Other) 

enum class EARSessionStatus : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionStatus>();

#define FOREACH_ENUM_EARTRACKINGQUALITYREASON(op) \
	op(EARTrackingQualityReason::None) \
	op(EARTrackingQualityReason::Initializing) \
	op(EARTrackingQualityReason::Relocalizing) \
	op(EARTrackingQualityReason::ExcessiveMotion) \
	op(EARTrackingQualityReason::InsufficientFeatures) \
	op(EARTrackingQualityReason::InsufficientLight) \
	op(EARTrackingQualityReason::BadState) 

enum class EARTrackingQualityReason : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQualityReason>();

#define FOREACH_ENUM_EARTRACKINGQUALITY(op) \
	op(EARTrackingQuality::NotTracking) \
	op(EARTrackingQuality::OrientationOnly) \
	op(EARTrackingQuality::OrientationAndPosition) 

enum class EARTrackingQuality : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQuality>();

#define FOREACH_ENUM_EARLINETRACECHANNELS(op) \
	op(EARLineTraceChannels::None) \
	op(EARLineTraceChannels::FeaturePoint) \
	op(EARLineTraceChannels::GroundPlane) \
	op(EARLineTraceChannels::PlaneUsingExtent) \
	op(EARLineTraceChannels::PlaneUsingBoundaryPolygon) 

enum class EARLineTraceChannels : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLineTraceChannels>();

#define FOREACH_ENUM_EARCAPTURETYPE(op) \
	op(EARCaptureType::Camera) \
	op(EARCaptureType::QRCode) \
	op(EARCaptureType::SpatialMapping) \
	op(EARCaptureType::SceneUnderstanding) 

enum class EARCaptureType : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCaptureType>();

#define FOREACH_ENUM_EARTRACKINGSTATE(op) \
	op(EARTrackingState::Unknown) \
	op(EARTrackingState::Tracking) \
	op(EARTrackingState::NotTracking) \
	op(EARTrackingState::StoppedTracking) 

enum class EARTrackingState : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
