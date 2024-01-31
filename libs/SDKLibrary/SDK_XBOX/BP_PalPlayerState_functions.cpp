#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerState.BP_PalPlayerState_C
// (Actor)

class UClass* ABP_PalPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerState_C");

	return Clss;
}


// BP_PalPlayerState_C BP_PalPlayerState.Default__BP_PalPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalPlayerState_C* ABP_PalPlayerState_C::GetDefaultObj()
{
	static class ABP_PalPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalPlayerState_C*>(ABP_PalPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalPlayerState.BP_PalPlayerState_C.LoadTitleLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSaveSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerState_C::LoadTitleLevel(bool bIsSaveSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerState_C", "LoadTitleLevel");

	Params::ABP_PalPlayerState_C_LoadTitleLevel_Params Parms{};

	Parms.bIsSaveSuccess = bIsSaveSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerState.BP_PalPlayerState_C.ExecuteUbergraph_BP_PalPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSaveSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSaveGameManager*         CallFunc_GetSaveGameManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWorldOwner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerState_C::ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint, bool K2Node_Event_bIsSaveSuccess, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue, bool CallFunc_IsWorldOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerState_C", "ExecuteUbergraph_BP_PalPlayerState");

	Params::ABP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSaveSuccess = K2Node_Event_bIsSaveSuccess;
	Parms.CallFunc_GetSaveGameManager_ReturnValue = CallFunc_GetSaveGameManager_ReturnValue;
	Parms.CallFunc_IsWorldOwner_ReturnValue = CallFunc_IsWorldOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


