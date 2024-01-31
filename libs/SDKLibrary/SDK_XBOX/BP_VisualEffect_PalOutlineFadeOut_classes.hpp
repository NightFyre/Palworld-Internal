#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x88 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C
class UBP_VisualEffect_PalOutlineFadeOut_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Alpha;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fade_Speed;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_PalOutlineFadeOut_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTime, TArray<class APostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable_1, class APostProcessVolume* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWeightedBlendable& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, const struct FWeightedBlendable& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


