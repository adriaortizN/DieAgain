#include "NativizedAssets.h"
#include "AdvancedEffectFeatures__pf2387075495.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FAdvancedEffectFeatures__pf2387075495::FAdvancedEffectFeatures__pf2387075495()
{
	bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf = E__BlendModes__pf::NewEnumerator0;
	bpv__BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5__pf = CastChecked<UTexture2D>(FConvertedBlueprintsDependencies::LoadObjectForStructConstructor(FAdvancedEffectFeatures__pf2387075495::StaticStruct(),TEXT("/Game/Chameleon/Textures/T_White.T_White")), ECastCheckedType::NullAllowed);
	bpv__BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0__pf.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 1.000000f;
	bpv__BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0__pf.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf = 1.000000f;
	bpv__BlendDistance_33_7594D9DD4D782916B58945895B32667E__pf = 0.000000f;
	bpv__BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D__pf = 10.000000f;
	bpv__BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A__pf = false;
	bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf = 1.000000f;
	bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf = 0;
	bpv__CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8__pf = false;
	bpv__StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6__pf = false;
	bpv__StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FAdvancedEffectFeatures__pf2387075495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__FAdvancedEffectFeatures__pf2387075495
{
	FRegisterHelper__FAdvancedEffectFeatures__pf2387075495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Structures/AdvancedEffectFeatures"), &FAdvancedEffectFeatures__pf2387075495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FAdvancedEffectFeatures__pf2387075495 Instance;
};
FRegisterHelper__FAdvancedEffectFeatures__pf2387075495 FRegisterHelper__FAdvancedEffectFeatures__pf2387075495::Instance;
