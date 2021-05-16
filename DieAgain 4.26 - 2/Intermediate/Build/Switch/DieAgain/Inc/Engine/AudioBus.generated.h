// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioBus_generated_h
#error "AudioBus.generated.h already included, missing '#pragma once' in AudioBus.h"
#endif
#define ENGINE_AudioBus_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioBus(); \
	friend struct Z_Construct_UClass_UAudioBus_Statics; \
public: \
	DECLARE_CLASS(UAudioBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAudioBus(); \
	friend struct Z_Construct_UClass_UAudioBus_Statics; \
public: \
	DECLARE_CLASS(UAudioBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioBus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioBus(UAudioBus&&); \
	NO_API UAudioBus(const UAudioBus&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioBus(UAudioBus&&); \
	NO_API UAudioBus(const UAudioBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioBus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBus)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioBus."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h


#define FOREACH_ENUM_EAUDIOBUSCHANNELS(op) \
	op(EAudioBusChannels::Mono) \
	op(EAudioBusChannels::Stereo) 

enum class EAudioBusChannels : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioBusChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
