#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C
// (None)

class UClass* UWBP_Chara_Cre_PartsSizeSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Chara_Cre_PartsSizeSlider_C");

	return Clss;
}


// WBP_Chara_Cre_PartsSizeSlider_C WBP_Chara_Cre_PartsSizeSlider.Default__WBP_Chara_Cre_PartsSizeSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Chara_Cre_PartsSizeSlider_C* UWBP_Chara_Cre_PartsSizeSlider_C::GetDefaultObj()
{
	static class UWBP_Chara_Cre_PartsSizeSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Chara_Cre_PartsSizeSlider_C*>(UWBP_Chara_Cre_PartsSizeSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.SetValueForce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_PartsSizeSlider_C::SetValueForce(double Size, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "SetValueForce");

	Params::UWBP_Chara_Cre_PartsSizeSlider_C_SetValueForce_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_PartsSizeSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_PartsSizeSlider_C::BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_PartsSizeSlider_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_PartsSizeSlider_C::BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Chara_Cre_PartsSizeSlider_C::BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_PartsSizeSlider_C::ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider");

	Params::UWBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.OnChangedValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Chara_Cre_PartsSizeSlider_C::OnChangedValue__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Chara_Cre_PartsSizeSlider_C", "OnChangedValue__DelegateSignature");

	Params::UWBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


