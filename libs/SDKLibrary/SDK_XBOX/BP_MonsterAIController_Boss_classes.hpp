#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x531 - 0x51B)
// BlueprintGeneratedClass BP_MonsterAIController_Boss.BP_MonsterAIController_Boss_C
class ABP_MonsterAIController_Boss_C : public ABP_MonsterAIControllerBase_C
{
public:
	uint8                                        Pad_3F88[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAISensorComponent*                 PalAISensor;                                       // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNotFreeAIMode;                                   // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MonsterAIController_Boss_C* GetDefaultObj();

	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void Force_Battle_Start_to_Target_Boss(class APalPlayerCharacter* Player, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void ReceivePossess(class APawn* PossessedPawn);
	void _________1(class APalCharacter* InCharacter);
	void ExecuteUbergraph_BP_MonsterAIController_Boss(int32 EntryPoint, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard);
};

}


