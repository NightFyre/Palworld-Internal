#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C
// (None)

class UClass* UWBP_Chara_Cre_VoiceTypeSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Chara_Cre_VoiceTypeSlider_C");

	return Clss;
}


// WBP_Chara_Cre_VoiceTypeSlider_C WBP_Chara_Cre_VoiceTypeSlider.Default__WBP_Chara_Cre_VoiceTypeSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Chara_Cre_VoiceTypeSlider_C* UWBP_Chara_Cre_VoiceTypeSlider_C::GetDefaultObj()
{
	static class UWBP_Chara_Cre_VoiceTypeSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Chara_Cre_VoiceTypeSlider_C*>(UWBP_Chara_Cre_VoiceTypeSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.ToVoiceID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoiceID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::ToVoiceID(double SliderValue, int32* VoiceID, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "ToVoiceID");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_ToVoiceID_Params Parms{};

	Parms.SliderValue = SliderValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (VoiceID != nullptr)
		*VoiceID = Parms.VoiceID;

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.ToSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SliderValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::ToSliderValue(int32 VoiceID, double* SliderValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "ToSliderValue");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_ToSliderValue_Params Parms{};

	Parms.VoiceID = VoiceID;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SliderValue != nullptr)
		*SliderValue = Parms.SliderValue;

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.SetValueForce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_ToSliderValue_SliderValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::SetValueForce(int32 VoiceID, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_ToSliderValue_SliderValue, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "SetValueForce");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_SetValueForce_Params Parms{};

	Parms.VoiceID = VoiceID;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_ToSliderValue_SliderValue = CallFunc_ToSliderValue_SliderValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_VoiceTypeSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_VoiceTypeSlider_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ToVoiceID_VoiceID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ToVoiceID_VoiceID_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetStepSize_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ToVoiceID_SliderValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ToVoiceID_SliderValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, int32 CallFunc_ToVoiceID_VoiceID, int32 CallFunc_ToVoiceID_VoiceID_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetStepSize_InValue_ImplicitCast, double CallFunc_ToVoiceID_SliderValue_ImplicitCast, double CallFunc_ToVoiceID_SliderValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_ToVoiceID_VoiceID = CallFunc_ToVoiceID_VoiceID;
	Parms.CallFunc_ToVoiceID_VoiceID_1 = CallFunc_ToVoiceID_VoiceID_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetStepSize_InValue_ImplicitCast = CallFunc_SetStepSize_InValue_ImplicitCast;
	Parms.CallFunc_ToVoiceID_SliderValue_ImplicitCast = CallFunc_ToVoiceID_SliderValue_ImplicitCast;
	Parms.CallFunc_ToVoiceID_SliderValue_ImplicitCast_1 = CallFunc_ToVoiceID_SliderValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C.OnChangedValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_VoiceTypeSlider_C::OnChangedValue__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_VoiceTypeSlider_C", "OnChangedValue__DelegateSignature");

	Params::UWBP_Chara_Cre_VoiceTypeSlider_C_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


