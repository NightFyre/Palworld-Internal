#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuildMemberMenu.WBP_GuildMemberMenu_C
// (None)

class UClass* UWBP_GuildMemberMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuildMemberMenu_C");

	return Clss;
}


// WBP_GuildMemberMenu_C WBP_GuildMemberMenu.Default__WBP_GuildMemberMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuildMemberMenu_C* UWBP_GuildMemberMenu_C::GetDefaultObj()
{
	static class UWBP_GuildMemberMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuildMemberMenu_C*>(UWBP_GuildMemberMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     TargetWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberMenu_C::GetTopFocusTarget(class UWidget** TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "GetTopFocusTarget");

	Params::UWBP_GuildMemberMenu_C_GetTopFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GuildMemberMenu_C::SetPlayerName(const class FString& DisplayName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "SetPlayerName");

	Params::UWBP_GuildMemberMenu_C_SetPlayerName_Params Parms{};

	Parms.DisplayName = DisplayName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuildMemberMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_GuildMemberMenuList_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberMenu_C::BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UWBP_GuildMemberMenu_C_BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_GuildMemberMenuList_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberMenu_C::BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UWBP_GuildMemberMenu_C_BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.ExecuteUbergraph_WBP_GuildMemberMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class UWBP_GuildMemberMenuList_C*  K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuildMemberMenuList_C*  K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberMenu_C::ExecuteUbergraph_WBP_GuildMemberMenu(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UWBP_GuildMemberMenuList_C* K2Node_ComponentBoundEvent_Button_1, class UWBP_GuildMemberMenuList_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "ExecuteUbergraph_WBP_GuildMemberMenu");

	Params::UWBP_GuildMemberMenu_C_ExecuteUbergraph_WBP_GuildMemberMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.OnClickedBanPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuildMemberMenu_C::OnClickedBanPlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "OnClickedBanPlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuildMemberMenu.WBP_GuildMemberMenu_C.OnClickedChangeAdmin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuildMemberMenu_C::OnClickedChangeAdmin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuildMemberMenu_C", "OnClickedChangeAdmin__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


