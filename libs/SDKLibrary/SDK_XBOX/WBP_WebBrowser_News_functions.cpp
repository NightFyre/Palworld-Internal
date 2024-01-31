#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WebBrowser_News.WBP_WebBrowser_News_C
// (None)

class UClass* UWBP_WebBrowser_News_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WebBrowser_News_C");

	return Clss;
}


// WBP_WebBrowser_News_C WBP_WebBrowser_News.Default__WBP_WebBrowser_News_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WebBrowser_News_C* UWBP_WebBrowser_News_C::GetDefaultObj()
{
	static class UWBP_WebBrowser_News_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WebBrowser_News_C*>(UWBP_WebBrowser_News_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WebBrowser_News.WBP_WebBrowser_News_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_WebBrowser_News_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WebBrowser_News_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_WebBrowser_News_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_WebBrowser_News.WBP_WebBrowser_News_C.BndEvt__WBP_WebBrowserTest_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WebBrowser_News_C::BndEvt__WBP_WebBrowserTest_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WebBrowser_News_C", "BndEvt__WBP_WebBrowserTest_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WebBrowser_News.WBP_WebBrowser_News_C.BndEvt__WBP_WebBrowser_News_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WebBrowser_News_C::BndEvt__WBP_WebBrowser_News_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WebBrowser_News_C", "BndEvt__WBP_WebBrowser_News_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WebBrowser_News.WBP_WebBrowser_News_C.ExecuteUbergraph_WBP_WebBrowser_News
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WebBrowser_News_C::ExecuteUbergraph_WBP_WebBrowser_News(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WebBrowser_News_C", "ExecuteUbergraph_WBP_WebBrowser_News");

	Params::UWBP_WebBrowser_News_C_ExecuteUbergraph_WBP_WebBrowser_News_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


