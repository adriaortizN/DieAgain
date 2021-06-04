#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UPointLightComponent;
class UStaticMeshComponent;
class UParticleSystemComponent;
class ATargetPoint_Cutscene_C__pf2030518057;
#include "Character_Alfa__pf2030518057.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Cutscene/Character_Alfa.Character_Alfa_C", OverrideNativeName="Character_Alfa_C"))
class ACharacter_Alfa_C__pf2030518057 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MuzzleFlash"))
	UParticleSystemComponent* bpv__MuzzleFlash__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Target Point", Category="Default", MultiLine="true", OverrideNativeName="TargetPoint"))
	ATargetPoint_Cutscene_C__pf2030518057* bpv__TargetPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Turn 180", Category="Default", MultiLine="true", OverrideNativeName="Turn180"))
	bool bpv__Turn180__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="To Shoot", Category="Default", MultiLine="true", OverrideNativeName="ToShoot"))
	bool bpv__ToShoot__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Target Point 2", Category="Default", MultiLine="true", OverrideNativeName="TargetPoint2"))
	ATargetPoint_Cutscene_C__pf2030518057* bpv__TargetPoint2__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	ACharacter_Alfa_C__pf2030518057(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Character_Alfa__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Alfa__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Character_Alfa_2"))
	void bpf__ExecuteUbergraph_Character_Alfa__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Alfa__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Character_Alfa__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OffLightFunction"))
	virtual void bpf__OffLightFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LightFunction"))
	virtual void bpf__LightFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PossesionEffect"))
	virtual void bpf__PossesionEffect__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GoToNextTarget"))
	virtual void bpf__GoToNextTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveTo"))
	virtual void bpf__MoveTo__pf(ATargetPoint_Cutscene_C__pf2030518057* bpp__TargetPoint__pf);
public:
};
