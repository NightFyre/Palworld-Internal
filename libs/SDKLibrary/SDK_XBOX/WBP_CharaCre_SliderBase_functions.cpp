#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C
// (None)

class UClass* UWBP_CharaCre_SliderBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_SliderBase_C");

	return Clss;
}


// WBP_CharaCre_SliderBase_C WBP_CharaCre_SliderBase.Default__WBP_CharaCre_SliderBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_SliderBase_C* UWBP_CharaCre_SliderBase_C::GetDefaultObj()
{
	static class UWBP_CharaCre_SliderBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_SliderBase_C*>(UWBP_CharaCre_SliderBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_CharaCre_SliderBase_C::SetValue(int32 NewValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "SetValue");

	Params::UWBP_CharaCre_SliderBase_C_SetValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_SliderBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.ExecuteUbergraph_WBP_CharaCre_SliderBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_CharaCre_SliderBase_C::ExecuteUbergraph_WBP_CharaCre_SliderBase(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "ExecuteUbergraph_WBP_CharaCre_SliderBase");

	Params::UWBP_CharaCre_SliderBase_C_ExecuteUbergraph_WBP_CharaCre_SliderBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


