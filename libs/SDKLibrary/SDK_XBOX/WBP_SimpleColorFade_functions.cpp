#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SimpleColorFade.WBP_SimpleColorFade_C
// (None)

class UClass* UWBP_SimpleColorFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SimpleColorFade_C");

	return Clss;
}


// WBP_SimpleColorFade_C WBP_SimpleColorFade.Default__WBP_SimpleColorFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SimpleColorFade_C* UWBP_SimpleColorFade_C::GetDefaultObj()
{
	static class UWBP_SimpleColorFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SimpleColorFade_C*>(UWBP_SimpleColorFade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.Setup_ForOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::Setup_ForOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "Setup_ForOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.Finished_DE82E8EE4E2FF74CE3788F9F262A873A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::Finished_DE82E8EE4E2FF74CE3788F9F262A873A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "Finished_DE82E8EE4E2FF74CE3788F9F262A873A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.Finished_212EE08E4C1C909EB4116D9853386FC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::Finished_212EE08E4C1C909EB4116D9853386FC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "Finished_212EE08E4C1C909EB4116D9853386FC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.AnmEvent_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::AnmEvent_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "AnmEvent_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.AnmEvent_Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::AnmEvent_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "AnmEvent_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SimpleColorFade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleColorFade_C::ToggleVisibility(bool Visiable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "ToggleVisibility");

	Params::UWBP_SimpleColorFade_C_ToggleVisibility_Params Parms{};

	Parms.Visiable = Visiable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.ExecuteUbergraph_WBP_SimpleColorFade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visiable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleColorFade_C::ExecuteUbergraph_WBP_SimpleColorFade(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Visiable, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleColorFade_C", "ExecuteUbergraph_WBP_SimpleColorFade");

	Params::UWBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Visiable = K2Node_CustomEvent_Visiable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast = CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


