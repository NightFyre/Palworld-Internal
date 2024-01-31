#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C
// (None)

class UClass* UWBP_Menu_PlayerGauge_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_PlayerGauge_Shield_C");

	return Clss;
}


// WBP_Menu_PlayerGauge_Shield_C WBP_Menu_PlayerGauge_Shield.Default__WBP_Menu_PlayerGauge_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_PlayerGauge_Shield_C* UWBP_Menu_PlayerGauge_Shield_C::GetDefaultObj()
{
	static class UWBP_Menu_PlayerGauge_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_PlayerGauge_Shield_C*>(UWBP_Menu_PlayerGauge_Shield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C.UpdateShieldMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowShieldMaxHP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_PlayerGauge_Shield_C::UpdateShieldMaxHP(const struct FFixedPoint64& NowShieldMaxHP, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Shield_C", "UpdateShieldMaxHP");

	Params::UWBP_Menu_PlayerGauge_Shield_C_UpdateShieldMaxHP_Params Parms{};

	Parms.NowShieldMaxHP = NowShieldMaxHP;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C.UpdateShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowShieldMaxHP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowShieldHP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_PlayerGauge_Shield_C::UpdateShield(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Shield_C", "UpdateShield");

	Params::UWBP_Menu_PlayerGauge_Shield_C_UpdateShield_Params Parms{};

	Parms.NowShieldMaxHP = NowShieldMaxHP;
	Parms.NowShieldHP = NowShieldHP;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_PlayerGauge_Shield_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Shield_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_PlayerGauge_Shield_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Shield_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_PlayerGauge_Shield.WBP_Menu_PlayerGauge_Shield_C.ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetShieldMaxHP_ReturnValue                              (NoDestructor)
// struct FFixedPoint64               CallFunc_GetShieldHP_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_PlayerGauge_Shield_C::ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetShieldHP_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Shield_C", "ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield");

	Params::UWBP_Menu_PlayerGauge_Shield_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetShieldMaxHP_ReturnValue = CallFunc_GetShieldMaxHP_ReturnValue;
	Parms.CallFunc_GetShieldHP_ReturnValue = CallFunc_GetShieldHP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


