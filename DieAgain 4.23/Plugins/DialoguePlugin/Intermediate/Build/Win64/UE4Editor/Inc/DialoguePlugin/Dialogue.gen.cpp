// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialoguePlugin/Public/Dialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	DIALOGUEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	UPackage* Z_Construct_UPackage__Script_DialoguePlugin();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueConditions_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueEvents_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueEvents();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueConditions();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UOrCondition_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UOrCondition();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UAndCondition_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UAndCondition();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogue();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_AssignPersistentOuter();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_CallFunctionByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_CleanOuter();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_GetFirstNode();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_GetNextNodes();
// End Cross Module References
class UScriptStruct* FDialogueNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIALOGUEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueNode, Z_Construct_UPackage__Script_DialoguePlugin(), TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_Hash());
	}
	return Singleton;
}
template<> DIALOGUEPLUGIN_API UScriptStruct* StaticStruct<FDialogueNode>()
{
	return FDialogueNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueNode(FDialogueNode::StaticStruct, TEXT("/Script/DialoguePlugin"), TEXT("DialogueNode"), false, nullptr, nullptr);
static struct FScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode
{
	FScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueNode")),new UScriptStruct::TCppStructOps<FDialogueNode>);
	}
} ScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode;
	struct Z_Construct_UScriptStruct_FDialogueNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayer_MetaData[];
