#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C
// (None)

class UClass* UWBP_MainMenu_Pal_FoodAmountIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_FoodAmountIcon_C");

	return Clss;
}


// WBP_MainMenu_Pal_FoodAmountIcon_C WBP_MainMenu_Pal_FoodAmountIcon.Default__WBP_MainMenu_Pal_FoodAmountIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_FoodAmountIcon_C* UWBP_MainMenu_Pal_FoodAmountIcon_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_FoodAmountIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_FoodAmountIcon_C*>(UWBP_MainMenu_Pal_FoodAmountIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.AnmEvent_On
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_FoodAmountIcon_C::AnmEvent_On()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "AnmEvent_On");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.AnmEvent_Off
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_FoodAmountIcon_C::AnmEvent_Off()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "AnmEvent_Off");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_FoodAmountIcon_C::ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon");

	Params::UWBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


