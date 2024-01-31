#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C
// (None)

class UClass* UWBP_PalItemSlotButtonBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalItemSlotButtonBase_C");

	return Clss;
}


// WBP_PalItemSlotButtonBase_C WBP_PalItemSlotButtonBase.Default__WBP_PalItemSlotButtonBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalItemSlotButtonBase_C* UWBP_PalItemSlotButtonBase_C::GetDefaultObj()
{
	static class UWBP_PalItemSlotButtonBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalItemSlotButtonBase_C*>(UWBP_PalItemSlotButtonBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.GetDisplayDragItemNum
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DisplayNum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlDown_ForUI_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShiftDown_ForUI_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::GetDisplayDragItemNum(int32* DisplayNum, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsControlDown_ForUI_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "GetDisplayDragItemNum");

	Params::UWBP_PalItemSlotButtonBase_C_GetDisplayDragItemNum_Params Parms{};

	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_IsControlDown_ForUI_ReturnValue = CallFunc_IsControlDown_ForUI_ReturnValue;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_IsShiftDown_ForUI_ReturnValue = CallFunc_IsShiftDown_ForUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayNum != nullptr)
		*DisplayNum = Parms.DisplayNum;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.TryEquipSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryEquipSlot_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryRemoveEquipment_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipSlot_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::TryEquipSlot(class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_TryEquipSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryRemoveEquipment_ReturnValue, bool CallFunc_IsEquipSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "TryEquipSlot");

	Params::UWBP_PalItemSlotButtonBase_C_TryEquipSlot_Params Parms{};

	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_TryEquipSlot_ReturnValue = CallFunc_TryEquipSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryRemoveEquipment_ReturnValue = CallFunc_TryRemoveEquipment_ReturnValue;
	Parms.CallFunc_IsEquipSlot_ReturnValue = CallFunc_IsEquipSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnUseOrMoveSlotInput_Pad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnUseOrMoveSlotInput_Pad(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnUseOrMoveSlotInput_Pad");

	Params::UWBP_PalItemSlotButtonBase_C_OnUseOrMoveSlotInput_Pad_Params Parms{};

	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnNotifyDurability_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnNotifyDurability_Internal(double MaxDurability, double NowDurability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnNotifyDurability_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnNotifyDurability_Internal_Params Parms{};

	Parms.MaxDurability = MaxDurability;
	Parms.NowDurability = NowDurability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnCorruptionUpdate_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnCorruptionUpdate_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnCorruptionUpdate_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnHalfLiftInput_Pad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnHalfLiftInput_Pad(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnHalfLiftInput_Pad");

	Params::UWBP_PalItemSlotButtonBase_C_OnHalfLiftInput_Pad_Params Parms{};

	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.UnregisterPadAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::UnregisterPadAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "UnregisterPadAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.RegisterPadAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_PalItemSlotButtonBase_C::RegisterPadAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "RegisterPadAction");

	Params::UWBP_PalItemSlotButtonBase_C_RegisterPadAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Unbind Button Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::Unbind_Button_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Unbind Button Events");

	Params::UWBP_PalItemSlotButtonBase_C_Unbind_Button_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnFinishLiftedButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnFinishLiftedButton_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnFinishLiftedButton_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnLiftedButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftedItemNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnLiftedButton_Internal(int32 LiftedItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnLiftedButton_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnLiftedButton_Internal_Params Parms{};

	Parms.LiftedItemNum = LiftedItemNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnSetValid_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnSetValid_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnSetValid_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDropCanceled_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnDropCanceled_Internal(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDropCanceled_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnDropCanceled_Internal_Params Parms{};

	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnSetEmpty_internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnSetEmpty_internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnSetEmpty_internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PalItemSlotButtonBase_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDrop");

	Params::UWBP_PalItemSlotButtonBase_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base = K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDropped_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnDropped_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDropped_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDragged_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnDragged_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDragged_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)

struct FEventReply UWBP_PalItemSlotButtonBase_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnPreviewMouseButtonDown");

	Params::UWBP_PalItemSlotButtonBase_C_OnPreviewMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PalItemSlotButtonBase_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnMouseButtonUp");

	Params::UWBP_PalItemSlotButtonBase_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDisplayDragItemNum_DisplayNum                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotDragDropIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, int32 CallFunc_GetDisplayDragItemNum_DisplayNum, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalItemSlotDragDropIcon_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDragDetected");

	Params::UWBP_PalItemSlotButtonBase_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_GetDisplayDragItemNum_DisplayNum = CallFunc_GetDisplayDragItemNum_DisplayNum;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot_1 = CallFunc_GetTargetSlot_targetSlot_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::Focus(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Focus");

	Params::UWBP_PalItemSlotButtonBase_C_Focus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PalItemSlotButtonBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnMouseButtonDown");

	Params::UWBP_PalItemSlotButtonBase_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnUnhovered_Internal(class UCommonButtonBase* Button, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnUnhovered_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnUnhovered_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnHovered_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2D_One_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUICommonItemInfoDisplayDataK2Node_MakeStruct_PalUICommonItemInfoDisplayData                 (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnHovered_Internal(class UCommonButtonBase* Button, const struct FVector2D& CallFunc_Vector2D_One_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalUICommonItemInfoDisplayData& K2Node_MakeStruct_PalUICommonItemInfoDisplayData, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnHovered_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnHovered_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_Vector2D_One_ReturnValue = CallFunc_Vector2D_One_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_PalUICommonItemInfoDisplayData = K2Node_MakeStruct_PalUICommonItemInfoDisplayData;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.On Right Clicked Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlDown_ForUI_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShiftDown_ForUI_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::On_Right_Clicked_Internal(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsControlDown_ForUI_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "On Right Clicked Internal");

	Params::UWBP_PalItemSlotButtonBase_C_On_Right_Clicked_Internal_Params Parms{};

	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsControlDown_ForUI_ReturnValue = CallFunc_IsControlDown_ForUI_ReturnValue;
	Parms.CallFunc_IsShiftDown_ForUI_ReturnValue = CallFunc_IsShiftDown_ForUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnMiddleClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnMiddleClicked_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnMiddleClicked_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnClicked_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlDown_ForUI_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShiftDown_ForUI_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnClicked_Internal(class UCommonButtonBase* Button, bool CallFunc_IsControlDown_ForUI_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnClicked_Internal");

	Params::UWBP_PalItemSlotButtonBase_C_OnClicked_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_IsControlDown_ForUI_ReturnValue = CallFunc_IsControlDown_ForUI_ReturnValue;
	Parms.CallFunc_IsShiftDown_ForUI_ReturnValue = CallFunc_IsShiftDown_ForUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.GetTargetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::GetTargetSlot(class UPalItemSlot** TargetSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "GetTargetSlot");

	Params::UWBP_PalItemSlotButtonBase_C_GetTargetSlot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSlot != nullptr)
		*TargetSlot = Parms.TargetSlot;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Bind Button Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::Bind_Button_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Bind Button Events");

	Params::UWBP_PalItemSlotButtonBase_C_Bind_Button_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.RegisterItemSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotBase_C*      ItemSlotWidget                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "RegisterItemSlotWidget");

	Params::UWBP_PalItemSlotButtonBase_C_RegisterItemSlotWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = Parms.ItemSlotWidget;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::Setup(class UPalItemSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Setup");

	Params::UWBP_PalItemSlotButtonBase_C_Setup_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "RegisterButton");

	Params::UWBP_PalItemSlotButtonBase_C_RegisterButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalItemSlotButtonBase_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnAddedToFocusPath");

	Params::UWBP_PalItemSlotButtonBase_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalItemSlotButtonBase_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnRemovedFromFocusPath");

	Params::UWBP_PalItemSlotButtonBase_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.ExecuteUbergraph_WBP_PalItemSlotButtonBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_RegisterButton_button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotBase_C*      CallFunc_RegisterItemSlotWidget_itemSlotWidget                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::ExecuteUbergraph_WBP_PalItemSlotButtonBase(int32 EntryPoint, class UCommonButtonBase* CallFunc_RegisterButton_button, class UWBP_PalItemSlotBase_C* CallFunc_RegisterItemSlotWidget_itemSlotWidget, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "ExecuteUbergraph_WBP_PalItemSlotButtonBase");

	Params::UWBP_PalItemSlotButtonBase_C_ExecuteUbergraph_WBP_PalItemSlotButtonBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterButton_button = CallFunc_RegisterButton_button;
	Parms.CallFunc_RegisterItemSlotWidget_itemSlotWidget = CallFunc_RegisterItemSlotWidget_itemSlotWidget;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnRequestUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnRequestUseItem__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnRequestUseItem__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnCorruptionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnCorruptionUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnCorruptionUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnNotifyDurability__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnNotifyDurability__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnNotifyDurability__DelegateSignature_Params Parms{};

	Parms.MaxDurability = MaxDurability;
	Parms.NowDurability = NowDurability;
	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnSetValidSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnSetValidSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnSetValidSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnSetEmptySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotButtonBase_C::OnSetEmptySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnSetEmptySlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnMiddleClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnMiddleClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnMiddleClickedButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnMiddleClickedButton__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnFinishLiftedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnFinishLiftedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnFinishLiftedButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnFinishLiftedButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnLiftedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnLiftedButton__DelegateSignature(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnLiftedButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnLiftedButton__DelegateSignature_Params Parms{};

	Parms.LiftNum = LiftNum;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDropCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnDropCanceled__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDropCanceled__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnDropCanceled__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnDropped__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDropped__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnDropped__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnDragged__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnDragged__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnDragged__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnRightClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnRightClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnRightClickedButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnRightClickedButton__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnUnhoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnUnhoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnUnhoveredButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnUnhoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnUnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnUnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnUnFocusedWidget__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnFocusedWidget__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnFocusedWidget__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnHoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnHoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnHoveredButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnHoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotButtonBase_C::OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotButtonBase_C", "OnClickedButton__DelegateSignature");

	Params::UWBP_PalItemSlotButtonBase_C_OnClickedButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}

}


