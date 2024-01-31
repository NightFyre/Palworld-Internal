#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Buildup_Gauge.WBP_Buildup_Gauge_C
// (None)

class UClass* UWBP_Buildup_Gauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Buildup_Gauge_C");

	return Clss;
}


// WBP_Buildup_Gauge_C WBP_Buildup_Gauge.Default__WBP_Buildup_Gauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Buildup_Gauge_C* UWBP_Buildup_Gauge_C::GetDefaultObj()
{
	static class UWBP_Buildup_Gauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Buildup_Gauge_C*>(UWBP_Buildup_Gauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Buildup_Gauge.WBP_Buildup_Gauge_C.SetFill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFill                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Gauge_C::SetFill(bool IsFill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Gauge_C", "SetFill");

	Params::UWBP_Buildup_Gauge_C_SetFill_Params Parms{};

	Parms.IsFill = IsFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Gauge.WBP_Buildup_Gauge_C.SetSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Buildup_Gauge_C::SetSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Gauge_C", "SetSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Buildup_Gauge.WBP_Buildup_Gauge_C.ExecuteUbergraph_WBP_Buildup_Gauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsFill                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Gauge_C::ExecuteUbergraph_WBP_Buildup_Gauge(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_IsFill, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Gauge_C", "ExecuteUbergraph_WBP_Buildup_Gauge");

	Params::UWBP_Buildup_Gauge_C_ExecuteUbergraph_WBP_Buildup_Gauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_IsFill = K2Node_CustomEvent_IsFill;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


