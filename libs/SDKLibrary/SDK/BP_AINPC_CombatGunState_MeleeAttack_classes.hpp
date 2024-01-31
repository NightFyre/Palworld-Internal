#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x48 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C
class UBP_AINPC_CombatGunState_MeleeAttack_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_3E81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                        Action;                                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_MeleeAttack_C* GetDefaultObj();

	void StateEnter();
	void StateTick(float DeltaTime);
	void StateExit();
	void ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, float K2Node_Event_DeltaTime, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


