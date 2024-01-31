#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x150 - 0x130)
// BlueprintGeneratedClass BP_AIActionPairCallBase.BP_AIActionPairCallBase_C
class UBP_AIActionPairCallBase_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Trainer;                                           // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Petting;                                           // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3ADE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PairBehaviorActionClass;                           // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionPairCallBase_C* GetDefaultObj();

	void CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void OnFinish();
	void ExecuteUbergraph_BP_AIActionPairCallBase(int32 EntryPoint, const struct FActionDynamicParameter& CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue_3, class UPalPettingPresset* CallFunc_GetPettingPreset_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, float CallFunc_GetDistance_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsNearTwoActor_ReturnValue, class UBP_ActionPairBehaviorBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base, bool K2Node_DynamicCast_bSuccess, class UBP_ActionPairStandbyBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UBP_ActionPairBehaviorBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast);
};

}


