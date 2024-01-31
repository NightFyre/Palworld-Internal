#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x158 - 0x130)
// BlueprintGeneratedClass BP_AIAction_ReturnToDefaultPosition.BP_AIAction_ReturnToDefaultPosition_C
class UBP_AIAction_ReturnToDefaultPosition_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               GoalPos;                                           // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MoveEndRange;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_ReturnToDefaultPosition_C* GetDefaultObj();

	void Setup(const struct FVector& DefaultPos, double MoveEndDistance);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition(int32 EntryPoint, double CallFunc_Subtract_DoubleDouble_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_IsNearTwoPoint_distance_ImplicitCast);
};

}


