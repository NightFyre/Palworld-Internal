#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C
// (None)

class UClass* UWBP_BattleEntry_MemberList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BattleEntry_MemberList_C");

	return Clss;
}


// WBP_BattleEntry_MemberList_C WBP_BattleEntry_MemberList.Default__WBP_BattleEntry_MemberList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BattleEntry_MemberList_C* UWBP_BattleEntry_MemberList_C::GetDefaultObj()
{
	static class UWBP_BattleEntry_MemberList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BattleEntry_MemberList_C*>(UWBP_BattleEntry_MemberList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BattleEntry_MemberList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              PlayLv                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHost                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_MemberList_C::SetPlayerInfo(const class FString& PlayerName, int32 PlayLv, bool IsHost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "SetPlayerInfo");

	Params::UWBP_BattleEntry_MemberList_C_SetPlayerInfo_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.PlayLv = PlayLv;
	Parms.IsHost = IsHost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetValidation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_MemberList_C::SetValidation(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "SetValidation");

	Params::UWBP_BattleEntry_MemberList_C_SetValidation_Params Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.ExecuteUbergraph_WBP_BattleEntry_MemberList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerName                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayLv                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHost                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_BattleEntry_MemberList_C::ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& K2Node_CustomEvent_PlayerName, int32 K2Node_CustomEvent_PlayLv, bool K2Node_CustomEvent_IsHost, bool K2Node_CustomEvent_IsValid, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_MemberList_C", "ExecuteUbergraph_WBP_BattleEntry_MemberList");

	Params::UWBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerName = K2Node_CustomEvent_PlayerName;
	Parms.K2Node_CustomEvent_PlayLv = K2Node_CustomEvent_PlayLv;
	Parms.K2Node_CustomEvent_IsHost = K2Node_CustomEvent_IsHost;
	Parms.K2Node_CustomEvent_IsValid = K2Node_CustomEvent_IsValid;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


