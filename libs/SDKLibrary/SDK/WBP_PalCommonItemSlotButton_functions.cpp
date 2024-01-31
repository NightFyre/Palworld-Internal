#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C
// (None)

class UClass* UWBP_PalCommonItemSlotButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonItemSlotButton_C");

	return Clss;
}


// WBP_PalCommonItemSlotButton_C WBP_PalCommonItemSlotButton.Default__WBP_PalCommonItemSlotButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonItemSlotButton_C* UWBP_PalCommonItemSlotButton_C::GetDefaultObj()
{
	static class UWBP_PalCommonItemSlotButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonItemSlotButton_C*>(UWBP_PalCommonItemSlotButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterItemSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotBase_C*      ItemSlotWidget                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "RegisterItemSlotWidget");

	Params::UWBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = Parms.ItemSlotWidget;

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "RegisterButton");

	Params::UWBP_PalCommonItemSlotButton_C_RegisterButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Lock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Lock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Lock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Push
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Push()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Push");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlotButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayFocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayFocusAnim");

	Params::UWBP_PalCommonItemSlotButton_C_PlayFocusAnim_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayUnfocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayUnfocusAnim");

	Params::UWBP_PalCommonItemSlotButton_C_PlayUnfocusAnim_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayPushAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayPushAnim");

	Params::UWBP_PalCommonItemSlotButton_C_PlayPushAnim_Params Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayDropAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayDropAnim");

	Params::UWBP_PalCommonItemSlotButton_C_PlayDropAnim_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.LiftedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "LiftedEvent");

	Params::UWBP_PalCommonItemSlotButton_C_LiftedEvent_Params Parms{};

	Parms.LiftNum = LiftNum;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.DraggedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "DraggedEvent");

	Params::UWBP_PalCommonItemSlotButton_C_DraggedEvent_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.ExecuteUbergraph_WBP_PalCommonItemSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_5                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_4                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   K2Node_CustomEvent_pressType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LiftNum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_5, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_3, enum class EPalItemSlotPressType K2Node_CustomEvent_pressType, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_2, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 K2Node_CustomEvent_LiftNum, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "ExecuteUbergraph_WBP_PalCommonItemSlotButton");

	Params::UWBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_CustomEvent_Widget_5 = K2Node_CustomEvent_Widget_5;
	Parms.K2Node_CustomEvent_Widget_4 = K2Node_CustomEvent_Widget_4;
	Parms.K2Node_CustomEvent_Widget_3 = K2Node_CustomEvent_Widget_3;
	Parms.K2Node_CustomEvent_pressType = K2Node_CustomEvent_pressType;
	Parms.K2Node_CustomEvent_Widget_2 = K2Node_CustomEvent_Widget_2;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.K2Node_CustomEvent_LiftNum = K2Node_CustomEvent_LiftNum;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


