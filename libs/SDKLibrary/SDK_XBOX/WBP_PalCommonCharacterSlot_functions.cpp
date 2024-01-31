#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C
// (None)

class UClass* UWBP_PalCommonCharacterSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonCharacterSlot_C");

	return Clss;
}


// WBP_PalCommonCharacterSlot_C WBP_PalCommonCharacterSlot.Default__WBP_PalCommonCharacterSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonCharacterSlot_C* UWBP_PalCommonCharacterSlot_C::GetDefaultObj()
{
	static class UWBP_PalCommonCharacterSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonCharacterSlot_C*>(UWBP_PalCommonCharacterSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnUpdateReviveTimer_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowTimer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReviveTimer_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_A_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::OnUpdateReviveTimer_Binded(double NowTimer, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Percent_FloatFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReviveTimer_ImplicitCast, double CallFunc_Percent_FloatFloat_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnUpdateReviveTimer_Binded");

	Params::UWBP_PalCommonCharacterSlot_C_OnUpdateReviveTimer_Binded_Params Parms{};

	Parms.NowTimer = NowTimer;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReturnValue = CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReviveTimer_ImplicitCast = CallFunc_ConvertReviveTimerToUIDisplayRemainReviveTime_ReviveTimer_ImplicitCast;
	Parms.CallFunc_Percent_FloatFloat_A_ImplicitCast = CallFunc_Percent_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.On Set Rarity Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBoss                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRare                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::On_Set_Rarity_Binded(bool IsBoss, bool IsRare, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "On Set Rarity Binded");

	Params::UWBP_PalCommonCharacterSlot_C_On_Set_Rarity_Binded_Params Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnTargetCharacterEndEat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnTargetCharacterEndEat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnTargetCharacterEndEat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnTargetCharacterBeginEat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnTargetCharacterBeginEat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnTargetCharacterBeginEat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnTargetCharcaterEndSleep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnTargetCharcaterEndSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnTargetCharcaterEndSleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnTargetCharcaterBeginSleep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnTargetCharcaterBeginSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnTargetCharcaterBeginSleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnNotifyBattleModeChanged_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBattleMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::OnNotifyBattleModeChanged_Binded(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnNotifyBattleModeChanged_Binded");

	Params::UWBP_PalCommonCharacterSlot_C_OnNotifyBattleModeChanged_Binded_Params Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnNotifyWorkDetail_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::OnNotifyWorkDetail_Binded(bool IsWorking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnNotifyWorkDetail_Binded");

	Params::UWBP_PalCommonCharacterSlot_C_OnNotifyWorkDetail_Binded_Params Parms{};

	Parms.IsWorking = IsWorking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnUpdateHP_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::OnUpdateHP_Binded(int64 NowHP, int64 NowMaxHP, double CallFunc_Conv_Int64ToDouble_ReturnValue, double CallFunc_Conv_Int64ToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnUpdateHP_Binded");

	Params::UWBP_PalCommonCharacterSlot_C_OnUpdateHP_Binded_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue = CallFunc_Conv_Int64ToDouble_ReturnValue;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue_1 = CallFunc_Conv_Int64ToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.RegisterCharacterIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterIconBase_C* IconWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "RegisterCharacterIconWidget");

	Params::UWBP_PalCommonCharacterSlot_C_RegisterCharacterIconWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnUpdateSlot_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetMaxHP_withBuff_ReturnValue                           (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetHP_ReturnValue                                       (NoDestructor)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::OnUpdateSlot_Binded(class UPalIndividualCharacterSlot* TargetSlot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnUpdateSlot_Binded");

	Params::UWBP_PalCommonCharacterSlot_C_OnUpdateSlot_Binded_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetMaxHP_withBuff_ReturnValue = CallFunc_GetMaxHP_withBuff_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_GetHP_ReturnValue = CallFunc_GetHP_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnSetValidSlot_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnSetValidSlot_Binded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnSetValidSlot_Binded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnSetEmpty_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnSetEmpty_Binded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnSetEmpty_Binded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_StartLowHealthLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_StartLowHealthLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_StartLowHealthLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_StopLowHeathLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_StopLowHeathLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_StopLowHeathLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_BeginSleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_BeginSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_BeginSleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_EndSleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_EndSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_EndSleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_StartWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_StartWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_StartWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_EndWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_EndWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_EndWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_BeginEat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_BeginEat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_BeginEat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.AnmEvent_EndEat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::AnmEvent_EndEat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "AnmEvent_EndEat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C.ExecuteUbergraph_WBP_PalCommonCharacterSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlot_C::ExecuteUbergraph_WBP_PalCommonCharacterSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlot_C", "ExecuteUbergraph_WBP_PalCommonCharacterSlot");

	Params::UWBP_PalCommonCharacterSlot_C_ExecuteUbergraph_WBP_PalCommonCharacterSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


