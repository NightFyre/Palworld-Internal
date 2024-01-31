#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonReward.WBP_CommonReward_C
// (None)

class UClass* UWBP_CommonReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonReward_C");

	return Clss;
}


// WBP_CommonReward_C WBP_CommonReward.Default__WBP_CommonReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonReward_C* UWBP_CommonReward_C::GetDefaultObj()
{
	static class UWBP_CommonReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonReward_C*>(UWBP_CommonReward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonReward.WBP_CommonReward_C.Finished_8B86E03B4C9B039B2D1E43872343E0D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonReward_C::Finished_8B86E03B4C9B039B2D1E43872343E0D8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "Finished_8B86E03B4C9B039B2D1E43872343E0D8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonReward.WBP_CommonReward_C.Finished_99C931904947D8826978CE8B6DE53642
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonReward_C::Finished_99C931904947D8826978CE8B6DE53642()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "Finished_99C931904947D8826978CE8B6DE53642");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonReward.WBP_CommonReward_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonReward_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonReward.WBP_CommonReward_C.ShowInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonReward_C::ShowInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "ShowInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonReward.WBP_CommonReward_C.QueueRewardInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUICommonRewardDisplayDataInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonReward_C::QueueRewardInfo(const struct FPalUICommonRewardDisplayData& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "QueueRewardInfo");

	Params::UWBP_CommonReward_C_QueueRewardInfo_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonReward.WBP_CommonReward_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUICommonRewardDisplayDataInfo                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonReward_C::SetInfo(const struct FPalUICommonRewardDisplayData& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "SetInfo");

	Params::UWBP_CommonReward_C_SetInfo_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonReward.WBP_CommonReward_C.ChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPurple                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonReward_C::ChangeColor(bool IsPurple)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "ChangeColor");

	Params::UWBP_CommonReward_C_ChangeColor_Params Parms{};

	Parms.IsPurple = IsPurple;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonReward.WBP_CommonReward_C.ExecuteUbergraph_WBP_CommonReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUICommonRewardDisplayDataK2Node_CustomEvent_Info_1                                        (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUICommonRewardDisplayDataCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUICommonRewardDisplayDataK2Node_CustomEvent_Info                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value_1                                        (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               K2Node_CustomEvent_IsPurple                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonReward_C::ExecuteUbergraph_WBP_CommonReward(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, const struct FPalUICommonRewardDisplayData& K2Node_CustomEvent_Info_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FPalUICommonRewardDisplayData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FPalUICommonRewardDisplayData& K2Node_CustomEvent_Info, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool K2Node_CustomEvent_IsPurple, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_1, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonReward_C", "ExecuteUbergraph_WBP_CommonReward");

	Params::UWBP_CommonReward_C_ExecuteUbergraph_WBP_CommonReward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.K2Node_CustomEvent_Info_1 = K2Node_CustomEvent_Info_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_Info = K2Node_CustomEvent_Info;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_CustomEvent_IsPurple = K2Node_CustomEvent_IsPurple;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


