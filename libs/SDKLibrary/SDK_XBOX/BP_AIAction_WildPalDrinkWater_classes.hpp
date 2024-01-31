#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x180 - 0x158)
// BlueprintGeneratedClass BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C
class UBP_AIAction_WildPalDrinkWater_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               GoalPos;                                           // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        EatAction;                                         // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_WildPalDrinkWater_C* GetDefaultObj();

	void OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56(enum class EPathFollowingResult MovementResult);
	void OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56(enum class EPathFollowingResult MovementResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_WildPalDrinkWater(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, class UPalWildPalDrinkWaterSpotProvider* CallFunc_GetDrinkWaterSpotProvider_ReturnValue, bool CallFunc_IsLeader_Leader, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1);
};

}


