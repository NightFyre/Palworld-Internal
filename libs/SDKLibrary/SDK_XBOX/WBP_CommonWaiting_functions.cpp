#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonWaiting.WBP_CommonWaiting_C
// (None)

class UClass* UWBP_CommonWaiting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonWaiting_C");

	return Clss;
}


// WBP_CommonWaiting_C WBP_CommonWaiting.Default__WBP_CommonWaiting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonWaiting_C* UWBP_CommonWaiting_C::GetDefaultObj()
{
	static class UWBP_CommonWaiting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonWaiting_C*>(UWBP_CommonWaiting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonWaiting.WBP_CommonWaiting_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonWaiting_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonWaiting_C", "SetText");

	Params::UWBP_CommonWaiting_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


