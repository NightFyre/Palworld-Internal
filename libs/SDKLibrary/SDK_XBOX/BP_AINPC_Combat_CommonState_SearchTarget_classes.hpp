#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_SearchTarget.BP_AINPC_Combat_CommonState_SearchTarget_C
class UBP_AINPC_Combat_CommonState_SearchTarget_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_133E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_Combat_CommonState_SearchTarget_C* GetDefaultObj();

	void StateEnter();
	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AINPC_Combat_CommonState_SearchTarget(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, float K2Node_Event_DeltaTime);
};

}


