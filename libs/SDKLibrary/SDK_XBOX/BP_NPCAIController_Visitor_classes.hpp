#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x581 - 0x558)
// BlueprintGeneratedClass BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C
class ABP_NPCAIController_Visitor_C : public ABP_NPCAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               GoalLocation;                                      // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnTimeMinutes;                                 // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WalkAreaSplitNum;                                  // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalIVisitorNPCAction             ActionTimeLimit;                                   // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPCAIController_Visitor_C* GetDefaultObj();

	void FindTargetPlayer(class AActor** TargetActor, double MinLength, class AActor* Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<class APalCharacter*>& CallFunc_GetAllPlayerCharacters_OutPlayers, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void StartRaid(class AActor* CallFunc_FindTargetPlayer_TargetActor);
	void StartReturnToSpawnedPointAction(class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void StartWaitAction(class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_AIAction_Visitor_WaitInBaseCamp_C* K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp, bool K2Node_DynamicCast_bSuccess);
	void StartDefaultAIAction(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_C* Action);
	void OnArrivedTargetPoint();
	void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* Action);
	void OnWaitFinished();
	void OnStuck();
	void ExecuteUbergraph_BP_NPCAIController_Visitor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_CustomEvent_Action_1, class UBP_AIAction_Visitor_WaitInBaseCamp_C* K2Node_CustomEvent_Action, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


