#include "NativizedAssets.h"
#include "AdvancedEffectFeaturesNoCustomDepth__pf2387075495.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::FAdvancedEffectFeaturesNoCustomDepth__pf2387075495()
{
	bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf = E__BlendModes__pf::NewEnumerator0;
	bpv__BlendMask_15_664A106449FD3C01747ABC9174124057__pf = CastChecked<UTexture2D>(FConvertedBlueprintsDependencies::LoadObjectForStructConstructor(FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::StaticStruct(),TEXT("/Game/Chameleon/Textures/T_White.T_White")), ECastCheckedType::NullAllowed);
	bpv__BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5__pf.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 1.000000f;
	bpv__BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5__pf.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf = 1.000000f;
	bpv__BlendDistance_23_BD484C304DC4B8E69152DA879158606B__pf = 0.000000f;
	bpv__BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3__pf = 10.000000f;
	bpv__BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01__pf = false;
	bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf = 1.000000f;
	bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_White.T_White 
		{3, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/Vector2DN.Vector2DN 
		{4, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/Chameleon/Enums/BlendModes.BlendModes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FAdvancedEffectFeaturesNoCustomDepth__pf2387075495
{
	FRegisterHelper__FAdvancedEffectFeaturesNoCustomDepth__pf2387075495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Structures/AdvancedEffectFeaturesNoCustomDepth"), &FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 Instance;
};
FRegisterHelper__FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 FRegisterHelper__FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::Instance;
