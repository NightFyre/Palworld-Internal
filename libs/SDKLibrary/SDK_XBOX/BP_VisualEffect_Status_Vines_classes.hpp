#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x90 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C
class UBP_VisualEffect_Status_Vines_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Effect;                                            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTimer;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Status_Vines_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TerminatingTickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_Status_Vines(int32 EntryPoint, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_GetAttachInformationByBodyLocation_attachComponent, class FName CallFunc_GetAttachInformationByBodyLocation_attachBoneName, const struct FTransform& CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform, bool CallFunc_GetAttachInformationByBodyLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
};

}


