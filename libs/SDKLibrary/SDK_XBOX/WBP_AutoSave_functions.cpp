#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AutoSave.WBP_AutoSave_C
// (None)

class UClass* UWBP_AutoSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AutoSave_C");

	return Clss;
}


// WBP_AutoSave_C WBP_AutoSave.Default__WBP_AutoSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AutoSave_C* UWBP_AutoSave_C::GetDefaultObj()
{
	static class UWBP_AutoSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AutoSave_C*>(UWBP_AutoSave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AutoSave.WBP_AutoSave_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "Display");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.TryHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::TryHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "TryHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.AnmEvent_Loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::AnmEvent_Loop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "AnmEvent_Loop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.AnmEvent_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::AnmEvent_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "AnmEvent_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.OnStartAutoSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::OnStartAutoSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "OnStartAutoSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedAutoSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AutoSave_C::OnEndedAutoSave(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "OnEndedAutoSave");

	Params::UWBP_AutoSave_C_OnEndedAutoSave_Params Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedForceDisplayTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::OnEndedForceDisplayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "OnEndedForceDisplayTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AutoSave_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSave.WBP_AutoSave_C.ExecuteUbergraph_WBP_AutoSave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSaveGameManager*         CallFunc_GetSaveGameManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue_2                  (NoDestructor, HasGetValueTypeHash)
// class UPalSaveGameManager*         CallFunc_GetSaveGameManager_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AutoSave_C::ExecuteUbergraph_WBP_AutoSave(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_IsSuccess, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_2, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSave_C", "ExecuteUbergraph_WBP_AutoSave");

	Params::UWBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetSaveGameManager_ReturnValue = CallFunc_GetSaveGameManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_IsSuccess = K2Node_CustomEvent_IsSuccess;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue_1 = CallFunc_K2_InvalidateTimerHandle_ReturnValue_1;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue_2 = CallFunc_K2_InvalidateTimerHandle_ReturnValue_2;
	Parms.CallFunc_GetSaveGameManager_ReturnValue_1 = CallFunc_GetSaveGameManager_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


