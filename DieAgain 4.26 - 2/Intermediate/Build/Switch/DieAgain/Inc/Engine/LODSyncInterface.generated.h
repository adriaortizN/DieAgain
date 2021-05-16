// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LODSyncInterface_generated_h
#error "LODSyncInterface.generated.h already included, missing '#pragma once' in LODSyncInterface.h"
#endif
#define ENGINE_LODSyncInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODSyncInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODSyncInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODSyncInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODSyncInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULODSyncInterface(ULODSyncInterface&&); \
	NO_API ULODSyncInterface(const ULODSyncInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODSyncInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULODSyncInterface(ULODSyncInterface&&); \
	NO_API ULODSyncInterface(const ULODSyncInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODSyncInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODSyncInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODSyncInterface)


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULODSyncInterface(); \
	friend struct Z_Construct_UClass_ULODSyncInterface_Statics; \
public: \
	DECLARE_CLASS(ULODSyncInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULODSyncInterface)


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILODSyncInterface() {} \
public: \
	typedef ULODSyncInterface UClassType; \
	typedef ILODSyncInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ILODSyncInterface() {} \
public: \
	typedef ULODSyncInterface UClassType; \
	typedef ILODSyncInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULODSyncInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_LODSyncInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
