// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioModulation_generated_h
#error "IAudioModulation.generated.h already included, missing '#pragma once' in IAudioModulation.h"
#endif
#define AUDIOEXTENSIONS_IAudioModulation_generated_h

#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_SPARSE_DATA
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_RPC_WRAPPERS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulatorBase(); \
	friend struct Z_Construct_UClass_USoundModulatorBase_Statics; \
public: \
	DECLARE_CLASS(USoundModulatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(USoundModulatorBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulatorBase(); \
	friend struct Z_Construct_UClass_USoundModulatorBase_Statics; \
public: \
	DECLARE_CLASS(USoundModulatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(USoundModulatorBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModulatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModulatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundModulatorBase(USoundModulatorBase&&); \
	NO_API USoundModulatorBase(const USoundModulatorBase&); \
public:


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModulatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundModulatorBase(USoundModulatorBase&&); \
	NO_API USoundModulatorBase(const USoundModulatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModulatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulatorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulatorBase)


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_145_PROLOG
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_INCLASS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class USoundModulatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
