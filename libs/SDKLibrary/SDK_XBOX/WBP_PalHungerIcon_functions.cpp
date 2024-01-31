#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHungerIcon.WBP_PalHungerIcon_C
// (None)

class UClass* UWBP_PalHungerIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHungerIcon_C");

	return Clss;
}


// WBP_PalHungerIcon_C WBP_PalHungerIcon.Default__WBP_PalHungerIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHungerIcon_C* UWBP_PalHungerIcon_C::GetDefaultObj()
{
	static class UWBP_PalHungerIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHungerIcon_C*>(UWBP_PalHungerIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.SetExistFoodFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsExistFood                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)

void UWBP_PalHungerIcon_C::SetExistFoodFlag(bool IsExistFood, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "SetExistFoodFlag");

	Params::UWBP_PalHungerIcon_C_SetExistFoodFlag_Params Parms{};

	Parms.IsExistFood = IsExistFood;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.Finished_52B2C4554CC22DF82B22ECB5253B6180
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::Finished_52B2C4554CC22DF82B22ECB5253B6180()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "Finished_52B2C4554CC22DF82B22ECB5253B6180");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.Finished_2C1349EA46882EC657B89FA9AA7A0802
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::Finished_2C1349EA46882EC657B89FA9AA7A0802()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "Finished_2C1349EA46882EC657B89FA9AA7A0802");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "AnmEvent_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "AnmEvent_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.ExecuteUbergraph_WBP_PalHungerIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHungerIcon_C::ExecuteUbergraph_WBP_PalHungerIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "ExecuteUbergraph_WBP_PalHungerIcon");

	Params::UWBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.OnFinishedClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerIcon_C::OnFinishedClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerIcon_C", "OnFinishedClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


