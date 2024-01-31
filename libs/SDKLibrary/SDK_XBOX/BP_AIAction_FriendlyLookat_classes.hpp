#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x16C - 0x158)
// BlueprintGeneratedClass BP_AIAction_FriendlyLookat.BP_AIAction_FriendlyLookat_C
class UBP_AIAction_FriendlyLookat_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinished;                                        // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanLookatPal;                                      // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotating;                                          // 0x16A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SingleEffectAble;                                  // 0x16B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_FriendlyLookat_C* GetDefaultObj();

	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_FriendlyLookat(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_SightCheckAndResponse_ChangeNextAction, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_4, class UBP_ActionFriendlyLookat_C* K2Node_DynamicCast_AsBP_Action_Friendly_Lookat, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_5, class APawn* K2Node_Event_ControlledPawn);
};

}


