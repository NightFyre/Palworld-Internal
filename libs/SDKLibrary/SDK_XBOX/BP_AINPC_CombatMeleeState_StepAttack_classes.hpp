#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_StepAttack.BP_AINPC_CombatMeleeState_StepAttack_C
class UBP_AINPC_CombatMeleeState_StepAttack_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_1529[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatMeleeState_StepAttack_C* GetDefaultObj();

	void StateEnter();
	void ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack(int32 EntryPoint, class AActor* CallFunc_GetTargetActor_TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor);
};

}


