#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C
// (None)

class UClass* UWBP_MainMenu_PalSkillInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_PalSkillInfo_C");

	return Clss;
}


// WBP_MainMenu_PalSkillInfo_C WBP_MainMenu_PalSkillInfo.Default__WBP_MainMenu_PalSkillInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_PalSkillInfo_C* UWBP_MainMenu_PalSkillInfo_C::GetDefaultObj()
{
	static class UWBP_MainMenu_PalSkillInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_PalSkillInfo_C*>(UWBP_MainMenu_PalSkillInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.PlayerEquipInfoFormat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalUIStatusDIsplayParameterStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FormatText                                                       (Parm, OutParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetPlayerUIDByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// int32                              CallFunc_GetPlayerEquipmentDefense_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerEquipmentHP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_SelectText_ReturnValue_1                                (None)

void UWBP_MainMenu_PalSkillInfo_C::PlayerEquipInfoFormat(enum class E_PalUIStatusDIsplayParameter Status, bool IsPlayer, class FText* FormatText, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FGuid& CallFunc_GetPlayerUIDByActor_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_GetPlayerEquipmentDefense_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetPlayerEquipmentHP_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_SelectText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_SelectText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "PlayerEquipInfoFormat");

	Params::UWBP_MainMenu_PalSkillInfo_C_PlayerEquipInfoFormat_Params Parms{};

	Parms.Status = Status;
	Parms.IsPlayer = IsPlayer;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetPlayerUIDByActor_ReturnValue = CallFunc_GetPlayerUIDByActor_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetPlayerEquipmentDefense_ReturnValue = CallFunc_GetPlayerEquipmentDefense_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetPlayerEquipmentHP_ReturnValue = CallFunc_GetPlayerEquipmentHP_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SelectText_ReturnValue_1 = CallFunc_SelectText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FormatText != nullptr)
		*FormatText = Parms.FormatText;

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.ConvertToFoodRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalPassiveSkillEffectTypePassiveEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalFoodStatusEffectTypeFoodEffect                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalSkillInfo_C::ConvertToFoodRate(enum class EPalPassiveSkillEffectType PassiveEffect, enum class EPalFoodStatusEffectType* FoodEffect, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "ConvertToFoodRate");

	Params::UWBP_MainMenu_PalSkillInfo_C_ConvertToFoodRate_Params Parms{};

	Parms.PassiveEffect = PassiveEffect;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (FoodEffect != nullptr)
		*FoodEffect = Parms.FoodEffect;

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.WeightInfoFormat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        FormatText                                                       (Parm, OutParm)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_SelectText_ReturnValue_1                                (None)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalSkillInfo_C::WeightInfoFormat(class FText* FormatText, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_SelectText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_SelectText_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "WeightInfoFormat");

	Params::UWBP_MainMenu_PalSkillInfo_C_WeightInfoFormat_Params Parms{};

	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SelectText_ReturnValue_1 = CallFunc_SelectText_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (FormatText != nullptr)
		*FormatText = Parms.FormatText;

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.SetSkillInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowChangeWazaKeyGuide                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowRemoveWazaKeyGuide                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWazaDesc_outDesc                                     (None)
// class FText                        CallFunc_GetWazaName_outName                                     (None)
// class UPalWazaDatabase*            CallFunc_GetWazaDatabase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalWazaDatabaseRaw         CallFunc_FindWazaForBP_OutData                                   (None)
// bool                               CallFunc_FindWazaForBP_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalSkillInfo_C::SetSkillInfo(bool ShowChangeWazaKeyGuide, bool ShowRemoveWazaKeyGuide, enum class EPalWazaID WazaID, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetWazaDesc_outDesc, class FText CallFunc_GetWazaName_outName, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "SetSkillInfo");

	Params::UWBP_MainMenu_PalSkillInfo_C_SetSkillInfo_Params Parms{};

	Parms.ShowChangeWazaKeyGuide = ShowChangeWazaKeyGuide;
	Parms.ShowRemoveWazaKeyGuide = ShowRemoveWazaKeyGuide;
	Parms.WazaID = WazaID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWazaDesc_outDesc = CallFunc_GetWazaDesc_outDesc;
	Parms.CallFunc_GetWazaName_outName = CallFunc_GetWazaName_outName;
	Parms.CallFunc_GetWazaDatabase_ReturnValue = CallFunc_GetWazaDatabase_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FindWazaForBP_OutData = CallFunc_FindWazaForBP_OutData;
	Parms.CallFunc_FindWazaForBP_ReturnValue = CallFunc_FindWazaForBP_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.SubInfoFormat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FormatText                                                       (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_SelectText_ReturnValue_1                                (None)

void UWBP_MainMenu_PalSkillInfo_C::SubInfoFormat(class FText Name, double Value, class FText* FormatText, class FText CallFunc_MakeLiteralText_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Round_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_SelectText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_SelectText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "SubInfoFormat");

	Params::UWBP_MainMenu_PalSkillInfo_C_SubInfoFormat_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SelectText_ReturnValue_1 = CallFunc_SelectText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FormatText != nullptr)
		*FormatText = Parms.FormatText;

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.SetCommonInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SubInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_PalSkillInfo_C::SetCommonInfo(class FText Title, class FText Info, class FText SubInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "SetCommonInfo");

	Params::UWBP_MainMenu_PalSkillInfo_C_SetCommonInfo_Params Parms{};

	Parms.Title = Title;
	Parms.Info = Info;
	Parms.SubInfo = SubInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.SetStatusInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalIndividualCharacterParameter*IndividualParam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIStatusDIsplayParameterStatusType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalSkillInfo_C::SetStatusInfo(class FText Title, class FText Desc, class UPalIndividualCharacterParameter* IndividualParam, enum class E_PalUIStatusDIsplayParameter StatusType, bool IsPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "SetStatusInfo");

	Params::UWBP_MainMenu_PalSkillInfo_C_SetStatusInfo_Params Parms{};

	Parms.Title = Title;
	Parms.Desc = Desc;
	Parms.IndividualParam = IndividualParam;
	Parms.StatusType = StatusType;
	Parms.IsPlayer = IsPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_PalSkillInfo.WBP_MainMenu_PalSkillInfo_C.ExecuteUbergraph_WBP_MainMenu_PalSkillInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIStatusDIsplayParameterTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIStatusDIsplayParameterTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIStatusDIsplayParameterTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeTemp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Title_1                                       (None)
// class FText                        K2Node_CustomEvent_Info                                          (None)
// class FText                        K2Node_CustomEvent_SubInfo                                       (None)
// class FText                        K2Node_CustomEvent_Title                                         (None)
// class FText                        K2Node_CustomEvent_Desc                                          (None)
// class UPalIndividualCharacterParameter*K2Node_CustomEvent_IndividualParam                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIStatusDIsplayParameterK2Node_CustomEvent_StatusType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_PlayerEquipInfoFormat_FormatText                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampWorkerSickTypeCallFunc_GetWorkerSick_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPassiveSkillEffectTypeK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWorkSickName_outName                                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalFoodStatusEffectTypeCallFunc_ConvertToFoodRate_FoodEffect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRatePartnerSkill_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFoodStatusRate_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRatePassiveSkill_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCraftSpeedSickRate_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HungerParameterRate_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetMaxHP_withBuff_ReturnValue                           (NoDestructor)
// class FText                        CallFunc_SubInfoFormat_FormatText                                (None)
// int32                              CallFunc_Convert_FixedPoint64ToInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_GetMaxHP_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCraftSpeed_withBuff_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCraftSpeed_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefense_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShotAttack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefense_withBuff_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShotAttack_withBuff_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FText                        CallFunc_SubInfoFormat_FormatText_1                              (None)
// class FText                        CallFunc_SubInfoFormat_FormatText_2                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class FText                        CallFunc_SubInfoFormat_FormatText_3                              (None)
// class FText                        CallFunc_SubInfoFormat_FormatText_4                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_WeightInfoFormat_FormatText                             (None)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubInfoFormat_Value_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubInfoFormat_Value_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubInfoFormat_Value_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SubInfoFormat_Value_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalSkillInfo_C::ExecuteUbergraph_WBP_MainMenu_PalSkillInfo(int32 EntryPoint, enum class E_PalUIStatusDIsplayParameter Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, enum class E_PalUIStatusDIsplayParameter Temp_byte_Variable_1, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class E_PalUIStatusDIsplayParameter Temp_byte_Variable_2, enum class EPalPassiveSkillEffectType Temp_byte_Variable_3, enum class EPalPassiveSkillEffectType Temp_byte_Variable_4, enum class EPalPassiveSkillEffectType Temp_byte_Variable_5, enum class EPalPassiveSkillEffectType Temp_byte_Variable_6, enum class EPalPassiveSkillEffectType Temp_byte_Variable_7, enum class EPalPassiveSkillEffectType Temp_byte_Variable_8, enum class EPalPassiveSkillEffectType Temp_byte_Variable_9, enum class EPalPassiveSkillEffectType Temp_byte_Variable_10, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, class FText K2Node_CustomEvent_Title_1, class FText K2Node_CustomEvent_Info, class FText K2Node_CustomEvent_SubInfo, class FText K2Node_CustomEvent_Title, class FText K2Node_CustomEvent_Desc, class UPalIndividualCharacterParameter* K2Node_CustomEvent_IndividualParam, enum class E_PalUIStatusDIsplayParameter K2Node_CustomEvent_StatusType, bool K2Node_CustomEvent_IsPlayer, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_PlayerEquipInfoFormat_FormatText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, enum class EPalBaseCampWorkerSickType CallFunc_GetWorkerSick_ReturnValue, enum class EPalPassiveSkillEffectType K2Node_Select_Default_1, class FText CallFunc_GetWorkSickName_outName, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EPalFoodStatusEffectType CallFunc_ConvertToFoodRate_FoodEffect, float CallFunc_GetRatePartnerSkill_ReturnValue, float CallFunc_GetFoodStatusRate_ReturnValue, float CallFunc_GetRatePassiveSkill_ReturnValue, float CallFunc_GetCraftSpeedSickRate_ReturnValue, float CallFunc_HungerParameterRate_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, class FText CallFunc_SubInfoFormat_FormatText, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetMaxHP_ReturnValue, int32 CallFunc_GetCraftSpeed_withBuff_ReturnValue, int32 CallFunc_GetCraftSpeed_ReturnValue, int32 CallFunc_GetDefense_ReturnValue, int32 CallFunc_GetShotAttack_ReturnValue, int32 CallFunc_GetDefense_withBuff_ReturnValue, int32 CallFunc_GetShotAttack_withBuff_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SubInfoFormat_FormatText_1, class FText CallFunc_SubInfoFormat_FormatText_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class FText CallFunc_SubInfoFormat_FormatText_3, class FText CallFunc_SubInfoFormat_FormatText_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, bool Temp_bool_Variable_1, class FText CallFunc_WeightInfoFormat_FormatText, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class FText CallFunc_SelectText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_Select_Default_2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 K2Node_Select_Default_3, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, double CallFunc_SubInfoFormat_Value_ImplicitCast, double CallFunc_SubInfoFormat_Value_ImplicitCast_1, double CallFunc_SubInfoFormat_Value_ImplicitCast_2, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_SubInfoFormat_Value_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_PalSkillInfo_C", "ExecuteUbergraph_WBP_MainMenu_PalSkillInfo");

	Params::UWBP_MainMenu_PalSkillInfo_C_ExecuteUbergraph_WBP_MainMenu_PalSkillInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.K2Node_CustomEvent_Title_1 = K2Node_CustomEvent_Title_1;
	Parms.K2Node_CustomEvent_Info = K2Node_CustomEvent_Info;
	Parms.K2Node_CustomEvent_SubInfo = K2Node_CustomEvent_SubInfo;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;
	Parms.K2Node_CustomEvent_Desc = K2Node_CustomEvent_Desc;
	Parms.K2Node_CustomEvent_IndividualParam = K2Node_CustomEvent_IndividualParam;
	Parms.K2Node_CustomEvent_StatusType = K2Node_CustomEvent_StatusType;
	Parms.K2Node_CustomEvent_IsPlayer = K2Node_CustomEvent_IsPlayer;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_PlayerEquipInfoFormat_FormatText = CallFunc_PlayerEquipInfoFormat_FormatText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWorkerSick_ReturnValue = CallFunc_GetWorkerSick_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetWorkSickName_outName = CallFunc_GetWorkSickName_outName;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_ConvertToFoodRate_FoodEffect = CallFunc_ConvertToFoodRate_FoodEffect;
	Parms.CallFunc_GetRatePartnerSkill_ReturnValue = CallFunc_GetRatePartnerSkill_ReturnValue;
	Parms.CallFunc_GetFoodStatusRate_ReturnValue = CallFunc_GetFoodStatusRate_ReturnValue;
	Parms.CallFunc_GetRatePassiveSkill_ReturnValue = CallFunc_GetRatePassiveSkill_ReturnValue;
	Parms.CallFunc_GetCraftSpeedSickRate_ReturnValue = CallFunc_GetCraftSpeedSickRate_ReturnValue;
	Parms.CallFunc_HungerParameterRate_ReturnValue = CallFunc_HungerParameterRate_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetMaxHP_withBuff_ReturnValue = CallFunc_GetMaxHP_withBuff_ReturnValue;
	Parms.CallFunc_SubInfoFormat_FormatText = CallFunc_SubInfoFormat_FormatText;
	Parms.CallFunc_Convert_FixedPoint64ToInt_ReturnValue = CallFunc_Convert_FixedPoint64ToInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_GetCraftSpeed_withBuff_ReturnValue = CallFunc_GetCraftSpeed_withBuff_ReturnValue;
	Parms.CallFunc_GetCraftSpeed_ReturnValue = CallFunc_GetCraftSpeed_ReturnValue;
	Parms.CallFunc_GetDefense_ReturnValue = CallFunc_GetDefense_ReturnValue;
	Parms.CallFunc_GetShotAttack_ReturnValue = CallFunc_GetShotAttack_ReturnValue;
	Parms.CallFunc_GetDefense_withBuff_ReturnValue = CallFunc_GetDefense_withBuff_ReturnValue;
	Parms.CallFunc_GetShotAttack_withBuff_ReturnValue = CallFunc_GetShotAttack_withBuff_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_SubInfoFormat_FormatText_1 = CallFunc_SubInfoFormat_FormatText_1;
	Parms.CallFunc_SubInfoFormat_FormatText_2 = CallFunc_SubInfoFormat_FormatText_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_SubInfoFormat_FormatText_3 = CallFunc_SubInfoFormat_FormatText_3;
	Parms.CallFunc_SubInfoFormat_FormatText_4 = CallFunc_SubInfoFormat_FormatText_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_WeightInfoFormat_FormatText = CallFunc_WeightInfoFormat_FormatText;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_SubInfoFormat_Value_ImplicitCast = CallFunc_SubInfoFormat_Value_ImplicitCast;
	Parms.CallFunc_SubInfoFormat_Value_ImplicitCast_1 = CallFunc_SubInfoFormat_Value_ImplicitCast_1;
	Parms.CallFunc_SubInfoFormat_Value_ImplicitCast_2 = CallFunc_SubInfoFormat_Value_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_SubInfoFormat_Value_ImplicitCast_3 = CallFunc_SubInfoFormat_Value_ImplicitCast_3;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


