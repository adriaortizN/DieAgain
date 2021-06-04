#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "BlendModes__pf3652918773.h"
#include "Vector2DN__pf2387075495.h"
class UTexture2D;
#include "AdvancedEffectFeaturesNoCustomDepth__pf2387075495.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Structures/AdvancedEffectFeaturesNoCustomDepth.AdvancedEffectFeaturesNoCustomDepth", OverrideNativeName="AdvancedEffectFeaturesNoCustomDepth"))
struct FAdvancedEffectFeaturesNoCustomDepth__pf2387075495
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mode", Tooltip, OverrideNativeName="BlendMode_12_09737E6C44063CBE16D45A8896564C06"))
	E__BlendModes__pf bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mask", Tooltip, OverrideNativeName="BlendMask_15_664A106449FD3C01747ABC9174124057"))
	UTexture2D* bpv__BlendMask_15_664A106449FD3C01747ABC9174124057__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mask Scale", Tooltip, OverrideNativeName="BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5"))
	FVector2DN__pf2387075495 bpv__BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance", Tooltip, OverrideNativeName="BlendDistance_23_BD484C304DC4B8E69152DA879158606B"))
	float bpv__BlendDistance_23_BD484C304DC4B8E69152DA879158606B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance Sharpness", Tooltip, OverrideNativeName="BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3"))
	float bpv__BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance Invert", Tooltip, OverrideNativeName="BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01"))
	bool bpv__BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blending Opacity", Tooltip, OverrideNativeName="BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B"))
	float bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Effect Priority", Tooltip, OverrideNativeName="EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F"))
	int32 bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf;
	FAdvancedEffectFeaturesNoCustomDepth__pf2387075495();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAdvancedEffectFeaturesNoCustomDepth__pf2387075495& __Other) const
	{
		return FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAdvancedEffectFeaturesNoCustomDepth__pf2387075495& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAdvancedEffectFeaturesNoCustomDepth__pf2387075495::StaticStruct()); }
};
