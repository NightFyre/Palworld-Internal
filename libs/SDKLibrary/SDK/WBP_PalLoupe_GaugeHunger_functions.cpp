#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalLoupe_GaugeHunger.WBP_PalLoupe_GaugeHunger_C
// (None)

class UClass* UWBP_PalLoupe_GaugeHunger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalLoupe_GaugeHunger_C");

	return Clss;
}


// WBP_PalLoupe_GaugeHunger_C WBP_PalLoupe_GaugeHunger.Default__WBP_PalLoupe_GaugeHunger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalLoupe_GaugeHunger_C* UWBP_PalLoupe_GaugeHunger_C::GetDefaultObj()
{
	static class UWBP_PalLoupe_GaugeHunger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalLoupe_GaugeHunger_C*>(UWBP_PalLoupe_GaugeHunger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalLoupe_GaugeHunger.WBP_PalLoupe_GaugeHunger_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_GaugeHunger_C::SetPercent(double Percent, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_GaugeHunger_C", "SetPercent");

	Params::UWBP_PalLoupe_GaugeHunger_C_SetPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


