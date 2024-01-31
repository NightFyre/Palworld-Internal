#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C
class UBP_AINPC_CombatMeleeState_RotateForNearSwing_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_2170[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatMeleeState_RotateForNearSwing_C* GetDefaultObj();

	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing(int32 EntryPoint, class AActor* CallFunc_GetTargetActor_TargetActor, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor);
};

}