#endif
		static void NewProp_isPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueWave_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueWave_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Conditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueConditions_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Events), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_Inner_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueEvents_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Coordinates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Links), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "Comment", "//Todo: Make this more adjustable, allow variables in text. Allow text to be colored differently, etc.\n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Todo: Make this more adjustable, allow variables in text. Allow text to be colored differently, etc." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer_SetBit(void* Obj)
	{
		((FDialogueNode*)Obj)->isPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer = { "isPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueNode), &Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Dialogue Node" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueNode, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Coordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Links_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_isPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
		nullptr,
		&NewStructOps,
		"DialogueNode",
		sizeof(FDialogueNode),
		alignof(FDialogueNode),
		Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DialoguePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_Hash() { return 2095220172U; }
	static FName NAME_UDialogueEvents_RecieveEventTriggered = FName(TEXT("RecieveEventTriggered"));
	void UDialogueEvents::RecieveEventTriggered(APlayerController* ConsideringPlayer, AActor* NPCActor)
	{
		DialogueEvents_eventRecieveEventTriggered_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.NPCActor=NPCActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueEvents_RecieveEventTriggered),&Parms);
	}
	void UDialogueEvents::StaticRegisterNativesUDialogueEvents()
	{
		UClass* Class = UDialogueEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecieveEventTriggered", &UDialogueEvents::execRecieveEventTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::NewProp_NPCActor = { "NPCActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueEvents_eventRecieveEventTriggered_Parms, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueEvents_eventRecieveEventTriggered_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::NewProp_NPCActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::NewProp_ConsideringPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Events" },
		{ "Comment", "//Called when the event is triggered. \n" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Called when the event is triggered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEvents, nullptr, "RecieveEventTriggered", nullptr, nullptr, sizeof(DialogueEvents_eventRecieveEventTriggered_Parms), Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueEvents_NoRegister()
	{
		return UDialogueEvents::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered, "RecieveEventTriggered" }, // 3936330979
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEvents_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Extend this class to add custom events\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Extend this class to add custom events" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEvents>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEvents_Statics::ClassParams = {
		&UDialogueEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueEvents_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueEvents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueEvents()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueEvents_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueEvents, 3119091557);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UDialogueEvents>()
	{
		return UDialogueEvents::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueEvents(Z_Construct_UClass_UDialogueEvents, &UDialogueEvents::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueEvents"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEvents);
	static FName NAME_UDialogueConditions_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UDialogueConditions::IsConditionMet(APlayerController* ConsideringPlayer, AActor* NPCActor)
	{
		DialogueConditions_eventIsConditionMet_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.NPCActor=NPCActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueConditions_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDialogueConditions::StaticRegisterNativesUDialogueConditions()
	{
		UClass* Class = UDialogueConditions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConditionMet", &UDialogueConditions::execIsConditionMet },
			{ "IsConditionMet_Internal", &UDialogueConditions::execIsConditionMet_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueConditions_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueConditions_eventIsConditionMet_Parms), &Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_NPCActor = { "NPCActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Parms, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_NPCActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::NewProp_ConsideringPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Conditions" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueConditions, nullptr, "IsConditionMet", nullptr, nullptr, sizeof(DialogueConditions_eventIsConditionMet_Parms), Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics
	{
		struct DialogueConditions_eventIsConditionMet_Internal_Parms
		{
			APlayerController* ConsideringPlayer;
			AActor* NPCActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueConditions_eventIsConditionMet_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueConditions_eventIsConditionMet_Internal_Parms), &Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_NPCActor = { "NPCActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Internal_Parms, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ConsideringPlayer = { "ConsideringPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Internal_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_NPCActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::NewProp_ConsideringPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueConditions, nullptr, "IsConditionMet_Internal", nullptr, nullptr, sizeof(DialogueConditions_eventIsConditionMet_Internal_Parms), Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueConditions_NoRegister()
	{
		return UDialogueConditions::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueConditions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueConditions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueConditions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueConditions_IsConditionMet, "IsConditionMet" }, // 367500112
		{ &Z_Construct_UFunction_UDialogueConditions_IsConditionMet_Internal, "IsConditionMet_Internal" }, // 1284632503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueConditions_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Extend this class to add custom conditions.\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "Extend this class to add custom conditions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueConditions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueConditions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueConditions_Statics::ClassParams = {
		&UDialogueConditions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueConditions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueConditions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueConditions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueConditions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueConditions, 42025480);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UDialogueConditions>()
	{
		return UDialogueConditions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueConditions(Z_Construct_UClass_UDialogueConditions, &UDialogueConditions::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueConditions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueConditions);
	void UOrCondition::StaticRegisterNativesUOrCondition()
	{
	}
	UClass* Z_Construct_UClass_UOrCondition_NoRegister()
	{
		return UOrCondition::StaticClass();
	}
	struct Z_Construct_UClass_UOrCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrConditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrConditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueConditions,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// A particular type of condition that nests normal conditions and returns true if at least one of them is true.\n" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "A particular type of condition that nests normal conditions and returns true if at least one of them is true." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_MetaData[] = {
		{ "Category", "Dialogue Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions = { "OrConditions", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrCondition, OrConditions), METADATA_PARAMS(Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_Inner_MetaData[] = {
		{ "Category", "Dialogue Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_Inner = { "OrConditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueConditions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrCondition_Statics::NewProp_OrConditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOrCondition_Statics::ClassParams = {
		&UOrCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrCondition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UOrCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOrCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOrCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOrCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOrCondition, 2636562103);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UOrCondition>()
	{
		return UOrCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOrCondition(Z_Construct_UClass_UOrCondition, &UOrCondition::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UOrCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrCondition);
	void UAndCondition::StaticRegisterNativesUAndCondition()
	{
	}
	UClass* Z_Construct_UClass_UAndCondition_NoRegister()
	{
		return UAndCondition::StaticClass();
	}
	struct Z_Construct_UClass_UAndCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AndConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndConditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AndConditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueConditions,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// A particular type of condition that nests normal conditions and returns true if at least one of them is true.\n" },
		{ "HideCategories", "DoNotShow DoNotShow" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ToolTip", "A particular type of condition that nests normal conditions and returns true if at least one of them is true." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_MetaData[] = {
		{ "Category", "Dialogue Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions = { "AndConditions", nullptr, (EPropertyFlags)0x0010008000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndCondition, AndConditions), METADATA_PARAMS(Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_Inner_MetaData[] = {
		{ "Category", "Dialogue Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_Inner = { "AndConditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueConditions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndCondition_Statics::NewProp_AndConditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndCondition_Statics::ClassParams = {
		&UAndCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndCondition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAndCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndCondition, 2635876692);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UAndCondition>()
	{
		return UAndCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndCondition(Z_Construct_UClass_UAndCondition, &UAndCondition::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UAndCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndCondition);
	void UDialogue::StaticRegisterNativesUDialogue()
	{
		UClass* Class = UDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignPersistentOuter", &UDialogue::execAssignPersistentOuter },
			{ "CallFunctionByName", &UDialogue::execCallFunctionByName },
			{ "CleanOuter", &UDialogue::execCleanOuter },
			{ "GetFirstNode", &UDialogue::execGetFirstNode },
			{ "GetNextNodes", &UDialogue::execGetNextNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics
	{
		struct Dialogue_eventAssignPersistentOuter_Parms
		{
			UGameInstance* inGameInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inGameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::NewProp_inGameInstance = { "inGameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventAssignPersistentOuter_Parms, inGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::NewProp_inGameInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "AssignPersistentOuter", nullptr, nullptr, sizeof(Dialogue_eventAssignPersistentOuter_Parms), Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_AssignPersistentOuter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogue_AssignPersistentOuter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics
	{
		struct Dialogue_eventCallFunctionByName_Parms
		{
			UObject* Object;
			FString FunctionName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventCallFunctionByName_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventCallFunctionByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "CallFunctionByName", nullptr, nullptr, sizeof(Dialogue_eventCallFunctionByName_Parms), Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_CallFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogue_CallFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_CleanOuter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_CleanOuter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_CleanOuter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "CleanOuter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_CleanOuter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_CleanOuter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_CleanOuter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogue_CleanOuter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetFirstNode_Statics
	{
		struct Dialogue_eventGetFirstNode_Parms
		{
			FDialogueNode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetFirstNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetFirstNode", nullptr, nullptr, sizeof(Dialogue_eventGetFirstNode_Parms), Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_GetFirstNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogue_GetFirstNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogue_GetNextNodes_Statics
	{
		struct Dialogue_eventGetNextNodes_Parms
		{
			FDialogueNode Node;
			TArray<FDialogueNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetNextNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dialogue_eventGetNextNodes_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "GetNextNodes", nullptr, nullptr, sizeof(Dialogue_eventGetNextNodes_Parms), Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogue_GetNextNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogue_GetNextNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogue_NoRegister()
	{
		return UDialogue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextNodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIdleSplines_MetaData[];
#endif
		static void NewProp_DisplayIdleSplines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayIdleSplines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogue_AssignPersistentOuter, "AssignPersistentOuter" }, // 4128529864
		{ &Z_Construct_UFunction_UDialogue_CallFunctionByName, "CallFunctionByName" }, // 3687955619
		{ &Z_Construct_UFunction_UDialogue_CleanOuter, "CleanOuter" }, // 1010602418
		{ &Z_Construct_UFunction_UDialogue_GetFirstNode, "GetFirstNode" }, // 2643773628
		{ &Z_Construct_UFunction_UDialogue_GetNextNodes, "GetNextNodes" }, // 2323841538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Dialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_PersistentGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_PersistentGameInstance = { "PersistentGameInstance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, PersistentGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_PersistentGameInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_PersistentGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_NextNodeId_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_NextNodeId = { "NextNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, NextNodeId), METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_NextNodeId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_NextNodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, Data), METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogue, Name), METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines_SetBit(void* Obj)
	{
		((UDialogue*)Obj)->DisplayIdleSplines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines = { "DisplayIdleSplines", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogue), &Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_PersistentGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_NextNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_DisplayIdleSplines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogue_Statics::ClassParams = {
		&UDialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogue, 647423445);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UDialogue>()
	{
		return UDialogue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogue(Z_Construct_UClass_UDialogue, &UDialogue::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
