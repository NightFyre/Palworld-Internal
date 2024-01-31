#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C
// (None)

class UClass* UWBP_PalWorkPowerPlant_Gauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalWorkPowerPlant_Gauge_C");

	return Clss;
}


// WBP_PalWorkPowerPlant_Gauge_C WBP_PalWorkPowerPlant_Gauge.Default__WBP_PalWorkPowerPlant_Gauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalWorkPowerPlant_Gauge_C* UWBP_PalWorkPowerPlant_Gauge_C::GetDefaultObj()
{
	static class UWBP_PalWorkPowerPlant_Gauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalWorkPowerPlant_Gauge_C*>(UWBP_PalWorkPowerPlant_Gauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkPowerPlant_Gauge_C::SetState(bool IsLow, bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkPowerPlant_Gauge_C", "SetState");

	Params::UWBP_PalWorkPowerPlant_Gauge_C_SetState_Params Parms{};

	Parms.IsLow = IsLow;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.AnmEvent_Changing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChanging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkPowerPlant_Gauge_C::AnmEvent_Changing(bool IsChanging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkPowerPlant_Gauge_C", "AnmEvent_Changing");

	Params::UWBP_PalWorkPowerPlant_Gauge_C_AnmEvent_Changing_Params Parms{};

	Parms.IsChanging = IsChanging;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkPowerPlant_Gauge.WBP_PalWorkPowerPlant_Gauge_C.ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLow                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChanging                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkPowerPlant_Gauge_C::ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_CustomEvent_IsLow, bool K2Node_CustomEvent_Show, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool K2Node_CustomEvent_IsChanging, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkPowerPlant_Gauge_C", "ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge");

	Params::UWBP_PalWorkPowerPlant_Gauge_C_ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_IsLow = K2Node_CustomEvent_IsLow;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_CustomEvent_IsChanging = K2Node_CustomEvent_IsChanging;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


