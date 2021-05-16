// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROPERTYACCESS_IPropertyAccess_generated_h
#error "IPropertyAccess.generated.h already included, missing '#pragma once' in IPropertyAccess.h"
#endif
#define PROPERTYACCESS_IPropertyAccess_generated_h

#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_SPARSE_DATA
#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAccess) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyAccess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAccess); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyAccess(UPropertyAccess&&); \
	PROPERTYACCESS_API UPropertyAccess(const UPropertyAccess&); \
public:


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYACCESS_API UPropertyAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROPERTYACCESS_API UPropertyAccess(UPropertyAccess&&); \
	PROPERTYACCESS_API UPropertyAccess(const UPropertyAccess&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYACCESS_API, UPropertyAccess); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAccess); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAccess)


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyAccess(); \
	friend struct Z_Construct_UClass_UPropertyAccess_Statics; \
public: \
	DECLARE_CLASS(UPropertyAccess, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PropertyAccess"), PROPERTYACCESS_API) \
	DECLARE_SERIALIZER(UPropertyAccess)


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyAccess() {} \
public: \
	typedef UPropertyAccess UClassType; \
	typedef IPropertyAccess ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~IPropertyAccess() {} \
public: \
	typedef UPropertyAccess UClassType; \
	typedef IPropertyAccess ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_28_PROLOG
#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_SPARSE_DATA \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROPERTYACCESS_API UClass* StaticClass<class UPropertyAccess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PropertyAccess_Public_IPropertyAccess_h


#define FOREACH_ENUM_EPROPERTYACCESSCOPYBATCH(op) \
	op(EPropertyAccessCopyBatch::InternalUnbatched) \
	op(EPropertyAccessCopyBatch::ExternalUnbatched) \
	op(EPropertyAccessCopyBatch::InternalBatched) \
	op(EPropertyAccessCopyBatch::ExternalBatched) \
	op(EPropertyAccessCopyBatch::Count) 

enum class EPropertyAccessCopyBatch : uint8;
template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessCopyBatch>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
