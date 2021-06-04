#include "NativizedAssets.h"
#include "SaveGameBP__pf4030252459.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USaveGameBP_C__pf4030252459::USaveGameBP_C__pf4030252459(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__LevelsUnlocked_Save__pf = 0;
	bpv__IsMale__pf = false;
	bpv__ShaldIsInVaria__pf = true;
	bpv__ShaldInVariaForCyber__pf = false;
	bpv__IsTutorialCompleted__pf = false;
	bpv__IsInitCutsceneSkipable__pf = false;
	bpv__PuntuationLevels__pf = TArray<int32> ();
	bpv__PuntuationLevels__pf.Reserve(15);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__PuntuationLevels__pf.Add(0);
	bpv__ExtraAmmoRifle__pf = false;
	bpv__ExtraAmmoShotgun__pf = false;
	bpv__PowerUpUnlocked__pf = false;
	bpv__IsAreaVisible__pf = true;
	bpv__PowerConversationIsDone__pf = false;
	bpv__LevelMapCurrent__pf = 0;
	bpv__Language__pf = E__Enum_Languages__pf::NewEnumerator0;
	bpv__IsLevel11UnFinish__pf = false;
	bpv__GraphicQuality__pf = 3;
	bpv__IsRobotUnlocked__pf = false;
	bpv__IsAstroUnlocked__pf = false;
	bpv__IsRobotActive__pf = false;
	bpv__IsDemonActive__pf = false;
	bpv__IsKnightActive__pf = false;
	bpv__IsCyberActive__pf = false;
	bpv__IsAstroActive__pf = false;
	bpv__ArrayConversations__pf = TArray<bool> ();
	bpv__ArrayConversations__pf.Reserve(54);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__ArrayConversations__pf.Add(false);
	bpv__IsGodModeActive__pf = false;
	bpv__IsVoiceActingActive__pf = true;
	bpv__MusicVolume__pf = 0.500000f;
	bpv__SFXVolume__pf = 0.500000f;
}
PRAGMA_ENABLE_OPTIMIZATION
void USaveGameBP_C__pf4030252459::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USaveGameBP_C__pf4030252459::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enum_Languages.Enum_Languages")));
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USaveGameBP_C__pf4030252459::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USaveGameBP_C__pf4030252459::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{675, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enum_Languages.Enum_Languages 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USaveGameBP_C__pf4030252459
{
	FRegisterHelper__USaveGameBP_C__pf4030252459()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SaveGame/SaveGameBP"), &USaveGameBP_C__pf4030252459::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USaveGameBP_C__pf4030252459 Instance;
};
FRegisterHelper__USaveGameBP_C__pf4030252459 FRegisterHelper__USaveGameBP_C__pf4030252459::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
