#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C
// (None)

class UClass* UWBP_OptionSettings_ListContentLRBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ListContentLRBar_C");

	return Clss;
}


// WBP_OptionSettings_ListContentLRBar_C WBP_OptionSettings_ListContentLRBar.Default__WBP_OptionSettings_ListContentLRBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ListContentLRBar_C* UWBP_OptionSettings_ListContentLRBar_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ListContentLRBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ListContentLRBar_C*>(UWBP_OptionSettings_ListContentLRBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRBar_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRBar_C", "SetActive");

	Params::UWBP_OptionSettings_ListContentLRBar_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C.ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRBar_C::ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar(int32 EntryPoint, bool K2Node_CustomEvent_IsActive, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRBar_C", "ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar");

	Params::UWBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_IsActive = K2Node_CustomEvent_IsActive;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


