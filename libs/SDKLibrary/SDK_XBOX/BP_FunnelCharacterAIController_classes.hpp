#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x530 - 0x4F8)
// BlueprintGeneratedClass BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C
class ABP_FunnelCharacterAIController_C : public APalAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                DefaultRootCompositeActionClass;                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FollowInterpolatedPos;                             // 0x508(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FollowSpeed;                                       // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FunnelCharacterAIController_C* GetDefaultObj();

	void SetEnableReticleTargetFlag(bool Enable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_FunnelCharacter_C* K2Node_DynamicCast_AsBP_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetOwnerPal_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnInactive();
	void OnActive(class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue, class UPalAIActionFunnelCharacterDefault* K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default, bool K2Node_DynamicCast_bSuccess_2);
	void StopAction(class APawn* CallFunc_K2_GetPawn_ReturnValue, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess);
	void PlayDefaultAction(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FunnelCharacterAIController(int32 EntryPoint);
};

}


