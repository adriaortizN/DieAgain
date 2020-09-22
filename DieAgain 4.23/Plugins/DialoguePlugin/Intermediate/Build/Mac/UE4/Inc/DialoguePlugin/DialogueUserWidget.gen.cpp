// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialoguePlugin/Public/DialogueUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueUserWidget() {}
// Cross Module References
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DialoguePlugin();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode();
	DIALOGUEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UDialogueUserWidget_IsConditionsMetForNode = FName(TEXT("IsConditionsMetForNode"));
	bool UDialogueUserWidget::IsConditionsMetForNode(FDialogueNode Node)
	{
		DialogueUserWidget_eventIsConditionsMetForNode_Parms Parms;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueUserWidget_IsConditionsMetForNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UDialogueUserWidget_ReplaceVarStrings = FName(TEXT("ReplaceVarStrings"));
	FText UDialogueUserWidget::ReplaceVarStrings(FText const& InText)
	{
		DialogueUserWidget_eventReplaceVarStrings_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueUserWidget_ReplaceVarStrings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogueUserWidget_RunEventsForNode = FName(TEXT("RunEventsForNode"));
	void UDialogueUserWidget::RunEventsForNode(FDialogueNode Node)
	{
		DialogueUserWidget_eventRunEventsForNode_Parms Parms;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueUserWidget_RunEventsForNode),&Parms);
	}
	void UDialogueUserWidget::StaticRegisterNativesUDialogueUserWidget()
	{
		UClass* Class = UDialogueUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindVarStrings", &UDialogueUserWidget::execFindVarStrings },
			{ "IsConditionsMetForNode", &UDialogueUserWidget::execIsConditionsMetForNode },
			{ "RunEventsForNode", &UDialogueUserWidget::execRunEventsForNode },
			{ "RunStringReplacer", &UDialogueUserWidget::execRunStringReplacer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics
	{
		struct DialogueUserWidget_eventFindVarStrings_Parms
		{
			FText inText;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_inText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventFindVarStrings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_inText = { "inText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventFindVarStrings_Parms, inText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::NewProp_inText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "//VarStrings\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "VarStrings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "FindVarStrings", nullptr, nullptr, sizeof(DialogueUserWidget_eventFindVarStrings_Parms), Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueUserWidget_eventIsConditionsMetForNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueUserWidget_eventIsConditionsMetForNode_Parms), &Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventIsConditionsMetForNode_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "// Conditions\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Conditions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "IsConditionsMetForNode", nullptr, nullptr, sizeof(DialogueUserWidget_eventIsConditionsMetForNode_Parms), Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventReplaceVarStrings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventReplaceVarStrings_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "//VarStrings\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "VarStrings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "ReplaceVarStrings", nullptr, nullptr, sizeof(DialogueUserWidget_eventReplaceVarStrings_Parms), Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventRunEventsForNode_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "RunEventsForNode", nullptr, nullptr, sizeof(DialogueUserWidget_eventRunEventsForNode_Parms), Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics
	{
		struct DialogueUserWidget_eventRunStringReplacer_Parms
		{
			FString originalString;
			FString resultString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_resultString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_originalString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueUserWidget_eventRunStringReplacer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueUserWidget_eventRunStringReplacer_Parms), &Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_resultString = { "resultString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventRunStringReplacer_Parms, resultString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_originalString = { "originalString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUserWidget_eventRunStringReplacer_Parms, originalString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_resultString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::NewProp_originalString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "//VarStrings\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "VarStrings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "RunStringReplacer", nullptr, nullptr, sizeof(DialogueUserWidget_eventRunStringReplacer_Parms), Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister()
	{
		return UDialogueUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueUserWidget_FindVarStrings, "FindVarStrings" }, // 590157912
		{ &Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode, "IsConditionsMetForNode" }, // 2390195755
		{ &Z_Construct_UFunction_UDialogueUserWidget_ReplaceVarStrings, "ReplaceVarStrings" }, // 4106590439
		{ &Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode, "RunEventsForNode" }, // 143518253
		{ &Z_Construct_UFunction_UDialogueUserWidget_RunStringReplacer, "RunStringReplacer" }, // 353847173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueUserWidget.h" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_NPCActor_MetaData[] = {
		{ "Category", "Dialogue UI" },
		{ "Comment", "//The actor this dialogue belongs to\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "The actor this dialogue belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_NPCActor = { "NPCActor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueUserWidget, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_NPCActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_NPCActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_NPCActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueUserWidget_Statics::ClassParams = {
		&UDialogueUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueUserWidget, 4000262274);
	template<> DIALOGUEPLUGIN_API UClass* StaticClass<UDialogueUserWidget>()
	{
		return UDialogueUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueUserWidget(Z_Construct_UClass_UDialogueUserWidget, &UDialogueUserWidget::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
