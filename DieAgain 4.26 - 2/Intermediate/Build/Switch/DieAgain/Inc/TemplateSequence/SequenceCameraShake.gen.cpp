// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/SequenceCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceCameraShake() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeCameraStandIn_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeCameraStandIn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShake_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeSequencePlayer_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
// End Cross Module References
	void USequenceCameraShakeCameraStandIn::StaticRegisterNativesUSequenceCameraShakeCameraStandIn()
	{
	}
	UClass* Z_Construct_UClass_USequenceCameraShakeCameraStandIn_NoRegister()
	{
		return USequenceCameraShakeCameraStandIn::StaticClass();
	}
	struct Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A dummy class that we give to a sequence in lieu of an actual camera actor.\n */" },
		{ "IncludePath", "SequenceCameraShake.h" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A dummy class that we give to a sequence in lieu of an actual camera actor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShakeCameraStandIn, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::NewProp_FieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::NewProp_FieldOfView,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneSceneComponentImpersonator_NoRegister, (int32)VTABLE_OFFSET(USequenceCameraShakeCameraStandIn, IMovieSceneSceneComponentImpersonator), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShakeCameraStandIn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::ClassParams = {
		&USequenceCameraShakeCameraStandIn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceCameraShakeCameraStandIn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceCameraShakeCameraStandIn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceCameraShakeCameraStandIn, 3869097731);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShakeCameraStandIn>()
	{
		return USequenceCameraShakeCameraStandIn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceCameraShakeCameraStandIn(Z_Construct_UClass_USequenceCameraShakeCameraStandIn, &USequenceCameraShakeCameraStandIn::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("USequenceCameraShakeCameraStandIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShakeCameraStandIn);
	void USequenceCameraShake::StaticRegisterNativesUSequenceCameraShake()
	{
	}
	UClass* Z_Construct_UClass_USequenceCameraShake_NoRegister()
	{
		return USequenceCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_USequenceCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSegmentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomSegmentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomSegment_MetaData[];
#endif
		static void NewProp_bRandomSegment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStandIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraStandIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A camera shake that plays a sequencer animation.\n */" },
		{ "IncludePath", "SequenceCameraShake.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake that plays a sequencer animation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Source camera animation sequence to play. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Source camera animation sequence to play." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Scalar defining how fast to play the anim. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Scalar defining how fast to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, PlayRate), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar defining how \"intense\" to play the anim. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, Scale), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-in time. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Linear blend-in time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, BlendInTime), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-out time. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Linear blend-out time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, BlendOutTime), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_RandomSegmentDuration_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When bRandomSegment is true, defines how long the sequence should play. */" },
		{ "EditCondition", "bRandomSegment" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "When bRandomSegment is true, defines how long the sequence should play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_RandomSegmentDuration = { "RandomSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, RandomSegmentDuration), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_RandomSegmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_RandomSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/**\n\x09 * When true, plays a random snippet of the sequence for RandomSegmentDuration seconds.\n\x09 *\n\x09 * @note The sequence we be forced to loop when bRandomSegment is enabled, in case the duration\n\x09 *       is longer than what's left to play from the random start time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "When true, plays a random snippet of the sequence for RandomSegmentDuration seconds.\n\n@note The sequence we be forced to loop when bRandomSegment is enabled, in case the duration\n      is longer than what's left to play from the random start time." },
	};
#endif
	void Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment_SetBit(void* Obj)
	{
		((USequenceCameraShake*)Obj)->bRandomSegment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment = { "bRandomSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceCameraShake), &Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Player_MetaData[] = {
		{ "Comment", "/** The player we use to play the camera animation sequence */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "The player we use to play the camera animation sequence" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, Player), Z_Construct_UClass_USequenceCameraShakeSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_CameraStandIn_MetaData[] = {
		{ "Comment", "/** Standin for the camera actor and components */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Standin for the camera actor and components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_CameraStandIn = { "CameraStandIn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShake, CameraStandIn), Z_Construct_UClass_USequenceCameraShakeCameraStandIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_CameraStandIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_CameraStandIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_RandomSegmentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_bRandomSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShake_Statics::NewProp_CameraStandIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShake_Statics::ClassParams = {
		&USequenceCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceCameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceCameraShake, 3196118842);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShake>()
	{
		return USequenceCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceCameraShake(Z_Construct_UClass_USequenceCameraShake, &USequenceCameraShake::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("USequenceCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShake);
	void USequenceCameraShakeSequencePlayer::StaticRegisterNativesUSequenceCameraShakeSequencePlayer()
	{
	}
	UClass* Z_Construct_UClass_USequenceCameraShakeSequencePlayer_NoRegister()
	{
		return USequenceCameraShakeSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundObjectOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundObjectOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A lightweight sequence player for playing camera animation sequences.\n */" },
		{ "IncludePath", "SequenceCameraShake.h" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A lightweight sequence player for playing camera animation sequences." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData[] = {
		{ "Comment", "/** Bound object overrides */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Bound object overrides" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_BoundObjectOverride = { "BoundObjectOverride", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShakeSequencePlayer, BoundObjectOverride), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "The sequence to play back" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShakeSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData[] = {
		{ "Comment", "/** The evaluation template instance */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "The evaluation template instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceCameraShakeSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_BoundObjectOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::NewProp_RootTemplateInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShakeSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::ClassParams = {
		&USequenceCameraShakeSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceCameraShakeSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceCameraShakeSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceCameraShakeSequencePlayer, 1111627613);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShakeSequencePlayer>()
	{
		return USequenceCameraShakeSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceCameraShakeSequencePlayer(Z_Construct_UClass_USequenceCameraShakeSequencePlayer, &USequenceCameraShakeSequencePlayer::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("USequenceCameraShakeSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShakeSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
