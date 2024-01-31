#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ListContent.WBP_CharaCre_ListContent_C
// (None)

class UClass* UWBP_CharaCre_ListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ListContent_C");

	return Clss;
}


// WBP_CharaCre_ListContent_C WBP_CharaCre_ListContent.Default__WBP_CharaCre_ListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ListContent_C* UWBP_CharaCre_ListContent_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ListContent_C*>(UWBP_CharaCre_ListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ListContent.WBP_CharaCre_ListContent_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ListContent_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ListContent_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ListContent.WBP_CharaCre_ListContent_C.ExecuteUbergraph_WBP_CharaCre_ListContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_CharaCre_ListContent_C::ExecuteUbergraph_WBP_CharaCre_ListContent(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ListContent_C", "ExecuteUbergraph_WBP_CharaCre_ListContent");

	Params::UWBP_CharaCre_ListContent_C_ExecuteUbergraph_WBP_CharaCre_ListContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


