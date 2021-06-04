// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenShotComparisonTools/Public/ImageComparer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageComparer() {}
// Cross Module References
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
// End Cross Module References
class UScriptStruct* FImageComparisonResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_Hash());
	}
	return Singleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FImageComparisonResult>()
{
	return FImageComparisonResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageComparisonResult(FImageComparisonResult::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageComparisonResult"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageComparisonResult")),new UScriptStruct::TCppStructOps<FImageComparisonResult>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult;
	struct Z_Construct_UScriptStruct_FImageComparisonResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourcePlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRHI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceRHI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealApprovedFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdealApprovedFolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApprovedFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApprovedFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportApprovedFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportApprovedFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportIncomingFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportIncomingFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportComparisonFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportComparisonFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This struct holds the results of comparing an incoming image from a platform with an approved image that exists under the \n * project hierarchy. \n \n * All paths in this structure should be portable. Test results (including this struct) result can be serialized to \n * JSON and stored on the network as during automation runs then opened in the editor to commit / approve changes\n * to the local project.\n */" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "This struct holds the results of comparing an incoming image from a platform with an approved image that exists under the\nproject hierarchy.\n\nAll paths in this structure should be portable. Test results (including this struct) result can be serialized to\nJSON and stored on the network as during automation runs then opened in the editor to commit / approve changes\nto the local project." },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageComparisonResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Time that the comparison was performed\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Time that the comparison was performed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, CreationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Platform that the incoming image was generated on\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Platform that the incoming image was generated on" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform = { "SourcePlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, SourcePlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI_MetaData[] = {
		{ "Comment", "/*\n\x09\x09RHI that the incoming image was generated with\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "RHI that the incoming image was generated with" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI = { "SourceRHI", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, SourceRHI), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to a folder where the idealized ground-truth for this comparison would be. Relative to the project directory.\n\x09\x09Note: This path may not exist a fallback is being used for approval, or if there is no approved\n\x09\x09image at all. Comparing this value with the FPaths::GetPath(ApprovedFilePath) can be used to determine that.\n\x09\x09(the IsIdeal() function performs that check).\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to a folder where the idealized ground-truth for this comparison would be. Relative to the project directory.\nNote: This path may not exist a fallback is being used for approval, or if there is no approved\nimage at all. Comparing this value with the FPaths::GetPath(ApprovedFilePath) can be used to determine that.\n(the IsIdeal() function performs that check)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath = { "IdealApprovedFolderPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, IdealApprovedFolderPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the file that was considered as the ground-truth. Relative to the project directory\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the file that was considered as the ground-truth. Relative to the project directory" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath = { "ApprovedFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ApprovedFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the file that was generated in the test. Relative to the project directory, only valid when a test is run locally\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the file that was generated in the test. Relative to the project directory, only valid when a test is run locally" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath = { "IncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, IncomingFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the delta image between the ground-truth and the incoming file. Relative to the project directory, only valid when a test is run locally\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the delta image between the ground-truth and the incoming file. Relative to the project directory, only valid when a test is run locally" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath = { "ComparisonFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ComparisonFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Name of the approved file saved for the report. Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Name of the approved file saved for the report. Path is relative to the location of the metadata for the report" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath = { "ReportApprovedFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ReportApprovedFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09name of the incoming file saved for the report.  Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "name of the incoming file saved for the report.  Path is relative to the location of the metadata for the report" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath = { "ReportIncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ReportIncomingFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Name of the delta image saved for the report.  Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Name of the delta image saved for the report.  Path is relative to the location of the metadata for the report" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath = { "ReportComparisonFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ReportComparisonFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Largest local difference found during comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Largest local difference found during comparison" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference = { "MaxLocalDifference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, MaxLocalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Global difference found during comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Global difference found during comparison" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference = { "GlobalDifference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, GlobalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Tolerance values for comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Tolerance values for comparison" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, Tolerance), Z_Construct_UScriptStruct_FImageTolerance, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Error message that can be set during a comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Error message that can be set during a comparison" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Error message that can be set during a comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Error message that can be set during a comparison" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageComparisonResult, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ImageComparisonResult",
		sizeof(FImageComparisonResult),
		alignof(FImageComparisonResult),
		Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageComparisonResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_Hash() { return 2385854521U; }
class UScriptStruct* FImageTolerance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_Hash());
	}
	return Singleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FImageTolerance>()
{
	return FImageTolerance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageTolerance(FImageTolerance::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageTolerance"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageTolerance")),new UScriptStruct::TCppStructOps<FImageTolerance>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance;
	struct Z_Construct_UScriptStruct_FImageTolerance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_IgnoreAntiAliasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreAntiAliasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreColors_MetaData[];
#endif
		static void NewProp_IgnoreColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageTolerance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageTolerance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, Red), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, Green), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, Blue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, Alpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, MinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, MaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FImageTolerance*)Obj)->IgnoreAntiAliasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing = { "IgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit(void* Obj)
	{
		((FImageTolerance*)Obj)->IgnoreColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors = { "IgnoreColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageTolerance, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageTolerance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ImageTolerance",
		sizeof(FImageTolerance),
		alignof(FImageTolerance),
		Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageTolerance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_Hash() { return 822430065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
