#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C
class UBP_VisualEffect_Status_Flamed_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Scale;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Status_Flamed_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_Status_Flamed(int32 EntryPoint, float K2Node_Event_DeltaTime, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


