#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x88 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_PalOutlineFadeIn.BP_VisualEffect_PalOutlineFadeIn_C
class UBP_VisualEffect_PalOutlineFadeIn_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Alpha;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fade_Speed;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_PalOutlineFadeIn_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeIn(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_DeltaTime, TArray<class APostProcessVolume*>& CallFunc_GetAllActorsOfClass_OutActors, class APostProcessVolume* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FWeightedBlendable& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FWeightedBlendable& K2Node_SetFieldsInStruct_StructOut, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_FClamp_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


