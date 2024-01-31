#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x1F8 - 0x158)
// BlueprintGeneratedClass BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C
class UBP_AIAction_AlertByKilledFriend_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPal_AI_AlertByKilledFriendState  CurrentState;                                      // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4391[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPal_AI_AlertByKilledFriendState, class UClass*> StateMap;                                          // 0x168(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UPalStateMachine*                      StateMacine;                                       // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DeadBody;                                          // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeadLocation;                                      // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SelfActor;                                         // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_AlertByKilledFriend_C* GetDefaultObj();

	void LineTraceGround(const struct FVector& CenterPos, bool* IsHit, struct FVector* HitPos, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void StopMovement(class AController* CallFunc_GetController_ReturnValue);
	void MoveToDeadBody(class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess);
	void ChangeNextState(enum class EPal_AI_AlertByKilledFriendState Next, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddState(enum class EPal_AI_AlertByKilledFriendState NewParam, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalStateMachineStateBase_BlueprintBase* CallFunc_SpawnObject_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_AlertByKilledFriend(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsNearTwoActorWithRadius_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UPalStateMachine* CallFunc_SpawnObject_ReturnValue, bool CallFunc_SightCheckAndResponse_ChangeNextAction, enum class EPal_AI_AlertByKilledFriendState Temp_byte_Variable, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, float CallFunc_Tick_DeltaTime_ImplicitCast, float CallFunc_ActionTick_DeltaSeconds_ImplicitCast);
};

}


