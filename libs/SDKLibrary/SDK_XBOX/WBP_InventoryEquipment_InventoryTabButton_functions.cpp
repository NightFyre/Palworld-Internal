#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C
// (None)

class UClass* UWBP_InventoryEquipment_InventoryTabButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_InventoryTabButton_C");

	return Clss;
}


// WBP_InventoryEquipment_InventoryTabButton_C WBP_InventoryEquipment_InventoryTabButton.Default__WBP_InventoryEquipment_InventoryTabButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_InventoryTabButton_C* UWBP_InventoryEquipment_InventoryTabButton_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_InventoryTabButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_InventoryTabButton_C*>(UWBP_InventoryEquipment_InventoryTabButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_InventoryTabButton_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "AnmEvent_Normal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_InventoryTabButton_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_InventoryTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_InventoryTabButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_InventoryTabButton_C::BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_InventoryTabButton_C_BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_InventoryTabButton_C::ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton");

	Params::UWBP_InventoryEquipment_InventoryTabButton_C_ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_InventoryTabButton.WBP_InventoryEquipment_InventoryTabButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InventoryEquipment_InventoryTabButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_InventoryTabButton_C::OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_InventoryTabButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_InventoryEquipment_InventoryTabButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


