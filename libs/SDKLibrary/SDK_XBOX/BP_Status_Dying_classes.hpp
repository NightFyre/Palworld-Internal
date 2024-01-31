#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xA0 - 0x48)
// BlueprintGeneratedClass BP_Status_Dying.BP_Status_Dying_C
class UBP_Status_Dying_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUpdateDying;                                     // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          UpdateTimer;                                       // 0x68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDyingEnd;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDyingInterrupt;                                  // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                Action_Actor;                                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_DyingFriendLoupe_C*               DyingLoupe;                                        // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_Dying_C* GetDefaultObj();

	void FlagControll(bool bIsDisable, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnBeginStatus();
	void TickStatus(float DeltaTime);
	void OnEndStatus();
	void SetupInteractTrigger(bool IsEnable);
	void OnStartRescue(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType);
	void OnEndRescue(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType);
	void UpdateDyingWidget();
	void ProcessDeath();
	void StartBindInteract(class UPalInteractDelegates* InteractDelegates);
	void StartUnBindInteract(class UPalInteractDelegates* InteractDelegates);
	void ExecuteUbergraph_BP_Status_Dying(int32 EntryPoint, class UPalInteractDelegates* K2Node_CustomEvent_InteractDelegates, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAliveFriendPlayers_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDyingHPZero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_IsEnable, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UPalInteractiveObjectSphereComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class AActor* K2Node_CustomEvent_Other_1, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType_1, class UPalInteractiveObjectSphereComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* K2Node_CustomEvent_Other, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UBP_DownWidgetParameter_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsFriend_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_4, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_PlayAction_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetOwner_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_6, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_6, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DyingFriendLoupe_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, class UPalInteractDelegates* K2Node_CustomEvent_InteractDelegates_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SubDyingHP_SubHP_ImplicitCast, double K2Node_CallDelegate_DyingHP_ImplicitCast, double K2Node_CallDelegate_MaxDyingHP_ImplicitCast);
	void OnDyingInterrupt__DelegateSignature(bool IsInterrupting);
	void OnDyingEnd__DelegateSignature();
	void OnUpdateDying__DelegateSignature(double DyingHP, double MaxDyingHP);
};

}


