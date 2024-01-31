#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorkerRadialMenuContent.WBP_WorkerRadialMenuContent_C
// (None)

class UClass* UWBP_WorkerRadialMenuContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorkerRadialMenuContent_C");

	return Clss;
}


// WBP_WorkerRadialMenuContent_C WBP_WorkerRadialMenuContent.Default__WBP_WorkerRadialMenuContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorkerRadialMenuContent_C* UWBP_WorkerRadialMenuContent_C::GetDefaultObj()
{
	static class UWBP_WorkerRadialMenuContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorkerRadialMenuContent_C*>(UWBP_WorkerRadialMenuContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorkerRadialMenuContent.WBP_WorkerRadialMenuContent_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WorkerRadialMenuContent_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenuContent_C", "SetText");

	Params::UWBP_WorkerRadialMenuContent_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


