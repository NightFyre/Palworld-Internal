#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C
class UBP_ActionPairStandbyBase_C : public UPalActionBase
{
public:
	uint8                                        Pad_A0A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAIActionBase*                      PettingCallAction;                                 // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                CallAIActionClass;                                 // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionPairStandbyBase_C* GetDefaultObj();

	void OnSetCallAIAction(class UPalAIActionBase* CallAction);
	void CheckCancel(bool* Cancel, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetStandByAnime(class UAnimMontage** Montage, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AActor* CallFunc_GetActionTarget_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void CancelEvent();
	void ExecuteUbergraph_BP_ActionPairStandbyBase(int32 EntryPoint, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue_1, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_4, class UAnimMontage* CallFunc_GetStandByAnime_Montage, float CallFunc_PlayAnimMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
};

}


