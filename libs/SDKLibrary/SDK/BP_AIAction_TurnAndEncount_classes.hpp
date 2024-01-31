#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x178 - 0x130)
// BlueprintGeneratedClass BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C
class UBP_AIAction_TurnAndEncount_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetAct;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Turning;                                           // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Propagated;                                        // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D92[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnAction_BlueprintBase*             TempAction;                                        // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCanceled;                                        // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDelayStop;                                       // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D93[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TurnTimer;                                         // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_TurnEndTime;                                 // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        TurnAction;                                        // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_TurnAndEncount_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_TurnAndEncount(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_InFanShap_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_4, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_GetIsPal_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalSquad* CallFunc_GetSquad_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn_5, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_3, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


