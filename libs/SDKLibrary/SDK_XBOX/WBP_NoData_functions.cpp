#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NoData.WBP_NoData_C
// (None)

class UClass* UWBP_NoData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NoData_C");

	return Clss;
}


// WBP_NoData_C WBP_NoData.Default__WBP_NoData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NoData_C* UWBP_NoData_C::GetDefaultObj()
{
	static class UWBP_NoData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NoData_C*>(UWBP_NoData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NoData.WBP_NoData_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NoData_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoData_C", "SetText");

	Params::UWBP_NoData_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


