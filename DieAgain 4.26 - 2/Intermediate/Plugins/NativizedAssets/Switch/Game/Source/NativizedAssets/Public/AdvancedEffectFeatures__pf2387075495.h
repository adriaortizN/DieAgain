#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "BlendModes__pf3652918773.h"
#include "Vector2DN__pf2387075495.h"
class UTexture2D;
#include "AdvancedEffectFeatures__pf2387075495.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Structures/AdvancedEffectFeatures.AdvancedEffectFeatures", OverrideNativeName="AdvancedEffectFeatures"))
struct FAdvancedEffectFeatures__pf2387075495
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mode", Tooltip, OverrideNativeName="BlendMode_12_09737E6C44063CBE16D45A8896564C06"))
	E__BlendModes__pf bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mask", Tooltip, OverrideNativeName="BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5"))
	UTexture2D* bpv__BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Mask Scale", Tooltip, OverrideNativeName="BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0"))
	FVector2DN__pf2387075495 bpv__BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance", Tooltip, OverrideNativeName="BlendDistance_33_7594D9DD4D782916B58945895B32667E"))
	float bpv__BlendDistance_33_7594D9DD4D782916B58945895B32667E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance Sharpness", Tooltip, OverrideNativeName="BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D"))
	float bpv__BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Distance Invert", Tooltip, OverrideNativeName="BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A"))
	bool bpv__BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blending Opacity", Tooltip, OverrideNativeName="BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B"))
	float bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Effect Priority", Tooltip, OverrideNativeName="EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F"))
	int32 bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Depth", Tooltip="This feature requires you to enable Custom Depth. Project Settings > Rendering > Postprocessing > Custom Depth-Stencil Pass > Enabled", OverrideNativeName="CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8"))
	bool bpv__CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stencil Buffer", Tooltip="This feature requires you to enable Stencil Buffers. Project Settings > Rendering > Postprocessing > Custom Depth-Stencil Pass > Enabled with Stencil", OverrideNativeName="StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6"))
	bool bpv__StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stencil Mask", Tooltip="This feature requires you to enable Stencil Buffers. Project Settings > Rendering > Postprocessing > Custom Depth-Stencil Pass > Enabled with Stencil", OverrideNativeName="StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1"))
	int32 bpv__StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1__pf;
	FAdvancedEffectFeatures__pf2387075495();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAdvancedEffectFeatures__pf2387075495& __Other) const
	{
		return FAdvancedEffectFeatures__pf2387075495::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAdvancedEffectFeatures__pf2387075495& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAdvancedEffectFeatures__pf2387075495::StaticStruct()); }
};
