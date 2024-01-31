#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C
// (None)

class UClass* UWBP_PalCharacterSlotButtonBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCharacterSlotButtonBase_C");

	return Clss;
}


// WBP_PalCharacterSlotButtonBase_C WBP_PalCharacterSlotButtonBase.Default__WBP_PalCharacterSlotButtonBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCharacterSlotButtonBase_C* UWBP_PalCharacterSlotButtonBase_C::GetDefaultObj()
{
	static class UWBP_PalCharacterSlotButtonBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCharacterSlotButtonBase_C*>(UWBP_PalCharacterSlotButtonBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCharacterSlotButtonBase_C*K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PalCharacterSlotButtonBase_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UWBP_PalCharacterSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDrop");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base = K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnMouseButtonUp");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterSlotButtonBase_C::OnDropped_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDropped_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterSlotButtonBase_C::OnDragged_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragged_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnPreviewMouseButtonDown");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonCharacterSlotButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_PalCommonCharacterSlotButton_C* CallFunc_Create_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragDetected");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::Focus(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "Focus");

	Params::UWBP_PalCharacterSlotButtonBase_C_Focus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterSlotButtonBase_C::OnRightClicked_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRightClicked_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnMouseButtonDown");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnhovered_Internal(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnhovered_Internal");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnHovered_Internal(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnHovered_Internal");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnHovered_Internal_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnClicked_Internal(class UCommonButtonBase* Button, bool Temp_bool_Variable, enum class EPalItemSlotPressType Temp_byte_Variable, enum class EPalItemSlotPressType Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, enum class EPalItemSlotPressType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnClicked_Internal");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnClicked_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.BindButtonEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::BindButtonEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "BindButtonEvents");

	Params::UWBP_PalCharacterSlotButtonBase_C_BindButtonEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetTargetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::GetTargetSlot(class UPalIndividualCharacterSlot** TargetSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "GetTargetSlot");

	Params::UWBP_PalCharacterSlotButtonBase_C_GetTargetSlot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSlot != nullptr)
		*TargetSlot = Parms.TargetSlot;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterCharacterSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotBase_C* CharacterSlotWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "RegisterCharacterSlotWidget");

	Params::UWBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSlotWidget != nullptr)
		*CharacterSlotWidget = Parms.CharacterSlotWidget;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::Setup(class UPalIndividualCharacterSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "Setup");

	Params::UWBP_PalCharacterSlotButtonBase_C_Setup_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "RegisterButton");

	Params::UWBP_PalCharacterSlotButtonBase_C_RegisterButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterSlotButtonBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalCharacterSlotButtonBase_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnAddedToFocusPath");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalCharacterSlotButtonBase_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRemovedFromFocusPath");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.ExecuteUbergraph_WBP_PalCharacterSlotButtonBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_RegisterButton_button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCharacterSlotBase_C* CallFunc_RegisterCharacterSlotWidget_characterSlotWidget         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void UWBP_PalCharacterSlotButtonBase_C::ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint, class UCommonButtonBase* CallFunc_RegisterButton_button, class UWBP_PalCharacterSlotBase_C* CallFunc_RegisterCharacterSlotWidget_characterSlotWidget, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "ExecuteUbergraph_WBP_PalCharacterSlotButtonBase");

	Params::UWBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterButton_button = CallFunc_RegisterButton_button;
	Parms.CallFunc_RegisterCharacterSlotWidget_characterSlotWidget = CallFunc_RegisterCharacterSlotWidget_characterSlotWidget;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDropped__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragged__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRightClickedButton__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnhoveredButton__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnFocusedWidget__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnFocusedWidget__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnHoveredButton__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnClickedButton__DelegateSignature");

	Params::UWBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}

}


