#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x180 - 0x158)
// BlueprintGeneratedClass BP_AIAction_Sleep.BP_AIAction_Sleep_C
class UBP_AIAction_Sleep_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DeepSleep;                                         // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionComponent*                   ActionComp;                                        // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PawnSelf;                                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        SleepAction;                                       // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Sleep_C* GetDefaultObj();

	void OnDamageDelegate______0(const struct FPalDamageResult& DamageResult);
	void ActionStart(class APawn* ControlledPawn);
	void OnAllActionFinishDelegate______0(class UPalActionComponent* ActionComponent);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_Sleep(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, const struct FFixedPoint64& CallFunc_GetMP_ReturnValue, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue, class UPalActionComponent* K2Node_CustomEvent_actionComponent, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APalCharacter* CallFunc_GetCharacter_ReturnValue);
};

}


