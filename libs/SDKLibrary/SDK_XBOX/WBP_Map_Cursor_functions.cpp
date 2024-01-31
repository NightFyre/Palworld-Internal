#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Map_Cursor.WBP_Map_Cursor_C
// (None)

class UClass* UWBP_Map_Cursor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Map_Cursor_C");

	return Clss;
}


// WBP_Map_Cursor_C WBP_Map_Cursor.Default__WBP_Map_Cursor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Map_Cursor_C* UWBP_Map_Cursor_C::GetDefaultObj()
{
	static class UWBP_Map_Cursor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Map_Cursor_C*>(UWBP_Map_Cursor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Map_Cursor_C::AnmEvent_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Map_Cursor_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Map_Cursor_C::AnmEvent_Loop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Loop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Map_Cursor_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Map_Cursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.ExecuteUbergraph_WBP_Map_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Cursor_C::ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "ExecuteUbergraph_WBP_Map_Cursor");

	Params::UWBP_Map_Cursor_C_ExecuteUbergraph_WBP_Map_Cursor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


