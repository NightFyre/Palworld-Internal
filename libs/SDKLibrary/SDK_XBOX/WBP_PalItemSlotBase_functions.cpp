#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalItemSlotBase.WBP_PalItemSlotBase_C
// (None)

class UClass* UWBP_PalItemSlotBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalItemSlotBase_C");

	return Clss;
}


// WBP_PalItemSlotBase_C WBP_PalItemSlotBase.Default__WBP_PalItemSlotBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalItemSlotBase_C* UWBP_PalItemSlotBase_C::GetDefaultObj()
{
	static class UWBP_PalItemSlotBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalItemSlotBase_C*>(UWBP_PalItemSlotBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlotCorruption_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnUpdateSlotCorruption_Internal(class UPalItemSlot* Slot, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnUpdateSlotCorruption_Internal");

	Params::UWBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnTimer_CheckDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDynamicItemDataBase*     CallFunc_TryGetDynamicItemData_OutDynamicItemData                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetDynamicItemData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalObjectDurabilityInterface>K2Node_DynamicCast_AsPal_Object_Durability_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDurability_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxDurability_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_NowDurability_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_MaxDurability_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnTimer_CheckDurability(bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDurability_ReturnValue, float CallFunc_GetMaxDurability_ReturnValue, double K2Node_CallDelegate_NowDurability_ImplicitCast, double K2Node_CallDelegate_MaxDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnTimer_CheckDurability");

	Params::UWBP_PalItemSlotBase_C_OnTimer_CheckDurability_Params Parms{};

	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetDynamicItemData_OutDynamicItemData = CallFunc_TryGetDynamicItemData_OutDynamicItemData;
	Parms.CallFunc_TryGetDynamicItemData_ReturnValue = CallFunc_TryGetDynamicItemData_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Object_Durability_Interface = K2Node_DynamicCast_AsPal_Object_Durability_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDurability_ReturnValue = CallFunc_GetDurability_ReturnValue;
	Parms.CallFunc_GetMaxDurability_ReturnValue = CallFunc_GetMaxDurability_ReturnValue;
	Parms.K2Node_CallDelegate_NowDurability_ImplicitCast = K2Node_CallDelegate_NowDurability_ImplicitCast;
	Parms.K2Node_CallDelegate_MaxDurability_ImplicitCast = K2Node_CallDelegate_MaxDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.StartCheckDurabilityTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UPalDynamicItemDataBase*     CallFunc_TryGetDynamicItemData_OutDynamicItemData                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetDynamicItemData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalObjectDurabilityInterface>K2Node_DynamicCast_AsPal_Object_Durability_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxDurability_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::StartCheckDurabilityTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "StartCheckDurabilityTimer");

	Params::UWBP_PalItemSlotBase_C_StartCheckDurabilityTimer_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_TryGetDynamicItemData_OutDynamicItemData = CallFunc_TryGetDynamicItemData_OutDynamicItemData;
	Parms.CallFunc_TryGetDynamicItemData_ReturnValue = CallFunc_TryGetDynamicItemData_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Object_Durability_Interface = K2Node_DynamicCast_AsPal_Object_Durability_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxDurability_ReturnValue = CallFunc_GetMaxDurability_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.ClearCheckDurabilityTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::ClearCheckDurabilityTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "ClearCheckDurabilityTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnFinishedLiftItem_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnFinishedLiftItem_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnFinishedLiftItem_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::Setup(class UPalItemSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Setup");

	Params::UWBP_PalItemSlotBase_C_Setup_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftItemNum                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnLiftedSlot_Internal(int32 LiftItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnLiftedSlot_Internal");

	Params::UWBP_PalItemSlotBase_C_OnLiftedSlot_Internal_Params Parms{};

	Parms.LiftItemNum = LiftItemNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Unbind Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::Unbind_Event(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Unbind Event");

	Params::UWBP_PalItemSlotBase_C_Unbind_Event_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.BindEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::BindEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "BindEvent");

	Params::UWBP_PalItemSlotBase_C_BindEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.On Update Slot Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::On_Update_Slot_Internal(class UPalItemSlot* Slot, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "On Update Slot Internal");

	Params::UWBP_PalItemSlotBase_C_On_Update_Slot_Internal_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*      IconWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "RegisterItemIconWidget");

	Params::UWBP_PalItemSlotBase_C_RegisterItemIconWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.ExecuteUbergraph_WBP_PalItemSlotBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemIconBase_C*      CallFunc_RegisterItemIconWidget_iconWidget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::ExecuteUbergraph_WBP_PalItemSlotBase(int32 EntryPoint, class UWBP_PalItemIconBase_C* CallFunc_RegisterItemIconWidget_iconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "ExecuteUbergraph_WBP_PalItemSlotBase");

	Params::UWBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterItemIconWidget_iconWidget = CallFunc_RegisterItemIconWidget_iconWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnCorruptionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnCorruptionUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnCorruptionUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnNotifyDurability__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnNotifyDurability__DelegateSignature");

	Params::UWBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature_Params Parms{};

	Parms.MaxDurability = MaxDurability;
	Parms.NowDurability = NowDurability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnFinishedLiftSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnFinishedLiftSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnFinishedLiftSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftedItemNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnLiftedSlot__DelegateSignature(int32 LiftedItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnLiftedSlot__DelegateSignature");

	Params::UWBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature_Params Parms{};

	Parms.LiftedItemNum = LiftedItemNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnSetValidSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnSetValidSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnSetValidSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemSlotBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnSetEmpty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotBase_C::OnUpdateSlot__DelegateSignature(class UPalItemSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotBase_C", "OnUpdateSlot__DelegateSignature");

	Params::UWBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature_Params Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


