#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class AB_LightningNode_C__pf2650558384;
class UChildActorComponent;
class UStaticMeshComponent;
#include "B_LightningMaster__pf2650558384.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ProceduralLightning/B_LightningMaster.B_LightningMaster_C", OverrideNativeName="B_LightningMaster_C"))
class AB_LightningMaster_C__pf2650558384 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HiddenGroupScene"))
	USceneComponent* bpv__HiddenGroupScene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SceneRoot"))
	USceneComponent* bpv__SceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lifetime Min", Category="Branche", tooltip="minimum time a branche segment will exist. It will fade out during this time.", OverrideNativeName="LifetimeMin"))
	float bpv__LifetimeMin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lifetime Max", Category="Branche", tooltip="The time in seconds after which this node re-evaluates if it should branche or not. This is also the time it takes for the branche to go from full intensity to dim to 0 intensity.", OverrideNativeName="LifetimeMax"))
	float bpv__LifetimeMax__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Directional", Category="Position", tooltip="If directional is true. the target only is a guidance to aim at, but does not necessary has to end on that point.", OverrideNativeName="Directional"))
	bool bpv__Directional__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Target Direction", Category="Position", tooltip="If Directional is false, this is the end-location. If Directional is true, this is the direction of the first segment and the total length, will be the length of the vector", OverrideNativeName="TargetDirection"))
	FVector bpv__TargetDirection__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amperes Width", Category="Appearance", tooltip="The width of the spoke in UE units (It is called amperes in anology to  a real lightning spoke)", OverrideNativeName="AmperesWidth"))
	float bpv__AmperesWidth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amperes Width Clip Min", Category="Appearance", tooltip="The width of the spoke wil not be smaller this value (in UE units)", OverrideNativeName="AmperesWidthClipMin"))
	float bpv__AmperesWidthClipMin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amperes Width Clip Max", Category="Appearance", tooltip="The width of the spoke wil not exceed this value (in UE units)", OverrideNativeName="AmperesWidthClipMax"))
	float bpv__AmperesWidthClipMax__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Intensity", Category="Appearance", tooltip="The brighntess multiplier for the material color.", OverrideNativeName="Intensity"))
	float bpv__Intensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Color 0", Category="Appearance", tooltip="THE RGB color of the main spoke.", OverrideNativeName="Color_0"))
	FLinearColor bpv__Color_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Shape", tooltip="0 will be instant creation", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Noise", Category="Shape", tooltip="Max factor of the longitudingal direction of the lightning, that will be added to the lateral component (The actual value is random between 0 and this max)", OverrideNativeName="Noise"))
	float bpv__Noise__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Noise Branche Bias", Category="Shape", tooltip="Minimum Noise Factor when creating a new branche. The main branch will get its max noise factor set to (Noise-NoiseBrancheBias)", OverrideNativeName="NoiseBrancheBias"))
	float bpv__NoiseBrancheBias__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Branche Subdivisions", Category="Branche", tooltip="Each branche is divided in subsegments. at each subsegment connection point a new branche can be created. So the more subsegments, the more subbranches can be created.", OverrideNativeName="BrancheSubdivisions"))
	int32 bpv__BrancheSubdivisions__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Branche Chance", Category="Branche", tooltip="The chance that at a subbranche connection point a new branche will appear. 1.0 is create a branche always.", OverrideNativeName="BrancheChance"))
	float bpv__BrancheChance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Branche Depth", Category="Branche", tooltip="The maximum number of recursive subbranches.", OverrideNativeName="MaxBrancheDepth"))
	int32 bpv__MaxBrancheDepth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Branche Amperes Factor Max", Category="Appearance", tooltip="Value between 0.5 and 1.0 that describes how much width (amperes) should at most go in the main branche. A value of 1.0 says all amperes should go in the main branche. 0.95 max is advised.", OverrideNativeName="MainBrancheAmperesFactorMax"))
	float bpv__MainBrancheAmperesFactorMax__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Branche Amperes Factor Min", Category="Appearance", tooltip="Value between 0.5 and 1.0 that describes how much width (amperes) should at most go in the main branche. A value of 0.5 indicates that the main branche and sub branche should be equal in (width (and likely also in length))", OverrideNativeName="MainBrancheAmperesFactorMin"))
	float bpv__MainBrancheAmperesFactorMin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Continious Rebranching", Category="TimeVariation", tooltip="After the lifetime of the spoke, the node evaluates if a new spoke should be made, the current one retained or the current one deleted.", OverrideNativeName="ContiniousRebranching"))
	bool bpv__ContiniousRebranching__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Node", Category="Default", OverrideNativeName="RootNode"))
	AB_LightningNode_C__pf2650558384* bpv__RootNode__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="All Spokes Converge to Target", Category="Shape", ClampMin="0.0", ClampMax="1.0", UIMin="0.0", UIMax="1.0", OverrideNativeName="AllSpokesConvergeToTarget"))
	float bpv__AllSpokesConvergeToTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Count Created", Category="Branche", OverrideNativeName="BrancheCountCreated"))
	int32 bpv__BrancheCountCreated__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Count Done", Category="Branche", OverrideNativeName="BrancheCountDone"))
	int32 bpv__BrancheCountDone__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Index Is Branche Depth", Category="Branche", tooltip="Optimization to reduce branchecount. The deeper the branche, the less subdivisions it has.", OverrideNativeName="StartIndexIsBrancheDepth"))
	bool bpv__StartIndexIsBrancheDepth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hidden Nodes", Category="Default", OverrideNativeName="HiddenNodes"))
	TArray<UChildActorComponent*> bpv__HiddenNodes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Paused", Category="Default", OverrideNativeName="Paused"))
	bool bpv__Paused__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Highlight Index", Category="Default", OverrideNativeName="HighlightIndex"))
	int32 bpv__HighlightIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Master Highlight Mesh", Category="Default", OverrideNativeName="MasterHighlightMesh"))
	UStaticMeshComponent* bpv__MasterHighlightMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Index Is Twice Branche Depth", Category="Branche", tooltip="Optimization to reduce branchecount. The deeper the branche, the twice as less subdivisions it has. This overrules StartIndexIsBrancheDepth", OverrideNativeName="StartIndexIsTwiceBrancheDepth"))
	bool bpv__StartIndexIsTwiceBrancheDepth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Branche Is Same Length as Main", Category="Branche", tooltip="The lenght from the source to the end of each spoke, will be more or less the same.", OverrideNativeName="BrancheIsSameLengthAsMain"))
	bool bpv__BrancheIsSameLengthAsMain__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Child Ptr Ref", Category="Default", OverrideNativeName="ChildPtrRef"))
	UChildActorComponent* bpv__ChildPtrRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Scene Component Ref", Category="Default", OverrideNativeName="SceneComponentRef"))
	USceneComponent* bpv__SceneComponentRef__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Minimum Spoke Length", Category="Shape", tooltip="Mimimum length of each subspoke (except for the root branche)", OverrideNativeName="MinimumSpokeLength"))
	float bpv__MinimumSpokeLength__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Amperes Factor Is Squared", Category="Appearance", tooltip="If true, the width of a sub branched is treated as if the area of the crossection is splitted. So newwidth = sqrt(factor)*oldwidth", OverrideNativeName="AmperesFactorIsSquared"))
	bool bpv__AmperesFactorIsSquared__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fade Out", Category="TimeVariation", tooltip="During the lifetime of the spoke, the alpha intensity linearly fades to 0. There is a bug when this is used in combination with continious branching", OverrideNativeName="FadeOut"))
	bool bpv__FadeOut__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Vary Main Branche", Category="TimeVariation", tooltip="The main branch also moves, but this can generate unnatural looking side spokes which appear stretched.", OverrideNativeName="VaryMainBranche"))
	bool bpv__VaryMainBranche__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Update Node Position Interval", Category="TimeVariation", tooltip="Interval in seconds in which the node position is updated (0 = disabled) (in continious rebranche mode (or as long as the internal UpdateBranche function is called))", OverrideNativeName="UpdateNodePositionInterval"))
	float bpv__UpdateNodePositionInterval__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Noise Spoke Scale", Category="Appearance", tooltip="Sets the noise scale parameter of the spoke particle system.", OverrideNativeName="NoiseSpokeScale"))
	float bpv__NoiseSpokeScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Index Is Proportional to Branche Length", Category="Branche", tooltip="Optimization to reduce branchecount. The deeper the branche, the twice as less subdivisions it has. This overrules StartIndexIs(Twice)BrancheDepth", OverrideNativeName="StartIndexIsProportionalToBrancheLength"))
	bool bpv__StartIndexIsProportionalToBrancheLength__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tips Are Narrow", Category="Appearance", tooltip="The last segment is only 60% in width of the branche. This makes more realistic lightning, but requires a double activation of the spoke, so has quite a performance impact.", OverrideNativeName="TipsAreNarrow"))
	bool bpv__TipsAreNarrow__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_NewLightningNode_NewChild"))
	UChildActorComponent* b0l__CallFunc_NewLightningNode_NewChild__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsB_Lightning_Node"))
	AB_LightningNode_C__pf2650558384* b0l__K2Node_DynamicCast_AsB_Lightning_Node__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Hide"))
	bool b0l__K2Node_CustomEvent_Hide__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_KillCache"))
	bool b0l__K2Node_CustomEvent_KillCache__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Next"))
	bool b0l__K2Node_CustomEvent_Next__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Previous"))
	bool b0l__K2Node_CustomEvent_Previous__pf;
	AB_LightningMaster_C__pf2650558384(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_B_LightningMaster__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CleanHiddenNodeCache"))
	virtual void bpf__CleanHiddenNodeCache__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StrikeResume"))
	virtual void bpf__StrikeResume__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StrikePause"))
	virtual void bpf__StrikePause__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HighlightEvent"))
	virtual void bpf__HighlightEvent__pf(bool bpp__Next__pf, bool bpp__Previous__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PrintBranche"))
	virtual void bpf__PrintBranche__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StrikeEnd"))
	virtual void bpf__StrikeEnd__pf(bool bpp__Hide__pf, bool bpp__KillCache__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Strike"))
	virtual void bpf__Strike__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewLightningNode"))
	virtual void bpf__NewLightningNode__pf(FVector bpp__Location__pf, /*out*/ UChildActorComponent*& bpp__NewChild__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ConstructionScriptExample"))
	virtual void bpf__ConstructionScriptExample__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddBrancheCountCreated"))
	virtual void bpf__AddBrancheCountCreated__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddBrancheCountDone"))
	virtual void bpf__AddBrancheCountDone__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Subtract Branche Count"))
	virtual void bpf__SubtractxBranchexCount__pfTT(/*out*/ bool& bpp__WasDone__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Subtract Branche Count Done"))
	virtual void bpf__SubtractxBranchexCountxDone__pfTTT(/*out*/ bool& bpp__WasDone__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add Node to Hidden Group"))
	virtual void bpf__AddxNodextoxHiddenxGroup__pfTTTT(UChildActorComponent* bpp__MoveNode__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HighlightNode"))
	virtual void bpf__HighlightNode__pf(bool bpp__Next__pf, bool bpp__Previous__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MakeHighlightMesh"))
	virtual void bpf__MakeHighlightMesh__pf(/*out*/ UStaticMeshComponent*& bpp__OutMesh__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyHiddenNodes"))
	virtual void bpf__DestroyHiddenNodes__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTarget"))
	virtual void bpf__UpdateTarget__pf(FVector bpp__NewTargetLocation__pf, FVector bpp__NewSourceLocation__pf, float bpp__ChildTransformStrength__pf, float bpp__ChildTransformStrengthChopOff__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyNode"))
	virtual void bpf__DestroyNode__pf(UChildActorComponent* bpp__NodeChildActorComponent__pf, AB_LightningNode_C__pf2650558384* bpp__NodeBluePrint__pf);
public:
};
