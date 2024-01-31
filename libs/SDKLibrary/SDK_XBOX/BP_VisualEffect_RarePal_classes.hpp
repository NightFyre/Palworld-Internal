#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C
class UBP_VisualEffect_RarePal_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Effect;                                            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_RarePal_C* GetDefaultObj();

	bool IsEndVisualEffect(class APalCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsDead_ReturnValue);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_RarePal(int32 EntryPoint, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APalCharacter* CallFunc_GetCharacter_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_FMin_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_GetIsCapturedProcessing_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue_4, bool CallFunc_GetIsCapturedProcessing_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
};

}


