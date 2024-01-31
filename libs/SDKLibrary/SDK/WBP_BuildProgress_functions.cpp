#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildProgress.WBP_BuildProgress_C
// (None)

class UClass* UWBP_BuildProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildProgress_C");

	return Clss;
}


// WBP_BuildProgress_C WBP_BuildProgress.Default__WBP_BuildProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildProgress_C* UWBP_BuildProgress_C::GetDefaultObj()
{
	static class UWBP_BuildProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildProgress_C*>(UWBP_BuildProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BuildProgress.WBP_BuildProgress_C.Finished_0A8F9BE3461D19DEC9F1BDA5236BDDCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BuildProgress_C::Finished_0A8F9BE3461D19DEC9F1BDA5236BDDCA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "Finished_0A8F9BE3461D19DEC9F1BDA5236BDDCA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.Finished_C8A38F31462C1BFD0CAC6CAE7285A7E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BuildProgress_C::Finished_C8A38F31462C1BFD0CAC6CAE7285A7E3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "Finished_C8A38F31462C1BFD0CAC6CAE7285A7E3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.OnUpdatedAssignCharacter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkBase*                TargetWork                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildProgress_C::OnUpdatedAssignCharacter(class UPalWorkBase* TargetWork)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "OnUpdatedAssignCharacter");

	Params::UWBP_BuildProgress_C_OnUpdatedAssignCharacter_Params Parms{};

	Parms.TargetWork = TargetWork;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.SetProgress
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkProgress*            Work                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildProgress_C::SetProgress(class UPalWorkProgress* Work)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "SetProgress");

	Params::UWBP_BuildProgress_C_SetProgress_Params Parms{};

	Parms.Work = Work;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.ClosePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BuildProgress_C::ClosePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "ClosePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.OnRequestClose
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalBuildProcess*            Process                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildProgress_C::OnRequestClose(class UPalBuildProcess* Process)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "OnRequestClose");

	Params::UWBP_BuildProgress_C_OnRequestClose_Params Parms{};

	Parms.Process = Process;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BuildProgress_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BuildProgress_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.ShowProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalHUDDisplayType      DisplayType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildProgress_C::ShowProgress(enum class EPalHUDDisplayType DisplayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "ShowProgress");

	Params::UWBP_BuildProgress_C_ShowProgress_Params Parms{};

	Parms.DisplayType = DisplayType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildProgress.WBP_BuildProgress_C.ExecuteUbergraph_WBP_BuildProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompleted_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkBase*                K2Node_Event_targetWork                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetAssignedCharacters_IndividualSlots                   (ReferenceParm)
// class UPalWorkProgress*            K2Node_Event_Work                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRemainWorkAmount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainWorkPredicateTime_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProgressRate_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBuildProcess*            K2Node_Event_Process                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBuildProgressWorldHUDParameter*K2Node_DynamicCast_AsPal_Build_Progress_World_HUDParameter       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalHUDDisplayType      K2Node_CustomEvent_DisplayType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Work_Amount_workAmount_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildProgress_C::ExecuteUbergraph_WBP_BuildProgress(int32 EntryPoint, bool CallFunc_IsCompleted_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalWorkBase* K2Node_Event_targetWork, bool CallFunc_IsValid_ReturnValue_3, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots, class UPalWorkProgress* K2Node_Event_Work, float CallFunc_GetRemainWorkAmount_ReturnValue, int32 CallFunc_GetRemainWorkPredicateTime_ReturnValue, float CallFunc_GetProgressRate_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UPalBuildProcess* K2Node_Event_Process, bool Temp_bool_IsClosed_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBuildProgressWorldHUDParameter* K2Node_DynamicCast_AsPal_Build_Progress_World_HUDParameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalHUDDisplayType K2Node_CustomEvent_DisplayType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Set_Work_Amount_workAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildProgress_C", "ExecuteUbergraph_WBP_BuildProgress");

	Params::UWBP_BuildProgress_C_ExecuteUbergraph_WBP_BuildProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsCompleted_ReturnValue = CallFunc_IsCompleted_ReturnValue;
	Parms.CallFunc_GetWorkProgress_ReturnValue = CallFunc_GetWorkProgress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_targetWork = K2Node_Event_targetWork;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAssignedCharacters_IndividualSlots = CallFunc_GetAssignedCharacters_IndividualSlots;
	Parms.K2Node_Event_Work = K2Node_Event_Work;
	Parms.CallFunc_GetRemainWorkAmount_ReturnValue = CallFunc_GetRemainWorkAmount_ReturnValue;
	Parms.CallFunc_GetRemainWorkPredicateTime_ReturnValue = CallFunc_GetRemainWorkPredicateTime_ReturnValue;
	Parms.CallFunc_GetProgressRate_ReturnValue = CallFunc_GetProgressRate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_Process = K2Node_Event_Process;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPal_Build_Progress_World_HUDParameter = K2Node_DynamicCast_AsPal_Build_Progress_World_HUDParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_DisplayType = K2Node_CustomEvent_DisplayType;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Set_Work_Amount_workAmount_ImplicitCast = CallFunc_Set_Work_Amount_workAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


