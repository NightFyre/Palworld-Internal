#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x15B - 0x130)
// BlueprintGeneratedClass BP_AIActionProtecting.BP_AIActionProtecting_C
class UBP_AIActionProtecting_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         ProtectCharacter;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  RidingSpeedUpFlagName;                             // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         OwnerPawn;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PartnerSkillParam;                                 // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAborted;                                         // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGliding;                                         // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReleased;                                        // 0x15A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionProtecting_C* GetDefaultObj();

	void CancelCheck(bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsClimbing_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, enum class EPalActionType CallFunc_GetCurrentActionType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsGliding_ReturnValue);
	void OnCoopEnd();
	void SetupAction(class APawn* ControlledPawn, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetProtectCharacter(class APalCharacter* RidingCharacter);
	void BindCoopReleaseEvent();
	void OnCoopRelease();
	void UnbindCoopReleaseEvent();
	void OnDead(const struct FPalDeadInfo& DeadInfo);
	void StartPartnerSkill();
	void StopPartnerSkill();
	void OnDamage(const struct FPalDamageResult& DamageResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void OnLanded(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit);
	void DeadProc(const struct FPalDeadInfo& DeadInfo);
	void ActionAbort(class APawn* ControlledPawn);
	void CoopRelease();
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIActionProtecting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* K2Node_Event_ControlledPawn_3, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue_5, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_IsValid_ReturnValue_2, class UPalCharacterMovementComponent* K2Node_CustomEvent_component, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_6, class APawn* K2Node_Event_ControlledPawn_1, bool CallFunc_Not_PreBool_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue_1, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_3);
};

}


