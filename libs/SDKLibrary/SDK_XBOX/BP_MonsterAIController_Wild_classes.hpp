#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x540 - 0x51B)
// BlueprintGeneratedClass BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C
class ABP_MonsterAIController_Wild_C : public ABP_MonsterAIControllerBase_C
{
public:
	uint8                                        Pad_4445[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAISensorComponent*                 PalAISensor;                                       // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BattleStartEvent;                                  // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_MonsterAIController_Wild_C* GetDefaultObj();

	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void IsSleeping(bool* Sleep, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ForceEscaleStartForOutside(class AActor* StartFriend, class AActor* Enemy, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, bool CallFunc_IsBossPal_Database_ReturnValue, class UBP_AIAction_WildLife_C* K2Node_DynamicCast_AsBP_AIAction_Wild_Life, bool K2Node_DynamicCast_bSuccess, double CallFunc_RandomFloatInRange_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, double CallFunc_Vector_Distance_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, double CallFunc_FClamp_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsSleeping_Sleep, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void SetupSleepTime(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void ForceBattleStartToTarget(class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue);
	void PerformanceSetup(class APawn* Pawn);
	void SetSpawndInfo(const struct FVector& SpawnerLoc, double ReturnRadius, double WalkRadius, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard);
	void DebugBattleStartInternal(class AActor* Player, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void ReturnToTerritory(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void ForceBattleStartForOutside(class AActor* StartPalActor, bool CallFunc_IsSleeping_Sleep, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_CopyTargetFromOtherAI_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo);
	void _________1(class APalCharacter* InCharacter);
	void GoBack_Teritory();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void DebugBattleStart(class AActor* Player);
	void SetupBySpawner();
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_MonsterAIController_Wild(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, bool CallFunc_GetIsSquadBehaviour_ReturnValue, class UPalSquad* CallFunc_GetSquad_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetIsSquadBehaviour_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_Event_Player, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_2, bool CallFunc_IsRarePal_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalSquad* CallFunc_GetSquad_ReturnValue_3);
	void BattleStartEvent__DelegateSignature(class AActor* StartPalActor);
};

}


