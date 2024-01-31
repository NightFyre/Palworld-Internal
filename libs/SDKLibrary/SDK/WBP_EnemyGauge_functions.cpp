#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EnemyGauge.WBP_EnemyGauge_C
// (None)

class UClass* UWBP_EnemyGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EnemyGauge_C");

	return Clss;
}


// WBP_EnemyGauge_C WBP_EnemyGauge.Default__WBP_EnemyGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EnemyGauge_C* UWBP_EnemyGauge_C::GetDefaultObj()
{
	static class UWBP_EnemyGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EnemyGauge_C*>(UWBP_EnemyGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHungryCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalUIConditionType>Conditions                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetHungryCondition(TArray<enum class EPalUIConditionType>& Conditions, bool Temp_bool_Variable, enum class EPalUIConditionType Temp_byte_Variable, enum class EPalUIConditionType Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EPalUIConditionType Temp_byte_Variable_4, enum class EPalUIConditionType Temp_byte_Variable_5, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, enum class EPalUIConditionType K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHungryCondition");

	Params::UWBP_EnemyGauge_C_SetHungryCondition_Params Parms{};

	Parms.Conditions = Conditions;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetGender(enum class EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetGender");

	Params::UWBP_EnemyGauge_C_SetGender_Params Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGuildName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewGuildName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetGuildName(const class FString& NewGuildName, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_SelectText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetGuildName");

	Params::UWBP_EnemyGauge_C_SetGuildName_Params Parms{};

	Parms.NewGuildName = NewGuildName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilitySanityGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilitySanityGauge(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilitySanityGauge");

	Params::UWBP_EnemyGauge_C_SetVisibilitySanityGauge_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetSanityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowSanityValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxSanityValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetSanityValue(double NowSanityValue, double MaxSanityValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetSanityValue");

	Params::UWBP_EnemyGauge_C_SetSanityValue_Params Parms{};

	Parms.NowSanityValue = NowSanityValue;
	Parms.MaxSanityValue = MaxSanityValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Work Event Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               NotBattle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSleeping_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampWorkerEventTypeCallFunc_GetBaseCampWorkerEventType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBaseCampEventName_outName                            (None)
// class FText                        CallFunc_GetWorkingDetailNameFromHandle_outName                  (None)
// bool                               CallFunc_GetWorkingDetailNameFromHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_SelectText_ReturnValue_1                                (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Work_Event_Info(class UPalIndividualCharacterHandle* Handle, bool NotBattle, enum class ESlateVisibility Temp_byte_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsSleeping_ReturnValue, enum class EPalBaseCampWorkerEventType CallFunc_GetBaseCampWorkerEventType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetBaseCampEventName_outName, class FText CallFunc_GetWorkingDetailNameFromHandle_outName, bool CallFunc_GetWorkingDetailNameFromHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_SelectText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_SelectText_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Work Event Info");

	Params::UWBP_EnemyGauge_C_Set_Work_Event_Info_Params Parms{};

	Parms.Handle = Handle;
	Parms.NotBattle = NotBattle;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsSleeping_ReturnValue = CallFunc_IsSleeping_ReturnValue;
	Parms.CallFunc_GetBaseCampWorkerEventType_ReturnValue = CallFunc_GetBaseCampWorkerEventType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetBaseCampEventName_outName = CallFunc_GetBaseCampEventName_outName;
	Parms.CallFunc_GetWorkingDetailNameFromHandle_outName = CallFunc_GetWorkingDetailNameFromHandle_outName;
	Parms.CallFunc_GetWorkingDetailNameFromHandle_ReturnValue = CallFunc_GetWorkingDetailNameFromHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_SelectText_ReturnValue_1 = CallFunc_SelectText_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityBattleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibiliy                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilityBattleIcon(enum class ESlateVisibility Visibiliy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilityBattleIcon");

	Params::UWBP_EnemyGauge_C_SetVisibilityBattleIcon_Params Parms{};

	Parms.Visibiliy = Visibiliy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityStrongRareMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilityStrongRareMark(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilityStrongRareMark");

	Params::UWBP_EnemyGauge_C_SetVisibilityStrongRareMark_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeStrongPalMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::ChangeStrongPalMark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeStrongPalMark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeRarePalMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::ChangeRarePalMark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeRarePalMark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetWorkSuitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalWorkSuitability>Suitability                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EnemyGauge_C::SetWorkSuitability(TArray<enum class EPalWorkSuitability>& Suitability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetWorkSuitability");

	Params::UWBP_EnemyGauge_C_SetWorkSuitability_Params Parms{};

	Parms.Suitability = Suitability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.RetainCommonDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::RetainCommonDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "RetainCommonDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.UpdateForTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Update_deltaTime_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::UpdateForTick(double DeltaTime, float CallFunc_Update_deltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "UpdateForTick");

	Params::UWBP_EnemyGauge_C_UpdateForTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Update_deltaTime_ImplicitCast = CallFunc_Update_deltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.TryDisplayLowHealthNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::TryDisplayLowHealthNotice(double NowPercent, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "TryDisplayLowHealthNotice");

	Params::UWBP_EnemyGauge_C_TryDisplayLowHealthNotice_Params Parms{};

	Parms.NowPercent = NowPercent;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetLowHealthNoticeDisplayFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisplay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetLowHealthNoticeDisplayFlag(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetLowHealthNoticeDisplayFlag");

	Params::UWBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag_Params Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Trigger Damage Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::Trigger_Damage_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Trigger Damage Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Battle Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBattleMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Battle_Mode(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Battle Mode");

	Params::UWBP_EnemyGauge_C_Set_Battle_Mode_Params Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent_Force
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercentForce_percent_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetHPPercent_Force(double Percent, float CallFunc_SetPercentForce_percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHPPercent_Force");

	Params::UWBP_EnemyGauge_C_SetHPPercent_Force_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_SetPercentForce_percent_ImplicitCast = CallFunc_SetPercentForce_percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeEnemyMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::ChangeEnemyMode(const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeEnemyMode");

	Params::UWBP_EnemyGauge_C_ChangeEnemyMode_Params Parms{};

	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeFriendMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::ChangeFriendMode(const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeFriendMode");

	Params::UWBP_EnemyGauge_C_ChangeFriendMode_Params Parms{};

	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_percent_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetHPPercent(double Percent, float CallFunc_SetPercent_percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHPPercent");

	Params::UWBP_EnemyGauge_C_SetHPPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_SetPercent_percent_ImplicitCast = CallFunc_SetPercent_percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GetLevelPenalty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Level(int32 Level, bool GetLevelPenalty, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Level");

	Params::UWBP_EnemyGauge_C_Set_Level_Params Parms{};

	Parms.Level = Level;
	Parms.GetLevelPenalty = GetLevelPenalty;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Type1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         Type2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetElement(enum class EPalElementType Type1, enum class EPalElementType Type2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetElement");

	Params::UWBP_EnemyGauge_C_SetElement_Params Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetRank(int32 Rank, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetRank");

	Params::UWBP_EnemyGauge_C_SetRank_Params Parms{};

	Parms.Rank = Rank;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetTargetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_EnemyGauge_C::SetTargetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetTargetName");

	Params::UWBP_EnemyGauge_C_SetTargetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StartBattleLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_StartBattleLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StartBattleLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopBattleLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_StopBattleLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopBattleLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_Damage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_Damage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_LowHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisplay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::AnmEvent_LowHealth(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_LowHealth");

	Params::UWBP_EnemyGauge_C_AnmEvent_LowHealth_Params Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_BgChange_Enemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_BgChange_Enemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_BgChange_Enemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_BgChange_Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_BgChange_Party()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_BgChange_Party");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_WorkLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_WorkLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_WorkLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopWorkLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_StopWorkLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopWorkLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_Starvation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_Starvation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_Starvation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopStarvation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::AnmEvent_StopStarvation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopStarvation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ExecuteUbergraph_WBP_EnemyGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isDisplay                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_8                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUIDelayGaugeCalculator*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   K2Node_DynamicCast_AsMaterial                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::ExecuteUbergraph_WBP_EnemyGauge(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_isDisplay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ExecuteUbergraph_WBP_EnemyGauge");

	Params::UWBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_isDisplay = K2Node_CustomEvent_isDisplay;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_8 = CallFunc_PlayAnimation_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial = K2Node_DynamicCast_AsMaterial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


