#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x90 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Status_Mud.BP_VisualEffect_Status_Mud_C
class UBP_VisualEffect_Status_Mud_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Effect;                                            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTimer;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Status_Mud_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TerminatingTickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_Status_Mud(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue);
};

}


