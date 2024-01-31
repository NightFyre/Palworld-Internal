#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameOver_Rescue.WBP_GameOver_Rescue_C
// (None)

class UClass* UWBP_GameOver_Rescue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameOver_Rescue_C");

	return Clss;
}


// WBP_GameOver_Rescue_C WBP_GameOver_Rescue.Default__WBP_GameOver_Rescue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameOver_Rescue_C* UWBP_GameOver_Rescue_C::GetDefaultObj()
{
	static class UWBP_GameOver_Rescue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameOver_Rescue_C*>(UWBP_GameOver_Rescue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameOver_Rescue.WBP_GameOver_Rescue_C.UpdateRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Remain                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Rescue_C::UpdateRescue(double Remain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Rescue_C", "UpdateRescue");

	Params::UWBP_GameOver_Rescue_C_UpdateRescue_Params Parms{};

	Parms.Remain = Remain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Rescue.WBP_GameOver_Rescue_C.ExecuteUbergraph_WBP_GameOver_Rescue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Remain                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Rescue_C::ExecuteUbergraph_WBP_GameOver_Rescue(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double K2Node_CustomEvent_Remain, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Rescue_C", "ExecuteUbergraph_WBP_GameOver_Rescue");

	Params::UWBP_GameOver_Rescue_C_ExecuteUbergraph_WBP_GameOver_Rescue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_CustomEvent_Remain = K2Node_CustomEvent_Remain;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


