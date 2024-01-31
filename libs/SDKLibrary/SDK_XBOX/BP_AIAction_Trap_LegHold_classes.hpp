#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C
class UBP_AIAction_Trap_LegHold_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                        ActionInst;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Trap_LegHold_C* GetDefaultObj();

	void OnChangeTrapExist(bool Exist);
	void GetCPC(class UPalCharacterParameterComponent** CPC, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Trap_LegHold(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCPC_CPC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterParameterComponent* CallFunc_GetCPC_CPC_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue);
};

}


