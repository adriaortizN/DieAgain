#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UParticleSystemComponent;
class UChildActorComponent;
class UStaticMeshComponent;
class AB_LightningMaster_C__pf2650558384;
class AB_LightningNode_C__pf2650558384;
#include "B_LightningNode__pf2650558384.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ProceduralLightning/B_LightningNode.B_LightningNode_C", OverrideNativeName="B_LightningNode_C"))
class AB_LightningNode_C__pf2650558384 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LightningSpoke"))
	UParticleSystemComponent* bpv__LightningSpoke__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index", Category="Default", OverrideNativeName="Index"))
	int32 bpv__Index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Branche Depth", Category="Default", OverrideNativeName="CurrentBrancheDepth"))
	int32 bpv__CurrentBrancheDepth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Parent Index", Category="Default", OverrideNativeName="ParentIndex"))
	int32 bpv__ParentIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Update Count", Category="Default", OverrideNativeName="UpdateCount"))
	int32 bpv__UpdateCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Creation Time", Category="Default", OverrideNativeName="CreationTime"))
	float bpv__CreationTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lifetime", Category="Default", OverrideNativeName="Lifetime"))
	float bpv__Lifetime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Self Amperes Factor", Category="Default", OverrideNativeName="SelfAmperesFactor"))
	float bpv__SelfAmperesFactor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Amperes Width", Category="Default", OverrideNativeName="AmperesWidth"))
	float bpv__AmperesWidth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Child", Category="Default", OverrideNativeName="MainChild"))
	UChildActorComponent* bpv__MainChild__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Child", Category="Default", OverrideNativeName="BrancheChild"))
	UChildActorComponent* bpv__BrancheChild__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Branche Factor", Category="Default", OverrideNativeName="MainBrancheFactor"))
	float bpv__MainBrancheFactor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Source Location", Category="Default", OverrideNativeName="SourceLocation"))
	FVector bpv__SourceLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Location", Category="Default", OverrideNativeName="TargetLocation"))
	FVector bpv__TargetLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Sub Location", Category="Default", OverrideNativeName="TargetSubLocation"))
	FVector bpv__TargetSubLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Sub Location Noise", Category="Default", OverrideNativeName="TargetSubLocationNoise"))
	FVector bpv__TargetSubLocationNoise__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Done", Category="Default", OverrideNativeName="BrancheDone"))
	bool bpv__BrancheDone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Chanced", Category="Default", OverrideNativeName="BrancheChanced"))
	bool bpv__BrancheChanced__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Branche Chance Yes", Category="Default", OverrideNativeName="BrancheChanceYes"))
	bool bpv__BrancheChanceYes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Self Component", Category="Default", OverrideNativeName="SelfComponent"))
	UChildActorComponent* bpv__SelfComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Highlight Mesh", Category="Default", OverrideNativeName="HighlightMesh"))
	UStaticMeshComponent* bpv__HighlightMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Master Copy", Category="Default", OverrideNativeName="MasterCopy"))
	AB_LightningMaster_C__pf2650558384* bpv__MasterCopy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delete Self on Next Update", Category="Default", OverrideNativeName="DeleteSelfOnNextUpdate"))
	bool bpv__DeleteSelfOnNextUpdate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delete Branche on Next Update", Category="Default", OverrideNativeName="DeleteBrancheOnNextUpdate"))
	bool bpv__DeleteBrancheOnNextUpdate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Node Update Time", Category="Default", OverrideNativeName="LastNodeUpdateTime"))
	float bpv__LastNodeUpdateTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Node Delta Seconds", Category="Default", OverrideNativeName="NodeDeltaSeconds"))
	float bpv__NodeDeltaSeconds__pf;
	AB_LightningNode_C__pf2650558384(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBranche"))
	virtual void bpf__UpdateBranche__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TransformTarget"))
	virtual void bpf__TransformTarget__pf(FVector bpp__RootSourceLocation__pf, FVector bpp__SourceOffset__pf, float bpp__inScale__pf, FRotator bpp__inRotate__pf, float bpp__ChildTransformStrenth__pf, float bpp__ChopOffStrength__pf, float bpp__RecursiveStrength__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MustRebranche"))
	virtual void bpf__MustRebranche__pf(/*out*/ bool& bpp__Rebranche__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalculateTarget"))
	virtual void bpf__CalculateTarget__pf(FVector bpp__inSourceLocation__pf, FVector bpp__inTargetLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get2OrthogonormalVectors"))
	virtual void bpf__Get2OrthogonormalVectors__pf(FVector bpp__inVector__pf, /*out*/ FVector& bpp__OutCross1__pf, /*out*/ FVector& bpp__OutCross2__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Branche"))
	virtual void bpf__InitializexBranche__pfT(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, FVector bpp__InSourceLocation__pf, FVector bpp__InTargetLocation__pf, float bpp__InAmperesWidth__pf, float bpp__AmperesFactor__pf, float bpp__ParentLifeTIme__pf, float bpp__ParentAliveTIme__pf, int32 bpp__ParentIndex__pf, int32 bpp__ParentBrancheDepth__pf, bool bpp__isMainBranche__pf, UChildActorComponent* bpp__SelfComponentIn__pf, bool bpp__inDeleteSelfOnNextUpdate__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BrancheTimeReached"))
	virtual void bpf__BrancheTimeReached__pf(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, /*out*/ bool& bpp__Reached__pf, /*out*/ float& bpp__OutMainBrancheFactor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Branche Child"))
	virtual void bpf__InitializexBranchexChild__pfTT(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, AB_LightningNode_C__pf2650558384* bpp__ParentNode__pf, float bpp__AmperesFactor__pf, bool bpp__isMainBranche__pf, UChildActorComponent* bpp__SelfComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyBranche"))
	virtual void bpf__DestroyBranche__pf(bool bpp__HideSpokes__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PrintBranche"))
	virtual void bpf__PrintBranche__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBrancheWidth"))
	virtual void bpf__UpdateBrancheWidth__pf(float bpp__NewAmperesWidth__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBranchePosition"))
	virtual void bpf__UpdateBranchePosition__pf(bool bpp__isSub__pf, FVector bpp__NewSourceLocation__pf, FVector bpp__NewTargetLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetWidth"))
	virtual void bpf__SetWidth__pf(float bpp__ExtraFactor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HighlightNode"))
	virtual void bpf__HighlightNode__pf(int32 bpp__NodeIndex__pf, /*out*/ int32& bpp__RecursiveIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBrancheLifetime"))
	virtual void bpf__UpdateBrancheLifetime__pf(bool bpp__inDeleteBrancheOnNextUpdate__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowNodeInfo"))
	virtual void bpf__ShowNodeInfo__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTarget"))
	virtual void bpf__UpdateTarget__pf(FVector bpp__NewTargetLocation__pf, FVector bpp__NewSourceLocation__pf, float bpp__ChildTransformStrength__pf, float bpp__ChildTransformStrengthChopOff__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdatePosition"))
	virtual void bpf__UpdatePosition__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalculateTargetDependingOnParent"))
	virtual void bpf__CalculateTargetDependingOnParent__pf(AB_LightningNode_C__pf2650558384* bpp__ParentLightningNode__pf, AB_LightningMaster_C__pf2650558384* bpp__MasterData__pf, bool bpp__IsMainBranche__pf, /*out*/ FVector& bpp__OutTargetLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBranchePositionParentDependent"))
	virtual void bpf__UpdateBranchePositionParentDependent__pf(AB_LightningNode_C__pf2650558384* bpp__ParentNode__pf, FVector bpp__NewSourceLocation__pf, FVector bpp__NewTargetLocation__pf);
public:
};
