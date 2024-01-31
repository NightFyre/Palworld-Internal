#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryArrow.WBP_InventoryArrow_C
// (None)

class UClass* UWBP_InventoryArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryArrow_C");

	return Clss;
}


// WBP_InventoryArrow_C WBP_InventoryArrow.Default__WBP_InventoryArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryArrow_C* UWBP_InventoryArrow_C::GetDefaultObj()
{
	static class UWBP_InventoryArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryArrow_C*>(UWBP_InventoryArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryArrow.WBP_InventoryArrow_C.AnmEvent_Cursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryArrow_C::AnmEvent_Cursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "AnmEvent_Cursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryArrow.WBP_InventoryArrow_C.ExecuteUbergraph_WBP_InventoryArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryArrow_C::ExecuteUbergraph_WBP_InventoryArrow(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "ExecuteUbergraph_WBP_InventoryArrow");

	Params::UWBP_InventoryArrow_C_ExecuteUbergraph_WBP_InventoryArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryArrow.WBP_InventoryArrow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryArrow_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


