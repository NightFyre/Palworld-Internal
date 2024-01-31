#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C
// (None)

class UClass* UWBP_CharaCre_MenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_MenuButton_C");

	return Clss;
}


// WBP_CharaCre_MenuButton_C WBP_CharaCre_MenuButton.Default__WBP_CharaCre_MenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_MenuButton_C* UWBP_CharaCre_MenuButton_C::GetDefaultObj()
{
	static class UWBP_CharaCre_MenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_MenuButton_C*>(UWBP_CharaCre_MenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.GetBindedCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::GetBindedCategory(enum class E_UICharacterMakeCategory* CategoryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "GetBindedCategory");

	Params::UWBP_CharaCre_MenuButton_C_GetBindedCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryType != nullptr)
		*CategoryType = Parms.CategoryType;

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_MenuButton_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "AnmEvent_Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_MenuButton_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "AnmEvent_Normal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_MenuButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_MenuButton_C_BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.ExecuteUbergraph_WBP_CharaCre_MenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_CharaCre_MenuButton_C::ExecuteUbergraph_WBP_CharaCre_MenuButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "ExecuteUbergraph_WBP_CharaCre_MenuButton");

	Params::UWBP_CharaCre_MenuButton_C_ExecuteUbergraph_WBP_CharaCre_MenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_MenuButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


