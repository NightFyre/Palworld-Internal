#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x200 - 0x158)
// BlueprintGeneratedClass BP_AIAction_Warning_PointWalk.BP_AIAction_Warning_PointWalk_C
class UBP_AIAction_Warning_PointWalk_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               AttentionPoint;                                    // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConstWalkSpeed;                                    // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveGoalLocation;                                  // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AcceptanceDistance;                                // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomWalkStartTime;                               // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TurnR_Direction;                                   // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TurnL_Direction;                                   // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWarningPalAIMoveType             MoveMode;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeOutTime;                                       // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        TurnAction;                                        // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Warning_PointWalk_C* GetDefaultObj();

	void CancelTurnAction(class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlayActionTurnIfNoneAction(const struct FVector& Direction, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TurnL45();
	void TurnR45();
	void StartJump(class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
	void TurnMode(class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
	void UpdateMoveGoal(TArray<class AActor*>& Temp_object_Variable, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_MoveToLocation_AcceptanceRadius_ImplicitCast);
	void SoundEvent(const struct FVector& EmitLocation, double CallFunc_RandomFloatInRange_ReturnValue, class AController* CallFunc_GetController_ReturnValue);
	void Setup(const struct FVector& AttentionLocation);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Warning_PointWalk(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class APawn* K2Node_Event_ControlledPawn_5, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_2, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class APalCharacter* CallFunc_GetLeader_Leader, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SightCheckAndResponse_ChangeNextAction, class APawn* K2Node_Event_ControlledPawn_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameter_ReturnValue, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


