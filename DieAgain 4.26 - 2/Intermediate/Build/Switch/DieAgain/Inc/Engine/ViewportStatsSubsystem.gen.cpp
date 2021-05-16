// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ViewportStatsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportStatsSubsystem() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UViewportStatsSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UViewportStatsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics
	{
		struct _Script_Engine_eventViewportDisplayCallback_Parms
		{
			FText OutText;
			FLinearColor OutColor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutText;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutText = { "OutText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventViewportDisplayCallback_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventViewportDisplayCallback_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_Engine_eventViewportDisplayCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Engine_eventViewportDisplayCallback_Parms), &Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ViewportDisplayCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventViewportDisplayCallback_Parms), Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UViewportStatsSubsystem::execRemoveDisplayDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDisplayDelegate(Z_Param_IndexToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportStatsSubsystem::execAddDisplayDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDisplayDelegate(FViewportDisplayCallback(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportStatsSubsystem::execAddTimedDisplay)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTimedDisplay(Z_Param_Text,Z_Param_Color,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UViewportStatsSubsystem::StaticRegisterNativesUViewportStatsSubsystem()
	{
		UClass* Class = UViewportStatsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDisplayDelegate", &UViewportStatsSubsystem::execAddDisplayDelegate },
			{ "AddTimedDisplay", &UViewportStatsSubsystem::execAddTimedDisplay },
			{ "RemoveDisplayDelegate", &UViewportStatsSubsystem::execRemoveDisplayDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics
	{
		struct ViewportStatsSubsystem_eventAddDisplayDelegate_Parms
		{
			FScriptDelegate Delegate;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddDisplayDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddDisplayDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Add a dynamic delegate to the display subsystem.\n\x09*\n\x09* @param Callback\x09The callback the subsystem will use to determine if a message should be displayed or not\n\x09*\x09\x09\x09\x09\x09Signature of callbacks should be: bool(FText& OutTest, FLinearColor& OutColor)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Add a dynamic delegate to the display subsystem.\n\n@param Callback       The callback the subsystem will use to determine if a message should be displayed or not\n                                      Signature of callbacks should be: bool(FText& OutTest, FLinearColor& OutColor)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "AddDisplayDelegate", nullptr, nullptr, sizeof(ViewportStatsSubsystem_eventAddDisplayDelegate_Parms), Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics
	{
		struct ViewportStatsSubsystem_eventAddTimedDisplay_Parms
		{
			FText Text;
			FLinearColor Color;
			float Duration;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Add a message to be displayed on the viewport of this world\n\x09* \n\x09* @param Text\x09\x09The text to be displayed\n\x09* @param Color\x09\x09""Color of the text to be displayed\n\x09* @param Duration\x09How long the text will be on screen, if 0 then it will stay indefinitely \n\x09*/" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Add a message to be displayed on the viewport of this world\n\n@param Text           The text to be displayed\n@param Color          Color of the text to be displayed\n@param Duration       How long the text will be on screen, if 0 then it will stay indefinitely" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "AddTimedDisplay", nullptr, nullptr, sizeof(ViewportStatsSubsystem_eventAddTimedDisplay_Parms), Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics
	{
		struct ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms
		{
			int32 IndexToRemove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove = { "IndexToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms, IndexToRemove), METADATA_PARAMS(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Remove a callback function from the display subsystem\n\x09*\n\x09* @param IndexToRemove\x09The index in the DisplayDelegates array to remove. \n\x09*\x09\x09\x09\x09\x09\x09This is the value returned from AddDisplayDelegate.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Remove a callback function from the display subsystem\n\n@param IndexToRemove  The index in the DisplayDelegates array to remove.\n                                              This is the value returned from AddDisplayDelegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "RemoveDisplayDelegate", nullptr, nullptr, sizeof(ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms), Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewportStatsSubsystem_NoRegister()
	{
		return UViewportStatsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UViewportStatsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportStatsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportStatsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate, "AddDisplayDelegate" }, // 3416877928
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay, "AddTimedDisplay" }, // 3240728370
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate, "RemoveDisplayDelegate" }, // 3226701518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportStatsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n* The Viewport Stats Subsystem offers the ability to add messages to the current \n* viewport such as \"LIGHTING NEEDS TO BE REBUILT\" and \"BLUEPRINT COMPILE ERROR\".\n* \n* Example usage:\n*\n*\x09if (UViewportStatsSubsystem* ViewportSubsystem = GetWorld()->GetSubsystem<UViewportStatsSubsystem>())\n*\x09{\n*\x09\x09// Bind a member function delegate to the subsystem...\n*\x09\x09""FViewportDisplayCallback Callback;\n*\x09\x09""Callback.BindDynamic(this, &UCustomClass::DisplayViewportMessage);\n*\x09\x09ViewportSubsystem->AddDisplayDelegate(Callback);\n*\x09\x09\n*\x09\x09// ... or use inline lambda functions\n*\x09\x09ViewportSubsystem->AddDisplayDelegate([](FText& OutText, FLinearColor& OutColor)\n*\x09\x09{\n*\x09\x09\x09// Some kind of state management\n*\x09\x09\x09OutText = NSLOCTEXT(\"FooNamespace\", \"Blarg\", \"Display message here\");\n*\x09\x09\x09OutColor = FLinearColor::Red;\n*\x09\x09\x09return bShouldDisplay;\n*\x09\x09});\n*\x09}\n*/" },
		{ "IncludePath", "Engine/ViewportStatsSubsystem.h" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "The Viewport Stats Subsystem offers the ability to add messages to the current\nviewport such as \"LIGHTING NEEDS TO BE REBUILT\" and \"BLUEPRINT COMPILE ERROR\".\n\nExample usage:\n\n     if (UViewportStatsSubsystem* ViewportSubsystem = GetWorld()->GetSubsystem<UViewportStatsSubsystem>())\n     {\n             // Bind a member function delegate to the subsystem...\n             FViewportDisplayCallback Callback;\n             Callback.BindDynamic(this, &UCustomClass::DisplayViewportMessage);\n             ViewportSubsystem->AddDisplayDelegate(Callback);\n\n             // ... or use inline lambda functions\n             ViewportSubsystem->AddDisplayDelegate([](FText& OutText, FLinearColor& OutColor)\n             {\n                     // Some kind of state management\n                     OutText = NSLOCTEXT(\"FooNamespace\", \"Blarg\", \"Display message here\");\n                     OutColor = FLinearColor::Red;\n                     return bShouldDisplay;\n             });\n     }" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportStatsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportStatsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportStatsSubsystem_Statics::ClassParams = {
		&UViewportStatsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportStatsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportStatsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportStatsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportStatsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportStatsSubsystem, 1670398405);
	template<> ENGINE_API UClass* StaticClass<UViewportStatsSubsystem>()
	{
		return UViewportStatsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportStatsSubsystem(Z_Construct_UClass_UViewportStatsSubsystem, &UViewportStatsSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UViewportStatsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportStatsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
