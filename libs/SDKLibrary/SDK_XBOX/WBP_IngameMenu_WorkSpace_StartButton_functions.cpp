#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C
// (None)

class UClass* UWBP_IngameMenu_WorkSpace_StartButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_WorkSpace_StartButton_C");

	return Clss;
}


// WBP_IngameMenu_WorkSpace_StartButton_C WBP_IngameMenu_WorkSpace_StartButton.Default__WBP_IngameMenu_WorkSpace_StartButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_WorkSpace_StartButton_C* UWBP_IngameMenu_WorkSpace_StartButton_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_WorkSpace_StartButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_WorkSpace_StartButton_C*>(UWBP_IngameMenu_WorkSpace_StartButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "SetEnable");

	Params::UWBP_IngameMenu_WorkSpace_StartButton_C_SetEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_WorkSpace_StartButton_C_BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_StartButton_C::ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton(int32 EntryPoint, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool K2Node_CustomEvent_Enable, enum class EUMGSequencePlayMode K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton");

	Params::UWBP_IngameMenu_WorkSpace_StartButton_C_ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_StartButton.WBP_IngameMenu_WorkSpace_StartButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_StartButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_StartButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


