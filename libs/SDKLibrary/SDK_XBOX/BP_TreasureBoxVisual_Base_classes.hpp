#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x300 - 0x298)
// BlueprintGeneratedClass BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C
class ABP_TreasureBoxVisual_Base_C : public APalTreasureBoxVisualBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Glow;                                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        Niagara;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocationOffset;                                    // 0x2B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Ak_Event;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFinishOpenInServer;                              // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                          OpenAnimMontage;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotifiedStartOpenInAnimation;                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          AnimationWaitTimer;                                // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TreasureBoxVisual_Base_C* GetDefaultObj();

	void SetNoCollisionAllMesh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayEffectAndSound(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void TriggerOpenAnimation();
	void OnFinishOpenAnimation();
	void StartOpenAnimation();
	void OnPassedOpenAnimationLength();
	void OnPlayMontageNotifyBegin_BP(class FName NotifyName);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TreasureBoxVisual_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_Event_NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnNotifiedStartOpenInAnimation__DelegateSignature();
	void OnFinishOpenInServer__DelegateSignature();
};

}


