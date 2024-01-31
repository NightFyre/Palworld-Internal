#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x170 - 0x158)
// BlueprintGeneratedClass BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C
class UBP_AIAction_NPCOtomoFollow_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Trainer;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 SelfPawn;                                          // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPCOtomoFollow_C* GetDefaultObj();

	void OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF(enum class EPathFollowingResult MovementResult);
	void OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF(enum class EPathFollowingResult MovementResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_NPCOtomoFollow(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class ABP_MonsterAIController_NPCOtomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, class APalCharacter* CallFunc_GetSquadLeader_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_2, class UPalHate* CallFunc_GetHateSystem_ReturnValue, class AActor* CallFunc_FindMostHateTarget_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, enum class EPathFollowingResult Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsNearTwoActorWithRadius_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_Event_ControlledPawn_2, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn_1, class AController* CallFunc_GetController_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_4, class ABP_MonsterAIController_NPCOtomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1, bool K2Node_DynamicCast_bSuccess_3);
};

}


