#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x31 - 0x30)
// BlueprintGeneratedClass BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C
class UBP_AINPC_CombatState_Base_C : public UPalStateMachineStateBase_BlueprintBase
{
public:
	bool                                         IsEndSelf;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatState_Base_C* GetDefaultObj();

	void IsEndSelfState(bool* IsEnd);
	void ShootAbleSlefForwardDot(bool* ShootAble, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, bool CallFunc_InFanShapAimTarget_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTargetActor_TargetActor_1, bool CallFunc_IsValid_ReturnValue_1);
	void AttackAblePlayerCamera(bool* AttackAble, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, bool CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue);
	void GetControllerRef(class ABP_NPCAIController_C** NPCAICon, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon);
	void GetShooterComponent(class UPalShooterComponent** ShooterComp, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetSelfActor(class APalCharacter** SelfActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat);
	void GetTargetActor(class AActor** TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat);
	void GetCombatAIActionRef(class UBP_AIAction_NPC_CombatBase_C** BPAIActionNPCCombat, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_NPC_CombatBase_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base, bool K2Node_DynamicCast_bSuccess);
};

}


