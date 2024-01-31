#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x78 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C
class UBP_VisualEffect_Status_Darkness_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Status_Darkness_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_Status_Darkness(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FTransform& CallFunc_GetBodyLocation_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float K2Node_Event_DeltaTime);
};

}


