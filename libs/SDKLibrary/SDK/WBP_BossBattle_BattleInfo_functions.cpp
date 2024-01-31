#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C
// (None)

class UClass* UWBP_BossBattle_BattleInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossBattle_BattleInfo_C");

	return Clss;
}


// WBP_BossBattle_BattleInfo_C WBP_BossBattle_BattleInfo.Default__WBP_BossBattle_BattleInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossBattle_BattleInfo_C* UWBP_BossBattle_BattleInfo_C::GetDefaultObj()
{
	static class UWBP_BossBattle_BattleInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossBattle_BattleInfo_C*>(UWBP_BossBattle_BattleInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_3EF5F8014E85067431DFCC89EED868D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BattleInfo_C::Finished_3EF5F8014E85067431DFCC89EED868D4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_3EF5F8014E85067431DFCC89EED868D4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_8C451D0644B19738D91CB8BD4A008BD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BattleInfo_C::Finished_8C451D0644B19738D91CB8BD4A008BD2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_8C451D0644B19738D91CB8BD4A008BD2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ActUICombatResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBossBattleCombatResultCombatResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::ActUICombatResult(enum class EPalBossBattleCombatResult CombatResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "ActUICombatResult");

	Params::UWBP_BossBattle_BattleInfo_C_ActUICombatResult_Params Parms{};

	Parms.CombatResult = CombatResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.StartCombatTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BattleInfo_C::StartCombatTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "StartCombatTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.GetBossTower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBossTower*               BossTower                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::GetBossTower(class APalBossTower* BossTower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "GetBossTower");

	Params::UWBP_BossBattle_BattleInfo_C_GetBossTower_Params Parms{};

	Parms.BossTower = BossTower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Countdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BattleInfo_C::Countdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Countdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.CloseTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BattleInfo_C::CloseTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "CloseTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ExecuteUbergraph_WBP_BossBattle_BattleInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalBossBattleCombatResultK2Node_CustomEvent_CombatResult                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalBossTower*               K2Node_CustomEvent_BossTower                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcRemainBattleTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalBossBattleCombatResult K2Node_CustomEvent_CombatResult, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APalBossTower* K2Node_CustomEvent_BossTower, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_CalcRemainBattleTime_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "ExecuteUbergraph_WBP_BossBattle_BattleInfo");

	Params::UWBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_CombatResult = K2Node_CustomEvent_CombatResult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_BossTower = K2Node_CustomEvent_BossTower;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_CalcRemainBattleTime_ReturnValue = CallFunc_CalcRemainBattleTime_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


