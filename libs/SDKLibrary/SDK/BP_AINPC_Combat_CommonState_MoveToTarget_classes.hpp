#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x41 - 0x31)
// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C
class UBP_AINPC_Combat_CommonState_MoveToTarget_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_3F76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalCharacterMovementCustomMode   Sprint;                                            // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_Combat_CommonState_MoveToTarget_C* GetDefaultObj();

	void StateEnter();
	void StateTick(float DeltaTime);
	void StateExit();
	void ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget(int32 EntryPoint, float K2Node_Event_DeltaTime, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, bool CallFunc_MoveToTarget_IsNearTarget, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_2, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4, bool CallFunc_BooleanAND_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_3);
};

}


