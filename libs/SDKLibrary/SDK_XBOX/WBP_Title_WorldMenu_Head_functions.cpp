#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldMenu_Head.WBP_Title_WorldMenu_Head_C
// (None)

class UClass* UWBP_Title_WorldMenu_Head_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldMenu_Head_C");

	return Clss;
}


// WBP_Title_WorldMenu_Head_C WBP_Title_WorldMenu_Head.Default__WBP_Title_WorldMenu_Head_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldMenu_Head_C* UWBP_Title_WorldMenu_Head_C::GetDefaultObj()
{
	static class UWBP_Title_WorldMenu_Head_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldMenu_Head_C*>(UWBP_Title_WorldMenu_Head_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_WorldMenu_Head.WBP_Title_WorldMenu_Head_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldMenu_Head_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldMenu_Head_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldMenu_Head.WBP_Title_WorldMenu_Head_C.ExecuteUbergraph_WBP_Title_WorldMenu_Head
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Title_WorldMenu_Head_C::ExecuteUbergraph_WBP_Title_WorldMenu_Head(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldMenu_Head_C", "ExecuteUbergraph_WBP_Title_WorldMenu_Head");

	Params::UWBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


