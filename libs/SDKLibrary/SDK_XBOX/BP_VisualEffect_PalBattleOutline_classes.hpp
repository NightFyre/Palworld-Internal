#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x89 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C
class UBP_VisualEffect_PalBattleOutline_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Alpha;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fade_Speed;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFadeInComplete;                                  // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_PalBattleOutline_C* GetDefaultObj();

	void SetFadeAlpha(double Alpha, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void OnEndVisualEffect();
	void TerminatingTickVisualEffect(float DeltaTime);
	void OnBreakVisualEffect(bool bByConflict);
	void ExecuteUbergraph_BP_VisualEffect_PalBattleOutline(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaTime_1, TArray<class APostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors, class APostProcessVolume* CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FWeightedBlendable& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, const struct FWeightedBlendable& K2Node_SetFieldsInStruct_StructOut, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, bool K2Node_Event_bByConflict, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
};

}


