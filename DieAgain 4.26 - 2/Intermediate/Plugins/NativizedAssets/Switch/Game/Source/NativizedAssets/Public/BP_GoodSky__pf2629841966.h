#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Enum_GoodSky_Preset__pf194322682.h"
#include "Enum_GoodSky_Style_Clouds__pf194322682.h"
#include "Enum_GoodSky_Clouds_Coverage__pf194322682.h"
#include "Enum_GoodSky_Effects__pf194322682.h"
#include "Enum_GoodSky_MeshType__pf194322682.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMeshComponent;
class UArrowComponent;
class UTextRenderComponent;
class ADirectionalLight;
class UCurveLinearColor;
class UCurveFloat;
class UCurveVector;
class UMaterialInstanceDynamic;
#include "BP_GoodSky__pf2629841966.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/GoodSky/Blueprint/BP_GoodSky.BP_GoodSky_C", OverrideNativeName="BP_GoodSky_C"))
class ABP_GoodSky_C__pf2629841966 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SunSphere_Group"))
	USceneComponent* bpv__SunSphere_Group__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StarMesh"))
	UStaticMeshComponent* bpv__StarMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh_Group"))
	USceneComponent* bpv__Mesh_Group__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SunMesh"))
	UStaticMeshComponent* bpv__SunMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="NOW_Arrow"))
	UArrowComponent* bpv__NOW_Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sky Ring"))
	UStaticMeshComponent* bpv__SkyxRing__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="NowTime_Arrow_Group"))
	USceneComponent* bpv__NowTime_Arrow_Group__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SunRiseArrow_Group"))
	UArrowComponent* bpv__SunRiseArrow_Group__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ArrowTool"))
	USceneComponent* bpv__ArrowTool__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Refresh Sky Shader( for Direction Actor )", Category="Sky Global Setting", tooltip="refresh when moving direction actor", OverrideNativeName="Refresh Sky Shader( For direction actor )"))
	bool bpv__RefreshxSkyxShaderxxForxdirectionxactorxx__pfTTLTTTTK;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="└ Directional Light Actor ( for Custom Mode )", Category="Sky Global Setting", tooltip="Assign your level\'s directional light actor to this variable to  match the sky\'s sun position and color", OverrideNativeName="└ Directional light actor ( For Custom Mode )"))
	ADirectionalLight* bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enable Auto Day / Night Cycle in Game?", Category="Sky Global Setting", OverrideNativeName="Enable Auto Day / Night Cycle In Game?"))
	bool bpv__EnablexAutoxDayxxxNightxCyclexInxGamex__pfTTTETTTTzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="└ How Long Is A Day In The Game? ( Unit : Minute )", Category="Sky Global Setting", ClampMax="1440", UIMax="1440", UIMin="0.1666", tooltip="Unit : Minute( Real World ) e.g. 60 is a hour, run from 0:00 to 24:00 in 1 hour.", OverrideNativeName="└ How long is a day in the game? ( Unit : Minute )"))
	float bpv__xxHowxlongxisxaxdayxinxthexgamexxxxUnitxxxMinutexx__pfJbxTTTTTTTTzyTLTT3TTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enable Time Of Day", Category="Sky Global Setting", OverrideNativeName="Enable Time of Day"))
	bool bpv__EnablexTimexofxDay__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="└ Time Of Day ( for Custom Mode )", Category="Sky Global Setting", ClampMin="0", ClampMax="24", tooltip="0 is Midnight, 6 is morning, 12 is noon, 18 is Sueset, 24 is Midnight.", OverrideNativeName="└ Time of Day ( For Custom Mode )"))
	float bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sky Preset", Category="Sky Global Setting", OverrideNativeName="SkyPreset"))
	E__Enum_GoodSky_Preset__pf bpv__SkyPreset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sky Clouds Style", Category="Sky Global Setting", OverrideNativeName="SkyCloudsStyle"))
	E__Enum_GoodSky_Style_Clouds__pf bpv__SkyCloudsStyle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sky Clouds Coverage Preset", Category="Sky Global Setting", OverrideNativeName="SkyCloudsCoveragePreset"))
	E__Enum_GoodSky_Clouds_Coverage__pf bpv__SkyCloudsCoveragePreset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Base Cloud Color", Category="Default", OverrideNativeName="Curve_BaseCloudColor"))
	UCurveLinearColor* bpv__Curve_BaseCloudColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Back Ground Horizon Color", Category="Default", OverrideNativeName="Curve_BackGroundHorizonColor"))
	UCurveLinearColor* bpv__Curve_BackGroundHorizonColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Dome Color", Category="Default", OverrideNativeName="Curve_DomeColor"))
	UCurveLinearColor* bpv__Curve_DomeColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve All Overlay Color", Category="Default", OverrideNativeName="Curve_AllOverlayColor"))
	UCurveLinearColor* bpv__Curve_AllOverlayColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Stars Time", Category="Default", OverrideNativeName="Curve_StarsTime"))
	UCurveFloat* bpv__Curve_StarsTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Sun Direction", Category="Default", OverrideNativeName="Curve_SunDirection"))
	UCurveVector* bpv__Curve_SunDirection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sky Material", Category="Default", OverrideNativeName="SkyMaterial"))
	UMaterialInstanceDynamic* bpv__SkyMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Select Sky Name", Category="Default", tooltip, OverrideNativeName="SelectSkyName"))
	FName bpv__SelectSkyName__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sky Effect", Category="Sky Global Setting", OverrideNativeName="SkyEffect"))
	E__Enum_GoodSky_Effects__pf bpv__SkyEffect__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sky Mesh", Category="Sky Global Setting", OverrideNativeName="SkyMesh"))
	E__Enum_GoodSky_MeshType__pf bpv__SkyMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Random Time( for Custom Mode )", Category="Sky Global Setting", tooltip="Random Time?", OverrideNativeName="UseRandomTime( For Custom Mode )"))
	bool bpv__UseRandomTimexxForxCustomxModexx__pfLTTTTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use All Random", Category="Sky Global Setting", tooltip="All Random?", OverrideNativeName="Use All Random"))
	bool bpv__UsexAllxRandom__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Global Texture Move Speed ", Category="Sky Global Setting", UIMin="0", UIMax="20", OverrideNativeName="Global Texture Move Speed "))
	float bpv__GlobalxTexturexMovexSpeedx__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Global Overlay Color", Category="Sky Global Setting", OverrideNativeName="Global Overlay Color"))
	FLinearColor bpv__GlobalxOverlayxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Global Horizon Fog Falloff", Category="Sky Global Setting", UIMin="0.1", UIMax="10", OverrideNativeName="Global Horizon Fog Falloff"))
	float bpv__GlobalxHorizonxFogxFalloff__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Clouds Behind Effect Intensity", Category="Sky Global Setting", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", OverrideNativeName="Clouds Behind Effect Intensity"))
	float bpv__CloudsxBehindxEffectxIntensity__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Moon Overlay Color", Category="Sky Effect : Moon", OverrideNativeName="Moon Overlay Color"))
	FLinearColor bpv__MoonxOverlayxColor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Moon Size", Category="Sky Effect : Moon", UIMin="0.5", UIMax="3", OverrideNativeName="Moon Size"))
	float bpv__MoonxSize__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Moon Brightness", Category="Sky Effect : Moon", UIMin="0", OverrideNativeName="Moon Brightness"))
	float bpv__MoonxBrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Moon Move", Category="Sky Effect : Moon", OverrideNativeName="Moon Move"))
	float bpv__MoonxMove__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Size", Category="Sky Effect : Sun / Stars", UIMin="0.1", UIMax="20", OverrideNativeName="Sun Size"))
	float bpv__SunxSize__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Brightness", Category="Sky Effect : Sun / Stars", UIMin="0", OverrideNativeName="Sun Brightness"))
	float bpv__SunxBrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Overlay  Color", Category="Sky Effect : Sun / Stars", OverrideNativeName="Stars Overlay  Color"))
	FLinearColor bpv__StarsxOverlayxxColor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Brightness", Category="Sky Effect : Sun / Stars", UIMin="0", OverrideNativeName="Stars Brightness"))
	float bpv__StarsxBrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars UVTile", Category="Sky Effect : Sun / Stars", UIMin=".5", UIMax="2", OverrideNativeName="Stars UVTile"))
	float bpv__StarsxUVTile__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Falloff Intensity", Category="Sky Effect : Sun / Stars", UIMin="0", OverrideNativeName="Stars Falloff Intensity"))
	float bpv__StarsxFalloffxIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lightning Brightness", Category="Sky Effect : Storm", UIMin="0", UIMax="5", OverrideNativeName="Lightning Brightness"))
	float bpv__LightningxBrightness__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curve Sun Light", Category="Default", OverrideNativeName="Curve_SunLight"))
	UCurveFloat* bpv__Curve_SunLight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lightning Overlay Color", Category="Sky Effect : Storm", OverrideNativeName="Lightning Overlay Color"))
	FLinearColor bpv__LightningxOverlayxColor__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Present Time Of Day", Category="Default", OverrideNativeName="Get Present Time of Day"))
	float bpv__GetxPresentxTimexofxDay__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Moon Eclipse Intensity", Category="Sky Effect : Moon", ClampMin="0", ClampMax="1", UIMin="0", UIMax="1", OverrideNativeName="Moon Eclipse Intensity"))
	int32 bpv__MoonxEclipsexIntensity__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="├ Moon Eclipse Offset", Category="Sky Effect : Moon", UIMin="0.05", ClampMin="0", ClampMax="1", UIMax="1", OverrideNativeName="├ Moon Eclipse Offset"))
	float bpv__xxMoonxEclipsexOffset__pfBbxTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="└ Moon Eclipse Rotator", Category="Sky Effect : Moon", UIMin="0", UIMax="1", OverrideNativeName="└ Moon Eclipse Rotator"))
	float bpv__xxMoonxEclipsexRotator__pfJbxTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Arrow Tool  Hidden in Game", Category="Sky Global Setting", OverrideNativeName="ArrowTool  Hidden In Game"))
	bool bpv__ArrowToolxxHiddenxInxGame__pfTTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Rotator to Time Of Day", Category="Default", OverrideNativeName="Get Rotator To Time of Day"))
	float bpv__GetxRotatorxToxTimexofxDay__pfTTTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Temp Time Of Day", Category="Default", OverrideNativeName="Temp Time of Day"))
	float bpv__TempxTimexofxDay__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Present Rotator", Category="Default", OverrideNativeName="Get Present Rotator"))
	FRotator bpv__GetxPresentxRotator__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="East / West ", Category="Default", OverrideNativeName="East / West "))
	float bpv__EastxxxWestx__pfTETT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	ABP_GoodSky_C__pf2629841966(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_GoodSky__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_GoodSky__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GoodSky Realtime Update"))
	virtual void bpf__GoodSkyxRealtimexUpdate__pfTT();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get Sky Presets DataTable"))
	virtual void bpf__GetxSkyxPresetsxDataTable__pfTTT(FName bpp__Name__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Use All Random Sky"))
	virtual void bpf__UsexAllxRandomxSky__pfTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Init"))
	virtual void bpf__Init__pf();
public:
};
