#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C
// (None)

class UClass* UWBP_CharaCre_BodyTypeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_BodyTypeButton_C");

	return Clss;
}


// WBP_CharaCre_BodyTypeButton_C WBP_CharaCre_BodyTypeButton.Default__WBP_CharaCre_BodyTypeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_BodyTypeButton_C* UWBP_CharaCre_BodyTypeButton_C::GetDefaultObj()
{
	static class UWBP_CharaCre_BodyTypeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_BodyTypeButton_C*>(UWBP_CharaCre_BodyTypeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.GetBindedPresetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PresetName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::GetBindedPresetName(class FName* PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "GetBindedPresetName");

	Params::UWBP_CharaCre_BodyTypeButton_C_GetBindedPresetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PresetName != nullptr)
		*PresetName = Parms.PresetName;

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindPresetName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_CharaCre_BodyTypeButton_C::Setup(class FName BindPresetName, int32 ButtonIndex, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "Setup");

	Params::UWBP_CharaCre_BodyTypeButton_C_Setup_Params Parms{};

	Parms.BindPresetName = BindPresetName;
	Parms.ButtonIndex = ButtonIndex;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.AnmEvent_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BodyTypeButton_C::AnmEvent_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "AnmEvent_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.AnmEvent_Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BodyTypeButton_C::AnmEvent_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "AnmEvent_Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BodyTypeButton_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "AnmEvent_Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_BodyTypeButton_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "AnmEvent_Unselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_BodyTypeButton_C_BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_BodyTypeButton_C_BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_BodyTypeButton_C_BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.ExecuteUbergraph_WBP_CharaCre_BodyTypeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::ExecuteUbergraph_WBP_CharaCre_BodyTypeButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "ExecuteUbergraph_WBP_CharaCre_BodyTypeButton");

	Params::UWBP_CharaCre_BodyTypeButton_C_ExecuteUbergraph_WBP_CharaCre_BodyTypeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_BodyTypeButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_BodyTypeButton_C::OnClicked__DelegateSignature(class UWBP_CharaCre_BodyTypeButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_BodyTypeButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_BodyTypeButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


