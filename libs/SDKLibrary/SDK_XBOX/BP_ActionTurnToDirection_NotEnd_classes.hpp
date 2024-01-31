#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C
class UBP_ActionTurnToDirection_NotEnd_C : public UPalActionBase
{
public:
	uint8                                        Pad_3A6C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SpeedRate;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionTurnToDirection_NotEnd_C* GetDefaultObj();

	void TickAction(float DeltaTime);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GeneralTurn_WithMovementRotationSpeed_DeltaTime_ImplicitCast);
};

}


