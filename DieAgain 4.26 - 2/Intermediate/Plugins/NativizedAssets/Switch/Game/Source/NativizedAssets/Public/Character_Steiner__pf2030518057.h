#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UPointLightComponent;
class UStaticMeshComponent;
class ATargetPoint;
class UPhysicalMaterial;
#include "Character_Steiner__pf2030518057.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Cutscene/Character_Steiner.Character_Steiner_C", OverrideNativeName="Character_Steiner_C"))
class ACharacter_Steiner_C__pf2030518057 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Blood"))
	UStaticMeshComponent* bpv__Blood__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="First Target", Category="Default", MultiLine="true", OverrideNativeName="FirstTarget"))
	ATargetPoint* bpv__FirstTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Death", Category="Default", MultiLine="true", OverrideNativeName="IsDeath"))
	bool bpv__IsDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Intensity Light", Category="Default", MultiLine="true", OverrideNativeName="IntensityLight"))
	float bpv__IntensityLight__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetTimerDelegate_ReturnValue"))
	FTimerHandle b0l__CallFunc_K2_SetTimerDelegate_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetTimerDelegate_ReturnValue_1"))
	FTimerHandle b0l__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EventName"))
	FName b0l__K2Node_CustomEvent_EventName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EmitterTime"))
	float b0l__K2Node_CustomEvent_EmitterTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ParticleTime"))
	int32 b0l__K2Node_CustomEvent_ParticleTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location"))
	FVector b0l__K2Node_CustomEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Velocity"))
	FVector b0l__K2Node_CustomEvent_Velocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction"))
	FVector b0l__K2Node_CustomEvent_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Normal"))
	FVector b0l__K2Node_CustomEvent_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BoneName"))
	FName b0l__K2Node_CustomEvent_BoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PhysMat"))
	UPhysicalMaterial* b0l__K2Node_CustomEvent_PhysMat__pf;
	ACharacter_Steiner_C__pf2030518057(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Character_Steiner__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Steiner__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Character_Steiner_2"))
	void bpf__ExecuteUbergraph_Character_Steiner__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Steiner__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Steiner__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OffLightFunction"))
	virtual void bpf__OffLightFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LightFunction"))
	virtual void bpf__LightFunction__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BloodEvent"))
	virtual void bpf__BloodEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeathEvent"))
	virtual void bpf__DeathEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnPossesCharacter"))
	virtual void bpf__UnPossesCharacter__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AttachEverything"))
	virtual void bpf__AttachEverything__pf();
public:
};
