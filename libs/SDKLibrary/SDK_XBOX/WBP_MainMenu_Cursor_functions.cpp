#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Cursor.WBP_MainMenu_Cursor_C
// (None)

class UClass* UWBP_MainMenu_Cursor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Cursor_C");

	return Clss;
}


// WBP_MainMenu_Cursor_C WBP_MainMenu_Cursor.Default__WBP_MainMenu_Cursor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Cursor_C* UWBP_MainMenu_Cursor_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Cursor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Cursor_C*>(UWBP_MainMenu_Cursor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Cursor.WBP_MainMenu_Cursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Cursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Cursor_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Cursor.WBP_MainMenu_Cursor_C.ExecuteUbergraph_WBP_MainMenu_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Cursor_C::ExecuteUbergraph_WBP_MainMenu_Cursor(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Cursor_C", "ExecuteUbergraph_WBP_MainMenu_Cursor");

	Params::UWBP_MainMenu_Cursor_C_ExecuteUbergraph_WBP_MainMenu_Cursor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


