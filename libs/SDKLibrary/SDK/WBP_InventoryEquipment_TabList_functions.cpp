#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C
// (None)

class UClass* UWBP_InventoryEquipment_TabList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_TabList_C");

	return Clss;
}


// WBP_InventoryEquipment_TabList_C WBP_InventoryEquipment_TabList.Default__WBP_InventoryEquipment_TabList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_TabList_C* UWBP_InventoryEquipment_TabList_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_TabList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_TabList_C*>(UWBP_InventoryEquipment_TabList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.OnChangedIndex_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusTargetWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_InventoryTabButton_C*K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_InventoryTabButton_C*K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::OnChangedIndex_Binded(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "OnChangedIndex_Binded");

	Params::UWBP_InventoryEquipment_TabList_C_OnChangedIndex_Binded_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.FocusTargetWidget = FocusTargetWidget;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button = K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button_1 = K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.OnPrev_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::OnPrev_Binded(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "OnPrev_Binded");

	Params::UWBP_InventoryEquipment_TabList_C_OnPrev_Binded_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.OnNext_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::OnNext_Binded(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "OnNext_Binded");

	Params::UWBP_InventoryEquipment_TabList_C_OnNext_Binded_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.RegisterPanelWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                PanelWidget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::RegisterPanelWidget(class UPanelWidget** PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "RegisterPanelWidget");

	Params::UWBP_InventoryEquipment_TabList_C_RegisterPanelWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PanelWidget != nullptr)
		*PanelWidget = Parms.PanelWidget;

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_TabList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_TabList_C_BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_InventoryEquipment_InventoryTabButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_TabList_C_BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_InventoryEquipment_InventoryTabButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_TabList_C_BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.ExecuteUbergraph_WBP_InventoryEquipment_TabList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_InventoryTabButton_C*K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_InventoryTabButton_C*K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_TabList_C::ExecuteUbergraph_WBP_InventoryEquipment_TabList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_ComponentBoundEvent_Button_1, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "ExecuteUbergraph_WBP_InventoryEquipment_TabList");

	Params::UWBP_InventoryEquipment_TabList_C_ExecuteUbergraph_WBP_InventoryEquipment_TabList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C.OnClickedSortButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_TabList_C::OnClickedSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_TabList_C", "OnClickedSortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


