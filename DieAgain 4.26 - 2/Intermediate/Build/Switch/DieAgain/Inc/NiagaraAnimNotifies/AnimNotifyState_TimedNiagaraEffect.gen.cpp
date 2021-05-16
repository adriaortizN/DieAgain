// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraAnimNotifies/Public/AnimNotifyState_TimedNiagaraEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedNiagaraEffect() {}
// Cross Module References
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_NiagaraAnimNotifies();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UAnimNotifyState_TimedNiagaraEffect::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[];
#endif
		static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Timed Niagara Effect Notify\n// Allows a looping Niagara effect to be played in an animation that will activate\n// at the beginning of the notify and deactivate at the end.\n" },
		{ "DisplayName", "Timed Niagara Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_TimedNiagaraEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Timed Niagara Effect Notify\nAllows a looping Niagara effect to be played in an animation that will activate\nat the beginning of the notify and deactivate at the end." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The niagara system to spawn for the notify state" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, Template), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The socket or bone to attach the system to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Offset from the socket or bone to place the Niagara system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from the socket or bone for the Niagara system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Whether the Niagara system should be immediately destroyed at the end of the notify state or be allowed to finish" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedNiagaraEffect*)Obj)->bDestroyAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotifyState_TimedNiagaraEffect), &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedNiagaraEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams = {
		&UAnimNotifyState_TimedNiagaraEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState_TimedNiagaraEffect, 2199582790);
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotifyState_TimedNiagaraEffect>()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_TimedNiagaraEffect(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect, &UAnimNotifyState_TimedNiagaraEffect::StaticClass, TEXT("/Script/NiagaraAnimNotifies"), TEXT("UAnimNotifyState_TimedNiagaraEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedNiagaraEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
