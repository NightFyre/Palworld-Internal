#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2C1 - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C
class UWBP_OptionSettings_ListContentSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Value;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       CurrentValue;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Min;                                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Max;                                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsIntegerMode;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContentSlider_C* GetDefaultObj();

	void PlayChangeValueSound(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetValueInt(int32 Value, int32 Min, int32 Max, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2);
	void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void SetValue(double Value, double Min, double Max);
	void AddPercent(double Percent);
	void AddConstantValue(double Value);
	void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_OptionSettings_ListContentSlider(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool Temp_bool_Variable_3, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, float K2Node_ComponentBoundEvent_Value, double K2Node_CustomEvent_Value_1, double K2Node_CustomEvent_Min, double K2Node_CustomEvent_Max, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_CustomEvent_Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, int32 K2Node_Select_Default_2, double K2Node_CustomEvent_Value, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_FMin_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, int32 K2Node_Select_Default_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_7, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, float CallFunc_SetValue_InValue_ImplicitCast, double K2Node_VariableSet_CurrentValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetMaxValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetMinValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_2, float CallFunc_SetValue_InValue_ImplicitCast_2, float CallFunc_SetPercent_InPercent_ImplicitCast_3);
	void OnValueChanged__DelegateSignature(double Value);
};

}


