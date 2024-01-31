#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x2A9 - 0x290)
// BlueprintGeneratedClass BP_PickMainMeshVolume.BP_PickMainMeshVolume_C
class ABP_PickMainMeshVolume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CollectPalCharacterOnly;                           // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PickMainMeshVolume_C* GetDefaultObj();

	void IsPalLit(class UMaterialInterface* Material, bool* IsPalLit, bool CallFunc_IsValid_ReturnValue, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPathName_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
	void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc);
	void IsCelShader(class UMaterialInterface* Material, bool* IsCelShader, bool CallFunc_IsValid_ReturnValue, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPathName_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void GetMeshFromActor(class AActor* Actor, TArray<class UMeshComponent*>* Mesh, const TArray<class UMeshComponent*>& ResultMeshForPV, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, TArray<class UMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsPalLit_IsPalLit, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void EndOverlapMainMesh(class UMeshComponent* OutMainMesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPalLit_IsPalLit, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPalLit_IsPalLit_1);
	void BeginOverlapMainMesh(class UMeshComponent* InMainMesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPalLit_IsPalLit, bool CallFunc_IsPalLit_IsPalLit_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Applied_Make_Info(class UPalSkeletalMeshComponent* SkeletalMeshComponent);
	void ExecuteUbergraph_BP_PickMainMeshVolume(int32 EntryPoint, class UPalSkeletalMeshComponent* K2Node_CustomEvent_SkeletalMeshComponent, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, TArray<class UMeshComponent*>& CallFunc_GetMeshFromActor_Mesh, TArray<class UMeshComponent*>& CallFunc_GetMeshFromActor_Mesh_1, class UMeshComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


