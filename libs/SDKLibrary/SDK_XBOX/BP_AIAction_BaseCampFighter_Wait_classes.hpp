#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_AIAction_BaseCampFighter_Wait.BP_AIAction_BaseCampFighter_Wait_C
class UBP_AIAction_BaseCampFighter_Wait_C : public UPalAIActionBaseCampFighterWait
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampFighter_Wait_C* GetDefaultObj();

	void TickInternal(double DeltaTime, const struct FVector& WaitLocation, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_TryGetWaitLocation_Location, bool CallFunc_TryGetWaitLocation_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TrySearchEnemy_ReturnValue);
	void LookToOut(double DeltaTime, class APawn* SelfPawn, const struct FVector& BaseCampLocation, const struct FVector& CallFunc_TryGetWaitLocation_Location, bool CallFunc_TryGetWaitLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionBaseCampFighter* CallFunc_GetParentFighterAction_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalBaseCampModel* CallFunc_GetBaseCampBelongTo_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GeneralTurn_DeltaTime_ImplicitCast);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_BaseCampFighter_Wait(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, double CallFunc_TickInternal_DeltaTime_ImplicitCast);
};

}


