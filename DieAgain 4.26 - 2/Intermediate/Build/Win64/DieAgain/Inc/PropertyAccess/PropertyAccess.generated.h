// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROPERTYACCESS_PropertyAccess_generated_h
#error "PropertyAccess.generated.h already included, missing '#pragma once' in PropertyAccess.h"
#endif
#define PROPERTYACCESS_PropertyAccess_generated_h

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_356_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PathSegments() { return STRUCT_OFFSET(FPropertyAccessLibrary, PathSegments); } \
	FORCEINLINE static uint32 __PPO__SrcPaths() { return STRUCT_OFFSET(FPropertyAccessLibrary, SrcPaths); } \
	FORCEINLINE static uint32 __PPO__DestPaths() { return STRUCT_OFFSET(FPropertyAccessLibrary, DestPaths); } \
	FORCEINLINE static uint32 __PPO__CopyBatches() { return STRUCT_OFFSET(FPropertyAccessLibrary, CopyBatches); } \
	FORCEINLINE static uint32 __PPO__SrcAccesses() { return STRUCT_OFFSET(FPropertyAccessLibrary, SrcAccesses); } \
	FORCEINLINE static uint32 __PPO__DestAccesses() { return STRUCT_OFFSET(FPropertyAccessLibrary, DestAccesses); } \
	FORCEINLINE static uint32 __PPO__Indirections() { return STRUCT_OFFSET(FPropertyAccessLibrary, Indirections); } \
	FORCEINLINE static uint32 __PPO__EventAccessIndices() { return STRUCT_OFFSET(FPropertyAccessLibrary, EventAccessIndices); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessLibrary>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Copies() { return STRUCT_OFFSET(FPropertyAccessCopyBatch, Copies); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessCopyBatch>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_313_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AccessIndex() { return STRUCT_OFFSET(FPropertyAccessCopy, AccessIndex); } \
	FORCEINLINE static uint32 __PPO__DestAccessStartIndex() { return STRUCT_OFFSET(FPropertyAccessCopy, DestAccessStartIndex); } \
	FORCEINLINE static uint32 __PPO__DestAccessEndIndex() { return STRUCT_OFFSET(FPropertyAccessCopy, DestAccessEndIndex); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FPropertyAccessCopy, Type); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessCopy>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessPath_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__PathSegmentStartIndex() { return STRUCT_OFFSET(FPropertyAccessPath, PathSegmentStartIndex); } \
	FORCEINLINE static uint32 __PPO__PathSegmentCount() { return STRUCT_OFFSET(FPropertyAccessPath, PathSegmentCount); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessPath>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FPropertyAccessSegment, Name); } \
	FORCEINLINE static uint32 __PPO__Struct() { return STRUCT_OFFSET(FPropertyAccessSegment, Struct); } \
	FORCEINLINE static uint32 __PPO__Property() { return STRUCT_OFFSET(FPropertyAccessSegment, Property); } \
	FORCEINLINE static uint32 __PPO__Function() { return STRUCT_OFFSET(FPropertyAccessSegment, Function); } \
	FORCEINLINE static uint32 __PPO__ArrayIndex() { return STRUCT_OFFSET(FPropertyAccessSegment, ArrayIndex); } \
	FORCEINLINE static uint32 __PPO__Flags() { return STRUCT_OFFSET(FPropertyAccessSegment, Flags); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessSegment>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Property() { return STRUCT_OFFSET(FPropertyAccessIndirectionChain, Property); } \
	FORCEINLINE static uint32 __PPO__IndirectionStartIndex() { return STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionStartIndex); } \
	FORCEINLINE static uint32 __PPO__IndirectionEndIndex() { return STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionEndIndex); } \
	FORCEINLINE static uint32 __PPO__EventId() { return STRUCT_OFFSET(FPropertyAccessIndirectionChain, EventId); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessIndirectionChain>();

#define Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics; \
	PROPERTYACCESS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ArrayProperty() { return STRUCT_OFFSET(FPropertyAccessIndirection, ArrayProperty); } \
	FORCEINLINE static uint32 __PPO__Function() { return STRUCT_OFFSET(FPropertyAccessIndirection, Function); } \
	FORCEINLINE static uint32 __PPO__ReturnBufferSize() { return STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferSize); } \
	FORCEINLINE static uint32 __PPO__ReturnBufferAlignment() { return STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferAlignment); } \
	FORCEINLINE static uint32 __PPO__ArrayIndex() { return STRUCT_OFFSET(FPropertyAccessIndirection, ArrayIndex); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(FPropertyAccessIndirection, Offset); } \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(FPropertyAccessIndirection, ObjectType); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FPropertyAccessIndirection, Type); }


template<> PROPERTYACCESS_API UScriptStruct* StaticStruct<struct FPropertyAccessIndirection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PropertyAccess_Public_PropertyAccess_h


#define FOREACH_ENUM_EPROPERTYACCESSCOPYTYPE(op) \
	op(EPropertyAccessCopyType::None) \
	op(EPropertyAccessCopyType::Plain) \
	op(EPropertyAccessCopyType::Complex) \
	op(EPropertyAccessCopyType::Bool) \
	op(EPropertyAccessCopyType::Struct) \
	op(EPropertyAccessCopyType::Object) \
	op(EPropertyAccessCopyType::Name) \
	op(EPropertyAccessCopyType::Array) \
	op(EPropertyAccessCopyType::PromoteBoolToByte) \
	op(EPropertyAccessCopyType::PromoteBoolToInt32) \
	op(EPropertyAccessCopyType::PromoteBoolToInt64) \
	op(EPropertyAccessCopyType::PromoteBoolToFloat) \
	op(EPropertyAccessCopyType::PromoteByteToInt32) \
	op(EPropertyAccessCopyType::PromoteByteToInt64) \
	op(EPropertyAccessCopyType::PromoteByteToFloat) \
	op(EPropertyAccessCopyType::PromoteInt32ToInt64) \
	op(EPropertyAccessCopyType::PromoteInt32ToFloat) 

enum class EPropertyAccessCopyType : uint8;
template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessCopyType>();

#define FOREACH_ENUM_EPROPERTYACCESSOBJECTTYPE(op) \
	op(EPropertyAccessObjectType::None) \
	op(EPropertyAccessObjectType::Object) \
	op(EPropertyAccessObjectType::WeakObject) \
	op(EPropertyAccessObjectType::SoftObject) 

enum class EPropertyAccessObjectType : uint8;
template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessObjectType>();

#define FOREACH_ENUM_EPROPERTYACCESSINDIRECTIONTYPE(op) \
	op(EPropertyAccessIndirectionType::Offset) \
	op(EPropertyAccessIndirectionType::Object) \
	op(EPropertyAccessIndirectionType::Array) \
	op(EPropertyAccessIndirectionType::ScriptFunction) \
	op(EPropertyAccessIndirectionType::NativeFunction) 

enum class EPropertyAccessIndirectionType : uint8;
template<> PROPERTYACCESS_API UEnum* StaticEnum<EPropertyAccessIndirectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
