#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_ActionTurnToTarget.BP_ActionTurnToTarget_C
class UBP_ActionTurnToTarget_C : public UPalActionBase
{
public:
	uint8                                        Pad_3EA8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionTurnToTarget_C* GetDefaultObj();

	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionTurnToTarget(int32 EntryPoint, class AActor* CallFunc_GetActionTarget_ReturnValue, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetActionTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_3, bool CallFunc_IsNearTwoPoint_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_InFanShap_ReturnValue);
};

}


