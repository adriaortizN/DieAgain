#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Enum_NPCs__pf1725468588.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class URotatingMovementComponent;
class UPaperSpriteComponent;
class UBoxComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UObject;
class UClass;
class UDialogue;
class UMyDialogueWidget_C__pf596304771;
class AChameleon_C__pf565858488;
class UPrimitiveComponent;
class AActor;
class APlayerWalkMap_Character_C__pf2222656877;
class ALevelSequenceActor;
class UMyGameInstance_C__pf2410127383;
#include "Conversation_Actor__pf2744501483.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/Actors/Conversation_Actor.Conversation_Actor_C", OverrideNativeName="Conversation_Actor_C"))
class AConversation_Actor_C__pf2744501483 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PumpkinHead"))
	UStaticMeshComponent* bpv__PumpkinHead__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PartyHat"))
	UStaticMeshComponent* bpv__PartyHat__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Hara_horn"))
	UStaticMeshComponent* bpv__SM_Hara_horn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DialogSprite"))
	UPaperSpriteComponent* bpv__DialogSprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BlockCollision"))
	UBoxComponent* bpv__BlockCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mask"))
	USkeletalMeshComponent* bpv__Mask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh"))
	USkeletalMeshComponent* bpv__Mesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Conversation(Not Working)", Category="Default", MultiLine="true", OverrideNativeName="Conversation(NotWorking)"))
	bool bpv__ConversationxNotWorkingx__pfLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh Scale", Category="Default", MultiLine="true", OverrideNativeName="MeshScale"))
	FVector bpv__MeshScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Anim BP", Category="Default", MultiLine="true", OverrideNativeName="AnimBP"))
	UClass* bpv__AnimBP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Talking", Category="Default", MultiLine="true", OverrideNativeName="IsTalking"))
	bool bpv__IsTalking__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NPC", Category="Default", MultiLine="true", OverrideNativeName="NPC"))
	E__Enum_NPCs__pf bpv__NPC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dialogue", Category="Default", MultiLine="true", OverrideNativeName="Dialogue"))
	UDialogue* bpv__Dialogue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Times That Talk", Category="Default", MultiLine="true", OverrideNativeName="TimesThatTalk"))
	int32 bpv__TimesThatTalk__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Times Player Can Talk", Category="Default", MultiLine="true", OverrideNativeName="MaxTimesPlayerCanTalk"))
	int32 bpv__MaxTimesPlayerCanTalk__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Level to Open", Category="Default", MultiLine="true", OverrideNativeName="LevelToOpen"))
	FName bpv__LevelToOpen__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Conversation Need to Rotate", Category="Default", MultiLine="true", OverrideNativeName="ConversationNeedToRotate"))
	bool bpv__ConversationNeedToRotate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Clicking", Category="Default", MultiLine="true", OverrideNativeName="Clicking"))
	bool bpv__Clicking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dialogue WB", Category="Default", MultiLine="true", OverrideNativeName="DialogueWB"))
	UMyDialogueWidget_C__pf596304771* bpv__DialogueWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chameleon Ref", Category="Default", MultiLine="true", OverrideNativeName="ChameleonRef"))
	AChameleon_C__pf565858488* bpv__ChameleonRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Bye", Category="Default", MultiLine="true", OverrideNativeName="IsBye"))
	bool bpv__IsBye__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Index Actor", Category="Default", MultiLine="true", OverrideNativeName="IndexActor"))
	int32 bpv__IndexActor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Skipable", Category="Default", MultiLine="true", OverrideNativeName="IsSkipable"))
	bool bpv__IsSkipable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character_1"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_LevelSequenceClass"))
	UClass* b0l__K2Node_CustomEvent_LevelSequenceClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	AConversation_Actor_C__pf2744501483(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Conversation_Actor__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GoUp"))
	virtual void bpf__GoUp__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PerfectWorldUp"))
	virtual void bpf__PerfectWorldUp__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadLevel"))
	virtual void bpf__LoadLevel__pf(UClass* bpp__LevelSequenceClass__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetAnimBP"))
	virtual void bpf__SetAnimBP__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="ChangeDialogueRotationIfNeeded"))
	virtual void bpf__ChangeDialogueRotationIfNeeded__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartConversation"))
	virtual void bpf__StartConversation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="ChangeInputs"))
	virtual void bpf__ChangeInputs__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StopConversation"))
	virtual void bpf__StopConversation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMesh"))
	virtual void bpf__SetMesh__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Shald2Spawn"))
	virtual void bpf__Shald2Spawn__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetDialogNotVisible"))
	virtual void bpf__SetDialogNotVisible__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RotatePlayerToActor"))
	virtual void bpf__RotatePlayerToActor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PartyHatVisibility"))
	virtual void bpf__PartyHatVisibility__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PumpkinHeadVisi"))
	virtual void bpf__PumpkinHeadVisi__pf();
public:
};
