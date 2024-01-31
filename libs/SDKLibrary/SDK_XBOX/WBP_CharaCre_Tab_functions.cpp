#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_Tab.WBP_CharaCre_Tab_C
// (None)

class UClass* UWBP_CharaCre_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_Tab_C");

	return Clss;
}


// WBP_CharaCre_Tab_C WBP_CharaCre_Tab.Default__WBP_CharaCre_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_Tab_C* UWBP_CharaCre_Tab_C::GetDefaultObj()
{
	static class UWBP_CharaCre_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_Tab_C*>(UWBP_CharaCre_Tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.GetBindedCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::GetBindedCategory(enum class E_UICharacterMakeCategory* CategoryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "GetBindedCategory");

	Params::UWBP_CharaCre_Tab_C_GetBindedCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryType != nullptr)
		*CategoryType = Parms.CategoryType;

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_Tab_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "AnmEvent_Normal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_Tab_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_Tab_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_Tab_C_BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.ExecuteUbergraph_WBP_CharaCre_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_CharaCre_Tab_C::ExecuteUbergraph_WBP_CharaCre_Tab(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "ExecuteUbergraph_WBP_CharaCre_Tab");

	Params::UWBP_CharaCre_Tab_C_ExecuteUbergraph_WBP_CharaCre_Tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_Tab_C*         TabWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::OnClicked__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_Tab_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


