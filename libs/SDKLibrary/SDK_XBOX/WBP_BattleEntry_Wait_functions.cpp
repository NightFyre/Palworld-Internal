#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C
// (None)

class UClass* UWBP_BattleEntry_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BattleEntry_Wait_C");

	return Clss;
}


// WBP_BattleEntry_Wait_C WBP_BattleEntry_Wait.Default__WBP_BattleEntry_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BattleEntry_Wait_C* UWBP_BattleEntry_Wait_C::GetDefaultObj()
{
	static class UWBP_BattleEntry_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BattleEntry_Wait_C*>(UWBP_BattleEntry_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.OnRequestRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_BattleEntry_Wait_C::OnRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_Wait_C", "OnRequestRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.UpdateCountDown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BattleEntry_Wait_C::UpdateCountDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_Wait_C", "UpdateCountDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.Count Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleEntry_Wait_C::Count_Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_Wait_C", "Count Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleEntry_Wait_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_Wait_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C.ExecuteUbergraph_WBP_BattleEntry_Wait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBossBattleRowName_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPalBossBattleManager*       CallFunc_GetBossBattleManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBattleTimeLimit_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcRemainBattleTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWaitInfoWorldHUDParameter*K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor)
// class UPalBossBattleManager*       CallFunc_GetBossBattleManager_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// float                              CallFunc_GetBattleTimeLimit_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_Wait_C::ExecuteUbergraph_WBP_BattleEntry_Wait(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class FName CallFunc_GetBossBattleRowName_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, float CallFunc_GetBattleTimeLimit_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_CalcRemainBattleTime_ReturnValue, int32 K2Node_Select_Default, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalWaitInfoWorldHUDParameter* K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& K2Node_Select_Default_1, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, float CallFunc_GetBattleTimeLimit_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BattleEntry_Wait_C", "ExecuteUbergraph_WBP_BattleEntry_Wait");

	Params::UWBP_BattleEntry_Wait_C_ExecuteUbergraph_WBP_BattleEntry_Wait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_GetBossBattleRowName_ReturnValue = CallFunc_GetBossBattleRowName_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetBossBattleManager_ReturnValue = CallFunc_GetBossBattleManager_ReturnValue;
	Parms.CallFunc_GetBattleTimeLimit_ReturnValue = CallFunc_GetBattleTimeLimit_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_CalcRemainBattleTime_ReturnValue = CallFunc_CalcRemainBattleTime_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter = K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetBossBattleManager_ReturnValue_1 = CallFunc_GetBossBattleManager_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetBattleTimeLimit_ReturnValue_1 = CallFunc_GetBattleTimeLimit_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


