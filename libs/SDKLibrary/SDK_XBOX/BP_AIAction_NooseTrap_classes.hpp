#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x160 - 0x130)
// BlueprintGeneratedClass BP_AIAction_NooseTrap.BP_AIAction_NooseTrap_C
class UBP_AIAction_NooseTrap_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TrapActor;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeadVelocity;                                      // 0x140(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        PlayedAction;                                      // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NooseTrap_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NooseTrap(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, class APawn* K2Node_Event_ControlledPawn_5, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APalCharacter* CallFunc_GetCharacter_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_2, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_3, class UBP_ActionNooseTrap_C* K2Node_DynamicCast_AsBP_Action_Noose_Trap, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetWorldVelocity_ByDeadEnd_Velocity, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_4, class APalCharacter* CallFunc_GetCharacter_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsDead_ReturnValue_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue_6);
};

}


