#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x230 - 0x204)
// BlueprintGeneratedClass BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C
class UBP_AIAction_FunnelFollow_C : public UBP_AIAction_OtomoFollow_C
{
public:
	uint8                                        Pad_3C0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<double>                               TargetLocationDistanceForwardList;                 // 0x210(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                               TargetLocationDistanceRightList;                   // 0x220(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AIAction_FunnelFollow_C* GetDefaultObj();

	void Update_Location_Distance(int32 Index, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_Array_Get_Item_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class UPalFunnelCharacterManager* CallFunc_GetFunnelCharacterManager_ReturnValue, int32 CallFunc_GetIndexOfFunnelsWithinSameTrainer_ReturnValue, float K2Node_VariableSet_TargetLocationDistanceRight_ImplicitCast, float K2Node_VariableSet_TargetLocationDistanceForward_ImplicitCast);
	void GetFollowSpeedFromController(double* FollowSpeed, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess);
	void GetFollowInterpolatedPosFromController(struct FVector* FollowInterpolatedPos, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess);
	void TryGetTrainer(class APalCharacter** Trainer, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTrainer_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_FunnelFollow(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
};

}


