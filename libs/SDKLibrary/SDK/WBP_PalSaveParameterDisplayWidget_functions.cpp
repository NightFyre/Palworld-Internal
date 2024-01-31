#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C
// (None)

class UClass* UWBP_PalSaveParameterDisplayWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalSaveParameterDisplayWidget_C");

	return Clss;
}


// WBP_PalSaveParameterDisplayWidget_C WBP_PalSaveParameterDisplayWidget.Default__WBP_PalSaveParameterDisplayWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalSaveParameterDisplayWidget_C* UWBP_PalSaveParameterDisplayWidget_C::GetDefaultObj()
{
	static class UWBP_PalSaveParameterDisplayWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalSaveParameterDisplayWidget_C*>(UWBP_PalSaveParameterDisplayWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetSoulRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SoulRank                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetSoulRank(int32 SoulRank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetSoulRank");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetSoulRank_Params Parms{};

	Parms.SoulRank = SoulRank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Type1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         Type2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetElement(enum class EPalElementType Type1, enum class EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetElement");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetElement_Params Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoddAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetFoodAmount(int32 FoddAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetFoodAmount");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetFoodAmount_Params Parms{};

	Parms.FoddAmount = FoddAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetGender(enum class EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetGender");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetGender_Params Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetWorkSuitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EPalWorkSuitability, int32>SuitabilityMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalSaveParameterDisplayWidget_C::SetWorkSuitability(TMap<enum class EPalWorkSuitability, int32> SuitabilityMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetWorkSuitability");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetWorkSuitability_Params Parms{};

	Parms.SuitabilityMap = SuitabilityMap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetupAfterDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalSaveParameterDisplayWidget_C::SetupAfterDisplayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetupAfterDisplayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.GetSaveParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalIndividualCharacterSaveParameterParameter                                                        (Parm, OutParm)

void UWBP_PalSaveParameterDisplayWidget_C::GetSaveParameter(struct FPalIndividualCharacterSaveParameter* Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "GetSaveParameter");

	Params::UWBP_PalSaveParameterDisplayWidget_C_GetSaveParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Parameter != nullptr)
		*Parameter = std::move(Parms.Parameter);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetBaseParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MeleeAttack                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotAttack                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Defense                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Support                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetBaseParameter");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetBaseParameter_Params Parms{};

	Parms.MeleeAttack = MeleeAttack;
	Parms.ShotAttack = ShotAttack;
	Parms.Defense = Defense;
	Parms.Support = Support;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetHunger(double NowHunger, double MaxHunger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetHunger");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.MaxHunger = MaxHunger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveSkillnameArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalSaveParameterDisplayWidget_C::SetPassiveSkill(TArray<class FName>& PassiveSkillnameArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetPassiveSkill");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetPassiveSkill_Params Parms{};

	Parms.PassiveSkillnameArray = PassiveSkillnameArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.CalcHP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TmpNextExp                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHPBySaveParameter_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_FixedPoint64ToInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::CalcHP(int32 TmpNextExp, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, int32 CallFunc_GetHPBySaveParameter_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "CalcHP");

	Params::UWBP_PalSaveParameterDisplayWidget_C_CalcHP_Params Parms{};

	Parms.TmpNextExp = TmpNextExp;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetHPBySaveParameter_ReturnValue = CallFunc_GetHPBySaveParameter_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt_ReturnValue = CallFunc_Convert_FixedPoint64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetHP(int32 NowHP, int32 MaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetHP");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.MaxHP = MaxHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetWaza
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalWazaID>      WazaArray                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalSaveParameterDisplayWidget_C::SetWaza(TArray<enum class EPalWazaID>& WazaArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetWaza");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetWaza_Params Parms{};

	Parms.WazaArray = WazaArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.CalcExp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exp                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TmpNextExp                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalExpDatabase*             CallFunc_GetExpDatabase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextExp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextExp_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::CalcExp(int32 Level, int32 Exp, bool IsPlayer, int32 TmpNextExp, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetTotalExp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "CalcExp");

	Params::UWBP_PalSaveParameterDisplayWidget_C_CalcExp_Params Parms{};

	Parms.Level = Level;
	Parms.Exp = Exp;
	Parms.IsPlayer = IsPlayer;
	Parms.TmpNextExp = TmpNextExp;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetExpDatabase_ReturnValue = CallFunc_GetExpDatabase_ReturnValue;
	Parms.CallFunc_GetNextExp_ReturnValue = CallFunc_GetNextExp_ReturnValue;
	Parms.CallFunc_GetNextExp_ReturnValue_1 = CallFunc_GetNextExp_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetTotalExp_ReturnValue = CallFunc_GetTotalExp_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetLevelAndExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextEXP                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowExpRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetLevelAndExp(int32 Level, int32 NowExp, int32 NextEXP, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetLevelAndExp");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetLevelAndExp_Params Parms{};

	Parms.Level = Level;
	Parms.NowExp = NowExp;
	Parms.NextEXP = NextEXP;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetNickName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NickName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetNickName(const class FString& NickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetNickName");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetNickName_Params Parms{};

	Parms.NickName = NickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "SetRank");

	Params::UWBP_PalSaveParameterDisplayWidget_C_SetRank_Params Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalSaveParameterDisplayWidget_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C.DisplaySaveParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterDisplayParameter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedCharacterName_OutText                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoodAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalWorkSuitability, int32>CallFunc_GetWorkSuitabilityRank_WorkSuitabilities                (None)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefenseBySaveParameter_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSupportBySaveParameter_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMeleeAttackBySaveParameter_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShotAttackBySaveParameter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetHunger_nowHunger_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSaveParameterDisplayWidget_C::DisplaySaveParameter(const struct FPalIndividualCharacterSaveParameter& DisplayParameter, bool Temp_bool_Variable, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, int32 CallFunc_GetFoodAmount_ReturnValue, TMap<enum class EPalWorkSuitability, int32> CallFunc_GetWorkSuitabilityRank_WorkSuitabilities, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_2, int32 CallFunc_GetDefenseBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_3, int32 CallFunc_GetSupportBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_4, int32 CallFunc_GetMeleeAttackBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_5, int32 CallFunc_GetShotAttackBySaveParameter_ReturnValue, double CallFunc_SetHunger_nowHunger_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSaveParameterDisplayWidget_C", "DisplaySaveParameter");

	Params::UWBP_PalSaveParameterDisplayWidget_C_DisplaySaveParameter_Params Parms{};

	Parms.DisplayParameter = DisplayParameter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetLocalizedCharacterName_OutText = CallFunc_GetLocalizedCharacterName_OutText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_1 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_1;
	Parms.CallFunc_GetElementType_Element1 = CallFunc_GetElementType_Element1;
	Parms.CallFunc_GetElementType_Element2 = CallFunc_GetElementType_Element2;
	Parms.CallFunc_GetFoodAmount_ReturnValue = CallFunc_GetFoodAmount_ReturnValue;
	Parms.CallFunc_GetWorkSuitabilityRank_WorkSuitabilities = CallFunc_GetWorkSuitabilityRank_WorkSuitabilities;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_2 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_2;
	Parms.CallFunc_GetDefenseBySaveParameter_ReturnValue = CallFunc_GetDefenseBySaveParameter_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_3 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_3;
	Parms.CallFunc_GetSupportBySaveParameter_ReturnValue = CallFunc_GetSupportBySaveParameter_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_4 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_4;
	Parms.CallFunc_GetMeleeAttackBySaveParameter_ReturnValue = CallFunc_GetMeleeAttackBySaveParameter_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_5 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_5;
	Parms.CallFunc_GetShotAttackBySaveParameter_ReturnValue = CallFunc_GetShotAttackBySaveParameter_ReturnValue;
	Parms.CallFunc_SetHunger_nowHunger_ImplicitCast = CallFunc_SetHunger_nowHunger_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


