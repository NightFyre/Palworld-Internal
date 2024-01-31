#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C
// (None)

class UClass* UWBP_IngameMenu_Chest_LockNum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Chest_LockNum_C");

	return Clss;
}


// WBP_IngameMenu_Chest_LockNum_C WBP_IngameMenu_Chest_LockNum.Default__WBP_IngameMenu_Chest_LockNum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Chest_LockNum_C* UWBP_IngameMenu_Chest_LockNum_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Chest_LockNum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Chest_LockNum_C*>(UWBP_IngameMenu_Chest_LockNum_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_LockNum_C_BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.SetNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::SetNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "SetNum");

	Params::UWBP_IngameMenu_Chest_LockNum_C_SetNum_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_LockNum_C_BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_LockNum_C_BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_LockNum_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Num                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, int32 K2Node_CustomEvent_Num, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum");

	Params::UWBP_IngameMenu_Chest_LockNum_C_ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CustomEvent_Num = K2Node_CustomEvent_Num;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNum.WBP_IngameMenu_Chest_LockNum_C.OnNumClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ClickedNum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNum_C::OnNumClicked__DelegateSignature(int32 ClickedNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNum_C", "OnNumClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_LockNum_C_OnNumClicked__DelegateSignature_Params Parms{};

	Parms.ClickedNum = ClickedNum;

	UObject::ProcessEvent(Func, &Parms);

}

}


