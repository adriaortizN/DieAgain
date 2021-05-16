// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UARSessionConfig;
struct FLatentActionInfo;
enum class EARServicePermissionRequestResult : uint8;
enum class EARServiceInstallRequestResult : uint8;
enum class EARServiceAvailability : uint8;
class UARDependencyHandler;
#ifdef AUGMENTEDREALITY_ARDependencyHandler_generated_h
#error "ARDependencyHandler.generated.h already included, missing '#pragma once' in ARDependencyHandler.h"
#endif
#define AUGMENTEDREALITY_ARDependencyHandler_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartARSessionLatent); \
	DECLARE_FUNCTION(execRequestARSessionPermission); \
	DECLARE_FUNCTION(execInstallARService); \
	DECLARE_FUNCTION(execCheckARServiceAvailability); \
	DECLARE_FUNCTION(execGetARDependencyHandler);


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartARSessionLatent); \
	DECLARE_FUNCTION(execRequestARSessionPermission); \
	DECLARE_FUNCTION(execInstallARService); \
	DECLARE_FUNCTION(execCheckARServiceAvailability); \
	DECLARE_FUNCTION(execGetARDependencyHandler);


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARDependencyHandler(); \
	friend struct Z_Construct_UClass_UARDependencyHandler_Statics; \
public: \
	DECLARE_CLASS(UARDependencyHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARDependencyHandler)


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUARDependencyHandler(); \
	friend struct Z_Construct_UClass_UARDependencyHandler_Statics; \
public: \
	DECLARE_CLASS(UARDependencyHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARDependencyHandler)


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDependencyHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARDependencyHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDependencyHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARDependencyHandler(UARDependencyHandler&&); \
	NO_API UARDependencyHandler(const UARDependencyHandler&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARDependencyHandler(UARDependencyHandler&&); \
	NO_API UARDependencyHandler(const UARDependencyHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARDependencyHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDependencyHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDependencyHandler)


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_75_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARDependencyHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h


#define FOREACH_ENUM_EARSERVICEPERMISSIONREQUESTRESULT(op) \
	op(EARServicePermissionRequestResult::Granted) \
	op(EARServicePermissionRequestResult::Denied) 

enum class EARServicePermissionRequestResult : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServicePermissionRequestResult>();

#define FOREACH_ENUM_EARSERVICEINSTALLREQUESTRESULT(op) \
	op(EARServiceInstallRequestResult::Installed) \
	op(EARServiceInstallRequestResult::DeviceNotCompatible) \
	op(EARServiceInstallRequestResult::UserDeclinedInstallation) \
	op(EARServiceInstallRequestResult::FatalError) 

enum class EARServiceInstallRequestResult : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceInstallRequestResult>();

#define FOREACH_ENUM_EARSERVICEAVAILABILITY(op) \
	op(EARServiceAvailability::UnknownError) \
	op(EARServiceAvailability::UnknownChecking) \
	op(EARServiceAvailability::UnknownTimedOut) \
	op(EARServiceAvailability::UnsupportedDeviceNotCapable) \
	op(EARServiceAvailability::SupportedNotInstalled) \
	op(EARServiceAvailability::SupportedVersionTooOld) \
	op(EARServiceAvailability::SupportedInstalled) 

enum class EARServiceAvailability : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceAvailability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
