#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C
// (None)

class UClass* UWBP_InventoryEquipment_StatusUpButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_StatusUpButton_C");

	return Clss;
}


// WBP_InventoryEquipment_StatusUpButton_C WBP_InventoryEquipment_StatusUpButton.Default__WBP_InventoryEquipment_StatusUpButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_StatusUpButton_C* UWBP_InventoryEquipment_StatusUpButton_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_StatusUpButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_StatusUpButton_C*>(UWBP_InventoryEquipment_StatusUpButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C.AnmEvent_Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_StatusUpButton_C::AnmEvent_Active()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusUpButton_C", "AnmEvent_Active");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C.AnmEvent_Deactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_StatusUpButton_C::AnmEvent_Deactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusUpButton_C", "AnmEvent_Deactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C.BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_StatusUpButton_C::BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusUpButton_C", "BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_StatusUpButton_C_BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C.ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_StatusUpButton_C::ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusUpButton_C", "ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton");

	Params::UWBP_InventoryEquipment_StatusUpButton_C_ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_StatusUpButton.WBP_InventoryEquipment_StatusUpButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_StatusUpButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_StatusUpButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


