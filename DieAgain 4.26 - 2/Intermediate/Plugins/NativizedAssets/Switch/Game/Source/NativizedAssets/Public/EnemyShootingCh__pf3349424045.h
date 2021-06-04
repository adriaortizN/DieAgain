#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "EnumWeapon__pf3349424045.h"
#include "EnumState__pf3349424045.h"
#include "EnumCameraType__pf3349424045.h"
#include "EnumTypesOfCharacters__pf3349424045.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "BaseCharacter__pf1010915279.h"
class UStaticMeshComponent;
class UPaperSpriteComponent;
class UParticleSystemComponent;
class UChildActorComponent;
class UFMODAudioComponent;
class UBoxComponent;
class UPointLightComponent;
class USpotLightComponent;
class USkeletalMeshComponent;
class ATargetPoint;
class AAlarm_C__pf2693064426;
class ACharacter;
class AEnemyShootingCh_C__pf3349424045;
class ACameraActor_C__pf1295471953;
class AActor;
class AAlarmDetectorPawn_C__pf2693064426;
class ALevelCompleterBP_C__pf922009354;
class AChameleon_C__pf565858488;
class AAISniperController_C__pf1156381827;
class AAISuicideController_C__pf3889547882;
class AAISlaveController_C__pf1263353332;
class AAIShootingController_C__pf681293266;
class UPhysicalMaterial;
class UPrimitiveComponent;
class APlayerController;
class AShotgunPickUp_C__pf1651478651;
class ASniperPickUp_C__pf1651478651;
class AKnifePickUp_C__pf1651478651;
class AAShotgunPickUp_C__pf1651478651;
class ARPGPickUp_C__pf1651478651;
class AThirdPersonCharacter_C__pf2222656877;
class AEnemyDogCh_C__pf3349424045;
class UPauseHUD_C__pf197907997;
class UMyGameInstance_C__pf2410127383;
class ADieAgainGamemode_C__pf1010915279;
class UMovementComponent;
#include "EnemyShootingCh__pf3349424045.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnemyShootingCh.EnemyShootingCh_C", OverrideNativeName="EnemyShootingCh_C"))
class AEnemyShootingCh_C__pf3349424045 : public ABaseCharacter_C__pf1010915279
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="/** Fires when a particle dies\t* @param EventName - Custom event name for the Collision Event.\t* @param EmitterTime - The emitter time when the event occured.\t* @param ParticleTime - How long the particle had been alive at the time of the event.\t* @param Location - Location of the collision.\t* @param Velocity - Velocity of the particle at the point of collision.\t* @param Direction - Direction of the particle at the point of collision.\t* @param Normal - Normal to the surface with which collision occurred.\t* @param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\t* @param PhysMat - Physical Material for this collision.\t*/", ToolTip="Fires when a particle dies@param EventName - Custom event name for the Collision Event.@param EmitterTime - The emitter time when the event occured.@param ParticleTime - How long the particle had been alive at the time of the event.@param Location - Location of the collision.@param Velocity - Velocity of the particle at the point of collision.@param Direction - Direction of the particle at the point of collision.@param Normal - Normal to the surface with which collision occurred.@param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)@param PhysMat - Physical Material for this collision.", OverrideNativeName="ParticleCollisionSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_NineParams(F__ParticleCollisionSignature__DelegateSignature__SC_0, FName , bpp__EventName__pf, float , bpp__EmitterTime__pf, int32 , bpp__ParticleTime__pf, FVector , bpp__Location__pf, FVector , bpp__Velocity__pf, FVector , bpp__Direction__pf, FVector , bpp__Normal__pf, FName , bpp__BoneName__pf, UPhysicalMaterial* , bpp__PhysMat__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperPrediction"))
	UStaticMeshComponent* bpv__SniperPrediction__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PaperSprite"))
	UPaperSpriteComponent* bpv__PaperSprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LaserBeam"))
	UParticleSystemComponent* bpv__LaserBeam__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointSpawnBullet"))
	UChildActorComponent* bpv__PointSpawnBullet__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShotgunHandGuard"))
	UStaticMeshComponent* bpv__ShotgunHandGuard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShotgunBarrelCover"))
	UStaticMeshComponent* bpv__ShotgunBarrelCover__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShotgunButtStock"))
	UStaticMeshComponent* bpv__ShotgunButtStock__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperScope"))
	UStaticMeshComponent* bpv__SniperScope__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperCanon"))
	UStaticMeshComponent* bpv__SniperCanon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MuzzleFlash"))
	UParticleSystemComponent* bpv__MuzzleFlash__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AudioEnemy"))
	UFMODAudioComponent* bpv__AudioEnemy__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="KnifeBoxCollision"))
	UBoxComponent* bpv__KnifeBoxCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperBeam"))
	UParticleSystemComponent* bpv__SniperBeam__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperPreBeam"))
	UParticleSystemComponent* bpv__SniperPreBeam__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SniperBeamFinalPoint"))
	UStaticMeshComponent* bpv__SniperBeamFinalPoint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpotLight"))
	USpotLightComponent* bpv__SpotLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CubeDistance"))
	UStaticMeshComponent* bpv__CubeDistance__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandWeapon"))
	UChildActorComponent* bpv__HandWeapon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FireRifle"))
	UChildActorComponent* bpv__FireRifle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LineTraceHitBox"))
	UBoxComponent* bpv__LineTraceHitBox__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SuicidePoint"))
	UChildActorComponent* bpv__SuicidePoint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WeaponEnemy"))
	UStaticMeshComponent* bpv__WeaponEnemy__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollision"))
	UBoxComponent* bpv__BoxCollision__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Turn Rate", Category="Default", MultiLine="true", OverrideNativeName="BaseTurnRate"))
	float bpv__BaseTurnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Look Up Rate", Category="Default", MultiLine="true", OverrideNativeName="BaseLookUpRate"))
	float bpv__BaseLookUpRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking", Category="Default", MultiLine="true", OverrideNativeName="Attacking"))
	bool bpv__Attacking__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Patrol Points", Category="Default", MultiLine="true", OverrideNativeName="PatrolPoints"))
	TArray<ATargetPoint*> bpv__PatrolPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance with Player", Category="Default", MultiLine="true", OverrideNativeName="DistanceWithPlayer"))
	float bpv__DistanceWithPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Range to Run Away", Category="Default", MultiLine="true", OverrideNativeName="RangeToRunAway"))
	float bpv__RangeToRunAway__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Alarm Point", Category="Default", MultiLine="true", OverrideNativeName="AlarmPoint"))
	AAlarm_C__pf2693064426* bpv__AlarmPoint__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Squad", Category="Default", MultiLine="true", OverrideNativeName="Squad"))
	int32 bpv__Squad__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Previous Squad", Category="Default", MultiLine="true", OverrideNativeName="PreviousSquad"))
	int32 bpv__PreviousSquad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HP", Category="Default", MultiLine="true", OverrideNativeName="HP"))
	int32 bpv__HP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Speed", Category="Default", MultiLine="true", OverrideNativeName="MovementSpeed"))
	FVector bpv__MovementSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Player", Category="Default", MultiLine="true", OverrideNativeName="IsPlayer"))
	bool bpv__IsPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Impact Velocity", Category="Default", MultiLine="true", OverrideNativeName="ImpactVelocity"))
	float bpv__ImpactVelocity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Death", Category="Default", MultiLine="true", OverrideNativeName="IsDeath"))
	bool bpv__IsDeath__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Weapon", Category="Default", MultiLine="true", OverrideNativeName="Weapon"))
	E__EnumWeapon__pf bpv__Weapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="State", Category="Default", MultiLine="true", OverrideNativeName="State"))
	E__EnumState__pf bpv__State__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Animation Suicide", Category="Default", MultiLine="true", OverrideNativeName="DelayAnimationSuicide"))
	float bpv__DelayAnimationSuicide__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Type", Category="Default", MultiLine="true", OverrideNativeName="CameraType"))
	E__EnumCameraType__pf bpv__CameraType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Distance", Category="Default", MultiLine="true", OverrideNativeName="ClosestDistance"))
	float bpv__ClosestDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dying Actor", Category="Default", MultiLine="true", OverrideNativeName="DyingActor"))
	ACharacter* bpv__DyingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="To Possess Actor", Category="Default", MultiLine="true", OverrideNativeName="ToPossessActor"))
	AEnemyShootingCh_C__pf3349424045* bpv__ToPossessActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Distance", Category="Default", MultiLine="true", OverrideNativeName="MinDistance"))
	float bpv__MinDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Cadence", Category="Default", MultiLine="true", OverrideNativeName="TimerCadence"))
	float bpv__TimerCadence__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Activating Alarm", Category="Default", MultiLine="true", OverrideNativeName="ActivatingAlarm"))
	bool bpv__ActivatingAlarm__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Self Enemy Type", Category="Default", MultiLine="true", OverrideNativeName="SelfEnemyType"))
	E__EnumTypesOfCharacters__pf bpv__SelfEnemyType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actors in Vision", Category="Default", MultiLine="true", OverrideNativeName="ActorsInVision"))
	TArray<AEnemyShootingCh_C__pf3349424045*> bpv__ActorsInVision__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Exposed", Category="Default", MultiLine="true", OverrideNativeName="Exposed"))
	bool bpv__Exposed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Actor", Category="Default", MultiLine="true", OverrideNativeName="CameraActor"))
	ACameraActor_C__pf1295471953* bpv__CameraActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammunition", Category="Default", MultiLine="true", OverrideNativeName="Ammunition"))
	int32 bpv__Ammunition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlaping Actor", Category="Default", MultiLine="true", OverrideNativeName="OverlapingActor"))
	AActor* bpv__OverlapingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Overlaping Actor", Category="Default", MultiLine="true", OverrideNativeName="IsOverlapingActor"))
	bool bpv__IsOverlapingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Suiciding", Category="Default", MultiLine="true", OverrideNativeName="IsSuiciding"))
	bool bpv__IsSuiciding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shotgun Shoot", Category="Default", MultiLine="true", OverrideNativeName="ShotgunShoot"))
	bool bpv__ShotgunShoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Slave", Category="Default", MultiLine="true", tooltip="Este actor es un esclavo? Util para cuando el player posea a este actor", OverrideNativeName="IsSlave"))
	bool bpv__IsSlave__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is VIP", Category="Default", MultiLine="true", OverrideNativeName="IsVIP"))
	bool bpv__IsVIP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dark", Category="Default", MultiLine="true", tooltip="If the level is dark and need to activate the light", OverrideNativeName="IsDark"))
	bool bpv__IsDark__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sniper Enemy Location", Category="Default", MultiLine="true", OverrideNativeName="SniperEnemyLocation"))
	FVector bpv__SniperEnemyLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking with Knife", Category="Default", MultiLine="true", OverrideNativeName="AttackingWithKnife"))
	bool bpv__AttackingWithKnife__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking with Gun", Category="Default", MultiLine="true", OverrideNativeName="AttackingWithGun"))
	bool bpv__AttackingWithGun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suiciding with Knife", Category="Default", MultiLine="true", OverrideNativeName="SuicidingWithKnife"))
	bool bpv__SuicidingWithKnife__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alarm Reference", Category="Default", MultiLine="true", OverrideNativeName="AlarmReference"))
	AAlarmDetectorPawn_C__pf2693064426* bpv__AlarmReference__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Zero Ammo", Category="Default", MultiLine="true", tooltip="Si el jugador, al poseer a este enemigo, debe tener 0 balas", OverrideNativeName="ZeroAmmo"))
	bool bpv__ZeroAmmo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Aim", Category="Default", MultiLine="true", OverrideNativeName="AttackAim"))
	int32 bpv__AttackAim__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="XDispersion", Category="Default", MultiLine="true", OverrideNativeName="XDispersion"))
	float bpv__XDispersion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="YDispersion", Category="Default", MultiLine="true", OverrideNativeName="YDispersion"))
	float bpv__YDispersion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Rifle", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoRifle"))
	bool bpv__ExtraAmmoRifle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Shotgun", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoShotgun"))
	bool bpv__ExtraAmmoShotgun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Completer Ref", Category="Default", MultiLine="true", OverrideNativeName="LevelCompleterRef"))
	ALevelCompleterBP_C__pf922009354* bpv__LevelCompleterRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Activate Power Up", Category="Default", MultiLine="true", OverrideNativeName="CanActivatePowerUp"))
	bool bpv__CanActivatePowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cooldown Power Up", Category="Default", MultiLine="true", OverrideNativeName="CooldownPowerUp"))
	float bpv__CooldownPowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Remaining Time Power Up", Category="Default", MultiLine="true", OverrideNativeName="RemainingTimePowerUp"))
	FTimerHandle bpv__RemainingTimePowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Actors", Category="Default", MultiLine="true", OverrideNativeName="DeathActors"))
	TArray<AActor*> bpv__DeathActors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor Is Already Death", Category="Default", MultiLine="true", OverrideNativeName="ActorIsAlreadyDeath"))
	bool bpv__ActorIsAlreadyDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chameleon Ref", Category="Default", MultiLine="true", OverrideNativeName="ChameleonRef"))
	AChameleon_C__pf565858488* bpv__ChameleonRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Mouse Position", Category="Default", MultiLine="true", OverrideNativeName="lastMousePosition"))
	FVector2D bpv__lastMousePosition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Init Bullet Angle Shotgun", Category="Default", MultiLine="true", OverrideNativeName="InitBulletAngleShotgun"))
	float bpv__InitBulletAngleShotgun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bullet Angle Shotgun", Category="Default", MultiLine="true", OverrideNativeName="BulletAngleShotgun"))
	float bpv__BulletAngleShotgun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Rotation Axis", Category="Default", MultiLine="true", OverrideNativeName="lastRotationAxis"))
	FVector2D bpv__lastRotationAxis__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is God Mode Active", Category="Default", MultiLine="true", OverrideNativeName="IsGodModeActive"))
	bool bpv__IsGodModeActive__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b1l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b1l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b1l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X"))
	float b1l__CallFunc_BreakVector2D_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y"))
	float b1l__CallFunc_BreakVector2D_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b1l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b1l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b1l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACameraActor_C__pf1295471953*> b1l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISniper_Controller"))
	AAISniperController_C__pf1156381827* b1l__K2Node_DynamicCast_AsAISniper_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller"))
	AAISuicideController_C__pf3889547882* b1l__K2Node_DynamicCast_AsAISuicide_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISlave_Controller"))
	AAISlaveController_C__pf1263353332* b1l__K2Node_DynamicCast_AsAISlave_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller_1"))
	AAISuicideController_C__pf3889547882* b1l__K2Node_DynamicCast_AsAISuicide_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller"))
	AAIShootingController_C__pf681293266* b1l__K2Node_DynamicCast_AsAIShooting_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult"))
	FHitResult b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b1l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b1l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b1l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b1l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b1l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b1l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b1l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b1l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b1l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b1l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b1l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b1l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b1l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b1l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b1l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult_1"))
	FHitResult b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_1"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_1"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_1"))
	float b1l__CallFunc_BreakHitResult_Time_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_1"))
	float b1l__CallFunc_BreakHitResult_Distance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_1"))
	FVector b1l__CallFunc_BreakHitResult_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_1"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_1"))
	FVector b1l__CallFunc_BreakHitResult_Normal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_1"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_1"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_1"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_1"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_1"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_1"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_1"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_1"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_1"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISniper_Controller_1"))
	AAISniperController_C__pf1156381827* b1l__K2Node_DynamicCast_AsAISniper_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_2"))
	float b1l__CallFunc_BreakVector_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_2"))
	float b1l__CallFunc_BreakVector_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_2"))
	float b1l__CallFunc_BreakVector_Z_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller_2"))
	AAISuicideController_C__pf3889547882* b1l__K2Node_DynamicCast_AsAISuicide_Controller_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b1l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller_1"))
	AAIShootingController_C__pf681293266* b1l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b1l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	TArray<AActor*> b1l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller"))
	APlayerController* b1l__K2Node_DynamicCast_AsPlayer_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b1l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_2"))
	TArray<AActor*> b1l__Temp_object_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b1l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_3"))
	TArray<AActor*> b1l__Temp_object_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ACameraActor_C__pf1295471953* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b1l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DamageTaken"))
	int32 b1l__K2Node_CustomEvent_DamageTaken__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_HitBoneName"))
	FName b1l__K2Node_CustomEvent_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EnemyHitLocation"))
	FVector b1l__K2Node_CustomEvent_EnemyHitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ActorWhoKilledPlayer"))
	AActor* b1l__K2Node_CustomEvent_ActorWhoKilledPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_1"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b1l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_2"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b1l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_3"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_12"))
	bool b1l__K2Node_DynamicCast_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_1"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b1l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b1l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b1l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsShotgun_Pick_Up"))
	AShotgunPickUp_C__pf1651478651* b1l__K2Node_DynamicCast_AsShotgun_Pick_Up__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_13"))
	bool b1l__K2Node_DynamicCast_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSniper_Pick_Up"))
	ASniperPickUp_C__pf1651478651* b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_14"))
	bool b1l__K2Node_DynamicCast_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsKnife_Pick_Up"))
	AKnifePickUp_C__pf1651478651* b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_15"))
	bool b1l__K2Node_DynamicCast_bSuccess_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAShotgun_Pick_Up"))
	AAShotgunPickUp_C__pf1651478651* b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_16"))
	bool b1l__K2Node_DynamicCast_bSuccess_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRPGPick_Up"))
	ARPGPickUp_C__pf1651478651* b1l__K2Node_DynamicCast_AsRPGPick_Up__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_17"))
	bool b1l__K2Node_DynamicCast_bSuccess_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_2"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b1l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_3"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller_2"))
	AAIShootingController_C__pf681293266* b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_18"))
	bool b1l__K2Node_DynamicCast_bSuccess_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_2"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_2"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_2"))
	float b1l__CallFunc_BreakHitResult_Time_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_2"))
	float b1l__CallFunc_BreakHitResult_Distance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_2"))
	FVector b1l__CallFunc_BreakHitResult_Location_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_2"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_2"))
	FVector b1l__CallFunc_BreakHitResult_Normal_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_2"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_2"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_2"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_2"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_2"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_2"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_2"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_2"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_2"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b1l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_19"))
	bool b1l__K2Node_DynamicCast_bSuccess_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_20"))
	bool b1l__K2Node_DynamicCast_bSuccess_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_21"))
	bool b1l__K2Node_DynamicCast_bSuccess_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_4"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISlave_Controller_1"))
	AAISlaveController_C__pf1263353332* b1l__K2Node_DynamicCast_AsAISlave_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_22"))
	bool b1l__K2Node_DynamicCast_bSuccess_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller_3"))
	AAISuicideController_C__pf3889547882* b1l__K2Node_DynamicCast_AsAISuicide_Controller_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_23"))
	bool b1l__K2Node_DynamicCast_bSuccess_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller_3"))
	AAIShootingController_C__pf681293266* b1l__K2Node_DynamicCast_AsAIShooting_Controller_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_24"))
	bool b1l__K2Node_DynamicCast_bSuccess_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISlave_Controller_2"))
	AAISlaveController_C__pf1263353332* b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_25"))
	bool b1l__K2Node_DynamicCast_bSuccess_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_1"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_3"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_3"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_3"))
	float b1l__CallFunc_BreakHitResult_Time_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_3"))
	float b1l__CallFunc_BreakHitResult_Distance_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_3"))
	FVector b1l__CallFunc_BreakHitResult_Location_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_3"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_3"))
	FVector b1l__CallFunc_BreakHitResult_Normal_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_3"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_3"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_3"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_3"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_3"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_3"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_3"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_3"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_3"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_3"))
	int32 b1l__Temp_int_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b1l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISniper_Controller_2"))
	AAISniperController_C__pf1156381827* b1l__K2Node_DynamicCast_AsAISniper_Controller_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_26"))
	bool b1l__K2Node_DynamicCast_bSuccess_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_1"))
	float b1l__CallFunc_BreakRotator_Roll_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_1"))
	float b1l__CallFunc_BreakRotator_Pitch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_1"))
	float b1l__CallFunc_BreakRotator_Yaw_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_4"))
	int32 b1l__Temp_int_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_3"))
	int32 b1l__Temp_int_Loop_Counter_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISniper_Controller_3"))
	AAISniperController_C__pf1156381827* b1l__K2Node_DynamicCast_AsAISniper_Controller_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_27"))
	bool b1l__K2Node_DynamicCast_bSuccess_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceMulti_OutHits"))
	TArray<FHitResult> b1l__CallFunc_LineTraceMulti_OutHits__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_3"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_3"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_3"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_3"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_2"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_2"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_1"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_28"))
	bool b1l__K2Node_DynamicCast_bSuccess_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_1"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_29"))
	bool b1l__K2Node_DynamicCast_bSuccess_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_5"))
	int32 b1l__Temp_int_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_5"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_4"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b1l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b1l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_6"))
	int32 b1l__Temp_int_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Type_Of_Controller"))
	E__EnumTypesOfCharacters__pf b1l__K2Node_CustomEvent_Type_Of_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EnemyLocation"))
	FVector b1l__K2Node_CustomEvent_EnemyLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_3"))
	int32 b1l__Temp_int_Array_Index_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FHitResult b1l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_4"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_4"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_4"))
	float b1l__CallFunc_BreakHitResult_Time_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_4"))
	float b1l__CallFunc_BreakHitResult_Distance_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_4"))
	FVector b1l__CallFunc_BreakHitResult_Location_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_4"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_4"))
	FVector b1l__CallFunc_BreakHitResult_Normal_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_4"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_4"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_4"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_4"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_4"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_4"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_4"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_4"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_4"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character_1"))
	AThirdPersonCharacter_C__pf2222656877* b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_30"))
	bool b1l__K2Node_DynamicCast_bSuccess_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_2"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_31"))
	bool b1l__K2Node_DynamicCast_bSuccess_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_2"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_32"))
	bool b1l__K2Node_DynamicCast_bSuccess_32__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b1l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_5"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_7"))
	int32 b1l__Temp_int_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceMulti_OutHits_1"))
	TArray<FHitResult> b1l__CallFunc_LineTraceMulti_OutHits_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_2"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_2"))
	bool b1l__Temp_bool_IsClosed_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_1"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_2"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_3"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_4"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UPauseHUD_C__pf197907997* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_5"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_8"))
	int32 b1l__Temp_int_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_6"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_3"))
	float b1l__CallFunc_BreakVector_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_3"))
	float b1l__CallFunc_BreakVector_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_3"))
	float b1l__CallFunc_BreakVector_Z_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_2"))
	float b1l__CallFunc_BreakRotator_Roll_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_2"))
	float b1l__CallFunc_BreakRotator_Pitch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_2"))
	float b1l__CallFunc_BreakRotator_Yaw_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_4"))
	float b1l__CallFunc_BreakVector_X_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_4"))
	float b1l__CallFunc_BreakVector_Y_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_4"))
	float b1l__CallFunc_BreakVector_Z_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_6"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_3"))
	float b1l__CallFunc_BreakRotator_Roll_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_3"))
	float b1l__CallFunc_BreakRotator_Pitch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_3"))
	float b1l__CallFunc_BreakRotator_Yaw_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_3"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_3"))
	bool b1l__Temp_bool_IsClosed_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_7"))
	E__EnumWeapon__pf b1l__Temp_byte_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	E__EnumWeapon__pf b1l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_4"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_7"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_8"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_4"))
	TArray<AActor*> b1l__Temp_object_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_4"))
	bool b1l__Temp_bool_IsClosed_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EventName_2"))
	FName b1l__K2Node_CustomEvent_EventName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EmitterTime_2"))
	float b1l__K2Node_CustomEvent_EmitterTime_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ParticleTime_2"))
	int32 b1l__K2Node_CustomEvent_ParticleTime_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location_2"))
	FVector b1l__K2Node_CustomEvent_Location_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Velocity_2"))
	FVector b1l__K2Node_CustomEvent_Velocity_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction_2"))
	FVector b1l__K2Node_CustomEvent_Direction_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Normal_2"))
	FVector b1l__K2Node_CustomEvent_Normal_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BoneName_2"))
	FName b1l__K2Node_CustomEvent_BoneName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PhysMat_2"))
	UPhysicalMaterial* b1l__K2Node_CustomEvent_PhysMat_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	FTimerDynamicDelegate b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EventName_1"))
	FName b1l__K2Node_CustomEvent_EventName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EmitterTime_1"))
	float b1l__K2Node_CustomEvent_EmitterTime_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ParticleTime_1"))
	int32 b1l__K2Node_CustomEvent_ParticleTime_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location_1"))
	FVector b1l__K2Node_CustomEvent_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Velocity_1"))
	FVector b1l__K2Node_CustomEvent_Velocity_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction_1"))
	FVector b1l__K2Node_CustomEvent_Direction_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Normal_1"))
	FVector b1l__K2Node_CustomEvent_Normal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BoneName_1"))
	FName b1l__K2Node_CustomEvent_BoneName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PhysMat_1"))
	UPhysicalMaterial* b1l__K2Node_CustomEvent_PhysMat_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_5"))
	TArray<AActor*> b1l__Temp_object_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_6"))
	TArray<AActor*> b1l__Temp_object_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_9"))
	int32 b1l__Temp_int_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EventName"))
	FName b1l__K2Node_CustomEvent_EventName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EmitterTime"))
	float b1l__K2Node_CustomEvent_EmitterTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ParticleTime"))
	int32 b1l__K2Node_CustomEvent_ParticleTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location"))
	FVector b1l__K2Node_CustomEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Velocity"))
	FVector b1l__K2Node_CustomEvent_Velocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction"))
	FVector b1l__K2Node_CustomEvent_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Normal"))
	FVector b1l__K2Node_CustomEvent_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BoneName"))
	FName b1l__K2Node_CustomEvent_BoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PhysMat"))
	UPhysicalMaterial* b1l__K2Node_CustomEvent_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_7"))
	TArray<AActor*> b1l__Temp_object_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_9"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_8"))
	TArray<AActor*> b1l__Temp_object_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_2"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_5"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_5"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_5"))
	float b1l__CallFunc_BreakHitResult_Time_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_5"))
	float b1l__CallFunc_BreakHitResult_Distance_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_5"))
	FVector b1l__CallFunc_BreakHitResult_Location_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_5"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_5"))
	FVector b1l__CallFunc_BreakHitResult_Normal_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_5"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_5"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_5"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_5"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_5"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_5"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_5"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_5"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_5"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_3"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_33"))
	bool b1l__K2Node_DynamicCast_bSuccess_33__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_3"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_34"))
	bool b1l__K2Node_DynamicCast_bSuccess_34__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_35"))
	bool b1l__K2Node_DynamicCast_bSuccess_35__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b1l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_4"))
	int32 b1l__Temp_int_Array_Index_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FHitResult b1l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_6"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_6"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_6"))
	float b1l__CallFunc_BreakHitResult_Time_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_6"))
	float b1l__CallFunc_BreakHitResult_Distance_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_6"))
	FVector b1l__CallFunc_BreakHitResult_Location_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_6"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_6"))
	FVector b1l__CallFunc_BreakHitResult_Normal_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_6"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_6"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_6"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_6"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_6"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_6"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_6"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_6"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_6"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b1l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_4"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_36"))
	bool b1l__K2Node_DynamicCast_bSuccess_36__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_4"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_37"))
	bool b1l__K2Node_DynamicCast_bSuccess_37__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_6"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_7"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult_8"))
	FHitResult b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AAlarmDetectorPawn_C__pf2693064426*> b1l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b1l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	AAlarmDetectorPawn_C__pf2693064426* b1l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAlarm_Detector_Pawn"))
	AAlarmDetectorPawn_C__pf2693064426* b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_38"))
	bool b1l__K2Node_DynamicCast_bSuccess_38__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b1l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b1l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAlarm_Detector_Pawn_1"))
	AAlarmDetectorPawn_C__pf2693064426* b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_39"))
	bool b1l__K2Node_DynamicCast_bSuccess_39__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAlarm_Detector_Pawn_2"))
	AAlarmDetectorPawn_C__pf2693064426* b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_40"))
	bool b1l__K2Node_DynamicCast_bSuccess_40__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b1l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_10"))
	int32 b1l__Temp_int_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ALevelCompleterBP_C__pf922009354*> b1l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP"))
	ALevelCompleterBP_C__pf922009354* b1l__K2Node_DynamicCast_AsLevel_Completer_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_41"))
	bool b1l__K2Node_DynamicCast_bSuccess_41__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	ALevelCompleterBP_C__pf922009354* b1l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP_1"))
	ALevelCompleterBP_C__pf922009354* b1l__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_42"))
	bool b1l__K2Node_DynamicCast_bSuccess_42__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP_2"))
	ALevelCompleterBP_C__pf922009354* b1l__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_43"))
	bool b1l__K2Node_DynamicCast_bSuccess_43__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_44"))
	bool b1l__K2Node_DynamicCast_bSuccess_44__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_9"))
	TArray<AActor*> b1l__Temp_object_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_3"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_7"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_7"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_7"))
	float b1l__CallFunc_BreakHitResult_Time_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_7"))
	float b1l__CallFunc_BreakHitResult_Distance_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_7"))
	FVector b1l__CallFunc_BreakHitResult_Location_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_7"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_7"))
	FVector b1l__CallFunc_BreakHitResult_Normal_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_7"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_7"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_7"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_7"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_7"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_7"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_7"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_7"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_7"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_5"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_45"))
	bool b1l__K2Node_DynamicCast_bSuccess_45__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_5"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_46"))
	bool b1l__K2Node_DynamicCast_bSuccess_46__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FloatWithMaxAndMin_Return"))
	float b1l__CallFunc_FloatWithMaxAndMin_Return__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FloatWithMaxAndMin_Return_1"))
	float b1l__CallFunc_FloatWithMaxAndMin_Return_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b1l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_10"))
	TArray<AActor*> b1l__Temp_object_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_4"))
	int32 b1l__Temp_int_Loop_Counter_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_4"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_8"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_8"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_8"))
	float b1l__CallFunc_BreakHitResult_Time_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_8"))
	float b1l__CallFunc_BreakHitResult_Distance_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_8"))
	FVector b1l__CallFunc_BreakHitResult_Location_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_8"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_8"))
	FVector b1l__CallFunc_BreakHitResult_Normal_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_8"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_8"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_8"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_8"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_8"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_8"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_8"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_8"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_8"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_6"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_47"))
	bool b1l__K2Node_DynamicCast_bSuccess_47__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_6"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_48"))
	bool b1l__K2Node_DynamicCast_bSuccess_48__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character_2"))
	AThirdPersonCharacter_C__pf2222656877* b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_49"))
	bool b1l__K2Node_DynamicCast_bSuccess_49__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FVector b1l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_1"))
	float b1l__CallFunc_BreakVector2D_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_1"))
	float b1l__CallFunc_BreakVector2D_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_2"))
	float b1l__CallFunc_BreakVector2D_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_2"))
	float b1l__CallFunc_BreakVector2D_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_RandPointInCircle_PointZ"))
	float b1l__CallFunc_RandPointInCircle_PointZ__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_5"))
	float b1l__CallFunc_BreakVector_X_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_5"))
	float b1l__CallFunc_BreakVector_Y_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_5"))
	float b1l__CallFunc_BreakVector_Z_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_8"))
	TEnumAsByte<ETouchIndex::Type> b1l__Temp_byte_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_5"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_9"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_9"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_9"))
	float b1l__CallFunc_BreakHitResult_Time_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_9"))
	float b1l__CallFunc_BreakHitResult_Distance_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_9"))
	FVector b1l__CallFunc_BreakHitResult_Location_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_9"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_9"))
	FVector b1l__CallFunc_BreakHitResult_Normal_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_9"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_9"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_9"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_9"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_9"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_9"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_9"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_9"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_9"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_6"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_7"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_50"))
	bool b1l__K2Node_DynamicCast_bSuccess_50__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_10"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_10"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_10"))
	float b1l__CallFunc_BreakHitResult_Time_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_10"))
	float b1l__CallFunc_BreakHitResult_Distance_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_10"))
	FVector b1l__CallFunc_BreakHitResult_Location_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_10"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_10"))
	FVector b1l__CallFunc_BreakHitResult_Normal_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_10"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_10"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_10"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_10"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_10"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_10"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_10"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_10"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_10"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_8"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_51"))
	bool b1l__K2Node_DynamicCast_bSuccess_51__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_7"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_52"))
	bool b1l__K2Node_DynamicCast_bSuccess_52__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_8"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_53"))
	bool b1l__K2Node_DynamicCast_bSuccess_53__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> b1l__K2Node_InputTouchEvent_FingerIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location"))
	FVector b1l__K2Node_InputTouchEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b1l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b1l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	FTimerDynamicDelegate b1l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_RandPointInCircle_PointZ_1"))
	float b1l__CallFunc_RandPointInCircle_PointZ_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_6"))
	float b1l__CallFunc_BreakVector_X_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_6"))
	float b1l__CallFunc_BreakVector_Y_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_6"))
	float b1l__CallFunc_BreakVector_Z_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_7"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_11"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_11"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_11"))
	float b1l__CallFunc_BreakHitResult_Time_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_11"))
	float b1l__CallFunc_BreakHitResult_Distance_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_11"))
	FVector b1l__CallFunc_BreakHitResult_Location_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_11"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_11"))
	FVector b1l__CallFunc_BreakHitResult_Normal_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_11"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_11"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_11"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_11"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_11"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_11"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_11"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_11"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_11"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit_8"))
	FHitResult b1l__CallFunc_LineTraceSingle_OutHit_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_9"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_54"))
	bool b1l__K2Node_DynamicCast_bSuccess_54__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_12"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_12"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_12"))
	float b1l__CallFunc_BreakHitResult_Time_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_12"))
	float b1l__CallFunc_BreakHitResult_Distance_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_12"))
	FVector b1l__CallFunc_BreakHitResult_Location_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_12"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_12"))
	FVector b1l__CallFunc_BreakHitResult_Normal_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_12"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_12"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_12"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_12"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_12"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_12"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_12"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_12"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_12"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_10"))
	AEnemyShootingCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_55"))
	bool b1l__K2Node_DynamicCast_bSuccess_55__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_9"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_56"))
	bool b1l__K2Node_DynamicCast_bSuccess_56__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_10"))
	AEnemyDogCh_C__pf3349424045* b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_57"))
	bool b1l__K2Node_DynamicCast_bSuccess_57__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_11"))
	int32 b1l__Temp_int_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_58"))
	bool b1l__K2Node_DynamicCast_bSuccess_58__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_1"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_59"))
	bool b1l__K2Node_DynamicCast_bSuccess_59__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_2"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_60"))
	bool b1l__K2Node_DynamicCast_bSuccess_60__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPause_HUD"))
	UPauseHUD_C__pf197907997* b1l__K2Node_DynamicCast_AsPause_HUD__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_61"))
	bool b1l__K2Node_DynamicCast_bSuccess_61__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Z"))
	float b1l__K2Node_CustomEvent_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__ParticleCollisionSignature__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__ParticleCollisionSignature__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_3"))
	float b1l__CallFunc_BreakVector2D_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_3"))
	float b1l__CallFunc_BreakVector2D_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex_1"))
	TEnumAsByte<ETouchIndex::Type> b1l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location_1"))
	FVector b1l__K2Node_InputTouchEvent_Location_1__pf;
	AEnemyShootingCh_C__pf3349424045(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_2"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_4"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_15(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_16"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_17(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_18"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_20(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_21"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_25(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyShootingCh_26"))
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_32(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_33(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_34(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_35(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_36(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_37(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_38(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_39(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyShootingCh__pf_40(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FixAreaRotation"))
	virtual void bpf__FixAreaRotation__pf(float bpp__Z__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Open Menu"))
	virtual void bpf__OpenxMenu__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Rotate With Gamepad"))
	virtual void bpf__RotatexWithxGamepad__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Rotate With Mouse"))
	virtual void bpf__RotatexWithxMouse__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PowerUpCooldown"))
	virtual void bpf__PowerUpCooldown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CustomEvent_1"))
	virtual void bpf__CustomEvent_1__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CustomEvent"))
	virtual void bpf__CustomEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SplatterBloodPlayer"))
	virtual void bpf__SplatterBloodPlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCollideEvent"))
	virtual void bpf__OnCollideEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SplatterBloodNPC"))
	virtual void bpf__SplatterBloodNPC__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__KnifeBoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__KnifeBoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DyingAnimation"))
	virtual void bpf__DyingAnimation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Light_Range"))
	virtual void bpf__Light_Range__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LightEvent"))
	virtual void bpf__LightEvent__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__DamageTaken__pf, FName bpp__HitBoneName__pf, FVector bpp__EnemyHitLocation__pf, AActor* bpp__ActorWhoKilledPlayer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AudioCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__AudioCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SuicideEvent"))
	virtual void bpf__SuicideEvent__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AudioCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__AudioCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExpositionEvent"))
	virtual void bpf__ExpositionEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Shooting"))
	virtual void bpf__Shooting__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_47"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Run"))
	virtual void bpf__Run__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Walk"))
	virtual void bpf__Walk__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf(E__EnumTypesOfCharacters__pf bpp__TypexOfxController__pfTT, FVector bpp__EnemyLocation__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pause_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Pause_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PowerUp_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_PowerUp_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Suicide_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Suicide_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Shoot_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Shoot_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Shoot_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Shoot_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Restart_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Restart_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PickWeapon_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_PickWeapon_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Pressed"))
	virtual void bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Released"))
	virtual void bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="DiePlayerFunction"))
	virtual void bpf__DiePlayerFunction__pf(AActor* bpp__ActorWhoKilledPlayer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="FullPlayerDeath"))
	virtual void bpf__FullPlayerDeath__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="PossessingPlayerFunction"))
	virtual void bpf__PossessingPlayerFunction__pf(AEnemyShootingCh_C__pf3349424045* bpp__ToPossessActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ImpulseShoot"))
	virtual void bpf__ImpulseShoot__pf(UPrimitiveComponent* bpp__Mesh__pf, UMovementComponent* bpp__CharacterMovement__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExposePlayer"))
	virtual void bpf__ExposePlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MakeVisibleCubeDistance"))
	virtual void bpf__MakeVisibleCubeDistance__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BulletTrace"))
	virtual void bpf__BulletTrace__pf(FVector bpp__EndLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="SpawnWeaponPlayer"))
	virtual void bpf__SpawnWeaponPlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="ChangeWeapon"))
	virtual void bpf__ChangeWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnWithWeapons"))
	virtual void bpf__SpawnWithWeapons__pf(E__EnumWeapon__pf bpp__WeaponGet__pf, bool bpp__FullxAmmo__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RunAway"))
	virtual void bpf__RunAway__pf(AActor* bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreatingSlave"))
	virtual void bpf__CreatingSlave__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LightFunction"))
	virtual void bpf__LightFunction__pf(bool bpp__IsDark__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SniperMakePreBeamPartycle"))
	virtual void bpf__SniperMakePreBeamPartycle__pf(FVector bpp__EnemyLocation__pf, bool bpp__IsFromPlayer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CameraShake"))
	virtual void bpf__CameraShake__pf(E__EnumWeapon__pf bpp__Weapon__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GunShoot"))
	virtual void bpf__GunShoot__pf(E__EnumWeapon__pf bpp__Weapon__pf, bool bpp__IsSuicide__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Cambia el material de la mascara en funcion de la Squad y su comportamiento", Category, OverrideNativeName="MaskChange"))
	virtual void bpf__MaskChange__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnBullet"))
	virtual void bpf__SpawnBullet__pf(E__EnumWeapon__pf bpp__WeaponEquipped__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AttackingFunction"))
	virtual void bpf__AttackingFunction__pf(bool bpp__Attacking__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyerMeshFunction"))
	virtual void bpf__DestroyerMeshFunction__pf(AActor* bpp__Actor__pf, FVector bpp__HitOrigin__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateMeshIA"))
	virtual void bpf__CreateMeshIA__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Player Functions", OverrideNativeName="SumPoints"))
	virtual void bpf__SumPoints__pf(AActor* bpp__ActorWhoDied__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckExtraAmmo"))
	virtual void bpf__CheckExtraAmmo__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadPowerUp"))
	virtual void bpf__LoadPowerUp__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MakePosesionEffect"))
	virtual void bpf__MakePosesionEffect__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MuzzleFlashRotation"))
	virtual void bpf__MuzzleFlashRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FloatWithMaxAndMin"))
	virtual void bpf__FloatWithMaxAndMin__pf(float bpp__xMax__pfI, float bpp__xMin__pfI, float bpp__xMax__pfG, float bpp__xMin__pfG, /*out*/ float& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnPossesionPS"))
	virtual void bpf__SpawnPossesionPS__pf(AActor* bpp__TargetActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RandPointInCircle"))
	virtual void bpf__RandPointInCircle__pf(/*out*/ float& bpp__Radiuss__pf, /*out*/ float& bpp__PointZ__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitGodMode"))
	virtual void bpf__InitGodMode__pf();
public:
};
