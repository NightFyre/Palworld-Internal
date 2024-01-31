#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x138 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Status_FrostbitePV.BP_VisualEffect_Status_FrostbitePV_C
class UBP_VisualEffect_Status_FrostbitePV_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Effect;                                            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTimer;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime01;                                     // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalSizeType, class UNiagaraSystem*> EffectAsset_Cube;                                  // 0x98(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalSizeType, class UNiagaraSystem*> EffectAsset_End;                                   // 0xE8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Status_FrostbitePV_C* GetDefaultObj();

	void Set_Frostbite(double Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TerminatingTickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_Status_FrostbitePV(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class USceneComponent* CallFunc_GetAttachInformationByBodyLocation_attachComponent, class FName CallFunc_GetAttachInformationByBodyLocation_attachBoneName, const struct FTransform& CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform, bool CallFunc_GetAttachInformationByBodyLocation_ReturnValue, class USceneComponent* CallFunc_GetAttachInformationByBodyLocation_attachComponent_1, class FName CallFunc_GetAttachInformationByBodyLocation_attachBoneName_1, const struct FTransform& CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform_1, bool CallFunc_GetAttachInformationByBodyLocation_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, double CallFunc_FClamp_ReturnValue_1, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, class UNiagaraSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UNiagaraSystem* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1);
};

}


