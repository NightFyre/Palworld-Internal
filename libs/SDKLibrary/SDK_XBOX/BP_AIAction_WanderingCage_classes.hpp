#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x189 - 0x138)
// BlueprintGeneratedClass BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C
class UBP_AIAction_WanderingCage_C : public UPalAIActionBaseCampCage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               Sensor;                                            // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnedPosition;                                   // 0x148(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoalPosition;                                      // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConstWalkSpeed;                                    // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*           DamageReaction;                                    // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         InitEnd;                                           // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_WanderingCage_C* GetDefaultObj();

	void ChangeNextMovePosition(TArray<class AActor*>& Temp_object_Variable, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_WanderingCage(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_BaseCamp_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base_Camp, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue_3, float CallFunc_Delay_Duration_ImplicitCast);
};

}


