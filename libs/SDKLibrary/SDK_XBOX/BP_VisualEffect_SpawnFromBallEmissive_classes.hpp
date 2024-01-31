#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xC8 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_SpawnFromBallEmissive.BP_VisualEffect_SpawnFromBallEmissive_C
class UBP_VisualEffect_SpawnFromBallEmissive_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       EmissionTime;                                      // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EmissionTimer;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentEmission;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndEmission;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartEmissive;                                     // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScaleTime;                                         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScaleTimer;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsScaleEnable;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TickTimerHandle;                                   // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TickInterval;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_SpawnFromBallEmissive_C* GetDefaultObj();

	void ModifyEffectBySize(class UNiagaraComponent* Effect, enum class EPalSizeType Size, bool K2Node_SwitchEnum_CmpSuccess);
	void SetScale(double Value, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetRuntimeScale_scale_ImplicitCast);
	void OnBeginVisualEffect();
	void ________Update();
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_SpawnFromBallEmissive(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsLive_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


