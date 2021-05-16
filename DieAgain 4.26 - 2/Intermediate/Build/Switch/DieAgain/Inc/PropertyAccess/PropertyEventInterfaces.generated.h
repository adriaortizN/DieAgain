// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROPERTYACCESS_PropertyEventInterfaces_generated_h
#error "PropertyEventInterfaces.generated.h already included, missing '#pragma once' in PropertyEventInterfaces.h"
#endif
#define PROPERTYACCESS_PropertyEventInterfaces_generated_h

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_SPARSE_DATA
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyEventBroadcaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEventBroadcaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyEventBroadcaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEventBroadcaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyEventBroadcaster(UPropertyEventBroadcaster&&); \
	PROPERTYACCESS_API UPropertyEventBroadcaster(const UPropertyEventBroadcaster&); \
public:


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyEventBroadcaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyEventBroadcaster(UPropertyEventBroadcaster&&); \
	PROPERTYACCESS_API UPropertyEventBroadcaster(const UPropertyEventBroadcaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyEventBroadcaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEventBroadcaster); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEventBroadcaster)


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyEventBroadcaster(); \
	friend struct Z_Construct_UClass_UPropertyEventBroadcaster_Statics; \
public: \
	DECLARE_CLASS(UPropertyEventBroadcaster, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PropertyAccess"), PROPERTYACCESS_API) \
	DECLARE_SERIALIZER(UPropertyEventBroadcaster)


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyEventBroadcaster() {} \
public: \
	typedef UPropertyEventBroadcaster UClassType; \
	typedef IPropertyEventBroadcaster ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IPropertyEventBroadcaster() {} \
public: \
	typedef UPropertyEventBroadcaster UClassType; \
	typedef IPropertyEventBroadcaster ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_15_PROLOG
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROPERTYACCESS_API UClass* StaticClass<class UPropertyEventBroadcaster>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_SPARSE_DATA
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_RPC_WRAPPERS
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyEventSubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEventSubscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyEventSubscriber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEventSubscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyEventSubscriber(UPropertyEventSubscriber&&); \
	PROPERTYACCESS_API UPropertyEventSubscriber(const UPropertyEventSubscriber&); \
public:


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyEventSubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyEventSubscriber(UPropertyEventSubscriber&&); \
	PROPERTYACCESS_API UPropertyEventSubscriber(const UPropertyEventSubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyEventSubscriber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyEventSubscriber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyEventSubscriber)


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyEventSubscriber(); \
	friend struct Z_Construct_UClass_UPropertyEventSubscriber_Statics; \
public: \
	DECLARE_CLASS(UPropertyEventSubscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PropertyAccess"), PROPERTYACCESS_API) \
	DECLARE_SERIALIZER(UPropertyEventSubscriber)


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyEventSubscriber() {} \
public: \
	typedef UPropertyEventSubscriber UClassType; \
	typedef IPropertyEventSubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_INCLASS_IINTERFACE \
protected: \
	virtual ~IPropertyEventSubscriber() {} \
public: \
	typedef UPropertyEventSubscriber UClassType; \
	typedef IPropertyEventSubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_39_PROLOG
#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROPERTYACCESS_API UClass* StaticClass<class UPropertyEventSubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PropertyAccess_Public_PropertyEventInterfaces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
