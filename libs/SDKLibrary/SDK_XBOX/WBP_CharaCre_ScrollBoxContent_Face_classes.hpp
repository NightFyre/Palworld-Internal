#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x4E8 - 0x428)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C
class UWBP_CharaCre_ScrollBoxContent_Face_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_ColorSelect_sq_C*        WBP_CharaCre_ColorSelect_sq_Brow;                  // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_sq_C*        WBP_CharaCre_ColorSelect_sq_Eye;                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelectPanel_C*      WBP_PartsSelectPanel_Eye;                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelectPanel_C*      WBP_PartsSelectPanel_Head;                         // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> HeadMeshMap;                                       // 0x450(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                  BrowColorPreset;                                   // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                  EyeColorPreset;                                    // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSelectedEyeColor;                                // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               RestoreFocusWIdget;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedBrowColor;                               // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContent_Face_C* GetDefaultObj();

	void OnChangedBrowColor(const struct FLinearColor& Color);
	void OnCloseBrowColorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast);
	void OnChangedEyeColor(const struct FLinearColor& Color);
	void GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue);
	void OnClosedEyeColorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void Construct();
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget_1, const struct FLinearColor& CallFunc_GetBindedColor_Color, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget, const struct FLinearColor& CallFunc_GetBindedColor_Color_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalCharacterCreationEyeMaterialDataRow& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnSelectedBrowColor__DelegateSignature(const struct FLinearColor& Color);
	void OnSelectedEyeColor__DelegateSignature(const struct FLinearColor& Color);
};

}


