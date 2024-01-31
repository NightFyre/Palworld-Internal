#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C
// (None)

class UClass* UWBP_OptionSettings_ListContentSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ListContentSlider_C");

	return Clss;
}


// WBP_OptionSettings_ListContentSlider_C WBP_OptionSettings_ListContentSlider.Default__WBP_OptionSettings_ListContentSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ListContentSlider_C* UWBP_OptionSettings_ListContentSlider_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ListContentSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ListContentSlider_C*>(UWBP_OptionSettings_ListContentSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.PlayChangeValueSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::PlayChangeValueSound(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "PlayChangeValueSound");

	Params::UWBP_OptionSettings_ListContentSlider_C_PlayChangeValueSound_Params Parms{};

	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.SetValueInt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::SetValueInt(int32 Value, int32 Min, int32 Max, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "SetValueInt");

	Params::UWBP_OptionSettings_ListContentSlider_C_SetValueInt_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_OptionSettings_ListContentSlider_C_BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::SetValue(double Value, double Min, double Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "SetValue");

	Params::UWBP_OptionSettings_ListContentSlider_C_SetValue_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.AddPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::AddPercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "AddPercent");

	Params::UWBP_OptionSettings_ListContentSlider_C_AddPercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.AddConstantValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::AddConstantValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "AddConstantValue");

	Params::UWBP_OptionSettings_ListContentSlider_C_AddConstantValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContentSlider_C::BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContentSlider_C::BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.ExecuteUbergraph_WBP_OptionSettings_ListContentSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Min                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Max                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (None)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_3                         (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::ExecuteUbergraph_WBP_OptionSettings_ListContentSlider(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool Temp_bool_Variable_3, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, float K2Node_ComponentBoundEvent_Value, double K2Node_CustomEvent_Value_1, double K2Node_CustomEvent_Min, double K2Node_CustomEvent_Max, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_CustomEvent_Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, int32 K2Node_Select_Default_2, double K2Node_CustomEvent_Value, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_FMin_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, int32 K2Node_Select_Default_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_7, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, float CallFunc_SetValue_InValue_ImplicitCast, double K2Node_VariableSet_CurrentValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetMaxValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetMinValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_2, float CallFunc_SetValue_InValue_ImplicitCast_2, float CallFunc_SetPercent_InPercent_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "ExecuteUbergraph_WBP_OptionSettings_ListContentSlider");

	Params::UWBP_OptionSettings_ListContentSlider_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Min = K2Node_CustomEvent_Min;
	Parms.K2Node_CustomEvent_Max = K2Node_CustomEvent_Max;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_5 = CallFunc_Subtract_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_6 = CallFunc_Subtract_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_2 = CallFunc_Conv_DoubleToText_ReturnValue_2;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_7 = CallFunc_Subtract_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_3 = CallFunc_Conv_DoubleToText_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentValue_ImplicitCast = K2Node_VariableSet_CurrentValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;
	Parms.CallFunc_SetMaxValue_InValue_ImplicitCast = CallFunc_SetMaxValue_InValue_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetMinValue_InValue_ImplicitCast = CallFunc_SetMinValue_InValue_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_2 = CallFunc_SetPercent_InPercent_ImplicitCast_2;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_2 = CallFunc_SetValue_InValue_ImplicitCast_2;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_3 = CallFunc_SetPercent_InPercent_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentSlider.WBP_OptionSettings_ListContentSlider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentSlider_C::OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentSlider_C", "OnValueChanged__DelegateSignature");

	Params::UWBP_OptionSettings_ListContentSlider_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


