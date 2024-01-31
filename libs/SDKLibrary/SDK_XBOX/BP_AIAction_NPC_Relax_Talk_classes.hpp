#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x67 (0x258 - 0x1F1)
// BlueprintGeneratedClass BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C
class UBP_AIAction_NPC_Relax_Talk_C : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	uint8                                        Pad_C45[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                        TalkAction;                                        // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FPalInstanceID                        SelfID;                                            // 0x208(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsTalkingMotion;                                   // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_C47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTalkID;                                     // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       TalkTimer;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsListeningMotion;                                 // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_C48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TalkInterval;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Relax_Talk_C* GetDefaultObj();

	void PlayDefaultAction();
	void StopAction(class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetMemberID(TArray<struct FPalInstanceID>* OutList, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalSquad* CallFunc_GetSquad_ReturnValue, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_5, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, bool CallFunc_SelfIsLeader_IsLeader, bool CallFunc_SelfIsLeader_IsLeader_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue_1, int32 Temp_int_Variable, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FPalInstanceID& CallFunc_Array_Get_Item, double CallFunc_RandomFloatInRange_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1);
};

}


