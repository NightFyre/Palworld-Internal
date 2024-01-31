#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_bg.WBP_MainMenu_bg_C
// (None)

class UClass* UWBP_MainMenu_bg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_bg_C");

	return Clss;
}


// WBP_MainMenu_bg_C WBP_MainMenu_bg.Default__WBP_MainMenu_bg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_bg_C* UWBP_MainMenu_bg_C::GetDefaultObj()
{
	static class UWBP_MainMenu_bg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_bg_C*>(UWBP_MainMenu_bg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_bg.WBP_MainMenu_bg_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_bg_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_bg_C", "SetText");

	Params::UWBP_MainMenu_bg_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_bg.WBP_MainMenu_bg_C.Anm_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_bg_C::Anm_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_bg_C", "Anm_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_bg.WBP_MainMenu_bg_C.ExecuteUbergraph_WBP_MainMenu_bg
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_bg_C::ExecuteUbergraph_WBP_MainMenu_bg(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_bg_C", "ExecuteUbergraph_WBP_MainMenu_bg");

	Params::UWBP_MainMenu_bg_C_ExecuteUbergraph_WBP_MainMenu_bg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


