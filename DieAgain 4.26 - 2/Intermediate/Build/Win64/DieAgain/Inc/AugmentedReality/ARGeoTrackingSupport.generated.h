// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARGeoTrackingAccuracy : uint8;
enum class EARGeoTrackingStateReason : uint8;
enum class EARGeoTrackingState : uint8;
class UARGeoTrackingSupport;
class UObject;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
struct FVector;
class UGetGeoLocationAsyncTaskBlueprintProxy;
#ifdef AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h
#error "ARGeoTrackingSupport.generated.h already included, missing '#pragma once' in ARGeoTrackingSupport.h"
#endif
#define AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_268_DELEGATE \
struct GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms \
{ \
	float Longitude; \
	float Latitude; \
	float Altitude; \
	FString Error; \
}; \
static inline void FGetGeoLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetGeoLocationDelegate, float Longitude, float Latitude, float Altitude, const FString& Error) \
{ \
	GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms Parms; \
	Parms.Longitude=Longitude; \
	Parms.Latitude=Latitude; \
	Parms.Altitude=Altitude; \
	Parms.Error=Error; \
	GetGeoLocationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_184_DELEGATE \
struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms \
{ \
	bool bIsAvailable; \
	FString Error; \
}; \
static inline void FGeoTrackingAvailabilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeoTrackingAvailabilityDelegate, bool bIsAvailable, const FString& Error) \
{ \
	CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms Parms; \
	Parms.bIsAvailable=bIsAvailable ? true : false; \
	Parms.Error=Error; \
	GeoTrackingAvailabilityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocationWithAltitude); \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocation); \
	DECLARE_FUNCTION(execGetGeoTrackingAccuracy); \
	DECLARE_FUNCTION(execGetGeoTrackingStateReason); \
	DECLARE_FUNCTION(execGetGeoTrackingState); \
	DECLARE_FUNCTION(execGetGeoTrackingSupport);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocationWithAltitude); \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocation); \
	DECLARE_FUNCTION(execGetGeoTrackingAccuracy); \
	DECLARE_FUNCTION(execGetGeoTrackingStateReason); \
	DECLARE_FUNCTION(execGetGeoTrackingState); \
	DECLARE_FUNCTION(execGetGeoTrackingSupport);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoTrackingSupport(); \
	friend struct Z_Construct_UClass_UARGeoTrackingSupport_Statics; \
public: \
	DECLARE_CLASS(UARGeoTrackingSupport, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoTrackingSupport)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUARGeoTrackingSupport(); \
	friend struct Z_Construct_UClass_UARGeoTrackingSupport_Statics; \
public: \
	DECLARE_CLASS(UARGeoTrackingSupport, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoTrackingSupport)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoTrackingSupport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoTrackingSupport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoTrackingSupport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoTrackingSupport(UARGeoTrackingSupport&&); \
	NO_API UARGeoTrackingSupport(const UARGeoTrackingSupport&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoTrackingSupport(UARGeoTrackingSupport&&); \
	NO_API UARGeoTrackingSupport(const UARGeoTrackingSupport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoTrackingSupport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoTrackingSupport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoTrackingSupport)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_86_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoTrackingSupport>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailabilityAtLocation); \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailability);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailabilityAtLocation); \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailability);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&&); \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&&); \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_178_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeoLocationAtWorldPosition);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeoLocationAtWorldPosition);


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UGetGeoLocationAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UGetGeoLocationAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS \
private: \
	static void StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UGetGeoLocationAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UGetGeoLocationAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGeoLocationAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetGeoLocationAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGeoLocationAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(UGetGeoLocationAsyncTaskBlueprintProxy&&); \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const UGetGeoLocationAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(UGetGeoLocationAsyncTaskBlueprintProxy&&); \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const UGetGeoLocationAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetGeoLocationAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGeoLocationAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_262_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UGetGeoLocationAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h


#define FOREACH_ENUM_EARGEOTRACKINGACCURACY(op) \
	op(EARGeoTrackingAccuracy::Undetermined) \
	op(EARGeoTrackingAccuracy::Low) \
	op(EARGeoTrackingAccuracy::Medium) \
	op(EARGeoTrackingAccuracy::High) 

enum class EARGeoTrackingAccuracy : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingAccuracy>();

#define FOREACH_ENUM_EARGEOTRACKINGSTATEREASON(op) \
	op(EARGeoTrackingStateReason::None) \
	op(EARGeoTrackingStateReason::NotAvailableAtLocation) \
	op(EARGeoTrackingStateReason::NeedLocationPermissions) \
	op(EARGeoTrackingStateReason::DevicePointedTooLow) \
	op(EARGeoTrackingStateReason::WorldTrackingUnstable) \
	op(EARGeoTrackingStateReason::WaitingForLocation) \
	op(EARGeoTrackingStateReason::GeoDataNotLoaded) \
	op(EARGeoTrackingStateReason::VisualLocalizationFailed) \
	op(EARGeoTrackingStateReason::WaitingForAvailabilityCheck) 

enum class EARGeoTrackingStateReason : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingStateReason>();

#define FOREACH_ENUM_EARGEOTRACKINGSTATE(op) \
	op(EARGeoTrackingState::Initializing) \
	op(EARGeoTrackingState::Localized) \
	op(EARGeoTrackingState::Localizing) \
	op(EARGeoTrackingState::NotAvailable) 

enum class EARGeoTrackingState : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
