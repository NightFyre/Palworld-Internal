#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C
// (None)

class UClass* UWBP_GameOver_ForDIsplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameOver_ForDIsplay_C");

	return Clss;
}


// WBP_GameOver_ForDIsplay_C WBP_GameOver_ForDIsplay.Default__WBP_GameOver_ForDIsplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameOver_ForDIsplay_C* UWBP_GameOver_ForDIsplay_C::GetDefaultObj()
{
	static class UWBP_GameOver_ForDIsplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameOver_ForDIsplay_C*>(UWBP_GameOver_ForDIsplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnCancelAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GameOver_ForDIsplay_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnClickedRespawnButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistRespawnLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldMap*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::OnClickedRespawnButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsExistRespawnLocation_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnClickedRespawnButton");

	Params::UWBP_GameOver_ForDIsplay_C_OnClickedRespawnButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsExistRespawnLocation_ReturnValue = CallFunc_IsExistRespawnLocation_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnFinishedClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::OnFinishedClose(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnFinishedClose");

	Params::UWBP_GameOver_ForDIsplay_C_OnFinishedClose_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnFinishedOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::OnFinishedOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnFinishedOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnEndedRespawnBlockTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::OnEndedRespawnBlockTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnEndedRespawnBlockTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Tick");

	Params::UWBP_GameOver_ForDIsplay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameOver_ForDIsplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.ExecuteUbergraph_WBP_GameOver_ForDIsplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalLogInfo_DropPal> CallFunc_GetAndClearLastDropPalInfo_ReturnValue                  (ReferenceParm)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// double                             CallFunc_FCeil_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, int32 CallFunc_FCeil_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, TArray<struct FPalLogInfo_DropPal>& CallFunc_GetAndClearLastDropPalInfo_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, double CallFunc_FCeil_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "ExecuteUbergraph_WBP_GameOver_ForDIsplay");

	Params::UWBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetAndClearLastDropPalInfo_ReturnValue = CallFunc_GetAndClearLastDropPalInfo_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_FCeil_A_ImplicitCast = CallFunc_FCeil_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


