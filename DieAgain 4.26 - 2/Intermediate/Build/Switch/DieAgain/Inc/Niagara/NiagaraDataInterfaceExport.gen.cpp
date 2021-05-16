// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceExport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceExport() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FBasicParticleData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
// End Cross Module References
	static UEnum* ENDIExport_GPUAllocationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIExport_GPUAllocationMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIExport_GPUAllocationMode>()
	{
		return ENDIExport_GPUAllocationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDIExport_GPUAllocationMode(ENDIExport_GPUAllocationMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDIExport_GPUAllocationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Hash() { return 2287658991U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDIExport_GPUAllocationMode"), 0, Get_Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDIExport_GPUAllocationMode::FixedSize", (int64)ENDIExport_GPUAllocationMode::FixedSize },
				{ "ENDIExport_GPUAllocationMode::PerParticle", (int64)ENDIExport_GPUAllocationMode::PerParticle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FixedSize.Comment", "/** Use a fixed number of elements to write into per frame. */" },
				{ "FixedSize.Name", "ENDIExport_GPUAllocationMode::FixedSize" },
				{ "FixedSize.ToolTip", "Use a fixed number of elements to write into per frame." },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
				{ "PerParticle.Comment", "/** Use a variable number of elements to write into per frame based on number of emitter property particle count multiplied by the modifier. */" },
				{ "PerParticle.Name", "ENDIExport_GPUAllocationMode::PerParticle" },
				{ "PerParticle.ToolTip", "Use a variable number of elements to write into per frame based on number of emitter property particle count multiplied by the modifier." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDIExport_GPUAllocationMode",
				"ENDIExport_GPUAllocationMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBasicParticleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FBasicParticleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicParticleData, Z_Construct_UPackage__Script_Niagara(), TEXT("BasicParticleData"), sizeof(FBasicParticleData), Get_Z_Construct_UScriptStruct_FBasicParticleData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FBasicParticleData>()
{
	return FBasicParticleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBasicParticleData(FBasicParticleData::StaticStruct, TEXT("/Script/Niagara"), TEXT("BasicParticleData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFBasicParticleData
{
	FScriptStruct_Niagara_StaticRegisterNativesFBasicParticleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BasicParticleData")),new UScriptStruct::TCppStructOps<FBasicParticleData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFBasicParticleData;
	struct Z_Construct_UScriptStruct_FBasicParticleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicParticleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicParticleData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicParticleData, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicParticleData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicParticleData_Statics::NewProp_Velocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"BasicParticleData",
		sizeof(FBasicParticleData),
		alignof(FBasicParticleData),
		Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicParticleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBasicParticleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BasicParticleData"), sizeof(FBasicParticleData), Get_Z_Construct_UScriptStruct_FBasicParticleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBasicParticleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBasicParticleData_Hash() { return 2056757400U; }
	DEFINE_FUNCTION(INiagaraParticleCallbackHandler::execReceiveParticleData)
	{
		P_GET_TARRAY_REF(FBasicParticleData,Z_Param_Out_Data);
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveParticleData_Implementation(Z_Param_Out_Data,Z_Param_NiagaraSystem);
		P_NATIVE_END;
	}
	void INiagaraParticleCallbackHandler::ReceiveParticleData(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveParticleData instead.");
	}
	void UNiagaraParticleCallbackHandler::StaticRegisterNativesUNiagaraParticleCallbackHandler()
	{
		UClass* Class = UNiagaraParticleCallbackHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveParticleData", &INiagaraParticleCallbackHandler::execReceiveParticleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBasicParticleData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::NewProp_NiagaraSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParticleCallbackHandler, nullptr, "ReceiveParticleData", nullptr, nullptr, sizeof(NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms), Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister()
	{
		return UNiagaraParticleCallbackHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraParticleCallbackHandler_ReceiveParticleData, "ReceiveParticleData" }, // 3560311767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraParticleCallbackHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::ClassParams = {
		&UNiagaraParticleCallbackHandler::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraParticleCallbackHandler, 2244891176);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParticleCallbackHandler>()
	{
		return UNiagaraParticleCallbackHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraParticleCallbackHandler(Z_Construct_UClass_UNiagaraParticleCallbackHandler, &UNiagaraParticleCallbackHandler::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraParticleCallbackHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParticleCallbackHandler);
	static FName NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData = FName(TEXT("ReceiveParticleData"));
	void INiagaraParticleCallbackHandler::Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UNiagaraParticleCallbackHandler::StaticClass()));
		NiagaraParticleCallbackHandler_eventReceiveParticleData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData);
		if (Func)
		{
			Parms.Data=Data;
			Parms.NiagaraSystem=NiagaraSystem;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (INiagaraParticleCallbackHandler*)(O->GetNativeInterfaceAddress(UNiagaraParticleCallbackHandler::StaticClass())))
		{
			I->ReceiveParticleData_Implementation(Data,NiagaraSystem);
		}
	}
	void UNiagaraDataInterfaceExport::StaticRegisterNativesUNiagaraDataInterfaceExport()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport_NoRegister()
	{
		return UNiagaraDataInterfaceExport::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackHandlerParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CallbackHandlerParameter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GPUAllocationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GPUAllocationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationFixedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GPUAllocationFixedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUAllocationPerParticleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GPUAllocationPerParticleSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams[] = {
		{ "Category", "Export" },
		{ "Comment", "/** This Data Interface can be used to gather particles at execution time and call either a \nC++ or blueprint object with the gathered particle data each tick. */" },
		{ "DisplayName", "Export particle data" },
		{ "IncludePath", "NiagaraDataInterfaceExport.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "This Data Interface can be used to gather particles at execution time and call either a\nC++ or blueprint object with the gathered particle data each tick." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Reference to a user parameter that should receive the particle data after the simulation tick. The supplied parameter object needs to implement the INiagaraParticleCallbackHandler interface. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Reference to a user parameter that should receive the particle data after the simulation tick. The supplied parameter object needs to implement the INiagaraParticleCallbackHandler interface." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter = { "CallbackHandlerParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceExport, CallbackHandlerParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "Tooltip", "Sets the allocation scheme for the number of elements we reserve for the GPU.  The number of elements reserved should be as low as possible to improve performance." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode = { "GPUAllocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationMode), Z_Construct_UEnum_Niagara_ENDIExport_GPUAllocationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "Comment", "/** Reserve a fixed number of elements we can write per frame.  Once the limit is reached we ignore further writes. */" },
		{ "EditCondition", "GPUAllocationMode == ENDIExport_GPUAllocationMode::FixedSize" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Reserve a fixed number of elements we can write per frame.  Once the limit is reached we ignore further writes." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize = { "GPUAllocationFixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationFixedSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData[] = {
		{ "Category", "Export GPU" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Uses the emitter property particle count * this to determine the number of elements we reserve for write per frame.  The console variable fx.Niagara.NDIExport.GPUMaxReadbackCount is used to cap the maximum.  Once the limit is reached we ignore further writes. */" },
		{ "EditCondition", "GPUAllocationMode == ENDIExport_GPUAllocationMode::PerParticle" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceExport.h" },
		{ "ToolTip", "Uses the emitter property particle count * this to determine the number of elements we reserve for write per frame.  The console variable fx.Niagara.NDIExport.GPUMaxReadbackCount is used to cap the maximum.  Once the limit is reached we ignore further writes." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize = { "GPUAllocationPerParticleSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceExport, GPUAllocationPerParticleSize), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_CallbackHandlerParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationFixedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::NewProp_GPUAllocationPerParticleSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceExport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::ClassParams = {
		&UNiagaraDataInterfaceExport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceExport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceExport, 2396850342);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceExport>()
	{
		return UNiagaraDataInterfaceExport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceExport(Z_Construct_UClass_UNiagaraDataInterfaceExport, &UNiagaraDataInterfaceExport::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceExport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceExport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
