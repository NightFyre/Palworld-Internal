#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x318 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSelect_Free.WBP_CharaCre_ColorSelect_Free_C
class UWBP_CharaCre_ColorSelect_Free_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnalogSlider*                         AnalogSlider_H;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         AnalogSlider_S;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         AnalogSlider_V;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_H;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_S;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_V;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_293;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_sq_C*        WBP_CharaCre_ColorSelect_sq_Custom;                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_SliderBase_C*            WBP_CharaCre_SliderBase_H;                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_SliderBase_C*            WBP_CharaCre_SliderBase_S;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_SliderBase_C*            WBP_CharaCre_SliderBase_V;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SGradientMaterial;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              VGradientMaterial;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNotifyCustomColorClicked;                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ColorSelect_Free_C* GetDefaultObj();

	void Set_Enable_Slider(bool IsEnable, bool Temp_bool_Variable, double CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_DoubleToLinearColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void SetColorForce(const struct FLinearColor& NewColor, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void SetColor(const struct FLinearColor& NewColor, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast_2);
	void ApplyColorSetting(bool IsTriggerEvent, float CallFunc_GetValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValue_ReturnValue_3, float CallFunc_GetValue_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, float CallFunc_GetValue_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, float K2Node_MakeStruct_R_ImplicitCast);
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_CharaCre_ColorSelect_Free_AnalogSlider_H_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_CharaCre_ColorSelect_Free_AnalogSlider_V_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_CharaCre_ColorSelect_Free_AnalogSlider_S_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_CharaCre_ColorSelect_Free_WBP_CharaCre_ColorSelect_sq_Custom_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void ExecuteUbergraph_WBP_CharaCre_ColorSelect_Free(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget);
	void OnNotifyCustomColorClicked__DelegateSignature();
	void OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
};

}


