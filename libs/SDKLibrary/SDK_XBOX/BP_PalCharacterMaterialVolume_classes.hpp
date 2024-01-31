#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAF (0x358 - 0x2A9)
// BlueprintGeneratedClass BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C
class ABP_PalCharacterMaterialVolume_C : public ABP_PickMainMeshVolume_C
{
public:
	uint8                                        Pad_4D06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Base_Emissive_Intensity;                           // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Base_Color_Intensity;                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Intensity;                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Min;                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Max;                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TSet<class UMaterialInstanceDynamic*>        Material_Map;                                      // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Base_Emissive_Intensity_0;                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Base_Color_Intensity_0;                            // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Intensity_0;                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Min_0;                       // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       Light_Affect_Emissive_Max_0;                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalCharacterMaterialVolume_C* GetDefaultObj();

	void ForceInit(const TArray<class AActor*>& Actors, class UMeshComponent* Mesh, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPalLit_IsPalLit, bool CallFunc_IsPalLit_IsPalLit_1, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_GetNumMaterials_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetMeshFromActor_Mesh, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_3, class AActor* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1);
	void ForceOn(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ForceOff(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ForceUpdate(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_Set_ToArray_Result, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateParameters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_Set_ToArray_Result, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
	void SetParameters(class UMaterialInstanceDynamic* Material, double Light_Affect_Emissive_Intensity, double Light_Affect_Emissive_Min, double Light_Affect_Emissive_Max, double Base_Emissive_Intensity, double Base_Color_Intensity, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4);
	void EndOverlapPalLit(class UMaterialInstanceDynamic* Material, bool CallFunc_Set_Remove_ReturnValue);
	void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc, bool CallFunc_Set_Contains_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Force_Update();
	void Force_Off();
	void Force_On();
	void Force_Init();
	void ExecuteUbergraph_BP_PalCharacterMaterialVolume(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


