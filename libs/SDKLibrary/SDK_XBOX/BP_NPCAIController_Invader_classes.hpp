#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x570 - 0x558)
// BlueprintGeneratedClass BP_NPCAIController_Invader.BP_NPCAIController_Invader_C
class ABP_NPCAIController_Invader_C : public ABP_NPCAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnInvaderArrivedDelegate;                          // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_NPCAIController_Invader_C* GetDefaultObj();

	void ReturnSpawnedPoint(const struct FVector& ReturnPos, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void StartMarch(const struct FVector& GoalPos, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue_1);
	void ForceBattleStartForOutside(class AActor* StartActor);
	void StartDefaultAIAction();
	void SetAutoDefaultAIAction();
	void ReceiveBeginPlay();
	void OnInvaderArrived();
	void BindOnInvaderArrivedDelegate(FDelegateProperty_ Event);
	void ExecuteUbergraph_BP_NPCAIController_Invader(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event);
	void OnInvaderArrivedDelegate__DelegateSignature();
};

}


