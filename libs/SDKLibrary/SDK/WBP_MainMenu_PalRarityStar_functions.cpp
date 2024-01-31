#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C
// (None)

class UClass* UWBP_MainMenu_PalRarityStar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_PalRarityStar_C");

	return Clss;
}


// WBP_MainMenu_PalRarityStar_C WBP_MainMenu_PalRarityStar.Default__WBP_MainMenu_PalRarityStar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_PalRarityStar_C* UWBP_MainMenu_PalRarityStar_C::GetDefaultObj()
{
	static class UWBP_MainMenu_PalRarityStar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_PalRarityStar_C*>(UWBP_MainMenu_PalRarityStar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.SetActiveRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalRarityStar_C::SetActiveRank(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "SetActiveRank");

	Params::UWBP_MainMenu_PalRarityStar_C_SetActiveRank_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_OnToOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_OnToOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_OnToOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_OffToOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_OffToOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_OffToOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_ForceOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_ForceOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_ForceOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_Highlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_Highlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_Highlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.ExecuteUbergraph_WBP_MainMenu_PalRarityStar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalRarityStar_C::ExecuteUbergraph_WBP_MainMenu_PalRarityStar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "ExecuteUbergraph_WBP_MainMenu_PalRarityStar");

	Params::UWBP_MainMenu_PalRarityStar_C_ExecuteUbergraph_WBP_MainMenu_PalRarityStar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


