#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C
// (None)

class UClass* UWBP_PalCommonItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonItemSlot_C");

	return Clss;
}


// WBP_PalCommonItemSlot_C WBP_PalCommonItemSlot.Default__WBP_PalCommonItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonItemSlot_C* UWBP_PalCommonItemSlot_C::GetDefaultObj()
{
	static class UWBP_PalCommonItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonItemSlot_C*>(UWBP_PalCommonItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnSetValidSlot_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlot_C::OnSetValidSlot_Binded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnSetValidSlot_Binded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnSetEmpty_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlot_C::OnSetEmpty_Binded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnSetEmpty_Binded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnUpdateSlot_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_PalCommonItemSlot_C::OnUpdateSlot_Binded(class UPalItemSlot* TargetSlot, int32 CallFunc_GetStackCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnUpdateSlot_Binded");

	Params::UWBP_PalCommonItemSlot_C_OnUpdateSlot_Binded_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*      IconWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlot_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "RegisterItemIconWidget");

	Params::UWBP_PalCommonItemSlot_C_RegisterItemIconWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.ExecuteUbergraph_WBP_PalCommonItemSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlot_C::ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "ExecuteUbergraph_WBP_PalCommonItemSlot");

	Params::UWBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnAfterUpdateSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlot_C::OnAfterUpdateSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnAfterUpdateSlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnAfterSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemSlot_C::OnAfterSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemSlot_C", "OnAfterSetEmpty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


