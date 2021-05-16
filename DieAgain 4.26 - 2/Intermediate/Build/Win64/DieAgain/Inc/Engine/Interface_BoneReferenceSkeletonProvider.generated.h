// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_BoneReferenceSkeletonProvider_generated_h
#error "Interface_BoneReferenceSkeletonProvider.generated.h already included, missing '#pragma once' in Interface_BoneReferenceSkeletonProvider.h"
#endif
#define ENGINE_Interface_BoneReferenceSkeletonProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneReferenceSkeletonProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneReferenceSkeletonProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneReferenceSkeletonProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneReferenceSkeletonProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoneReferenceSkeletonProvider(UBoneReferenceSkeletonProvider&&); \
	NO_API UBoneReferenceSkeletonProvider(const UBoneReferenceSkeletonProvider&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneReferenceSkeletonProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoneReferenceSkeletonProvider(UBoneReferenceSkeletonProvider&&); \
	NO_API UBoneReferenceSkeletonProvider(const UBoneReferenceSkeletonProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneReferenceSkeletonProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneReferenceSkeletonProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneReferenceSkeletonProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBoneReferenceSkeletonProvider(); \
	friend struct Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics; \
public: \
	DECLARE_CLASS(UBoneReferenceSkeletonProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoneReferenceSkeletonProvider)


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBoneReferenceSkeletonProvider() {} \
public: \
	typedef UBoneReferenceSkeletonProvider UClassType; \
	typedef IBoneReferenceSkeletonProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IBoneReferenceSkeletonProvider() {} \
public: \
	typedef UBoneReferenceSkeletonProvider UClassType; \
	typedef IBoneReferenceSkeletonProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_9_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBoneReferenceSkeletonProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
