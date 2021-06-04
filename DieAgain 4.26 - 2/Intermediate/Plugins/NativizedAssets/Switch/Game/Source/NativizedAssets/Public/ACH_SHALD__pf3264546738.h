#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
class ALevelSequenceActor;
class UClass;
class UAchievementQueryCallbackProxy;
class UAchievementWriteCallbackProxy;
class APlayerController;
class AActor;
#include "ACH_SHALD__pf3264546738.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/Events/ACH_SHALD.ACH_SHALD_C", OverrideNativeName="ACH_SHALD_C"))
class UACH_SHALD_C__pf3264546738 : public UDialogueEvents
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UDELEGATE(meta=(OverrideNativeName="AchievementWriteDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_ThreeParams(F__AchievementWriteDelegate__DelegateSignature__SC_1, FName , bpp__WrittenAchievementName__pf, float , bpp__WrittenProgress__pf, int32 , bpp__WrittenUserTag__pf);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Matinee to Play", Category="Default", MultiLine="true", OverrideNativeName="MatineeToPlay"))
	UClass* bpv__MatineeToPlay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue"))
	UAchievementQueryCallbackProxy* b0l__CallFunc_CacheAchievements_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue"))
	UAchievementWriteCallbackProxy* b0l__CallFunc_WriteAchievementProgress_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_1"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_1"))
	float b0l__K2Node_CustomEvent_WrittenProgress_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_1"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress"))
	float b0l__K2Node_CustomEvent_WrittenProgress__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b0l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ConsideringPlayer"))
	APlayerController* b0l__K2Node_Event_ConsideringPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NPCActor"))
	AActor* b0l__K2Node_Event_NPCActor__pf;
	UACH_SHALD_C__pf3264546738(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ACH_SHALD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ACH_SHALD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ACH_SHALD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ACH_SHALD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ACH_SHALD__pf_4(int32 bpp__EntryPoint__pf);
	virtual void RecieveEventTriggered_Implementation(APlayerController* bpp__ConsideringPlayer__pf, AActor* bpp__NPCActor__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_070979704EBFCEED7FB157A4995DB7C0"))
	virtual void bpf__OnSuccess_070979704EBFCEED7FB157A4995DB7C0__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_070979704EBFCEED7FB157A4995DB7C0"))
	virtual void bpf__OnFailure_070979704EBFCEED7FB157A4995DB7C0__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_7A7326A84D9C16294014F0B1B908BF2D"))
	virtual void bpf__OnSuccess_7A7326A84D9C16294014F0B1B908BF2D__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_7A7326A84D9C16294014F0B1B908BF2D"))
	virtual void bpf__OnFailure_7A7326A84D9C16294014F0B1B908BF2D__pf();
public:
};
