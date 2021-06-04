#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "colorChannels__pf3652918773.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "LOOKPresetsEnum__pf3652918773.h"
#include "DrawingNoiseModes__pf3652918773.h"
#include "AdvancedEffectFeatures__pf2387075495.h"
#include "AdvancedEffectFeaturesNoCustomDepth__pf2387075495.h"
#include "Vector3DN__pf2387075495.h"
#include "Vector2DN__pf2387075495.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UMaterialBillboardComponent;
class UPostProcessComponent;
class UBoxComponent;
class UMaterial;
class UMaterialInstanceDynamic;
class UTexture2D;
class UTextureRenderTarget2D;
class AActor;
#include "Chameleon__pf565858488.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Chameleon.Chameleon_C", OverrideNativeName="Chameleon_C"))
class AChameleon_C__pf565858488 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MaterialBillboard"))
	UMaterialBillboardComponent* bpv__MaterialBillboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InternalPP"))
	UPostProcessComponent* bpv__InternalPP__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bounding Box"))
	UBoxComponent* bpv__BoundingxBox__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bleach Bypass", Category="Bleach Bypass", OverrideNativeName="Bleach Bypass"))
	bool bpv__BleachxBypass__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distance Fog", Category="Distance Fog", OverrideNativeName="Distance Fog"))
	bool bpv__DistancexFog__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Channel Clamper", Category="Channel Clamper", OverrideNativeName="Channel Clamper"))
	bool bpv__ChannelxClamper__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Channel Clamper", Category="Channel Clamper", OverrideNativeName="mChannelClamper"))
	UMaterial* bpv__mChannelClamper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Channel Clamper", Category="Channel Clamper", OverrideNativeName="iChannelClamper"))
	UMaterialInstanceDynamic* bpv__iChannelClamper__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Channel Swapper", Category="Channel Swapper", OverrideNativeName="Channel Swapper"))
	bool bpv__ChannelxSwapper__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Drops", Category="Screen drops", OverrideNativeName="Screen Drops"))
	bool bpv__ScreenxDrops__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Alcohol", Category="Alcohol", OverrideNativeName="Alcohol"))
	bool bpv__Alcohol__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drug", Category="Drug", OverrideNativeName="Drug"))
	bool bpv__Drug__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mosaic", Category="Mosaic", OverrideNativeName="Mosaic"))
	bool bpv__Mosaic__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pixel Dissolve", Category="Pixel Dissolve", OverrideNativeName="Pixel Dissolve"))
	bool bpv__PixelxDissolve__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Blur", Category="Blur", OverrideNativeName="Blur"))
	bool bpv__Blur__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Bleach Bypass", Category="Bleach Bypass", OverrideNativeName="mBleachBypass"))
	UMaterial* bpv__mBleachBypass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Distance Fog", Category="Distance Fog", OverrideNativeName="mDistanceFog"))
	UMaterial* bpv__mDistanceFog__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Channel Swapper", Category="Channel Swapper", OverrideNativeName="mChannelSwapper"))
	UMaterial* bpv__mChannelSwapper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Screen Drops", Category="Screen drops", OverrideNativeName="mScreenDrops"))
	UMaterial* bpv__mScreenDrops__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Alcohol", Category="Alcohol", OverrideNativeName="mAlcohol"))
	UMaterial* bpv__mAlcohol__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Drug", Category="Drug", OverrideNativeName="mDrug"))
	UMaterial* bpv__mDrug__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Mosaic", Category="Mosaic", OverrideNativeName="mMosaic"))
	UMaterial* bpv__mMosaic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Pixel Dissolve", Category="Pixel Dissolve", OverrideNativeName="mPixelDissolve"))
	UMaterial* bpv__mPixelDissolve__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Blur", Category="Blur", OverrideNativeName="mBlur"))
	UMaterial* bpv__mBlur__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Clamper Red Intensity", Category="Channel Clamper", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", OverrideNativeName="Channel Clamper Red Intensity"))
	float bpv__ChannelxClamperxRedxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Clamper Green Intensity", Category="Channel Clamper", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", OverrideNativeName="Channel Clamper Green Intensity"))
	float bpv__ChannelxClamperxGreenxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Clamper Blue Intensity", Category="Channel Clamper", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", OverrideNativeName="Channel Clamper Blue Intensity"))
	float bpv__ChannelxClamperxBluexIntensity__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Bleach Bypass", Category="Bleach Bypass", OverrideNativeName="iBleachBypass"))
	UMaterialInstanceDynamic* bpv__iBleachBypass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Distance Fog", Category="Distance Fog", OverrideNativeName="iDistanceFog"))
	UMaterialInstanceDynamic* bpv__iDistanceFog__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Channel Swapper", Category="Channel Swapper", OverrideNativeName="iChannelSwapper"))
	UMaterialInstanceDynamic* bpv__iChannelSwapper__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Swapper Red", Category="Channel Swapper", OverrideNativeName="Channel Swapper Red"))
	E__ColorChannels__pf bpv__ChannelxSwapperxRed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Swapper Green", Category="Channel Swapper", OverrideNativeName="Channel Swapper Green"))
	E__ColorChannels__pf bpv__ChannelxSwapperxGreen__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Channel Swapper Blue", Category="Channel Swapper", OverrideNativeName="Channel Swapper Blue"))
	E__ColorChannels__pf bpv__ChannelxSwapperxBlue__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Screen Drops", Category="Screen drops", OverrideNativeName="iScreenDrops"))
	UMaterialInstanceDynamic* bpv__iScreenDrops__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Alcohol", Category="Alcohol", OverrideNativeName="iAlcohol"))
	UMaterialInstanceDynamic* bpv__iAlcohol__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Drug", Category="Drug", OverrideNativeName="iDrug"))
	UMaterialInstanceDynamic* bpv__iDrug__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Mosaic", Category="Mosaic", OverrideNativeName="iMosaic"))
	UMaterialInstanceDynamic* bpv__iMosaic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Pixel Dissolve", Category="Pixel Dissolve", OverrideNativeName="iPixelDissolve"))
	UMaterialInstanceDynamic* bpv__iPixelDissolve__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Blur", Category="Blur", OverrideNativeName="iBlur"))
	UMaterialInstanceDynamic* bpv__iBlur__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Drops Layer 1 Map", Category="Screen drops", OverrideNativeName="Screen Drops Layer 1 Map"))
	UTexture2D* bpv__ScreenxDropsxLayerx1xMap__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 1 Intensity", Category="Screen drops", OverrideNativeName="Screen Drops Layer 1 Intensity"))
	float bpv__ScreenxDropsxLayerx1xIntensity__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mosaic Scale", Category="Mosaic", OverrideNativeName="Mosaic Scale"))
	float bpv__MosaicxScale__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alcohol Speed", Category="Alcohol", UIMin="0", UIMax="10", ClampMax="10", ClampMin="0", OverrideNativeName="Alcohol Speed"))
	float bpv__AlcoholxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drug Speed", Category="Drug", UIMin="0", UIMax="10", ClampMax="10", ClampMin="0", OverrideNativeName="Drug Speed"))
	float bpv__DrugxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pixel Dissolve Intensity", Category="Pixel Dissolve", OverrideNativeName="Pixel Dissolve Intensity"))
	float bpv__PixelxDissolvexIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Blur Amount", Category="Blur", UIMin="0", ClampMin="0", OverrideNativeName="Blur Amount"))
	float bpv__BlurxAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ASCII", Category="ASCII", OverrideNativeName="ASCII"))
	bool bpv__ASCII__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Ascii", Category="ASCII", OverrideNativeName="mAscii"))
	UMaterial* bpv__mAscii__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Ascii", Category="ASCII", OverrideNativeName="iAscii"))
	UMaterialInstanceDynamic* bpv__iAscii__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Colorize", Category="Colorize", OverrideNativeName="Colorize"))
	bool bpv__Colorize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Colorize", Category="Colorize", OverrideNativeName="mColorize"))
	UMaterial* bpv__mColorize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Colorize", Category="Colorize", OverrideNativeName="iColorize"))
	UMaterialInstanceDynamic* bpv__iColorize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Colorize Detail", Category="Colorize", OverrideNativeName="Colorize Detail"))
	float bpv__ColorizexDetail__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Comic", Category="Comic", OverrideNativeName="Comic"))
	bool bpv__Comic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Comic", Category="Comic", OverrideNativeName="mComic"))
	UMaterial* bpv__mComic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Comic", Category="Comic", OverrideNativeName="iComic"))
	UMaterialInstanceDynamic* bpv__iComic__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Blend Color", Category="Comic", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Comic Blend Color"))
	FLinearColor bpv__ComicxBlendxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Threshold", Category="Comic", UIMin="0.001", UIMax="3", ClampMax="3", ClampMin="0.001", OverrideNativeName="Comic Threshold"))
	float bpv__ComicxThreshold__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Edge Detect", Category="Edge Detect", OverrideNativeName="Edge Detect"))
	bool bpv__EdgexDetect__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Edge Detect", Category="Edge Detect", OverrideNativeName="mEdgeDetect"))
	UMaterial* bpv__mEdgeDetect__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Edge Detect", Category="Edge Detect", OverrideNativeName="iEdgeDetect"))
	UMaterialInstanceDynamic* bpv__iEdgeDetect__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emboss", Category="Emboss", OverrideNativeName="Emboss"))
	bool bpv__Emboss__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Emboss", Category="Emboss", OverrideNativeName="mEmboss"))
	UMaterial* bpv__mEmboss__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Emboss", Category="Emboss", OverrideNativeName="iEmboss"))
	UMaterialInstanceDynamic* bpv__iEmboss__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch", Category="Glitch", OverrideNativeName="Glitch"))
	bool bpv__Glitch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Glitch", Category="Glitch", OverrideNativeName="mGlitch"))
	UMaterial* bpv__mGlitch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Glitch", Category="Glitch", OverrideNativeName="iGlitch"))
	UMaterialInstanceDynamic* bpv__iGlitch__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Speed", Category="Glitch", OverrideNativeName="Glitch Speed"))
	float bpv__GlitchxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Lines", Category="Glitch", OverrideNativeName="Glitch Lines"))
	float bpv__GlitchxLines__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Blocking", Category="Glitch", OverrideNativeName="Glitch Blocking"))
	float bpv__GlitchxBlocking__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Monitor Effects", Category="Monitor Effects", OverrideNativeName="Monitor Effects"))
	bool bpv__MonitorxEffects__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Grain NLines", Category="Monitor Effects", OverrideNativeName="mGrainNLines"))
	UMaterial* bpv__mGrainNLines__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Grain NLines", Category="Monitor Effects", OverrideNativeName="iGrainNLines"))
	UMaterialInstanceDynamic* bpv__iGrainNLines__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Line Count", Category="Monitor Effects", OverrideNativeName="Monitor Effects Line Count"))
	float bpv__MonitorxEffectsxLinexCount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Intensity 1", Category="Monitor Effects", OverrideNativeName="Monitor Effects Intensity 1"))
	float bpv__MonitorxEffectsxIntensityx1__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Intensity 2", Category="Monitor Effects", OverrideNativeName="Monitor Effects Intensity 2"))
	float bpv__MonitorxEffectsxIntensityx2__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hard Emboss", Category="Hard Emboss", OverrideNativeName="Hard Emboss"))
	bool bpv__HardxEmboss__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Hard Emboss", Category="Hard Emboss", OverrideNativeName="mHardEmboss"))
	UMaterial* bpv__mHardEmboss__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Hard Emboss", Category="Hard Emboss", OverrideNativeName="iHardEmboss"))
	UMaterialInstanceDynamic* bpv__iHardEmboss__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hue Panner", Category="Hue Panner", OverrideNativeName="Hue Panner"))
	bool bpv__HuexPanner__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Hue Panner", Category="Hue Panner", OverrideNativeName="mHuePanner"))
	UMaterial* bpv__mHuePanner__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Hue Panner", Category="Hue Panner", OverrideNativeName="iHuePanner"))
	UMaterialInstanceDynamic* bpv__iHuePanner__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hue Panner Speed", Category="Hue Panner", OverrideNativeName="Hue Panner Speed"))
	float bpv__HuexPannerxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Monochrome", Category="Monochrome", OverrideNativeName="Monochrome"))
	bool bpv__Monochrome__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Monochrome", Category="Monochrome", OverrideNativeName="mMonochrome"))
	UMaterial* bpv__mMonochrome__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Monochrome", Category="Monochrome", OverrideNativeName="iMonochrome"))
	UMaterialInstanceDynamic* bpv__iMonochrome__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monochrome Color", Category="Monochrome", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Monochrome Color"))
	FLinearColor bpv__MonochromexColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Radial Blur", Category="Radial Blur", OverrideNativeName="Radial Blur"))
	bool bpv__RadialxBlur__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Radial Blur", Category="Radial Blur", OverrideNativeName="mRadialBlur"))
	UMaterial* bpv__mRadialBlur__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Radial Blur", Category="Radial Blur", OverrideNativeName="iRadialBlur"))
	UMaterialInstanceDynamic* bpv__iRadialBlur__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Radial Blur Width", Category="Radial Blur", UIMin="0", UIMax="5", ClampMax="5", ClampMin="0", OverrideNativeName="Radial Blur Width"))
	float bpv__RadialxBlurxWidth__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Radial Blur Samples", Category="Radial Blur", UIMin="2", UIMax="40", ClampMax="40", ClampMin="2", OverrideNativeName="Radial Blur Samples"))
	int32 bpv__RadialxBlurxSamples__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scratches", Category="Scratches", OverrideNativeName="Scratches"))
	bool bpv__Scratches__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Scratches", Category="Scratches", OverrideNativeName="mScratches"))
	UMaterial* bpv__mScratches__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Scratches", Category="Scratches", OverrideNativeName="iScratches"))
	UMaterialInstanceDynamic* bpv__iScratches__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Waves", Category="Screen Waves", OverrideNativeName="Screen Waves"))
	bool bpv__ScreenxWaves__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Screen Waves", Category="Screen Waves", OverrideNativeName="mScreenWaves"))
	UMaterial* bpv__mScreenWaves__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Screen Waves", Category="Screen Waves", OverrideNativeName="iScreenWaves"))
	UMaterialInstanceDynamic* bpv__iScreenWaves__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Waves X Tiling", Category="Screen Waves", OverrideNativeName="Screen Waves X Tiling"))
	float bpv__ScreenxWavesxXxTiling__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Waves Y Tiling", Category="Screen Waves", OverrideNativeName="Screen Waves Y Tiling"))
	float bpv__ScreenxWavesxYxTiling__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Distortion 1", Category="Monitor Effects", OverrideNativeName="Monitor Effects Distortion 1"))
	float bpv__MonitorxEffectsxDistortionx1__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Distortion 2", Category="Monitor Effects", OverrideNativeName="Monitor Effects Distortion 2"))
	float bpv__MonitorxEffectsxDistortionx2__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Monitor Effects Picture Scale", Category="Monitor Effects", OverrideNativeName="Monitor Effects Picture Scale"))
	float bpv__MonitorxEffectsxPicturexScale__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Fog Near Color", Category="Distance Fog", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Distance Fog Near Color"))
	FLinearColor bpv__DistancexFogxNearxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Fog Far Color", Category="Distance Fog", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Distance Fog Far Color"))
	FLinearColor bpv__DistancexFogxFarxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Fog Distance", Category="Distance Fog", OverrideNativeName="Distance Fog Distance"))
	float bpv__DistancexFogxDistance__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scratches Distortion Map", Category="Scratches", OverrideNativeName="Scratches Distortion Map"))
	UTexture2D* bpv__ScratchesxDistortionxMap__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Scratches Distortion Amount", Category="Scratches", ClampMin="0", UIMin="0", OverrideNativeName="Scratches Distortion Amount"))
	float bpv__ScratchesxDistortionxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Scratches Color", Category="Scratches", OverrideNativeName="Scratches Color"))
	FLinearColor bpv__ScratchesxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 1 Speed", Category="Screen drops", OverrideNativeName="Screen Drops Layer 1 Speed"))
	float bpv__ScreenxDropsxLayerx1xSpeed__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 1 Noise", Category="Screen drops", OverrideNativeName="Screen Drops Layer 1 Noise"))
	float bpv__ScreenxDropsxLayerx1xNoise__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Drops Layer 2 Map", Category="Screen drops", OverrideNativeName="Screen Drops Layer 2 Map"))
	UTexture2D* bpv__ScreenxDropsxLayerx2xMap__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 2 Intensity", Category="Screen drops", OverrideNativeName="Screen Drops Layer 2 Intensity"))
	float bpv__ScreenxDropsxLayerx2xIntensity__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 2 Speed", Category="Screen drops", OverrideNativeName="Screen Drops Layer 2 Speed"))
	float bpv__ScreenxDropsxLayerx2xSpeed__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 2 Noise", Category="Screen drops", OverrideNativeName="Screen Drops Layer 2 Noise"))
	float bpv__ScreenxDropsxLayerx2xNoise__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Drops Layer 3 Map", Category="Screen drops", OverrideNativeName="Screen Drops Layer 3 Map"))
	UTexture2D* bpv__ScreenxDropsxLayerx3xMap__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 3 Intensity", Category="Screen drops", OverrideNativeName="Screen Drops Layer 3 Intensity"))
	float bpv__ScreenxDropsxLayerx3xIntensity__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 3 Speed", Category="Screen drops", OverrideNativeName="Screen Drops Layer 3 Speed"))
	float bpv__ScreenxDropsxLayerx3xSpeed__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Invert", Category="Invert", OverrideNativeName="Invert"))
	bool bpv__Invert__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Invert", Category="Invert", OverrideNativeName="mInvert"))
	UMaterial* bpv__mInvert__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Invert", Category="Invert", OverrideNativeName="iInvert"))
	UMaterialInstanceDynamic* bpv__iInvert__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Iridescent", Category="Iridescent", OverrideNativeName="Iridescent"))
	bool bpv__Iridescent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Iridescent", Category="Iridescent", OverrideNativeName="mIridescent"))
	UMaterial* bpv__mIridescent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Iridescent", Category="Iridescent", OverrideNativeName="iIridescent"))
	UMaterialInstanceDynamic* bpv__iIridescent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Iridescent Iridescence", Category="Iridescent", ClampMin="0", ClampMax="1.19", OverrideNativeName="Iridescent Iridescence"))
	float bpv__IridescentxIridescence__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kuwahara", Category="Kuwahara", OverrideNativeName="Kuwahara"))
	bool bpv__Kuwahara__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Kuwahara", Category="Kuwahara", OverrideNativeName="mKuwahara"))
	UMaterial* bpv__mKuwahara__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Kuwahara", Category="Kuwahara", OverrideNativeName="iKuwahara"))
	UMaterialInstanceDynamic* bpv__iKuwahara__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kuwahara Amount", Category="Kuwahara", ClampMin="0", ClampMax="20", OverrideNativeName="Kuwahara Amount"))
	int32 bpv__KuwaharaxAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pulse", Category="Pulse", OverrideNativeName="Pulse"))
	bool bpv__Pulse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Pulse", Category="Pulse", OverrideNativeName="mPulse"))
	UMaterial* bpv__mPulse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Pulse", Category="Pulse", OverrideNativeName="iPulse"))
	UMaterialInstanceDynamic* bpv__iPulse__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pulse Center X", Category="Pulse", ClampMin="0", ClampMax="1", OverrideNativeName="Pulse Center X"))
	float bpv__PulsexCenterxX__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pulse Center Y", Category="Pulse", ClampMin="0", ClampMax="1", OverrideNativeName="Pulse Center Y"))
	float bpv__PulsexCenterxY__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pulse Speed", Category="Pulse", ClampMin="0.1", ClampMax="5", OverrideNativeName="Pulse Speed"))
	float bpv__PulsexSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pulse Smoothing", Category="Pulse", OverrideNativeName="Pulse Smoothing"))
	float bpv__PulsexSmoothing__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Squares", Category="Squares", OverrideNativeName="Squares"))
	bool bpv__Squares__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Squares", Category="Squares", OverrideNativeName="mSquares"))
	UMaterial* bpv__mSquares__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Squares", Category="Squares", OverrideNativeName="iSquares"))
	UMaterialInstanceDynamic* bpv__iSquares__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Squares Scale", Category="Squares", OverrideNativeName="Squares Scale"))
	float bpv__SquaresxScale__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Squares Ratio", Category="Squares", OverrideNativeName="Squares Ratio"))
	float bpv__SquaresxRatio__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Squares Radius", Category="Squares", OverrideNativeName="Squares Radius"))
	float bpv__SquaresxRadius__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Squares Brightness", Category="Squares", OverrideNativeName="Squares Brightness"))
	float bpv__SquaresxBrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiles", Category="Tiles", OverrideNativeName="Tiles"))
	bool bpv__Tiles__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Tiles", Category="Tiles", OverrideNativeName="mTiles"))
	UMaterial* bpv__mTiles__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Tiles", Category="Tiles", OverrideNativeName="iTiles"))
	UMaterialInstanceDynamic* bpv__iTiles__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiles Centered", Category="Tiles", OverrideNativeName="Tiles Centered"))
	bool bpv__TilesxCentered__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Tiles Count", Category="Tiles", OverrideNativeName="Tiles Count"))
	float bpv__TilesxCount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="TV Noise", Category="TV Noise", OverrideNativeName="TV Noise"))
	bool bpv__TVxNoise__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M TVNoise", Category="TV Noise", OverrideNativeName="mTVNoise"))
	UMaterial* bpv__mTVNoise__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I TVNoise", Category="TV Noise", OverrideNativeName="iTVNoise"))
	UMaterialInstanceDynamic* bpv__iTVNoise__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="TV Noise Contrast", Category="TV Noise", OverrideNativeName="TV Noise Contrast"))
	float bpv__TVxNoisexContrast__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="TV Noise Intensity", Category="TV Noise", OverrideNativeName="TV Noise Intensity"))
	float bpv__TVxNoisexIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Native Post Process", Category="Native Post Process", OverrideNativeName="Native Post Process"))
	FPostProcessSettings bpv__NativexPostxProcess__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LOOK!", Category="LOOK! Color Grading", OverrideNativeName="LOOK!"))
	bool bpv__LOOKx__pfS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LOOK! Presets", Category="LOOK! Color Grading", OverrideNativeName="LOOK! Presets"))
	E__LOOKPresetsEnum__pf bpv__LOOKxxPresets__pfST;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Circles", Category="Circles", OverrideNativeName="Circles"))
	bool bpv__Circles__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Circles", Category="Circles", OverrideNativeName="mCircles"))
	UMaterial* bpv__mCircles__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Circles", Category="Circles", OverrideNativeName="iCircles"))
	UMaterialInstanceDynamic* bpv__iCircles__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Circles Ratio", Category="Circles", OverrideNativeName="Circles Ratio"))
	float bpv__CirclesxRatio__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Circles Tiling", Category="Circles", OverrideNativeName="Circles Tiling"))
	float bpv__CirclesxTiling__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sonar", Category="Sonar", OverrideNativeName="Sonar"))
	bool bpv__Sonar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Sonar", Category="Sonar", OverrideNativeName="mSonar"))
	UMaterial* bpv__mSonar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Sonar", Category="Sonar", OverrideNativeName="iSonar"))
	UMaterialInstanceDynamic* bpv__iSonar__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Color", Category="Sonar", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Sonar Color"))
	FLinearColor bpv__SonarxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Color Intensity", Category="Sonar", OverrideNativeName="Sonar Color Intensity"))
	float bpv__SonarxColorxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Depth", Category="Sonar", OverrideNativeName="Sonar Depth"))
	float bpv__SonarxDepth__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Wave Distance", Category="Sonar", OverrideNativeName="Sonar Wave Distance"))
	float bpv__SonarxWavexDistance__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Distortion Intensity", Category="Sonar", OverrideNativeName="Sonar Distortion Intensity"))
	float bpv__SonarxDistortionxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sonar Sharpness", Category="Sonar", OverrideNativeName="Sonar Sharpness"))
	float bpv__SonarxSharpness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alcohol Offset", Category="Alcohol", UIMin="0", UIMax="10", ClampMax="10", ClampMin="0", OverrideNativeName="Alcohol Offset"))
	float bpv__AlcoholxOffset__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distance Distortion", Category="Distance Distortion", OverrideNativeName="Distance Distortion"))
	bool bpv__DistancexDistortion__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Distance Distortion", Category="Distance Distortion", OverrideNativeName="mDistanceDistortion"))
	UMaterial* bpv__mDistanceDistortion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Distance Distortion", Category="Distance Distortion", OverrideNativeName="iDistanceDistortion"))
	UMaterialInstanceDynamic* bpv__iDistanceDistortion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distance Distortion Normal", Category="Distance Distortion", OverrideNativeName="Distance Distortion Normal"))
	UTexture2D* bpv__DistancexDistortionxNormal__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Amount", Category="Distance Distortion", OverrideNativeName="Distance Distortion Amount"))
	float bpv__DistancexDistortionxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Edge Distance", Category="Distance Distortion", OverrideNativeName="Distance Distortion Edge Distance"))
	float bpv__DistancexDistortionxEdgexDistance__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Edge Fading", Category="Distance Distortion", OverrideNativeName="Distance Distortion Edge Fading"))
	float bpv__DistancexDistortionxEdgexFading__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Movement Speed", Category="Distance Distortion", OverrideNativeName="Distance Distortion Movement Speed"))
	float bpv__DistancexDistortionxMovementxSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Movement Scale", Category="Distance Distortion", OverrideNativeName="Distance Distortion Movement Scale"))
	float bpv__DistancexDistortionxMovementxScale__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Affected Brightness", Category="Distance Distortion", OverrideNativeName="Distance Distortion Affected Brightness"))
	float bpv__DistancexDistortionxAffectedxBrightness__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Distortion Unaffected Brightness", Category="Distance Distortion", OverrideNativeName="Distance Distortion Unaffected Brightness"))
	float bpv__DistancexDistortionxUnaffectedxBrightness__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing", Category="Drawing", OverrideNativeName="Drawing"))
	bool bpv__Drawing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Drawing", Category="Drawing", OverrideNativeName="mDrawing"))
	UMaterial* bpv__mDrawing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Drawing", Category="Drawing", OverrideNativeName="iDrawing"))
	UMaterialInstanceDynamic* bpv__iDrawing__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawing Paper Texture", Category="Drawing", OverrideNativeName="Drawing Paper Texture"))
	UTexture2D* bpv__DrawingxPaperxTexture__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing Noise Algorithm", Category="Drawing", ClampMin="0", ClampMax="255", UIMax="255", UIMin="0", OverrideNativeName="Drawing Noise Algorithm"))
	E__DrawingNoiseModes__pf bpv__DrawingxNoisexAlgorithm__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing Ink Amount", Category="Drawing", ClampMin="0", OverrideNativeName="Drawing Ink Amount"))
	float bpv__DrawingxInkxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing Liner Amount", Category="Drawing", ClampMin="0", ClampMax="5", UIMax="5", UIMin="0", OverrideNativeName="Drawing Liner Amount"))
	float bpv__DrawingxLinerxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing Blending Color", Category="Drawing", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Drawing Blending Color"))
	FLinearColor bpv__DrawingxBlendingxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Magic Transitions", Category="Magic Transitions", OverrideNativeName="Magic Transitions"))
	bool bpv__MagicxTransitions__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Magic Transitions", Category="Magic Transitions", OverrideNativeName="mMagicTransitions"))
	UMaterial* bpv__mMagicTransitions__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Magic Transitions", Category="Magic Transitions", OverrideNativeName="iMagicTransitions"))
	UMaterialInstanceDynamic* bpv__iMagicTransitions__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Magic Transitions Final Texture", Category="Magic Transitions", OverrideNativeName="Magic Transitions Final Texture"))
	UTexture2D* bpv__MagicxTransitionsxFinalxTexture__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Magic Transitions Mask Texture", Category="Magic Transitions", OverrideNativeName="Magic Transitions Mask Texture"))
	UTexture2D* bpv__MagicxTransitionsxMaskxTexture__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Magic Transitions Transition Amount", Category="Magic Transitions", OverrideNativeName="Magic Transitions Transition Amount"))
	float bpv__MagicxTransitionsxTransitionxAmount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Magic Transitions Flashing Intensity", Category="Magic Transitions", OverrideNativeName="Magic Transitions Flashing Intensity"))
	float bpv__MagicxTransitionsxFlashingxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Magic Transitions Flashing Tolerance", Category="Magic Transitions", OverrideNativeName="Magic Transitions Flashing Tolerance"))
	float bpv__MagicxTransitionsxFlashingxTolerance__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Magic Transitions Flashing Color", Category="Magic Transitions", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Magic Transitions Flashing Color"))
	FLinearColor bpv__MagicxTransitionsxFlashingxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Damage", Category="Screen Damage", OverrideNativeName="Screen Damage"))
	bool bpv__ScreenxDamage__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Screen Damage", Category="Screen Damage", OverrideNativeName="mScreenDamage"))
	UMaterial* bpv__mScreenDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Screen Damage", Category="Screen Damage", OverrideNativeName="iScreenDamage"))
	UMaterialInstanceDynamic* bpv__iScreenDamage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Damage Texture", Category="Screen Damage", OverrideNativeName="Screen Damage Texture"))
	UTexture2D* bpv__ScreenxDamagexTexture__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Damage Texture Blue", Category="Screen Damage", OverrideNativeName="Screen Damage Texture_Blue"))
	UTexture2D* bpv__ScreenxDamagexTexture_Blue__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Damage Intensity", Category="Screen Damage", OverrideNativeName="Screen Damage Intensity"))
	float bpv__ScreenxDamagexIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Damage Distortion", Category="Screen Damage", OverrideNativeName="Screen Damage Distortion"))
	float bpv__ScreenxDamagexDistortion__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Damage Tint", Category="Screen Damage", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Screen Damage Tint"))
	FLinearColor bpv__ScreenxDamagexTint__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Damage Edge Size", Category="Screen Damage", ClampMin="0", OverrideNativeName="Screen Damage Edge Size"))
	float bpv__ScreenxDamagexEdgexSize__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Damage Fading", Category="Screen Damage", ClampMin="0", OverrideNativeName="Screen Damage Fading"))
	float bpv__ScreenxDamagexFading__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals", Category="Screen Decals", OverrideNativeName="Screen Decals"))
	bool bpv__ScreenxDecals__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Screen Decals", Category="Screen Decals", OverrideNativeName="mScreenDecals"))
	UMaterial* bpv__mScreenDecals__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Screen Decals", Category="Screen Decals", OverrideNativeName="iScreenDecals"))
	UMaterialInstanceDynamic* bpv__iScreenDecals__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Decals Slot 1 - Texture", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Texture"))
	UTexture2D* bpv__ScreenxDecalsxSlotx1xxxTexture__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Distortion", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Distortion"))
	float bpv__ScreenxDecalsxSlotx1xxxDistortion__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Intensity", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Intensity"))
	float bpv__ScreenxDecalsxSlotx1xxxIntensity__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Position X", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Position X"))
	float bpv__ScreenxDecalsxSlotx1xxxPositionxX__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Position Y", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Position Y"))
	float bpv__ScreenxDecalsxSlotx1xxxPositionxY__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Rotation", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Rotation"))
	float bpv__ScreenxDecalsxSlotx1xxxRotation__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 1 - Size", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 1 - Size"))
	float bpv__ScreenxDecalsxSlotx1xxxSize__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Decals Slot 2 - Texture", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Texture"))
	UTexture2D* bpv__ScreenxDecalsxSlotx2xxxTexture__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Distortion", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Distortion"))
	float bpv__ScreenxDecalsxSlotx2xxxDistortion__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Intensity", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Intensity"))
	float bpv__ScreenxDecalsxSlotx2xxxIntensity__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Position X", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Position X"))
	float bpv__ScreenxDecalsxSlotx2xxxPositionxX__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Position Y", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Position Y"))
	float bpv__ScreenxDecalsxSlotx2xxxPositionxY__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Rotation", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Rotation"))
	float bpv__ScreenxDecalsxSlotx2xxxRotation__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 2 - Size", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 2 - Size"))
	float bpv__ScreenxDecalsxSlotx2xxxSize__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Decals Slot 3 - Texture", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Texture"))
	UTexture2D* bpv__ScreenxDecalsxSlotx3xxxTexture__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Distortion", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Distortion"))
	float bpv__ScreenxDecalsxSlotx3xxxDistortion__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Intensity", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Intensity"))
	float bpv__ScreenxDecalsxSlotx3xxxIntensity__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Position X", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Position X"))
	float bpv__ScreenxDecalsxSlotx3xxxPositionxX__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Position Y", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Position Y"))
	float bpv__ScreenxDecalsxSlotx3xxxPositionxY__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Rotation", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Rotation"))
	float bpv__ScreenxDecalsxSlotx3xxxRotation__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 3 - Size", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 3 - Size"))
	float bpv__ScreenxDecalsxSlotx3xxxSize__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Decals Slot 4 - Texture", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Texture"))
	UTexture2D* bpv__ScreenxDecalsxSlotx4xxxTexture__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Distortion", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Distortion"))
	float bpv__ScreenxDecalsxSlotx4xxxDistortion__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Intensity", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Intensity"))
	float bpv__ScreenxDecalsxSlotx4xxxIntensity__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Position X", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Position X"))
	float bpv__ScreenxDecalsxSlotx4xxxPositionxX__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Position Y", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Position Y"))
	float bpv__ScreenxDecalsxSlotx4xxxPositionxY__pfTTTTGTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Rotation", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Rotation"))
	float bpv__ScreenxDecalsxSlotx4xxxRotation__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Decals Slot 4 - Size", Category="Screen Decals", OverrideNativeName="Screen Decals Slot 4 - Size"))
	float bpv__ScreenxDecalsxSlotx4xxxSize__pfTTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sharpen", Category="Sharpen", tooltip, OverrideNativeName="Sharpen"))
	bool bpv__Sharpen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Sharpen", Category="Sharpen", OverrideNativeName="mSharpen"))
	UMaterial* bpv__mSharpen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Sharpen", Category="Sharpen", OverrideNativeName="iSharpen"))
	UMaterialInstanceDynamic* bpv__iSharpen__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sharpen Value", Category="Sharpen", ClampMin="0", ClampMax="3", UIMax="3", UIMin="0", OverrideNativeName="Sharpen Value"))
	float bpv__SharpenxValue__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading", Category="Toon Shading", tooltip, OverrideNativeName="Toon Shading"))
	bool bpv__ToonxShading__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Toon Shading", Category="Toon Shading", OverrideNativeName="mToonShading"))
	UMaterial* bpv__mToonShading__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Toon Shading", Category="Toon Shading", OverrideNativeName="iToonShading"))
	UMaterialInstanceDynamic* bpv__iToonShading__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading Use Diffuse Buffer", Category="Toon Shading", tooltip, OverrideNativeName="Toon Shading Use Diffuse Buffer"))
	bool bpv__ToonxShadingxUsexDiffusexBuffer__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading Details", Category="Toon Shading", OverrideNativeName="Toon Shading Details"))
	float bpv__ToonxShadingxDetails__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading Fading ", Category="Toon Shading", OverrideNativeName="Toon Shading Fading "))
	float bpv__ToonxShadingxFadingx__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading Size", Category="Toon Shading", OverrideNativeName="Toon Shading Size"))
	float bpv__ToonxShadingxSize__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading Sobel Strength", Category="Toon Shading", OverrideNativeName="Toon Shading Sobel Strength"))
	float bpv__ToonxShadingxSobelxStrength__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares", Category="Anamorphic Lens Flares", tooltip, OverrideNativeName="Anamorphic Lens Flares"))
	bool bpv__AnamorphicxLensxFlares__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Anamorphic Lens Flares", Category="Anamorphic Lens Flares", OverrideNativeName="mAnamorphicLensFlares"))
	UMaterial* bpv__mAnamorphicLensFlares__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Anamorphic Lens Flares", Category="Anamorphic Lens Flares", OverrideNativeName="iAnamorphicLensFlares"))
	UMaterialInstanceDynamic* bpv__iAnamorphicLensFlares__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Linear Color", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Linear Color"))
	float bpv__AnamorphicxLensxFlaresxLinearxColor__pfTTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Exposure Scale", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Exposure Scale"))
	float bpv__AnamorphicxLensxFlaresxExposurexScale__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Threshold", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Threshold"))
	float bpv__AnamorphicxLensxFlaresxThreshold__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Intensity", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Intensity"))
	float bpv__AnamorphicxLensxFlaresxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Steps", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Steps"))
	float bpv__AnamorphicxLensxFlaresxSteps__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Length", Category="Anamorphic Lens Flares", OverrideNativeName="Anamorphic Lens Flares Length"))
	float bpv__AnamorphicxLensxFlaresxLength__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares Tint", Category="Anamorphic Lens Flares", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Anamorphic Lens Flares Tint"))
	FLinearColor bpv__AnamorphicxLensxFlaresxTint__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost", Category="Frost", tooltip, OverrideNativeName="Frost"))
	bool bpv__Frost__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Frost", Category="Frost", OverrideNativeName="mFrost"))
	UMaterial* bpv__mFrost__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Frost", Category="Frost", OverrideNativeName="iFrost"))
	UMaterialInstanceDynamic* bpv__iFrost__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Frost Texture", Category="Frost", OverrideNativeName="Frost Texture"))
	UTexture2D* bpv__FrostxTexture__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost Colorization", Category="Frost", OverrideNativeName="Frost Colorization"))
	float bpv__FrostxColorization__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost Distortion Strength", Category="Frost", ClampMin="0", OverrideNativeName="Frost Distortion Strength"))
	float bpv__FrostxDistortionxStrength__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost Visible Area", Category="Frost", ClampMin="0.06", ClampMax="1", UIMax="1", UIMin="0.06", OverrideNativeName="Frost Visible Area"))
	float bpv__FrostxVisiblexArea__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="ASCII Color Multiplier", Category="ASCII", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="ASCII Color Multiplier"))
	FLinearColor bpv__ASCIIxColorxMultiplier__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon", Category="Neon", tooltip, OverrideNativeName="Neon"))
	bool bpv__Neon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Neon", Category="Neon", OverrideNativeName="mNeon"))
	UMaterial* bpv__mNeon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Neon", Category="Neon", OverrideNativeName="iNeon"))
	UMaterialInstanceDynamic* bpv__iNeon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon Color", Category="Neon", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Neon Color"))
	FLinearColor bpv__NeonxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon Background Color", Category="Neon", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Neon Background Color"))
	FLinearColor bpv__NeonxBackgroundxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon Power", Category="Neon", OverrideNativeName="Neon Power"))
	float bpv__NeonxPower__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon Noise", Category="Neon", ClampMin="0", OverrideNativeName="Neon Noise"))
	float bpv__NeonxNoise__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon Noise Speed", Category="Neon", ClampMin="0", OverrideNativeName="Neon Noise Speed"))
	float bpv__NeonxNoisexSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter", Category="Custom Depth Highlighter", tooltip, OverrideNativeName="Custom Depth Highlighter"))
	bool bpv__CustomxDepthxHighlighter__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Custom Depth Highlighter", Category="Custom Depth Highlighter", OverrideNativeName="mCustomDepthHighlighter"))
	UMaterial* bpv__mCustomDepthHighlighter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Custom Depth Highlighter", Category="Custom Depth Highlighter", OverrideNativeName="iCustomDepthHighlighter"))
	UMaterialInstanceDynamic* bpv__iCustomDepthHighlighter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter Highlight Color", Category="Custom Depth Highlighter", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Custom Depth Highlighter Highlight Color"))
	FLinearColor bpv__CustomxDepthxHighlighterxHighlightxColor__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter Highlight Opacity", Category="Custom Depth Highlighter", OverrideNativeName="Custom Depth Highlighter Highlight Opacity"))
	float bpv__CustomxDepthxHighlighterxHighlightxOpacity__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (Clip)", Category="Custom Depth Highlighter (Clip)", tooltip, OverrideNativeName="Custom Depth Highlighter (Clip)"))
	bool bpv__CustomxDepthxHighlighterxxClipx__pfTTTLK;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Custom Depth Highlighter Clip", Category="Custom Depth Highlighter (Clip)", OverrideNativeName="mCustomDepthHighlighterClip"))
	UMaterial* bpv__mCustomDepthHighlighterClip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Custom Depth Highlighter Clip", Category="Custom Depth Highlighter (Clip)", OverrideNativeName="iCustomDepthHighlighterClip"))
	UMaterialInstanceDynamic* bpv__iCustomDepthHighlighterClip__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (C) Highlight Color", Category="Custom Depth Highlighter (Clip)", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Custom Depth Highlighter (C) Highlight Color"))
	FLinearColor bpv__CustomxDepthxHighlighterxxCxxHighlightxColor__pfTTTLKTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (C) Highlight Opacity", Category="Custom Depth Highlighter (Clip)", OverrideNativeName="Custom Depth Highlighter (C) Highlight Opacity"))
	float bpv__CustomxDepthxHighlighterxxCxxHighlightxOpacity__pfTTTLKTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Edge Detect Threshold", Category="Edge Detect", UIMin="0.001", UIMax="10", ClampMax="10", ClampMin="0.001", OverrideNativeName="Edge Detect Threshold"))
	float bpv__EdgexDetectxThreshold__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Scratches Noising", Category="Scratches", UIMin="0", ClampMin="0", OverrideNativeName="Scratches Noising"))
	float bpv__ScratchesxNoising__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enabled", Category="Chameleon Settings", OverrideNativeName="Enabled"))
	bool bpv__Enabled__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unbound", Category="Chameleon Settings", OverrideNativeName="Unbound"))
	bool bpv__Unbound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Materials", Category="Chameleon Settings", OverrideNativeName="AllMaterials"))
	TArray<UMaterial*> bpv__AllMaterials__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Layer 3 Noise", Category="Screen drops", OverrideNativeName="Screen Drops Layer 3 Noise"))
	float bpv__ScreenxDropsxLayerx3xNoise__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Diffuse Color", Category="Screen drops", OverrideNativeName="Screen Drops Diffuse Color"))
	FLinearColor bpv__ScreenxDropsxDiffusexColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Splashes Amount", Category="Screen drops", ClampMax="10", UIMax="10", UIMin="0", ClampMin="0", OverrideNativeName="Screen Drops Splashes Amount"))
	float bpv__ScreenxDropsxSplashesxAmount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Splashes Tiling", Category="Screen drops", OverrideNativeName="Screen Drops Splashes Tiling"))
	float bpv__ScreenxDropsxSplashesxTiling__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Splashes Intensity", Category="Screen drops", OverrideNativeName="Screen Drops Splashes Intensity"))
	float bpv__ScreenxDropsxSplashesxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Bump", Category="Screen drops", OverrideNativeName="Screen Drops Bump"))
	float bpv__ScreenxDropsxBump__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform", Category="2D Transform", tooltip, OverrideNativeName="2D Transform"))
	bool bpv__2DxTransform__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M 2DTransform", Category="2D Transform", OverrideNativeName="m2DTransform"))
	UMaterial* bpv__m2DTransform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I 2DTransform", Category="2D Transform", OverrideNativeName="i2DTransform"))
	UMaterialInstanceDynamic* bpv__i2DTransform__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope", Category="Kaleidoscope", tooltip, OverrideNativeName="Kaleidoscope"))
	bool bpv__Kaleidoscope__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Kaleidoscope", Category="Kaleidoscope", OverrideNativeName="mKaleidoscope"))
	UMaterial* bpv__mKaleidoscope__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Kaleidoscope", Category="Kaleidoscope", OverrideNativeName="iKaleidoscope"))
	UMaterialInstanceDynamic* bpv__iKaleidoscope__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Letterboxing", Category="Letterboxing", tooltip, OverrideNativeName="Letterboxing"))
	bool bpv__Letterboxing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Letterboxing", Category="Letterboxing", OverrideNativeName="mLetterboxing"))
	UMaterial* bpv__mLetterboxing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Letterboxing", Category="Letterboxing", OverrideNativeName="iLetterboxing"))
	UMaterialInstanceDynamic* bpv__iLetterboxing__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow", Category="Snow", tooltip, OverrideNativeName="Snow"))
	bool bpv__Snow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Snow", Category="Snow", OverrideNativeName="mSnow"))
	UMaterial* bpv__mSnow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Snow", Category="Snow", OverrideNativeName="iSnow"))
	UMaterialInstanceDynamic* bpv__iSnow__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Anchor Point (X)", Category="2D Transform", OverrideNativeName="2D Transform Anchor Point (X)"))
	float bpv__2DxTransformxAnchorxPointxxXx__pfTTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Anchor Point (Y)", Category="2D Transform", OverrideNativeName="2D Transform Anchor Point (Y)"))
	float bpv__2DxTransformxAnchorxPointxxYx__pfTTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Rotate", Category="2D Transform", OverrideNativeName="2D Transform Rotate"))
	float bpv__2DxTransformxRotate__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Pan (X)", Category="2D Transform", OverrideNativeName="2D Transform Pan (X)"))
	float bpv__2DxTransformxPanxxXx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Pan (Y)", Category="2D Transform", OverrideNativeName="2D Transform Pan (Y)"))
	float bpv__2DxTransformxPanxxYx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Scale (X)", Category="2D Transform", OverrideNativeName="2D Transform Scale (X)"))
	float bpv__2DxTransformxScalexxXx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Scale (Y)", Category="2D Transform", OverrideNativeName="2D Transform Scale (Y)"))
	float bpv__2DxTransformxScalexxYx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Tiled", Category="2D Transform", tooltip, OverrideNativeName="2D Transform Tiled"))
	bool bpv__2DxTransformxTiled__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope Amount", Category="Kaleidoscope", ClampMin="1", UIMin="1", OverrideNativeName="Kaleidoscope Amount"))
	int32 bpv__KaleidoscopexAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope Spherical Distortion", Category="Kaleidoscope", OverrideNativeName="Kaleidoscope SphericalDistortion"))
	float bpv__KaleidoscopexSphericalDistortion__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope Warp", Category="Kaleidoscope", OverrideNativeName="Kaleidoscope Warp"))
	float bpv__KaleidoscopexWarp__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope FMul", Category="Kaleidoscope", OverrideNativeName="Kaleidoscope FMul"))
	float bpv__KaleidoscopexFMul__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Letterboxing Texture", Category="Letterboxing", OverrideNativeName="Letterboxing Texture"))
	UTexture2D* bpv__LetterboxingxTexture__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Letterboxing Size", Category="Letterboxing", ClampMin="0", ClampMax="1", UIMax="1", UIMin="0", OverrideNativeName="Letterboxing Size"))
	float bpv__LetterboxingxSize__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Letterboxing Horizontal", Category="Letterboxing", ClampMin="0", UIMin="0", OverrideNativeName="Letterboxing Horizontal"))
	bool bpv__LetterboxingxHorizontal__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Letterboxing Vertical", Category="Letterboxing", ClampMin="0", UIMin="0", OverrideNativeName="Letterboxing Vertical"))
	bool bpv__LetterboxingxVertical__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow Amount", Category="Snow", ClampMin="0", UIMin="0", OverrideNativeName="Snow Amount"))
	float bpv__SnowxAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow Distortion", Category="Snow", ClampMin="0", ClampMax="1", UIMax="1", UIMin="0", OverrideNativeName="Snow Distortion"))
	float bpv__SnowxDistortion__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow Size", Category="Snow", ClampMin="0", UIMin="0", OverrideNativeName="Snow Size"))
	float bpv__SnowxSize__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow Speed (X)", Category="Snow", OverrideNativeName="Snow Speed (X)"))
	float bpv__SnowxSpeedxxXx__pfTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow Speed (Y)", Category="Snow", OverrideNativeName="Snow Speed (Y)"))
	float bpv__SnowxSpeedxxYx__pfTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Drawing Animation Speed", Category="Drawing", ClampMin="0", ClampMax="20", UIMax="20", UIMin="0", OverrideNativeName="Drawing Animation Speed"))
	float bpv__DrawingxAnimationxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Distance Fog Edge Sharpness", Category="Distance Fog", UIMin="0", ClampMin="0", OverrideNativeName="Distance Fog Edge Sharpness"))
	float bpv__DistancexFogxEdgexSharpness__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Drops Diffuse Intensity", Category="Screen drops", UIMin="0", ClampMin="0", OverrideNativeName="Screen Drops Diffuse Intensity"))
	float bpv__ScreenxDropsxDiffusexIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash", Category="World Splash", tooltip, OverrideNativeName="World Splash"))
	bool bpv__WorldxSplash__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M World Splash", Category="World Splash", OverrideNativeName="mWorldSplash"))
	UMaterial* bpv__mWorldSplash__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I World Splash", Category="World Splash", OverrideNativeName="iWorldSplash"))
	UMaterialInstanceDynamic* bpv__iWorldSplash__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash Distort", Category="World Splash", ClampMin="0", UIMin="0", OverrideNativeName="World Splash Distort"))
	float bpv__WorldxSplashxDistort__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash Smoothness", Category="World Splash", ClampMin="0", UIMin="0", OverrideNativeName="World Splash Smoothness"))
	float bpv__WorldxSplashxSmoothness__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash Tiling", Category="World Splash", ClampMin="0", UIMin="0", OverrideNativeName="World Splash Tiling"))
	float bpv__WorldxSplashxTiling__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash Color Tint", Category="World Splash", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="World Splash Color Tint"))
	FLinearColor bpv__WorldxSplashxColorxTint__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Blur Samples", Category="Blur", UIMin="3", ClampMin="3", OverrideNativeName="Blur Samples"))
	int32 bpv__BlurxSamples__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost Color", Category="Frost", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Frost Color"))
	FLinearColor bpv__FrostxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Pre Multiplier", Category="Comic", UIMin="1", UIMax="20", ClampMax="20", ClampMin="1", OverrideNativeName="Comic PreMultiplier"))
	float bpv__ComicxPreMultiplier__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Desaturation", Category="Comic", UIMin="0", UIMax="1", ClampMax="1", ClampMin="0", OverrideNativeName="Comic Desaturation"))
	float bpv__ComicxDesaturation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch", Category="World Glitch", tooltip, OverrideNativeName="World Glitch"))
	bool bpv__WorldxGlitch__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M World Glitch", Category="World Glitch", OverrideNativeName="mWorldGlitch"))
	UMaterial* bpv__mWorldGlitch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I World Glitch", Category="World Glitch", OverrideNativeName="iWorldGlitch"))
	UMaterialInstanceDynamic* bpv__iWorldGlitch__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Animated", Category="World Glitch", tooltip, OverrideNativeName="World Glitch Animated"))
	bool bpv__WorldxGlitchxAnimated__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Animation Speed", Category="World Glitch", ClampMin="0", UIMin="0", OverrideNativeName="World Glitch Animation Speed"))
	float bpv__WorldxGlitchxAnimationxSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Distance", Category="World Glitch", ClampMin="0", UIMin="0", OverrideNativeName="World Glitch Distance"))
	float bpv__WorldxGlitchxDistance__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Distance Sharpness", Category="World Glitch", ClampMin="0", UIMin="0", OverrideNativeName="World Glitch Distance Sharpness"))
	float bpv__WorldxGlitchxDistancexSharpness__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Phase", Category="World Glitch", ClampMin="0", ClampMax="1", UIMax="1", UIMin="0", OverrideNativeName="World Glitch Phase"))
	float bpv__WorldxGlitchxPhase__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Power", Category="World Glitch", ClampMin="0", UIMin="0", OverrideNativeName="World Glitch Power"))
	float bpv__WorldxGlitchxPower__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Grid Position", Category="World Glitch", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="World Glitch Grid Position"))
	FVector bpv__WorldxGlitchxGridxPosition__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch Grid Size", Category="World Glitch", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="World Glitch Grid Size"))
	FVector bpv__WorldxGlitchxGridxSize__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize", Category="Digitize", tooltip, OverrideNativeName="Digitize"))
	bool bpv__Digitize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Digitize", Category="Digitize", OverrideNativeName="mDigitize"))
	UMaterial* bpv__mDigitize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Digitize", Category="Digitize", OverrideNativeName="iDigitize"))
	UMaterialInstanceDynamic* bpv__iDigitize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Color", Category="Digitize", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Digitize Cell Color"))
	FLinearColor bpv__DigitizexCellxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Position", Category="Digitize", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Digitize Cell Position"))
	FVector bpv__DigitizexCellxPosition__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Position Over Time", Category="Digitize", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Digitize Cell Position Over Time"))
	FVector bpv__DigitizexCellxPositionxOverxTime__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Distance", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Distance"))
	float bpv__DigitizexDistance__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Distance Sharpness", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Distance Sharpness"))
	float bpv__DigitizexDistancexSharpness__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Size", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Cell Size"))
	float bpv__DigitizexCellxSize__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Color Multiplier", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Cell Color Multiplier"))
	float bpv__DigitizexCellxColorxMultiplier__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Cell Distortion", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Cell Distortion"))
	float bpv__DigitizexCellxDistortion__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize Background Color Multiplier", Category="Digitize", ClampMin="0", UIMin="0", OverrideNativeName="Digitize Background Color Multiplier"))
	float bpv__DigitizexBackgroundxColorxMultiplier__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alarm", Category="Alarm", tooltip, OverrideNativeName="Alarm"))
	bool bpv__Alarm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Alarm", Category="Alarm", OverrideNativeName="mAlarm"))
	UMaterial* bpv__mAlarm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Alarm", Category="Alarm", OverrideNativeName="iAlarm"))
	UMaterialInstanceDynamic* bpv__iAlarm__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alarm Color", Category="Alarm", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Alarm Color"))
	FLinearColor bpv__AlarmxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alarm Speed", Category="Alarm", ClampMin="0", UIMin="0", OverrideNativeName="Alarm Speed"))
	float bpv__AlarmxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch", Category="Sketch", tooltip, OverrideNativeName="Sketch"))
	bool bpv__Sketch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Sketch", Category="Sketch", OverrideNativeName="mSketch"))
	UMaterial* bpv__mSketch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Sketch", Category="Sketch", OverrideNativeName="iSketch"))
	UMaterialInstanceDynamic* bpv__iSketch__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch Color", Category="Sketch", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Sketch Color"))
	FLinearColor bpv__SketchxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch Background Color", Category="Sketch", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Sketch Background Color"))
	FLinearColor bpv__SketchxBackgroundxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch Power", Category="Sketch", ClampMin="0", ClampMax="1", UIMax="1", UIMin="0", OverrideNativeName="Sketch Power"))
	float bpv__SketchxPower__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch Pattern Rotation", Category="Sketch", ClampMin="0", UIMin="0", OverrideNativeName="Sketch Pattern Rotation"))
	float bpv__SketchxPatternxRotation__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch Pattern Speed", Category="Sketch", ClampMin="0", UIMin="0", OverrideNativeName="Sketch Pattern Speed"))
	float bpv__SketchxPatternxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter Outline Color", Category="Custom Depth Highlighter", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Custom Depth Highlighter Outline Color"))
	FLinearColor bpv__CustomxDepthxHighlighterxOutlinexColor__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter Outline Opacity", Category="Custom Depth Highlighter", OverrideNativeName="Custom Depth Highlighter Outline Opacity"))
	float bpv__CustomxDepthxHighlighterxOutlinexOpacity__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (C) Outline Color", Category="Custom Depth Highlighter (Clip)", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Custom Depth Highlighter (C) Outline Color"))
	FLinearColor bpv__CustomxDepthxHighlighterxxCxxOutlinexColor__pfTTTLKTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (C) Outline Opacity", Category="Custom Depth Highlighter (Clip)", OverrideNativeName="Custom Depth Highlighter (C) Outline Opacity"))
	float bpv__CustomxDepthxHighlighterxxCxxOutlinexOpacity__pfTTTLKTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Wired", Category="Wired", tooltip, OverrideNativeName="Wired"))
	bool bpv__Wired__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Wired", Category="Wired", OverrideNativeName="iWired"))
	UMaterialInstanceDynamic* bpv__iWired__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Wired", Category="Wired", OverrideNativeName="mWired"))
	UMaterial* bpv__mWired__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Wired Color", Category="Wired", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Wired Color"))
	FLinearColor bpv__WiredxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Wired Power", Category="Wired", ClampMin="0", UIMin="0", OverrideNativeName="Wired Power"))
	float bpv__WiredxPower__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mosaic - Advanced", Category="Mosaic", OverrideNativeName="Mosaic - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MosaicxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drug - Advanced", Category="Drug", OverrideNativeName="Drug - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DrugxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Alcohol - Advanced", Category="Alcohol", OverrideNativeName="Alcohol - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__AlcoholxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pixel Dissolve - Advanced", Category="Pixel Dissolve", OverrideNativeName="Pixel Dissolve - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__PixelxDissolvexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Channel Clamper - Advanced", Category="Channel Clamper", OverrideNativeName="Channel Clamper - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ChannelxClamperxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Channel Swapper - Advanced", Category="Channel Swapper", OverrideNativeName="Channel Swapper - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ChannelxSwapperxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bleach Bypass - Advanced", Category="Bleach Bypass", OverrideNativeName="Bleach Bypass - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__BleachxBypassxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blur - Advanced", Category="Blur", OverrideNativeName="Blur - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__BlurxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="ASCII Pre Multiplier", Category="ASCII", OverrideNativeName="ASCII PreMultiplier"))
	float bpv__ASCIIxPreMultiplier__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ASCII - Advanced", Category="ASCII", OverrideNativeName="ASCII - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ASCIIxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Colorize - Advanced", Category="Colorize", OverrideNativeName="Colorize - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ColorizexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Edge Detect - Advanced", Category="Edge Detect", OverrideNativeName="Edge Detect - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__EdgexDetectxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Emboss - Advanced", Category="Emboss", OverrideNativeName="Emboss - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__EmbossxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hard Emboss - Advanced", Category="Hard Emboss", OverrideNativeName="Hard Emboss - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__HardxEmbossxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Grid Distortion Power", Category="Glitch", OverrideNativeName="Glitch Grid Distortion Power"))
	float bpv__GlitchxGridxDistortionxPower__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Grid Distortion Size", Category="Glitch", OverrideNativeName="Glitch Grid Distortion Size"))
	float bpv__GlitchxGridxDistortionxSize__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Glitch Grid Distortion Speed", Category="Glitch", OverrideNativeName="Glitch Grid Distortion Speed"))
	float bpv__GlitchxGridxDistortionxSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Glitch - Advanced", Category="Glitch", OverrideNativeName="Glitch - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__GlitchxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Monitor Effects Tiled", Category="Monitor Effects", OverrideNativeName="Monitor Effects Tiled"))
	bool bpv__MonitorxEffectsxTiled__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Monitor Effects - Advanced", Category="Monitor Effects", OverrideNativeName="Monitor Effects - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MonitorxEffectsxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hue Panner - Advanced", Category="Hue Panner", OverrideNativeName="Hue Panner - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__HuexPannerxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Monochrome - Advanced", Category="Monochrome", OverrideNativeName="Monochrome - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MonochromexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Radial Blur Center", Category="Radial Blur", OverrideNativeName="Radial Blur Center"))
	FVector2D bpv__RadialxBlurxCenter__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Radial Blur Sample Offset", Category="Radial Blur", OverrideNativeName="Radial Blur Sample Offset"))
	FVector2D bpv__RadialxBlurxSamplexOffset__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Radial Blur - Advanced", Category="Radial Blur", OverrideNativeName="Radial Blur - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__RadialxBlurxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scratches - Advanced", Category="Scratches", OverrideNativeName="Scratches - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScratchesxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Waves - Advanced", Category="Screen Waves", OverrideNativeName="Screen Waves - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScreenxWavesxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distance Fog - Advanced", Category="Distance Fog", OverrideNativeName="Distance Fog - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DistancexFogxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Drops - Advanced", Category="Screen drops", OverrideNativeName="Screen Drops - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScreenxDropsxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Invert - Advanced", Category="Invert", OverrideNativeName="Invert - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__InvertxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Iridescent - Advanced", Category="Iridescent", OverrideNativeName="Iridescent - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__IridescentxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kuwahara - Advanced", Category="Kuwahara", OverrideNativeName="Kuwahara - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__KuwaharaxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pulse - Advanced", Category="Pulse", OverrideNativeName="Pulse - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__PulsexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Squares - Advanced", Category="Squares", OverrideNativeName="Squares - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SquaresxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiles - Advanced", Category="Tiles", OverrideNativeName="Tiles - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__TilesxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TV Noise - Advanced", Category="TV Noise", OverrideNativeName="TV Noise - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__TVxNoisexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Circles - Advanced", Category="Circles", OverrideNativeName="Circles - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__CirclesxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sonar - Advanced", Category="Sonar", OverrideNativeName="Sonar - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SonarxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Distance Distortion - Advanced", Category="Distance Distortion", OverrideNativeName="Distance Distortion - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DistancexDistortionxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawing - Advanced", Category="Drawing", OverrideNativeName="Drawing - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DrawingxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Magic Transitions - Advanced", Category="Magic Transitions", OverrideNativeName="Magic Transitions - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MagicxTransitionsxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Damage - Advanced", Category="Screen Damage", OverrideNativeName="Screen Damage - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScreenxDamagexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Screen Decals - Advanced", Category="Screen Decals", OverrideNativeName="Screen Decals - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScreenxDecalsxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sharpen - Advanced", Category="Sharpen", tooltip, OverrideNativeName="Sharpen - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SharpenxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Toon Shading - Advanced", Category="Toon Shading", tooltip, OverrideNativeName="Toon Shading - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ToonxShadingxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Anamorphic Lens Flares - Advanced", Category="Anamorphic Lens Flares", tooltip, OverrideNativeName="Anamorphic Lens Flares - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__AnamorphicxLensxFlaresxxxAdvanced__pfTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Frost - Advanced", Category="Frost", tooltip, OverrideNativeName="Frost - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__FrostxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Neon - Advanced", Category="Neon", tooltip, OverrideNativeName="Neon - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__NeonxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter - Advanced", Category="Custom Depth Highlighter", tooltip, OverrideNativeName="Custom Depth Highlighter - Advanced"))
	FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 bpv__CustomxDepthxHighlighterxxxAdvanced__pfTTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Custom Depth Highlighter (Clip) - Advanced", Category="Custom Depth Highlighter (Clip)", tooltip, OverrideNativeName="Custom Depth Highlighter (Clip) - Advanced"))
	FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 bpv__CustomxDepthxHighlighterxxClipxxxxAdvanced__pfTTTLKTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform Background Color", Category="2D Transform", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="2D Transform Background Color"))
	FLinearColor bpv__2DxTransformxBackgroundxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="2D Transform - Advanced", Category="2D Transform", tooltip, OverrideNativeName="2D Transform - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__2DxTransformxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Kaleidoscope - Advanced", Category="Kaleidoscope", tooltip, OverrideNativeName="Kaleidoscope - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__KaleidoscopexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Letterboxing - Advanced", Category="Letterboxing", tooltip, OverrideNativeName="Letterboxing - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__LetterboxingxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Snow - Advanced", Category="Snow", tooltip, OverrideNativeName="Snow - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SnowxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Splash - Advanced", Category="World Splash", tooltip, OverrideNativeName="World Splash - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__WorldxSplashxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="World Glitch - Advanced", Category="World Glitch", tooltip, OverrideNativeName="World Glitch - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__WorldxGlitchxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Digitize - Advanced", Category="Digitize", tooltip, OverrideNativeName="Digitize - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DigitizexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Alarm - Advanced", Category="Alarm", tooltip, OverrideNativeName="Alarm - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__AlarmxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Sketch - Advanced", Category="Sketch", tooltip, OverrideNativeName="Sketch - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SketchxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Wired - Advanced", Category="Wired", tooltip, OverrideNativeName="Wired - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__WiredxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Pattern Intensity", Category="Comic", UIMin="0", UIMax="1", ClampMax="1", ClampMin="0", OverrideNativeName="Comic Pattern Intensity"))
	float bpv__ComicxPatternxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Pattern Line Count", Category="Comic", UIMin="1", ClampMin="1", OverrideNativeName="Comic Pattern Line Count"))
	int32 bpv__ComicxPatternxLinexCount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Comic Pattern Rotation", Category="Comic", UIMin="0", ClampMin="0", OverrideNativeName="Comic Pattern Rotation"))
	float bpv__ComicxPatternxRotation__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Comic - Advanced", Category="Comic", OverrideNativeName="Comic - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ComicxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette", Category="Actor Featurette", tooltip, OverrideNativeName="Actor Featurette"))
	bool bpv__ActorxFeaturette__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Actor Featurette", Category="Actor Featurette", OverrideNativeName="mActorFeaturette"))
	UMaterial* bpv__mActorFeaturette__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Actor Featurette", Category="Actor Featurette", OverrideNativeName="iActorFeaturette"))
	UMaterialInstanceDynamic* bpv__iActorFeaturette__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Background Multiplier", Category="Actor Featurette", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Actor Featurette Background Multiplier"))
	FLinearColor bpv__ActorxFeaturettexBackgroundxMultiplier__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Background Desaturation", Category="Actor Featurette", ClampMin="0", UIMin="0", OverrideNativeName="Actor Featurette Background Desaturation"))
	float bpv__ActorxFeaturettexBackgroundxDesaturation__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Foreground Multiplier", Category="Actor Featurette", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Actor Featurette Foreground Multiplier"))
	FLinearColor bpv__ActorxFeaturettexForegroundxMultiplier__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Foreground Saturation", Category="Actor Featurette", ClampMin="0", UIMin="0", OverrideNativeName="Actor Featurette Foreground Saturation"))
	float bpv__ActorxFeaturettexForegroundxSaturation__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Blur Amount", Category="Actor Featurette", ClampMin="0", UIMin="0", OverrideNativeName="Actor Featurette Blur Amount"))
	float bpv__ActorxFeaturettexBlurxAmount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Blur Samples", Category="Actor Featurette", ClampMin="3", UIMin="3", OverrideNativeName="Actor Featurette Blur Samples"))
	int32 bpv__ActorxFeaturettexBlurxSamples__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette Stencil Mask", Category="Actor Featurette", ClampMin="0", UIMin="0", OverrideNativeName="Actor Featurette Stencil Mask"))
	int32 bpv__ActorxFeaturettexStencilxMask__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Actor Featurette - Advanced", Category="Actor Featurette", tooltip, OverrideNativeName="Actor Featurette - Advanced"))
	FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 bpv__ActorxFeaturettexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected", Category="Infected", tooltip, OverrideNativeName="Infected"))
	bool bpv__Infected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Infected", Category="Infected", OverrideNativeName="mInfected"))
	UMaterial* bpv__mInfected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Infected", Category="Infected", OverrideNativeName="iInfected"))
	UMaterialInstanceDynamic* bpv__iInfected__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected Distortion Amount", Category="Infected", ClampMin="0", UIMin="0", OverrideNativeName="Infected Distortion Amount"))
	float bpv__InfectedxDistortionxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected Smoothness", Category="Infected", ClampMin="0", UIMin="0", OverrideNativeName="Infected Smoothness"))
	float bpv__InfectedxSmoothness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected Speed", Category="Infected", ClampMin="0", UIMin="0", OverrideNativeName="Infected Speed"))
	float bpv__InfectedxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected Transform Z", Category="Infected", ClampMin="0", UIMin="0", OverrideNativeName="Infected TransformZ"))
	float bpv__InfectedxTransformZ__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Infected - Advanced", Category="Infected", tooltip, OverrideNativeName="Infected - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__InfectedxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Colored AO", Category="Colored AO", tooltip, OverrideNativeName="Colored AO"))
	bool bpv__ColoredxAO__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Colored AO", Category="Colored AO", OverrideNativeName="mColoredAO"))
	UMaterial* bpv__mColoredAO__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Colored AO", Category="Colored AO", OverrideNativeName="iColoredAO"))
	UMaterialInstanceDynamic* bpv__iColoredAO__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Colored AO Color", Category="Colored AO", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Colored AO Color"))
	FLinearColor bpv__ColoredxAOxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Colored AO Intensity", Category="Colored AO", ClampMin="0", UIMin="0", OverrideNativeName="Colored AO Intensity"))
	float bpv__ColoredxAOxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Colored AO - Advanced", Category="Colored AO", tooltip, OverrideNativeName="Colored AO - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ColoredxAOxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Camera Shake", Category="Camera Shake", tooltip, OverrideNativeName="Camera Shake"))
	bool bpv__CameraxShake__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Camera Shake", Category="Camera Shake", OverrideNativeName="mCameraShake"))
	UMaterial* bpv__mCameraShake__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Camera Shake", Category="Camera Shake", OverrideNativeName="iCameraShake"))
	UMaterialInstanceDynamic* bpv__iCameraShake__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Camera Shake Power (X)", Category="Camera Shake", ClampMin="0", UIMin="0", OverrideNativeName="Camera Shake Power (X)"))
	float bpv__CameraxShakexPowerxxXx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Camera Shake Power (Y)", Category="Camera Shake", ClampMin="0", UIMin="0", OverrideNativeName="Camera Shake Power (Y)"))
	float bpv__CameraxShakexPowerxxYx__pfTTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Camera Shake Frequency", Category="Camera Shake", ClampMin="0", UIMin="0", OverrideNativeName="Camera Shake Frequency"))
	float bpv__CameraxShakexFrequency__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Camera Shake - Advanced", Category="Camera Shake", tooltip, OverrideNativeName="Camera Shake - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__CameraxShakexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball", Category="Disco Ball", tooltip, OverrideNativeName="Disco Ball"))
	bool bpv__DiscoxBall__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Disco Ball", Category="Disco Ball", OverrideNativeName="mDiscoBall"))
	UMaterial* bpv__mDiscoBall__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Disco Ball", Category="Disco Ball", OverrideNativeName="iDiscoBall"))
	UMaterialInstanceDynamic* bpv__iDiscoBall__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball WS Center", Category="Disco Ball", ClampMin="0", UIMin="0", OverrideNativeName="Disco Ball WS Center"))
	FVector3DN__pf2387075495 bpv__DiscoxBallxWSxCenter__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Color 1", Category="Disco Ball", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Disco Ball Color 1"))
	FLinearColor bpv__DiscoxBallxColorx1__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Color 2", Category="Disco Ball", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Disco Ball Color 2"))
	FLinearColor bpv__DiscoxBallxColorx2__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Block Scale", Category="Disco Ball", ClampMin="0", UIMin="0", OverrideNativeName="Disco Ball Block Scale"))
	FVector bpv__DiscoxBallxBlockxScale__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Block Distribution", Category="Disco Ball", ClampMin="0", UIMin="0", OverrideNativeName="Disco Ball Block Distribution"))
	float bpv__DiscoxBallxBlockxDistribution__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Rotation Speed", Category="Disco Ball", ClampMin="0", UIMin="0", OverrideNativeName="Disco Ball Rotation Speed"))
	float bpv__DiscoxBallxRotationxSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball Manual Rotation", Category="Disco Ball", ClampMin="0", UIMin="0", OverrideNativeName="Disco Ball Manual Rotation"))
	float bpv__DiscoxBallxManualxRotation__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Disco Ball - Advanced", Category="Disco Ball", tooltip, OverrideNativeName="Disco Ball - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DiscoxBallxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hazy Lights", Category="Hazy Lights", tooltip, OverrideNativeName="Hazy Lights"))
	bool bpv__HazyxLights__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Hazy Lights", Category="Hazy Lights", OverrideNativeName="mHazyLights"))
	UMaterial* bpv__mHazyLights__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Hazy Lights", Category="Hazy Lights", OverrideNativeName="iHazyLights"))
	UMaterialInstanceDynamic* bpv__iHazyLights__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hazy Lights Move Speed", Category="Hazy Lights", ClampMin="0", UIMin="0", OverrideNativeName="Hazy Lights Move Speed"))
	FVector2DN__pf2387075495 bpv__HazyxLightsxMovexSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hazy Lights Position", Category="Hazy Lights", ClampMin="0", UIMin="0", OverrideNativeName="Hazy Lights Position"))
	FVector2DN__pf2387075495 bpv__HazyxLightsxPosition__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Hazy Lights - Advanced", Category="Hazy Lights", tooltip, OverrideNativeName="Hazy Lights - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__HazyxLightsxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World", Category="Melted World", tooltip, OverrideNativeName="Melted World"))
	bool bpv__MeltedxWorld__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Melted World", Category="Melted World", OverrideNativeName="mMeltedWorld"))
	UMaterial* bpv__mMeltedWorld__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Melted World", Category="Melted World", OverrideNativeName="iMeltedWorld"))
	UMaterialInstanceDynamic* bpv__iMeltedWorld__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World Size", Category="Melted World", ClampMin="0", UIMin="0", OverrideNativeName="Melted World Size"))
	FVector bpv__MeltedxWorldxSize__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World Distance", Category="Melted World", ClampMin="0", UIMin="0", OverrideNativeName="Melted World Distance"))
	float bpv__MeltedxWorldxDistance__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World Power", Category="Melted World", ClampMin="0", UIMin="0", OverrideNativeName="Melted World Power"))
	float bpv__MeltedxWorldxPower__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World Sharpness", Category="Melted World", ClampMin="0", UIMin="0", OverrideNativeName="Melted World Sharpness"))
	float bpv__MeltedxWorldxSharpness__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Melted World - Advanced", Category="Melted World", tooltip, OverrideNativeName="Melted World - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MeltedxWorldxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color", Category="Selective Color", tooltip, OverrideNativeName="Selective Color"))
	bool bpv__SelectivexColor__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Selective Color", Category="Selective Color", OverrideNativeName="mSelectiveColor"))
	UMaterial* bpv__mSelectiveColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Selective Color", Category="Selective Color", OverrideNativeName="iSelectiveColor"))
	UMaterialInstanceDynamic* bpv__iSelectiveColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color Mask Color", Category="Selective Color", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Selective Color Mask Color"))
	FLinearColor bpv__SelectivexColorxMaskxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color Hue Tolerance", Category="Selective Color", ClampMin="0", UIMin="0", OverrideNativeName="Selective Color Hue Tolerance"))
	float bpv__SelectivexColorxHuexTolerance__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color Saturation Tolerance", Category="Selective Color", ClampMin="0", UIMin="0", OverrideNativeName="Selective Color Saturation Tolerance"))
	float bpv__SelectivexColorxSaturationxTolerance__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color Value Tolerance", Category="Selective Color", ClampMin="0", UIMin="0", OverrideNativeName="Selective Color Value Tolerance"))
	float bpv__SelectivexColorxValuexTolerance__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Selective Color - Advanced", Category="Selective Color", tooltip, OverrideNativeName="Selective Color - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SelectivexColorxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire", Category="Screen Fire", tooltip, OverrideNativeName="Screen Fire"))
	bool bpv__ScreenxFire__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Screen Fire", Category="Screen Fire", OverrideNativeName="mScreenFire"))
	UMaterial* bpv__mScreenFire__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Screen Fire", Category="Screen Fire", OverrideNativeName="iScreenFire"))
	UMaterialInstanceDynamic* bpv__iScreenFire__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Color", Category="Screen Fire", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Screen Fire Color"))
	FLinearColor bpv__ScreenxFirexColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Distortion Amount", Category="Screen Fire", ClampMin="0", UIMin="0", OverrideNativeName="Screen Fire Distortion Amount"))
	float bpv__ScreenxFirexDistortionxAmount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Mask Contrast", Category="Screen Fire", ClampMin="0", UIMin="0", OverrideNativeName="Screen Fire Mask Contrast"))
	float bpv__ScreenxFirexMaskxContrast__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Mask Scale", Category="Screen Fire", ClampMin="0", UIMin="0", OverrideNativeName="Screen Fire Mask Scale"))
	float bpv__ScreenxFirexMaskxScale__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Flame Tiling", Category="Screen Fire", ClampMin="0", UIMin="0", OverrideNativeName="Screen Fire Flame Tiling"))
	float bpv__ScreenxFirexFlamexTiling__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire Speed", Category="Screen Fire", ClampMin="0", UIMin="0", OverrideNativeName="Screen Fire Speed"))
	float bpv__ScreenxFirexSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Screen Fire - Advanced", Category="Screen Fire", tooltip, OverrideNativeName="Screen Fire - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ScreenxFirexxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Haunted", Category="Haunted", tooltip, OverrideNativeName="Haunted"))
	bool bpv__Haunted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Haunted", Category="Haunted", OverrideNativeName="mHaunted"))
	UMaterial* bpv__mHaunted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Haunted", Category="Haunted", OverrideNativeName="iHaunted"))
	UMaterialInstanceDynamic* bpv__iHaunted__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Haunted Amount", Category="Haunted", ClampMin="0", ClampMax="1", UIMax="1", UIMin="0", OverrideNativeName="Haunted Amount"))
	float bpv__HauntedxAmount__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Haunted Mask Scale", Category="Haunted", ClampMin="0", UIMin="0", OverrideNativeName="Haunted Mask Scale"))
	float bpv__HauntedxMaskxScale__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Haunted Texture", Category="Haunted", OverrideNativeName="Haunted Texture"))
	UTexture2D* bpv__HauntedxTexture__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Haunted Texture Scale", Category="Haunted", ClampMin="0", UIMin="0", OverrideNativeName="Haunted Texture Scale"))
	float bpv__HauntedxTexturexScale__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Haunted - Advanced", Category="Haunted", tooltip, OverrideNativeName="Haunted - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__HauntedxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell", Category="Grid Cell", tooltip, OverrideNativeName="Grid Cell"))
	bool bpv__GridxCell__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Grid Cell", Category="Grid Cell", OverrideNativeName="mGridCell"))
	UMaterial* bpv__mGridCell__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Grid Cell", Category="Grid Cell", OverrideNativeName="iGridCell"))
	UMaterialInstanceDynamic* bpv__iGridCell__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Animated", Category="Grid Cell", tooltip, OverrideNativeName="Grid Cell Animated"))
	bool bpv__GridxCellxAnimated__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Animation Speed", Category="Grid Cell", ClampMin="0", UIMin="0", OverrideNativeName="Grid Cell Animation Speed"))
	float bpv__GridxCellxAnimationxSpeed__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Color", Category="Grid Cell", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Grid Cell Color"))
	FLinearColor bpv__GridxCellxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Void Color", Category="Grid Cell", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Grid Cell Void Color"))
	FLinearColor bpv__GridxCellxVoidxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Tiling", Category="Grid Cell", ClampMin="0", UIMin="0", OverrideNativeName="Grid Cell Tiling"))
	float bpv__GridxCellxTiling__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell Transition Amount", Category="Grid Cell", OverrideNativeName="Grid Cell Transition Amount"))
	float bpv__GridxCellxTransitionxAmount__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion", Category="Lens", tooltip, OverrideNativeName="Lens Distortion"))
	bool bpv__LensxDistortion__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Lens Distortion", Category="Lens", OverrideNativeName="mLensDistortion"))
	UMaterial* bpv__mLensDistortion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Lens Distortion", Category="Lens", OverrideNativeName="iLensDistortion"))
	UMaterialInstanceDynamic* bpv__iLensDistortion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Optic Refinement", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Optic Refinement"))
	float bpv__LensxDistortionxOpticxRefinement__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Optic Size", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Optic Size"))
	float bpv__LensxDistortionxOpticxSize__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Optic Position X", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Optic Position X"))
	float bpv__LensxDistortionxOpticxPositionxX__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Optic Position Y", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Optic Position Y"))
	float bpv__LensxDistortionxOpticxPositionxY__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lens Distortion Scope Texture", Category="Lens", OverrideNativeName="Lens Distortion Scope Texture"))
	UTexture2D* bpv__LensxDistortionxScopexTexture__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Scope Texture Scale X", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Scope Texture Scale X"))
	float bpv__LensxDistortionxScopexTexturexScalexX__pfTTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion Scope Texture Scale Y", Category="Lens", ClampMin="0", UIMin="0", OverrideNativeName="Lens Distortion Scope Texture Scale Y"))
	float bpv__LensxDistortionxScopexTexturexScalexY__pfTTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Lens Distortion - Advanced", Category="Lens", tooltip, OverrideNativeName="Lens Distortion - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__LensxDistortionxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Grid Cell - Advanced", Category="Grid Cell", tooltip, OverrideNativeName="Grid Cell - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__GridxCellxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone", Category="Zone", tooltip, OverrideNativeName="Zone"))
	bool bpv__Zone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Zone", Category="Zone", OverrideNativeName="mZone"))
	UMaterial* bpv__mZone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Zone", Category="Zone", OverrideNativeName="iZone"))
	UMaterialInstanceDynamic* bpv__iZone__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone Center", Category="Zone", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Zone Center"))
	FLinearColor bpv__ZonexCenter__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone Radius", Category="Zone", ClampMin="0", UIMin="0", OverrideNativeName="Zone Radius"))
	float bpv__ZonexRadius__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone Edge Hardness", Category="Zone", ClampMin="0", UIMin="0", OverrideNativeName="Zone Edge Hardness"))
	float bpv__ZonexEdgexHardness__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone Edge Color", Category="Zone", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Zone Edge Color"))
	FLinearColor bpv__ZonexEdgexColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone Coverage Color", Category="Zone", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Zone Coverage Color"))
	FLinearColor bpv__ZonexCoveragexColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Zone - Advanced", Category="Zone", tooltip, OverrideNativeName="Zone - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__ZonexxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid", Category="Pyramid", tooltip, OverrideNativeName="Pyramid"))
	bool bpv__Pyramid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Pyramid", Category="Pyramid", OverrideNativeName="mPyramid"))
	UMaterial* bpv__mPyramid__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Pyramid", Category="Pyramid", OverrideNativeName="iPyramid"))
	UMaterialInstanceDynamic* bpv__iPyramid__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid Masked", Category="Pyramid", tooltip, OverrideNativeName="Pyramid Masked"))
	bool bpv__PyramidxMasked__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid Background Color", Category="Pyramid", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Pyramid Background Color"))
	FLinearColor bpv__PyramidxBackgroundxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid Width", Category="Pyramid", ClampMin="0", UIMin="0", OverrideNativeName="Pyramid Width"))
	float bpv__PyramidxWidth__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid Pan", Category="Pyramid", ClampMin="0", UIMin="0", OverrideNativeName="Pyramid Pan"))
	float bpv__PyramidxPan__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid Tile Amount", Category="Pyramid", ClampMin="0", UIMin="0", OverrideNativeName="Pyramid Tile Amount"))
	float bpv__PyramidxTilexAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Pyramid - Advanced", Category="Pyramid", tooltip, OverrideNativeName="Pyramid - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__PyramidxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo", Category="Mojo", tooltip, OverrideNativeName="Mojo"))
	bool bpv__Mojo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Mojo", Category="Mojo", OverrideNativeName="mMojo"))
	UMaterial* bpv__mMojo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Mojo", Category="Mojo", OverrideNativeName="iMojo"))
	UMaterialInstanceDynamic* bpv__iMojo__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Animated", Category="Mojo", tooltip, OverrideNativeName="Mojo Animated"))
	bool bpv__MojoxAnimated__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Animation Speed", Category="Mojo", ClampMin="0", UIMin="0", OverrideNativeName="Mojo Animation Speed"))
	float bpv__MojoxAnimationxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mojo Mask", Category="Mojo", OverrideNativeName="Mojo Mask"))
	UTexture2D* bpv__MojoxMask__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mojo Distortion Map", Category="Mojo", OverrideNativeName="Mojo Distortion Map"))
	UTexture2D* bpv__MojoxDistortionxMap__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Distortion Amount", Category="Mojo", ClampMin="0", UIMin="0", OverrideNativeName="Mojo Distortion Amount"))
	float bpv__MojoxDistortionxAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Color", Category="Mojo", UIMin="0", UIMax="20", ClampMax="20", ClampMin="0", OverrideNativeName="Mojo Color"))
	FLinearColor bpv__MojoxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Intensity", Category="Mojo", ClampMin="0", UIMin="0", OverrideNativeName="Mojo Intensity"))
	float bpv__MojoxIntensity__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Phase", Category="Mojo", ClampMin="0", UIMin="0", OverrideNativeName="Mojo Phase"))
	float bpv__MojoxPhase__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo Tolerance", Category="Mojo", ClampMin="0", UIMin="0", OverrideNativeName="Mojo Tolerance"))
	float bpv__MojoxTolerance__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Mojo - Advanced", Category="Mojo", tooltip, OverrideNativeName="Mojo - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__MojoxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Gradient Fog", Category="Gradient Fog", tooltip, OverrideNativeName="Gradient Fog"))
	bool bpv__GradientxFog__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Gradient Fog", Category="Gradient Fog", OverrideNativeName="mGradientFog"))
	UMaterial* bpv__mGradientFog__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Gradient Fog", Category="Gradient Fog", OverrideNativeName="iGradientFog"))
	UMaterialInstanceDynamic* bpv__iGradientFog__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Gradient Fog Colors", Category="Gradient Fog", ClampMin="0", UIMin="0", OverrideNativeName="Gradient Fog Colors"))
	TArray<FColor> bpv__GradientxFogxColors__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Gradient Fog Distance", Category="Gradient Fog", ClampMin="0", UIMin="0", OverrideNativeName="Gradient Fog Distance"))
	float bpv__GradientxFogxDistance__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Gradient Fog Sharpness", Category="Gradient Fog", ClampMin="0", UIMin="0", OverrideNativeName="Gradient Fog Sharpness"))
	float bpv__GradientxFogxSharpness__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Gradient Fog - Advanced", Category="Gradient Fog", tooltip, OverrideNativeName="Gradient Fog - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__GradientxFogxxxAdvanced__pfTTGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Color Index RT", Category="Gradient Fog", OverrideNativeName="ColorIndexRT"))
	UTextureRenderTarget2D* bpv__ColorIndexRT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Color Indexer", Category="Gradient Fog", OverrideNativeName="M_ColorIndexer"))
	UMaterial* bpv__M_ColorIndexer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Color Indexer", Category="Gradient Fog", OverrideNativeName="I_ColorIndexer"))
	UMaterialInstanceDynamic* bpv__I_ColorIndexer__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Dither", Category="Dither", tooltip, OverrideNativeName="Dither"))
	bool bpv__Dither__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Dither", Category="Dither", OverrideNativeName="mDither"))
	UMaterial* bpv__mDither__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Dither", Category="Dither", OverrideNativeName="iDither"))
	UMaterialInstanceDynamic* bpv__iDither__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Dither Limit", Category="Dither", ClampMin="1", UIMin="1", OverrideNativeName="Dither Limit"))
	float bpv__DitherxLimit__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Dither - Advanced", Category="Dither", tooltip, OverrideNativeName="Dither - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__DitherxxxAdvanced__pfTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines", Category="Speed Lines", tooltip, OverrideNativeName="Speed Lines"))
	bool bpv__SpeedxLines__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Speed Lines ", Category="Speed Lines", OverrideNativeName="mSpeedLines "))
	UMaterial* bpv__mSpeedLinesx__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Speed Lines", Category="Speed Lines", OverrideNativeName="iSpeedLines"))
	UMaterialInstanceDynamic* bpv__iSpeedLines__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines Intensity", Category="Speed Lines", OverrideNativeName="Speed Lines Intensity"))
	float bpv__SpeedxLinesxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines Line Width", Category="Speed Lines", OverrideNativeName="Speed Lines Line Width"))
	float bpv__SpeedxLinesxLinexWidth__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines Speed", Category="Speed Lines", OverrideNativeName="Speed Lines Speed"))
	float bpv__SpeedxLinesxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines Mask Radius", Category="Speed Lines", OverrideNativeName="Speed Lines Mask Radius"))
	float bpv__SpeedxLinesxMaskxRadius__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines Mask Hardness", Category="Speed Lines", OverrideNativeName="Speed Lines Mask Hardness"))
	float bpv__SpeedxLinesxMaskxHardness__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Speed Lines - Advanced", Category="Speed Lines", tooltip, OverrideNativeName="Speed Lines - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__SpeedxLinesxxxAdvanced__pfTTGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Cyber Scan", Category="Cyber Scan", tooltip, OverrideNativeName="Cyber Scan"))
	bool bpv__CyberxScan__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Cyber Scan", Category="Cyber Scan", OverrideNativeName="mCyberScan"))
	UMaterial* bpv__mCyberScan__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Cyber Scan", Category="Cyber Scan", OverrideNativeName="iCyberScan"))
	UMaterialInstanceDynamic* bpv__iCyberScan__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Cyber Scan Speed", Category="Cyber Scan", ClampMin="0", UIMin="0", OverrideNativeName="Cyber Scan Speed"))
	float bpv__CyberxScanxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Cyber Scan - Advanced", Category="Cyber Scan", tooltip, OverrideNativeName="Cyber Scan - Advanced"))
	FAdvancedEffectFeatures__pf2387075495 bpv__CyberxScanxxxAdvanced__pfTTGT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	AChameleon_C__pf565858488(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Chameleon__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Chameleon__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create Material Instances"))
	virtual void bpf__CreatexMaterialxInstances__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Channel Clamper Func"))
	virtual void bpf__ChannelxClamperxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Channel Swapper Func"))
	virtual void bpf__ChannelxSwapperxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitChameleon"))
	virtual void bpf__InitChameleon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Screen Drops Func"))
	virtual void bpf__ScreenxDropsxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Mosaic Func"))
	virtual void bpf__MosaicxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Alcohol Func"))
	virtual void bpf__AlcoholxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Drug Func"))
	virtual void bpf__DrugxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pixel Dissolve Func"))
	virtual void bpf__PixelxDissolvexFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Blur Func"))
	virtual void bpf__BlurxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Colorize Func"))
	virtual void bpf__ColorizexFunc__pfT(bool bpp__Condition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Comic Func"))
	virtual void bpf__ComicxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Glitch Func"))
	virtual void bpf__GlitchxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MonitorFX Func"))
	virtual void bpf__MonitorFXxFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hue Panner Func"))
	virtual void bpf__HuexPannerxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Monochrome Func"))
	virtual void bpf__MonochromexFunc__pfT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Radial Blur Func"))
	virtual void bpf__RadialxBlurxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Screen Waves Func"))
	virtual void bpf__ScreenxWavesxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Distance Fog Func"))
	virtual void bpf__DistancexFogxFunc__pfTT(bool bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Scratches Func"))
	virtual void bpf__ScratchesxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Bleach Func"))
	virtual void bpf__BleachxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ASCII Func"))
	virtual void bpf__ASCIIxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Edge Detect Func"))
	virtual void bpf__EdgexDetectxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Emboss Func"))
	virtual void bpf__EmbossxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hard Emboss Func"))
	virtual void bpf__HardxEmbossxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Invert Func"))
	virtual void bpf__InvertxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Iridescent Func"))
	virtual void bpf__IridescentxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Kuwahara Func"))
	virtual void bpf__KuwaharaxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pulse Func"))
	virtual void bpf__PulsexFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Squares Func"))
	virtual void bpf__SquaresxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Tiles Func"))
	virtual void bpf__TilesxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TV Noise Func"))
	virtual void bpf__TVxNoisexFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LOOK Func"))
	virtual void bpf__LOOKxFunc__pfT(bool bpp__Condition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Circles Func"))
	virtual void bpf__CirclesxFunc__pfT(bool bpp__Condition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Sonar Func"))
	virtual void bpf__SonarxFunc__pfT(bool bpp__Condition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Distance Distortion Func"))
	virtual void bpf__DistancexDistortionxFunc__pfTT(bool bpp__Condition__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Drawing Func"))
	virtual void bpf__DrawingxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Magic Transitions Func"))
	virtual void bpf__MagicxTransitionsxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Screen Damage Func"))
	virtual void bpf__ScreenxDamagexFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Screen Decals Func"))
	virtual void bpf__ScreenxDecalsxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Sharpen Func"))
	virtual void bpf__SharpenxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Toon Shading Func"))
	virtual void bpf__ToonxShadingxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Anamorphic Lens Flares Func"))
	virtual void bpf__AnamorphicxLensxFlaresxFunc__pfTTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Frost Func"))
	virtual void bpf__FrostxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Neon Func"))
	virtual void bpf__NeonxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Custom Depth Highlighter Func"))
	virtual void bpf__CustomxDepthxHighlighterxFunc__pfTTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Custom Depth Highlighter (NC) Func"))
	virtual void bpf__CustomxDepthxHighlighterxxNCxxFunc__pfTTTLKT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ApplyChameleonSettings"))
	virtual void bpf__ApplyChameleonSettings__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetEffectPriority"))
	virtual void bpf__SetEffectPriority__pf(int32 bpp__Priority__pf, UMaterial* bpp__Material__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="2D Transform Func"))
	virtual void bpf__2DxTransformxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Kaleidoscope Func"))
	virtual void bpf__KaleidoscopexFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Letterboxing Func"))
	virtual void bpf__LetterboxingxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Snow Func"))
	virtual void bpf__SnowxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="World Splash Func"))
	virtual void bpf__WorldxSplashxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="World Glitch Func"))
	virtual void bpf__WorldxGlitchxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Digitize Func"))
	virtual void bpf__DigitizexFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Alarm Func"))
	virtual void bpf__AlarmxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Sketch Func"))
	virtual void bpf__SketchxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Wired Func"))
	virtual void bpf__WiredxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Advanced Effect Features"))
	virtual void bpf__SetxAdvancedxEffectxFeatures__pfTTT(FAdvancedEffectFeatures__pf2387075495 bpp__Features__pf, UMaterial* bpp__Material__pf, UMaterialInstanceDynamic* bpp__DynamicxMaterialxInstance__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Advanced Effect Features (No Custom Depth)"))
	virtual void bpf__SetxAdvancedxEffectxFeaturesxxNoxCustomxDepthx__pfTTTTLTTK(FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 bpp__Features__pf, UMaterial* bpp__Material__pf, UMaterialInstanceDynamic* bpp__DynamicxMaterialxInstance__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Actor Featurette Func"))
	virtual void bpf__ActorxFeaturettexFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Infected Func"))
	virtual void bpf__InfectedxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Colored AO Func"))
	virtual void bpf__ColoredxAOxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Camera Shake Func"))
	virtual void bpf__CameraxShakexFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Disco Ball Func"))
	virtual void bpf__DiscoxBallxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hazy Lights Func"))
	virtual void bpf__HazyxLightsxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Melted World Func"))
	virtual void bpf__MeltedxWorldxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Selective Color Func"))
	virtual void bpf__SelectivexColorxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Screen Fire Func"))
	virtual void bpf__ScreenxFirexFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Haunted Func"))
	virtual void bpf__HauntedxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Grid Cell Func"))
	virtual void bpf__GridxCellxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Lens Func"))
	virtual void bpf__LensxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Zone Func"))
	virtual void bpf__ZonexFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pyramid Func"))
	virtual void bpf__PyramidxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Mojo Func"))
	virtual void bpf__MojoxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create Effect Material Instance"))
	virtual void bpf__CreatexEffectxMaterialxInstance__pfTTT(UMaterial* bpp__Material__pf, /*out*/ UMaterialInstanceDynamic*& bpp__Instance__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Gradient Fog Func"))
	virtual void bpf__GradientxFogxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Dither Func"))
	virtual void bpf__DitherxFunc__pfT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Speed Lines Func"))
	virtual void bpf__SpeedxLinesxFunc__pfTT(bool bpp__IsEnabled__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Cyber Scan Func"))
	virtual void bpf__CyberxScanxFunc__pfTT(bool bpp__IsEnabled__pf);
public:
};
