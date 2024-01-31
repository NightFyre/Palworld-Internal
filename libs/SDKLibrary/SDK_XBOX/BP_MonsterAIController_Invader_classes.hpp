#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D (0x558 - 0x51B)
// BlueprintGeneratedClass BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C
class ABP_MonsterAIController_Invader_C : public ABP_MonsterAIControllerBase_C
{
public:
	uint8                                        Pad_4455[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAISensorComponent*                 PalAISensor;                                       // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetBaseCampPosition;                            // 0x530(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInvaderArrivedDelegate;                          // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_MonsterAIController_Invader_C* GetDefaultObj();

	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void ReturnSpawnedPoint(const struct FVector& GoalLocation, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void StartMartch(const struct FVector& GoalPosition, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue_1);
	void Setup(const struct FVector& BaseCampPos);
	void ReceivePossess(class APawn* PossessedPawn);
	void _________1(class APalCharacter* InCharacter);
	void _________OnDead(const struct FPalDeadInfo& DeadInfo);
	void OnInvaderArrived();
	void BindOnInvaderArrivedDelegate(FDelegateProperty_ Event);
	void ExecuteUbergraph_BP_MonsterAIController_Invader(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_3);
	void OnInvaderArrivedDelegate__DelegateSignature();
};

}


