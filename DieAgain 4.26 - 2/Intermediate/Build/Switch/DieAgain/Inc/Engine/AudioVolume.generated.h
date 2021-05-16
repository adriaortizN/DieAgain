// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioVolumeSubmixOverrideSettings;
struct FAudioVolumeSubmixSendSettings;
struct FInteriorSettings;
struct FReverbSettings;
#ifdef ENGINE_AudioVolume_generated_h
#error "AudioVolume.generated.h already included, missing '#pragma once' in AudioVolume.h"
#endif
#define ENGINE_AudioVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteriorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInteriorSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioVolumeSubmixOverrideSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioVolumeSubmixSendSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetSubmixOverrideSettings); \
	DECLARE_FUNCTION(execSetSubmixSendSettings); \
	DECLARE_FUNCTION(execSetInteriorSettings); \
	DECLARE_FUNCTION(execSetReverbSettings); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetSubmixOverrideSettings); \
	DECLARE_FUNCTION(execSetSubmixSendSettings); \
	DECLARE_FUNCTION(execSetInteriorSettings); \
	DECLARE_FUNCTION(execSetReverbSettings); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioVolume(); \
	friend struct Z_Construct_UClass_AAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_INCLASS \
private: \
	static void StaticRegisterNativesAAudioVolume(); \
	friend struct Z_Construct_UClass_AAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioVolume(AAudioVolume&&); \
	NO_API AAudioVolume(const AAudioVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioVolume(AAudioVolume&&); \
	NO_API AAudioVolume(const AAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioVolume)


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAudioVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(AAudioVolume, Settings); } \
	FORCEINLINE static uint32 __PPO__AmbientZoneSettings() { return STRUCT_OFFSET(AAudioVolume, AmbientZoneSettings); } \
	FORCEINLINE static uint32 __PPO__SubmixSendSettings() { return STRUCT_OFFSET(AAudioVolume, SubmixSendSettings); } \
	FORCEINLINE static uint32 __PPO__SubmixOverrideSettings() { return STRUCT_OFFSET(AAudioVolume, SubmixOverrideSettings); }


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_158_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_161_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAudioVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h


#define FOREACH_ENUM_EAUDIOVOLUMELOCATIONSTATE(op) \
	op(EAudioVolumeLocationState::InsideTheVolume) \
	op(EAudioVolumeLocationState::OutsideTheVolume) 

enum class EAudioVolumeLocationState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioVolumeLocationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
