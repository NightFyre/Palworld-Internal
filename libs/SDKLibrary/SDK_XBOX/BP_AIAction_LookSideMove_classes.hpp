#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x189 - 0x130)
// BlueprintGeneratedClass BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C
class UBP_AIAction_LookSideMove_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               SelfToTarget;                                      // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rate;                                              // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Right;                                             // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRightMoving;                                     // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurrentMoveGoal;                                   // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         SelfActor;                                         // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCheckWalkableSuccess;                            // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_LookSideMove_C* GetDefaultObj();

	void CheckWalkable(bool IsRight, bool* Success, struct FVector* GoalPos, double RightMulti, const struct FVector& SelfPos, double Distance, const struct FVector& LeftRequestPoint, const struct FVector& RightRequestPoint, const struct FVector& RightVector, const struct FVector& SelfToTarget, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation, bool CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void OnChildActionFinished(class UPawnAction* Action, enum class EPawnActionResult WithResult);
	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_LookSideMove(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_CheckWalkable_Success, const struct FVector& CallFunc_CheckWalkable_GoalPos, bool CallFunc_CheckWalkable_Success_1, const struct FVector& CallFunc_CheckWalkable_GoalPos_1, bool CallFunc_CheckWalkable_Success_2, const struct FVector& CallFunc_CheckWalkable_GoalPos_2, bool CallFunc_CheckWalkable_Success_3, const struct FVector& CallFunc_CheckWalkable_GoalPos_3, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_5, class APawn* K2Node_Event_ControlledPawn_6, enum class EPawnActionResult K2Node_Event_WithResult_1, class UBP_AIAction_FrontDashForLeave_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class UPawnAction* K2Node_Event_Action, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds_2, class APawn* K2Node_Event_ControlledPawn_7, bool CallFunc_CheckWalkable_Success_4, const struct FVector& CallFunc_CheckWalkable_GoalPos_4, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds_1, float CallFunc_Delay_Duration_ImplicitCast);
};

}


