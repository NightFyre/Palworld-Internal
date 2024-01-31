#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_BG.WBP_CharaCre_BG_C
// (None)

class UClass* UWBP_CharaCre_BG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_BG_C");

	return Clss;
}


// WBP_CharaCre_BG_C WBP_CharaCre_BG.Default__WBP_CharaCre_BG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_BG_C* UWBP_CharaCre_BG_C::GetDefaultObj()
{
	static class UWBP_CharaCre_BG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_BG_C*>(UWBP_CharaCre_BG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_BG.WBP_CharaCre_BG_C.AnmEvent_FloorIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BG_C::AnmEvent_FloorIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BG_C", "AnmEvent_FloorIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BG.WBP_CharaCre_BG_C.AnmEvent_FloorOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BG_C::AnmEvent_FloorOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BG_C", "AnmEvent_FloorOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BG.WBP_CharaCre_BG_C.ExecuteUbergraph_WBP_CharaCre_BG
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BG_C::ExecuteUbergraph_WBP_CharaCre_BG(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BG_C", "ExecuteUbergraph_WBP_CharaCre_BG");

	Params::UWBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


