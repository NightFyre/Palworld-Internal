#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x4E8 - 0x428)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C
class UWBP_CharaCre_ScrollBoxContent_Body_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_ColorSelect_sq_C*        WBP_CharaCre_ColorSelect_sq;                       // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*      WBP_PartsSizeSlider_Arm;                           // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*      WBP_PartsSizeSlider_Leg;                           // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chara_Cre_PartsSizeSlider_C*      WBP_PartsSizeSlider_Torso;                         // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_Body;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> BodyMeshMap;                                       // 0x458(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                  PresetColors;                                      // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSelectedSkinColor;                               // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               RestoreFocusWIdget;                                // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedBodyType;                                 // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_BodyTypeButton_C*        LastClickedBodyTypeButton;                         // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContent_Body_C* GetDefaultObj();

	void SetDefaultBodyTypePresetName(class FName PresetName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnClickedBodyTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName);
	class UWidget* CustomNavi_ToSkinColor(enum class EUINavigation Navigation);
	class UWidget* CustomNavi_ToTorsoSlider(enum class EUINavigation Navigation);
	void GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue);
	void OnChangedSelectColor(const struct FLinearColor& Color);
	void OnClosedCOlorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, double CallFunc_SetValueForce_Size_ImplicitCast, double CallFunc_SetValueForce_Size_ImplicitCast_1, double CallFunc_SetValueForce_Size_ImplicitCast_2);
	void GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget, const struct FLinearColor& CallFunc_GetBindedColor_Color, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnClickedBodyType__DelegateSignature(class FName PresetName);
	void OnSelectedSkinColor__DelegateSignature(const struct FLinearColor& Color);
};

}


