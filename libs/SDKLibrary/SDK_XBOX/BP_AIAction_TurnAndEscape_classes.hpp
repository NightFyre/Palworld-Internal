#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x16B - 0x158)
// BlueprintGeneratedClass BP_AIAction_TurnAndEscape.BP_AIAction_TurnAndEscape_C
class UBP_AIAction_TurnAndEscape_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetAct;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Turning;                                           // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CancelAble;                                        // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopByDelay;                                     // 0x16A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_TurnAndEscape_C* GetDefaultObj();

	void OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo);
	void SoundEvent(const struct FVector& EmitLocation);
	void Setup(class AActor* TargetActor, bool CallFunc_IsValid_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_TurnAndEscape(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_InFanShap_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class AController* CallFunc_GetController_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_ActionIsEmpty_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class AController* CallFunc_GetController_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_ActionIsEmpty_ReturnValue_1, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float CallFunc_Delay_Duration_ImplicitCast);
};

}


