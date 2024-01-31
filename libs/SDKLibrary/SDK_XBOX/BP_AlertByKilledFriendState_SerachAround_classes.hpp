#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C
class UBP_AlertByKilledFriendState_SerachAround_C : public UPalStateMachineStateBase_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               InitSelfLocation;                                  // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         SelfActor;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveLocation;                                      // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WalkName;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        AngryAction;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AlertByKilledFriendState_SerachAround_C* GetDefaultObj();

	void GetControllerRef(class APalAIController** AICon, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess);
	void NextMovePoint(bool* Hit, const struct FVector& RandomPos, double Range, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LineTraceGround_IsHit, const struct FVector& CallFunc_LineTraceGround_HitPos, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void StateEnter();
	void StateTick(float DeltaTime);
	void StateExit();
	void ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround(int32 EntryPoint, float K2Node_Event_DeltaTime, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NextMovePoint_Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class APalAIController* CallFunc_GetControllerRef_AICon, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_3);
};

}


