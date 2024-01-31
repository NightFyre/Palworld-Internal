#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerRadialMenu_MenuContent.WBP_PlayerRadialMenu_MenuContent_C
// (None)

class UClass* UWBP_PlayerRadialMenu_MenuContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerRadialMenu_MenuContent_C");

	return Clss;
}


// WBP_PlayerRadialMenu_MenuContent_C WBP_PlayerRadialMenu_MenuContent.Default__WBP_PlayerRadialMenu_MenuContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerRadialMenu_MenuContent_C* UWBP_PlayerRadialMenu_MenuContent_C::GetDefaultObj()
{
	static class UWBP_PlayerRadialMenu_MenuContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerRadialMenu_MenuContent_C*>(UWBP_PlayerRadialMenu_MenuContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerRadialMenu_MenuContent.WBP_PlayerRadialMenu_MenuContent_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerRadialMenu_MenuContent_C::SetTextColor(const struct FSlateColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_MenuContent_C", "SetTextColor");

	Params::UWBP_PlayerRadialMenu_MenuContent_C_SetTextColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu_MenuContent.WBP_PlayerRadialMenu_MenuContent_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerRadialMenu_MenuContent_C::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_MenuContent_C", "SetText");

	Params::UWBP_PlayerRadialMenu_MenuContent_C_SetText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}

}


