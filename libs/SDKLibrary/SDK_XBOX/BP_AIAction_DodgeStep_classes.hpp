#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C
class UBP_AIAction_DodgeStep_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_DodgeStep_C* GetDefaultObj();

	void CanStep(class UPalActionComponent* ActionComponent, bool* CanStep, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UBP_PalActionStepBase_C* K2Node_DynamicCast_AsBP_Pal_Action_Step_Base, bool K2Node_DynamicCast_bSuccess);
	void GetStepTime(class UPalActionBase* ActionComp, double* StepTime, double DefaultStepTime, class UBP_PalActionStepBase_C* K2Node_DynamicCast_AsBP_Pal_Action_Step_Base, bool K2Node_DynamicCast_bSuccess);
	void RotateToAttacker(class AActor* Defender, class AActor* Attacker, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void GetStepType(enum class EPalActionType* NewParam, bool CallFunc_RandomBool_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_DodgeStep(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanStep_CanStep, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, enum class EPalActionType CallFunc_GetStepType_NewParam, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue, double CallFunc_GetStepTime_StepTime, float CallFunc_Delay_Duration_ImplicitCast);
};

}


