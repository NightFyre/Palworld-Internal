#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C
class UBP_AINPC_CombatMeleeState_AttackForNearSwing_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_3F67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatMeleeState_AttackForNearSwing_C* GetDefaultObj();

	void StateEnter();
	void ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue);
};

}


