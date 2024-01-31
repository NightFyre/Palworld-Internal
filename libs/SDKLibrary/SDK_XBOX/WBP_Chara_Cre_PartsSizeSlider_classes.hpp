#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2D8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C
class UWBP_Chara_Cre_PartsSizeSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnalogSlider*                         AnalogSlider_Main;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Base;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_305;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Slider;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SliderNum;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangedValue;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       MinValue;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxValue;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   TitleMsgID;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_Chara_Cre_PartsSizeSlider_C* GetDefaultObj();

	void SetValueForce(double Size, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Construct();
	void BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnInitialized();
	void BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void OnChangedValue__DelegateSignature(double Value);
};

}


