#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C
class UWBP_CharaCre_ColorSelect_WithPreset_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Dot_0;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dot_1;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dot_2;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dot_3;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Line0;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Line0_1;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            NamedSlot_91;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_37;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_Free_C*      WBP_CharaCre_ColorSelect_Free_1;                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_sq_C*        WBP_CharaCre_ColorSelect_sq;                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WinBase;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        RowNum;                                            // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CharaCre_ColorSelect_sq_C*        LastClickedButton;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ColorSelect_WithPreset_C* GetDefaultObj();

	void GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Color_Select_Sq, bool K2Node_DynamicCast_bSuccess);
	void SetColor(const struct FLinearColor& NewColor);
	class UWidget* CustomNavi_PresetToCustomColor(enum class EUINavigation Navigation);
	void SetColorForce(const struct FLinearColor& NewColor);
	void OnClickedPreset(class UWBP_CharaCre_ColorSelect_sq_C* Widget, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetBindedColor_Color);
	void Setup(TArray<struct FLinearColor>& PresetColors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
	void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset(int32 EntryPoint, const struct FLinearColor& K2Node_ComponentBoundEvent_HSV, bool CallFunc_IsValid_ReturnValue);
	void OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
};

}


