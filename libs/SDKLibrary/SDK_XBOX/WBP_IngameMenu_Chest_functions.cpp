#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C
// (None)

class UClass* UWBP_IngameMenu_Chest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Chest_C");

	return Clss;
}


// WBP_IngameMenu_Chest_C WBP_IngameMenu_Chest.Default__WBP_IngameMenu_Chest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Chest_C* UWBP_IngameMenu_Chest_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Chest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Chest_C*>(UWBP_IngameMenu_Chest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.GetTargetContainerLastHoveredFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*CallFunc_GetLastHoveredSlotButton_SlotButton                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::GetTargetContainerLastHoveredFocusTarget(class UWidget** Widget, class UWBP_PalItemSlotButtonBase_C* CallFunc_GetLastHoveredSlotButton_SlotButton, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "GetTargetContainerLastHoveredFocusTarget");

	Params::UWBP_IngameMenu_Chest_C_GetTargetContainerLastHoveredFocusTarget_Params Parms{};

	Parms.CallFunc_GetLastHoveredSlotButton_SlotButton = CallFunc_GetLastHoveredSlotButton_SlotButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.GetInventoryLastHoveredFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*CallFunc_GetLastHoveredSlotButton_SlotButton                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::GetInventoryLastHoveredFocusTarget(class UWidget** Widget, class UWBP_PalItemSlotButtonBase_C* CallFunc_GetLastHoveredSlotButton_SlotButton, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "GetInventoryLastHoveredFocusTarget");

	Params::UWBP_IngameMenu_Chest_C_GetInventoryLastHoveredFocusTarget_Params Parms{};

	Parms.CallFunc_GetLastHoveredSlotButton_SlotButton = CallFunc_GetLastHoveredSlotButton_SlotButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.CustomNavi_ToTargetContainerSortButton
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_Chest_C::CustomNavi_ToTargetContainerSortButton(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "CustomNavi_ToTargetContainerSortButton");

	Params::UWBP_IngameMenu_Chest_C_CustomNavi_ToTargetContainerSortButton_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.CustomNavi_ToCloseButton
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_Chest_C::CustomNavi_ToCloseButton(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "CustomNavi_ToCloseButton");

	Params::UWBP_IngameMenu_Chest_C_CustomNavi_ToCloseButton_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.GetTargetContainerTopFocustTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     FocusTarget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_target                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::GetTargetContainerTopFocustTarget(class UWidget** FocusTarget, class UWidget* CallFunc_GetFocusTarget_target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "GetTargetContainerTopFocustTarget");

	Params::UWBP_IngameMenu_Chest_C_GetTargetContainerTopFocustTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_target = CallFunc_GetFocusTarget_target;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusTarget != nullptr)
		*FocusTarget = Parms.FocusTarget;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.GetInventoryTopFocustTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     FocusTarget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalPlayerInventoryType Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalItemSlotButtonBase_C*>CallFunc_GetAllItemSlotButtons_slotButtons                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_PalItemSlotButtonBase_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::GetInventoryTopFocustTarget(class UWidget** FocusTarget, enum class EPalPlayerInventoryType Temp_byte_Variable, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "GetInventoryTopFocustTarget");

	Params::UWBP_IngameMenu_Chest_C_GetInventoryTopFocustTarget_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetAllItemSlotButtons_slotButtons = CallFunc_GetAllItemSlotButtons_slotButtons;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusTarget != nullptr)
		*FocusTarget = Parms.FocusTarget;

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnLeftClickedTargetContainerSLot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotId              CallFunc_GetSlotId_ReturnValue                                   (NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::OnLeftClickedTargetContainerSLot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnLeftClickedTargetContainerSLot");

	Params::UWBP_IngameMenu_Chest_C_OnLeftClickedTargetContainerSLot_Params Parms{};

	Parms.ButtonBase = ButtonBase;
	Parms.PressType = PressType;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetSlotId_ReturnValue = CallFunc_GetSlotId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalInventoryModel_C*     Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           TargetContainer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainerFromInventoryType_outContainer           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainerFromInventoryType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::Setup(class UBP_PalInventoryModel_C* Model, class UPalItemContainer* TargetContainer, bool CallFunc_IsValid_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "Setup");

	Params::UWBP_IngameMenu_Chest_C_Setup_Params Parms{};

	Parms.Model = Model;
	Parms.TargetContainer = TargetContainer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_TryGetContainerFromInventoryType_outContainer = CallFunc_TryGetContainerFromInventoryType_outContainer;
	Parms.CallFunc_TryGetContainerFromInventoryType_ReturnValue = CallFunc_TryGetContainerFromInventoryType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.SetTagetContainerDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TargetContainerName                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameMenu_Chest_C::SetTagetContainerDisplayName(class FText TargetContainerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "SetTagetContainerDisplayName");

	Params::UWBP_IngameMenu_Chest_C_SetTagetContainerDisplayName_Params Parms{};

	Parms.TargetContainerName = TargetContainerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.SetupTargetItemContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           TargetContainer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*     CallFunc_AddItemContainer_createdBlock                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::SetupTargetItemContainer(class UPalItemContainer* TargetContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_PalItemListBlock_C* CallFunc_AddItemContainer_createdBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "SetupTargetItemContainer");

	Params::UWBP_IngameMenu_Chest_C_SetupTargetItemContainer_Params Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddItemContainer_createdBlock = CallFunc_AddItemContainer_createdBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.FilteringInventoryByInventoryType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalPlayerInventoryType>InventoryType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::FilteringInventoryByInventoryType(TArray<enum class EPalPlayerInventoryType>& InventoryType, bool CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "FilteringInventoryByInventoryType");

	Params::UWBP_IngameMenu_Chest_C_FilteringInventoryByInventoryType_Params Parms{};

	Parms.InventoryType = InventoryType;
	Parms.CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot = CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.SetupInventory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::SetupInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "SetupInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*ButtonBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature_Params Parms{};

	Parms.ButtonBase = ButtonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.ExecuteUbergraph_WBP_IngameMenu_Chest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_buttonBase_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_buttonBase_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_buttonBase_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_buttonBase                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_3, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_2, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_1, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "ExecuteUbergraph_WBP_IngameMenu_Chest");

	Params::UWBP_IngameMenu_Chest_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_buttonBase_3 = K2Node_ComponentBoundEvent_buttonBase_3;
	Parms.K2Node_ComponentBoundEvent_buttonBase_2 = K2Node_ComponentBoundEvent_buttonBase_2;
	Parms.K2Node_ComponentBoundEvent_buttonBase_1 = K2Node_ComponentBoundEvent_buttonBase_1;
	Parms.K2Node_ComponentBoundEvent_buttonBase = K2Node_ComponentBoundEvent_buttonBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnClickedCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnClickedCloseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnUnhoveredTargetContainerSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnUnhoveredTargetContainerSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnUnhoveredTargetContainerSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnHoveredTargetContainerSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*SlotButton                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnHoveredTargetContainerSlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_OnHoveredTargetContainerSlot__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnUnhoveredInventorySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnUnhoveredInventorySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnUnhoveredInventorySlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnHoveredInventorySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*SlotButton                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_C::OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnHoveredInventorySlot__DelegateSignature");

	Params::UWBP_IngameMenu_Chest_C_OnHoveredInventorySlot__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnClickedTargetContainerSortButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnClickedTargetContainerSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnClickedTargetContainerSortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnClickedQuickMoveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnClickedQuickMoveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnClickedQuickMoveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C.OnClickedInventorySortButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Chest_C::OnClickedInventorySortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_C", "OnClickedInventorySortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


