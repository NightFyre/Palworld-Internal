#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C
// (None)

class UClass* UWBP_CaptureFailedPercent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CaptureFailedPercent_C");

	return Clss;
}


// WBP_CaptureFailedPercent_C WBP_CaptureFailedPercent.Default__WBP_CaptureFailedPercent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CaptureFailedPercent_C* UWBP_CaptureFailedPercent_C::GetDefaultObj()
{
	static class UWBP_CaptureFailedPercent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CaptureFailedPercent_C*>(UWBP_CaptureFailedPercent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.UpdatePercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::UpdatePercent(bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "UpdatePercent");

	Params::UWBP_CaptureFailedPercent_C_UpdatePercent_Params Parms{};

	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Set Percent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::Set_Percent(double Percent, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_4, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Set Percent");

	Params::UWBP_CaptureFailedPercent_C_Set_Percent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_2 = CallFunc_Divide_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Percent_IntInt_ReturnValue_2 = CallFunc_Percent_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.NotifyClearSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CaptureFailedPercent_C::NotifyClearSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "NotifyClearSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayPercent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::Setup(double DisplayPercent, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Setup");

	Params::UWBP_CaptureFailedPercent_C_Setup_Params Parms{};

	Parms.DisplayPercent = DisplayPercent;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CaptureFailedPercent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.ExecuteUbergraph_WBP_CaptureFailedPercent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::ExecuteUbergraph_WBP_CaptureFailedPercent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "ExecuteUbergraph_WBP_CaptureFailedPercent");

	Params::UWBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.OnOverClearTimer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CaptureFailedPercent_C* SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureFailedPercent_C::OnOverClearTimer__DelegateSignature(class UWBP_CaptureFailedPercent_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CaptureFailedPercent_C", "OnOverClearTimer__DelegateSignature");

	Params::UWBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


