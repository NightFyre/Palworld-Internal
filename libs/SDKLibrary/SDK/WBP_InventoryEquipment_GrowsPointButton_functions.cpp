#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C
// (None)

class UClass* UWBP_InventoryEquipment_GrowsPointButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_GrowsPointButton_C");

	return Clss;
}


// WBP_InventoryEquipment_GrowsPointButton_C WBP_InventoryEquipment_GrowsPointButton.Default__WBP_InventoryEquipment_GrowsPointButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_GrowsPointButton_C* UWBP_InventoryEquipment_GrowsPointButton_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_GrowsPointButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_GrowsPointButton_C*>(UWBP_InventoryEquipment_GrowsPointButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.SetSimulatePoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_InventoryEquipment_GrowsPointButton_C::SetSimulatePoint(int32 Point, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "SetSimulatePoint");

	Params::UWBP_InventoryEquipment_GrowsPointButton_C_SetSimulatePoint_Params Parms{};

	Parms.Point = Point;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.SetPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_InventoryEquipment_GrowsPointButton_C::SetPoint(int32 Point, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "SetPoint");

	Params::UWBP_InventoryEquipment_GrowsPointButton_C_SetPoint_Params Parms{};

	Parms.Point = Point;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.Finished_A20F78AE45F2878481C71DBF29E2326A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_GrowsPointButton_C::Finished_A20F78AE45F2878481C71DBF29E2326A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "Finished_A20F78AE45F2878481C71DBF29E2326A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.AnmEvent_Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_GrowsPointButton_C::AnmEvent_Active()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "AnmEvent_Active");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.AnmEvent_Deactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_GrowsPointButton_C::AnmEvent_Deactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "AnmEvent_Deactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_GrowsPointButton.WBP_InventoryEquipment_GrowsPointButton_C.ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_GrowsPointButton_C::ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_GrowsPointButton_C", "ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton");

	Params::UWBP_InventoryEquipment_GrowsPointButton_C_ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


