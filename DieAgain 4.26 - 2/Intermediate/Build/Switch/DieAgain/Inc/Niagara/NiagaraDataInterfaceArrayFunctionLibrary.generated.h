// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FQuat;
struct FLinearColor;
struct FVector4;
struct FVector;
struct FVector2D;
#ifdef NIAGARA_NiagaraDataInterfaceArrayFunctionLibrary_generated_h
#error "NiagaraDataInterfaceArrayFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceArrayFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraDataInterfaceArrayFunctionLibrary_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNiagaraArrayBool); \
	DECLARE_FUNCTION(execGetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execGetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execGetNiagaraArrayColor); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execGetNiagaraArrayFloat); \
	DECLARE_FUNCTION(execSetNiagaraArrayBool); \
	DECLARE_FUNCTION(execSetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execSetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execSetNiagaraArrayColor); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execSetNiagaraArrayFloat);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNiagaraArrayBool); \
	DECLARE_FUNCTION(execGetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execGetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execGetNiagaraArrayColor); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execGetNiagaraArrayFloat); \
	DECLARE_FUNCTION(execSetNiagaraArrayBool); \
	DECLARE_FUNCTION(execSetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execSetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execSetNiagaraArrayColor); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execSetNiagaraArrayFloat);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceArrayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArrayFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceArrayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArrayFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArrayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceArrayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArrayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(UNiagaraDataInterfaceArrayFunctionLibrary&&); \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(const UNiagaraDataInterfaceArrayFunctionLibrary&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(UNiagaraDataInterfaceArrayFunctionLibrary&&); \
	NO_API UNiagaraDataInterfaceArrayFunctionLibrary(const UNiagaraDataInterfaceArrayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceArrayFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArrayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArrayFunctionLibrary)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_11_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceArrayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
