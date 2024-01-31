#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C
// (None)

class UClass* UWBP_PalInGameMenuItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInGameMenuItemSlot_C");

	return Clss;
}


// WBP_PalInGameMenuItemSlot_C WBP_PalInGameMenuItemSlot.Default__WBP_PalInGameMenuItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInGameMenuItemSlot_C* UWBP_PalInGameMenuItemSlot_C::GetDefaultObj()
{
	static class UWBP_PalInGameMenuItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInGameMenuItemSlot_C*>(UWBP_PalInGameMenuItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*      IconWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "RegisterItemIconWidget");

	Params::UWBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;

}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.UpdateSlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::UpdateSlotEvent(class UPalItemSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "UpdateSlotEvent");

	Params::UWBP_PalInGameMenuItemSlot_C_UpdateSlotEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.EmptySlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlot_C::EmptySlotEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "EmptySlotEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.ValidSlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlot_C::ValidSlotEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "ValidSlotEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.ExecuteUbergraph_WBP_PalInGameMenuItemSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                K2Node_CustomEvent_targetSlot                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemData                CallFunc_GetItemData_ReturnValue                                 (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalItemSlot* K2Node_CustomEvent_targetSlot, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "ExecuteUbergraph_WBP_PalInGameMenuItemSlot");

	Params::UWBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_targetSlot = K2Node_CustomEvent_targetSlot;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


