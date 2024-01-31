#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_AIAction_Stun.BP_AIAction_Stun_C
class UBP_AIAction_Stun_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionComponent*                   ActionComp;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Stun_C* GetDefaultObj();

	void WakeupDirection(int32* Direction, const struct FRotator& MeshRotate, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Stun(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal, class FName CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName, float CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance, bool CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue, int32 CallFunc_GetBoneIndex_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsFlyPal_ReturnValue);
};

}


