#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x158 - 0x130)
// BlueprintGeneratedClass BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C
class UBP_AIAction_ReturnTerritory_WildPal_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               SpawnedPosition;                                   // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StackTimer;                                        // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_ReturnTerritory_WildPal_C* GetDefaultObj();

	void GetBlackboard(class UBP_PalAIBlackboard_Common_C** AsBP_Pal_AIBlackboard_Common, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess_1);
	void GetControllerRef(class APalAIController** PalAIController, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_Event_ControlledPawn_4, bool CallFunc_IsNearTwoPoint_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalAIController* CallFunc_GetControllerRef_PalAIController, class APalAIController* CallFunc_GetControllerRef_PalAIController_1, bool CallFunc_IsOnNavMesh_ReturnValue, bool CallFunc_PalAIMoveToTargetLocation_ReturnValue, class APalAIController* CallFunc_GetControllerRef_PalAIController_2, class APalCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common, class UBP_PalAIBlackboard_Common_C* CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


