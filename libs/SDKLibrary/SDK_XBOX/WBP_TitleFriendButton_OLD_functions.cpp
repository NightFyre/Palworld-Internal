#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TitleFriendButton_OLD.WBP_TitleFriendButton_OLD_C
// (None)

class UClass* UWBP_TitleFriendButton_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TitleFriendButton_OLD_C");

	return Clss;
}


// WBP_TitleFriendButton_OLD_C WBP_TitleFriendButton_OLD.Default__WBP_TitleFriendButton_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TitleFriendButton_OLD_C* UWBP_TitleFriendButton_OLD_C::GetDefaultObj()
{
	static class UWBP_TitleFriendButton_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TitleFriendButton_OLD_C*>(UWBP_TitleFriendButton_OLD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TitleFriendButton_OLD.WBP_TitleFriendButton_OLD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TitleFriendButton_OLD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleFriendButton_OLD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleFriendButton_OLD.WBP_TitleFriendButton_OLD_C.BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleFriendButton_OLD_C::BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleFriendButton_OLD_C", "BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_TitleFriendButton_OLD_C_BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleFriendButton_OLD.WBP_TitleFriendButton_OLD_C.ExecuteUbergraph_WBP_TitleFriendButton_OLD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_TitleFriendButton_OLD_C::ExecuteUbergraph_WBP_TitleFriendButton_OLD(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleFriendButton_OLD_C", "ExecuteUbergraph_WBP_TitleFriendButton_OLD");

	Params::UWBP_TitleFriendButton_OLD_C_ExecuteUbergraph_WBP_TitleFriendButton_OLD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


