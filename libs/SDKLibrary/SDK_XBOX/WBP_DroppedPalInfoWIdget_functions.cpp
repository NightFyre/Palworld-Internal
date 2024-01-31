#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C
// (None)

class UClass* UWBP_DroppedPalInfoWIdget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DroppedPalInfoWIdget_C");

	return Clss;
}


// WBP_DroppedPalInfoWIdget_C WBP_DroppedPalInfoWIdget.Default__WBP_DroppedPalInfoWIdget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DroppedPalInfoWIdget_C* UWBP_DroppedPalInfoWIdget_C::GetDefaultObj()
{
	static class UWBP_DroppedPalInfoWIdget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DroppedPalInfoWIdget_C*>(UWBP_DroppedPalInfoWIdget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DroppedPalInfoWIdget_C::SetGender(enum class EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetGender");

	Params::UWBP_DroppedPalInfoWIdget_C_SetGender_Params Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetNickName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NickName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_DroppedPalInfoWIdget_C::SetNickName(const class FString& NickName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetNickName");

	Params::UWBP_DroppedPalInfoWIdget_C_SetNickName_Params Parms{};

	Parms.NickName = NickName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveSkillnameArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DroppedPalInfoWIdget_C::SetPassiveSkill(TArray<class FName>& PassiveSkillnameArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetPassiveSkill");

	Params::UWBP_DroppedPalInfoWIdget_C_SetPassiveSkill_Params Parms{};

	Parms.PassiveSkillnameArray = PassiveSkillnameArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetWaza
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalWazaID>      WazaArray                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DroppedPalInfoWIdget_C::SetWaza(TArray<enum class EPalWazaID>& WazaArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetWaza");

	Params::UWBP_DroppedPalInfoWIdget_C_SetWaza_Params Parms{};

	Parms.WazaArray = WazaArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetBaseParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MeleeAttack                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotAttack                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Defense                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Support                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)

void UWBP_DroppedPalInfoWIdget_C::SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetBaseParameter");

	Params::UWBP_DroppedPalInfoWIdget_C_SetBaseParameter_Params Parms{};

	Parms.MeleeAttack = MeleeAttack;
	Parms.ShotAttack = ShotAttack;
	Parms.Defense = Defense;
	Parms.Support = Support;
	Parms.Speed = Speed;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetLevelAndExp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextEXP                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowExpRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DroppedPalInfoWIdget_C::SetLevelAndExp(int32 Level, int32 NowExp, int32 NextEXP, double NowExpRate, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetLevelAndExp");

	Params::UWBP_DroppedPalInfoWIdget_C_SetLevelAndExp_Params Parms{};

	Parms.Level = Level;
	Parms.NowExp = NowExp;
	Parms.NextEXP = NextEXP;
	Parms.NowExpRate = NowExpRate;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetupAfterDisplayed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterCallFunc_GetSaveParameter_parameter                              (None)

void UWBP_DroppedPalInfoWIdget_C::SetupAfterDisplayed(const struct FPalIndividualCharacterSaveParameter& CallFunc_GetSaveParameter_parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetupAfterDisplayed");

	Params::UWBP_DroppedPalInfoWIdget_C_SetupAfterDisplayed_Params Parms{};

	Parms.CallFunc_GetSaveParameter_parameter = CallFunc_GetSaveParameter_parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetHunger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DroppedPalInfoWIdget_C::SetHunger(double NowHunger, double MaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetHunger");

	Params::UWBP_DroppedPalInfoWIdget_C_SetHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.MaxHunger = MaxHunger;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DroppedPalInfoWIdget_C::SetHP(int32 NowHP, int32 MaxHP, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "SetHP");

	Params::UWBP_DroppedPalInfoWIdget_C_SetHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.MaxHP = MaxHP;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DroppedPalInfoWIdget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.ExecuteUbergraph_WBP_DroppedPalInfoWIdget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void UWBP_DroppedPalInfoWIdget_C::ExecuteUbergraph_WBP_DroppedPalInfoWIdget(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>& K2Node_MakeArray_Array, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DroppedPalInfoWIdget_C", "ExecuteUbergraph_WBP_DroppedPalInfoWIdget");

	Params::UWBP_DroppedPalInfoWIdget_C_ExecuteUbergraph_WBP_DroppedPalInfoWIdget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


