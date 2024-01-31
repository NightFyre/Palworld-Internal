#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalItemScrollList.WBP_PalItemScrollList_C
// (None)

class UClass* UWBP_PalItemScrollList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalItemScrollList_C");

	return Clss;
}


// WBP_PalItemScrollList_C WBP_PalItemScrollList.Default__WBP_PalItemScrollList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalItemScrollList_C* UWBP_PalItemScrollList_C::GetDefaultObj()
{
	static class UWBP_PalItemScrollList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalItemScrollList_C*>(UWBP_PalItemScrollList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetAllItemSlotButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PalItemSlotButtonBase_C*>Slots                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWBP_PalItemSlotButtonBase_C*>TmpSlots                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     K2Node_DynamicCast_AsWBP_Pal_Item_List_Block                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalItemSlotButtonBase_C*>CallFunc_GetAllItemSlotButtons_slotButtons                       (ReferenceParm, ContainsInstancedReference)

void UWBP_PalItemScrollList_C::GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>* Slots, const TArray<class UWBP_PalItemSlotButtonBase_C*>& TmpSlots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetAllItemSlotButton");

	Params::UWBP_PalItemScrollList_C_GetAllItemSlotButton_Params Parms{};

	Parms.TmpSlots = TmpSlots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Item_List_Block = K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllItemSlotButtons_slotButtons = CallFunc_GetAllItemSlotButtons_slotButtons;

	UObject::ProcessEvent(Func, &Parms);

	if (Slots != nullptr)
		*Slots = std::move(Parms.Slots);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.SetQuickMoveTargetContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           TargetContainer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "SetQuickMoveTargetContainer");

	Params::UWBP_PalItemScrollList_C_SetQuickMoveTargetContainer_Params Parms{};

	Parms.TargetContainer = TargetContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetLastHoveredSlotButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*SlotButton                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C** SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetLastHoveredSlotButton");

	Params::UWBP_PalItemScrollList_C_GetLastHoveredSlotButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SlotButton != nullptr)
		*SlotButton = Parms.SlotButton;

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ClearAllChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemScrollList_C::ClearAllChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "ClearAllChildren");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetected_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnDragDetected_Internal");

	Params::UWBP_PalItemScrollList_C_OnDragDetected_Internal_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRequestUseItem_Internal");

	Params::UWBP_PalItemScrollList_C_OnRequestUseItem_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.FilteringBySellableItemDataMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, double>          SellableItemDataMap                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsAllNotForsale                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalItemSlotButtonBase_C*>CallFunc_GetAllItemSlotButton_Slots                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::FilteringBySellableItemDataMap(TMap<class FName, double> SellableItemDataMap, bool IsAllNotForsale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButton_Slots, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "FilteringBySellableItemDataMap");

	Params::UWBP_PalItemScrollList_C_FilteringBySellableItemDataMap_Params Parms{};

	Parms.SellableItemDataMap = SellableItemDataMap;
	Parms.IsAllNotForsale = IsAllNotForsale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItemSlotButton_Slots = CallFunc_GetAllItemSlotButton_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.HiddenEmptySlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsALLEmpty                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     K2Node_DynamicCast_AsWBP_Pal_Item_List_Block                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalItemSlotButtonBase_C*>CallFunc_GetAllItemSlotButtons_slotButtons                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_PalItemSlotButtonBase_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::HiddenEmptySlot(bool IsALLEmpty, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item_1, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "HiddenEmptySlot");

	Params::UWBP_PalItemScrollList_C_HiddenEmptySlot_Params Parms{};

	Parms.IsALLEmpty = IsALLEmpty;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Item_List_Block = K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllItemSlotButtons_slotButtons = CallFunc_GetAllItemSlotButtons_slotButtons;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetFocusTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     K2Node_DynamicCast_AsWBP_Pal_Item_List_Block                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_NewParam                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::GetFocusTarget(class UWidget** Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetFocusTarget");

	Params::UWBP_PalItemScrollList_C_GetFocusTarget_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Item_List_Block = K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFocusTarget_NewParam = CallFunc_GetFocusTarget_NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateEmptyBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemListBlock_C*     CreatedBlock                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CallFunc_CreateBlock_createdBlock                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::CreateEmptyBlock(class UWBP_PalItemListBlock_C** CreatedBlock, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWBP_PalItemListBlock_C* CallFunc_CreateBlock_createdBlock, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "CreateEmptyBlock");

	Params::UWBP_PalItemScrollList_C_CreateEmptyBlock_Params Parms{};

	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_CreateBlock_createdBlock = CallFunc_CreateBlock_createdBlock;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnUnfocused_Internal");

	Params::UWBP_PalItemScrollList_C_OnUnfocused_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnFocused_Internal");

	Params::UWBP_PalItemScrollList_C_OnFocused_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.InitializeArrowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::InitializeArrowVisibility(class UScrollBox* CallFunc_GetScrollBox_ScrollBox, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "InitializeArrowVisibility");

	Params::UWBP_PalItemScrollList_C_InitializeArrowVisibility_Params Parms{};

	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast = CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     K2Node_DynamicCast_AsWBP_Pal_Item_List_Block                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::Focus(class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Focus");

	Params::UWBP_PalItemScrollList_C_Focus_Params Parms{};

	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Item_List_Block = K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnEndHovered_Internal");

	Params::UWBP_PalItemScrollList_C_OnEndHovered_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnHovered_Internal");

	Params::UWBP_PalItemScrollList_C_OnHovered_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClicked_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalContainerId             CallFunc_GetId_ReturnValue                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, enum class EPalItemSlotPressType Temp_byte_Variable, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 Temp_int_Variable, int32 CallFunc_GetStackCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 K2Node_Select_Default, const struct FPalContainerId& CallFunc_GetId_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRightClicked_Internal");

	Params::UWBP_PalItemScrollList_C_OnRightClicked_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetId_ReturnValue = CallFunc_GetId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnMiddleClicked_Internal");

	Params::UWBP_PalItemScrollList_C_OnMiddleClicked_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnLeftClicked_Internal");

	Params::UWBP_PalItemScrollList_C_OnLeftClicked_Internal_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateBlock
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           TargetContainer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IgnoreEmptySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CreatedBlock                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInventoryCategoryName_outName                        (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_CreateLocalItemSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::CreateBlock(class UPalItemContainer* TargetContainer, class FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetInventoryCategoryName_outName, bool CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalItemSlot* CallFunc_CreateLocalItemSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalItemListBlock_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "CreateBlock");

	Params::UWBP_PalItemScrollList_C_CreateBlock_Params Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.DisplayName = DisplayName;
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryCategoryName_outName = CallFunc_GetInventoryCategoryName_outName;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_CreateLocalItemSlot_ReturnValue = CallFunc_CreateLocalItemSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.AddItemContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           TargetContainer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IgnoreEmptySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CreatedBlock                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CallFunc_CreateBlock_createdBlock                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::AddItemContainer(class UPalItemContainer* TargetContainer, class FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWBP_PalItemListBlock_C* CallFunc_CreateBlock_createdBlock, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "AddItemContainer");

	Params::UWBP_PalItemScrollList_C_AddItemContainer_Params Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.DisplayName = DisplayName;
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_CreateBlock_createdBlock = CallFunc_CreateBlock_createdBlock;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemScrollList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemScrollList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ExecuteUbergraph_WBP_PalItemScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "ExecuteUbergraph_WBP_PalItemScrollList");

	Params::UWBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRequestUseItem__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnMiddleClickedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetectedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnDragDetectedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnUnfocusedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnFocusedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnEndHoveredSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnHoveredSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRightClickedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnLeftClickedSlot__DelegateSignature");

	Params::UWBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}

}


