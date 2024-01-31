#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C
class UWBP_Chara_Cre_VoiceTypeSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnalogSlider*                         AnalogSlider_Main;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Base;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_305;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SliderNum;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangedValue;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MaxValue;                                          // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastIndex;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Chara_Cre_VoiceTypeSlider_C* GetDefaultObj();

	void ToVoiceID(double SliderValue, int32* VoiceID, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void ToSliderValue(int32 VoiceID, double* SliderValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void SetValueForce(int32 VoiceID, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_ToSliderValue_SliderValue, float CallFunc_SetValue_InValue_ImplicitCast);
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, int32 CallFunc_ToVoiceID_VoiceID, int32 CallFunc_ToVoiceID_VoiceID_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetStepSize_InValue_ImplicitCast, double CallFunc_ToVoiceID_SliderValue_ImplicitCast, double CallFunc_ToVoiceID_SliderValue_ImplicitCast_1);
	void OnChangedValue__DelegateSignature(double Value);
};

}


