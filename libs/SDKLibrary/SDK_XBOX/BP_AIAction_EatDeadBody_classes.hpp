#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x180 - 0x158)
// BlueprintGeneratedClass BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C
class UBP_AIAction_EatDeadBody_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetDeadBody;                                    // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EatTimer;                                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RecoverTimer;                                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_EatDeadBody_C* GetDefaultObj();

	void RecoverHP(const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue);
	void SelfPawn(class AActor** SelfPawn, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_SelfPawn_SelfPawn, class AActor* CallFunc_SelfPawn_SelfPawn_1, class AActor* CallFunc_SelfPawn_SelfPawn_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_InFanShap_ReturnValue, class AActor* CallFunc_SelfPawn_SelfPawn_3, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, class AActor* CallFunc_SelfPawn_SelfPawn_4, class AActor* CallFunc_SelfPawn_SelfPawn_5, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_IsNearTwoActorWithRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast, double K2Node_VariableSet_tempDeltaTime_ImplicitCast);
};

}


