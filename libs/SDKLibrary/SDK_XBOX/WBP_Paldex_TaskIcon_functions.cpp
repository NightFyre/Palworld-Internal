#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex_TaskIcon.WBP_Paldex_TaskIcon_C
// (None)

class UClass* UWBP_Paldex_TaskIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_TaskIcon_C");

	return Clss;
}


// WBP_Paldex_TaskIcon_C WBP_Paldex_TaskIcon.Default__WBP_Paldex_TaskIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_TaskIcon_C* UWBP_Paldex_TaskIcon_C::GetDefaultObj()
{
	static class UWBP_Paldex_TaskIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_TaskIcon_C*>(UWBP_Paldex_TaskIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex_TaskIcon.WBP_Paldex_TaskIcon_C.AnmEvent_On
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_TaskIcon_C::AnmEvent_On()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_TaskIcon_C", "AnmEvent_On");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_TaskIcon.WBP_Paldex_TaskIcon_C.AnmEvent_Off
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_TaskIcon_C::AnmEvent_Off()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_TaskIcon_C", "AnmEvent_Off");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_TaskIcon.WBP_Paldex_TaskIcon_C.AnmEvent_Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_TaskIcon_C::AnmEvent_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_TaskIcon_C", "AnmEvent_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_TaskIcon.WBP_Paldex_TaskIcon_C.ExecuteUbergraph_WBP_Paldex_TaskIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_TaskIcon_C::ExecuteUbergraph_WBP_Paldex_TaskIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_TaskIcon_C", "ExecuteUbergraph_WBP_Paldex_TaskIcon");

	Params::UWBP_Paldex_TaskIcon_C_ExecuteUbergraph_WBP_Paldex_TaskIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


