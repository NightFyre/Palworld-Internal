#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ItemChest.WBP_ItemChest_C
// (None)

class UClass* UWBP_ItemChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ItemChest_C");

	return Clss;
}


// WBP_ItemChest_C WBP_ItemChest.Default__WBP_ItemChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ItemChest_C* UWBP_ItemChest_C::GetDefaultObj()
{
	static class UWBP_ItemChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ItemChest_C*>(UWBP_ItemChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ItemChest.WBP_ItemChest_C.Sort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::Sort(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "Sort");

	Params::UWBP_ItemChest_C_Sort_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.Refill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::Refill(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "Refill");

	Params::UWBP_ItemChest_C_Refill_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInventoryTopFocustTarget_FocusTarget                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ItemChest_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetInventoryTopFocustTarget_FocusTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_ItemChest_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetInventoryTopFocustTarget_FocusTarget = CallFunc_GetInventoryTopFocustTarget_FocusTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ItemChest.WBP_ItemChest_C.AllGet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_MapObject*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectItemContainerModule*CallFunc_GetItemContainerModule_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathPenaltyStorageModel*K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainer_OutContainer                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::AllGet(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess_1, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "AllGet");

	Params::UWBP_ItemChest_C_AllGet_Params Parms{};

	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemContainerModule_ReturnValue = CallFunc_GetItemContainerModule_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model = K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_TryGetContainer_OutContainer = CallFunc_TryGetContainer_OutContainer;
	Parms.CallFunc_TryGetContainer_ReturnValue = CallFunc_TryGetContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.FastMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotId              CallFunc_GetSlotId_ReturnValue                                   (NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_MapObject*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectItemContainerModule*CallFunc_GetItemContainerModule_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainer_OutContainer                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_Get_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotId              CallFunc_GetSlotId_ReturnValue_1                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Num_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::FastMove(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class UPalItemSlot* CallFunc_Get_ReturnValue, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue_2, int32 CallFunc_Num_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "FastMove");

	Params::UWBP_ItemChest_C_FastMove_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetSlotId_ReturnValue = CallFunc_GetSlotId_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetItemContainerModule_ReturnValue = CallFunc_GetItemContainerModule_ReturnValue;
	Parms.CallFunc_TryGetContainer_OutContainer = CallFunc_TryGetContainer_OutContainer;
	Parms.CallFunc_TryGetContainer_ReturnValue = CallFunc_TryGetContainer_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetSlotId_ReturnValue_1 = CallFunc_GetSlotId_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue_2 = CallFunc_IsEmpty_ReturnValue_2;
	Parms.CallFunc_Num_ReturnValue = CallFunc_Num_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.Setup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_MapObject*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_TryGetMapObjectId_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectItemContainerModule*CallFunc_GetItemContainerModule_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainer_OutContainer                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)
// class UBP_PalInventoryModel_C*     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::Setup(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_TryGetMapObjectId_ReturnValue, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue, bool CallFunc_Contains_ReturnValue, class FText CallFunc_GetMapObjectName_outName, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "Setup");

	Params::UWBP_ItemChest_C_Setup_Params Parms{};

	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetMapObjectId_ReturnValue = CallFunc_TryGetMapObjectId_ReturnValue;
	Parms.CallFunc_GetItemContainerModule_ReturnValue = CallFunc_GetItemContainerModule_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_TryGetContainer_OutContainer = CallFunc_TryGetContainer_OutContainer;
	Parms.CallFunc_TryGetContainer_ReturnValue = CallFunc_TryGetContainer_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.ChangeFocus_Inv_Pad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::ChangeFocus_Inv_Pad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "ChangeFocus_Inv_Pad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.ChangeFocus_Chest_Pad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::ChangeFocus_Chest_Pad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "ChangeFocus_Chest_Pad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*SlotButton                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature");

	Params::UWBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*SlotButton                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature");

	Params::UWBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ItemChest_C::BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemChest.WBP_ItemChest_C.ExecuteUbergraph_WBP_ItemChest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// class UWidget*                     CallFunc_GetInventoryLastHoveredFocusTarget_Widget               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInventoryTopFocustTarget_FocusTarget                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_SlotButton_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTargetContainerTopFocustTarget_FocusTarget           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_ComponentBoundEvent_SlotButton                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// class UPalHUDDispatchParameter_MapObject*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// class UPalMapObjectItemContainerModule*CallFunc_GetItemContainerModule_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_5                     (NoDestructor)

void UWBP_ItemChest_C::ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UWidget* CallFunc_GetInventoryLastHoveredFocusTarget_Widget, class UWidget* CallFunc_GetInventoryTopFocustTarget_FocusTarget, bool CallFunc_IsValid_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_SlotButton_1, class UWidget* CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetTargetContainerTopFocustTarget_FocusTarget, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_SlotButton, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemChest_C", "ExecuteUbergraph_WBP_ItemChest");

	Params::UWBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_GetInventoryLastHoveredFocusTarget_Widget = CallFunc_GetInventoryLastHoveredFocusTarget_Widget;
	Parms.CallFunc_GetInventoryTopFocustTarget_FocusTarget = CallFunc_GetInventoryTopFocustTarget_FocusTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SlotButton_1 = K2Node_ComponentBoundEvent_SlotButton_1;
	Parms.CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget = CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTargetContainerTopFocustTarget_FocusTarget = CallFunc_GetTargetContainerTopFocustTarget_FocusTarget;
	Parms.K2Node_ComponentBoundEvent_SlotButton = K2Node_ComponentBoundEvent_SlotButton;
	Parms.CallFunc_GetTargetSlot_targetSlot_1 = CallFunc_GetTargetSlot_targetSlot_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.CallFunc_GetItemContainerModule_ReturnValue = CallFunc_GetItemContainerModule_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_5 = CallFunc_RegisterActionBinding_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


