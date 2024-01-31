#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C
// (None)

class UClass* UWBP_Ingame_PlayerGauge_Separated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_PlayerGauge_Separated_C");

	return Clss;
}


// WBP_Ingame_PlayerGauge_Separated_C WBP_Ingame_PlayerGauge_Separated.Default__WBP_Ingame_PlayerGauge_Separated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_PlayerGauge_Separated_C* UWBP_Ingame_PlayerGauge_Separated_C::GetDefaultObj()
{
	static class UWBP_Ingame_PlayerGauge_Separated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_PlayerGauge_Separated_C*>(UWBP_Ingame_PlayerGauge_Separated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CoolDownTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CREATEDELEGATE_PROXYFUNCTION_1(float RemainingTime, float CoolDownTime, double CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast, double CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.RemainingTime = RemainingTime;
	Parms.CoolDownTime = CoolDownTime;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CoolDownTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CREATEDELEGATE_PROXYFUNCTION_0(float RemainingTime, float CoolDownTime, double CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast, double CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.RemainingTime = RemainingTime;
	Parms.CoolDownTime = CoolDownTime;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetEnableFirstSummonPalGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnableFlag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetEnableFirstSummonPalGuide(bool IsEnableFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetEnableFirstSummonPalGuide");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide_Params Parms{};

	Parms.IsEnableFlag = IsEnableFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetWeaponNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPalThrowWeapon_isPalThrowWeapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetWeaponNameText(class APalWeaponBase* WeaponBase, bool CallFunc_IsPalThrowWeapon_isPalThrowWeapon, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class FText CallFunc_GetItemName_outName, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetWeaponNameText");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.CallFunc_IsPalThrowWeapon_isPalThrowWeapon = CallFunc_IsPalThrowWeapon_isPalThrowWeapon;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StartCool                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnGrapplingGunCoolStateUpdate(bool StartCool, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnGrapplingGunCoolStateUpdate");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate_Params Parms{};

	Parms.StartCool = StartCool;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CoolTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnGrapplingGunCoolTimerUpdate(double Timer, double CoolTime, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnGrapplingGunCoolTimerUpdate");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate_Params Parms{};

	Parms.Timer = Timer;
	Parms.CoolTime = CoolTime;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetUsableHandFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftHandUsable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRightHandUsable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseWeapon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetUsableHandFlag(bool IsLeftHandUsable, bool IsRightHandUsable, double CallFunc_SelectFloat_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_CanUseWeapon_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetUsableHandFlag");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag_Params Parms{};

	Parms.IsLeftHandUsable = IsLeftHandUsable;
	Parms.IsRightHandUsable = IsRightHandUsable;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_CanUseWeapon_ReturnValue = CallFunc_CanUseWeapon_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_3                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_4                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_5                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetBallNum(int32 Num, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, TSubclassOf<class UCommonTextStyle> Temp_class_Variable, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_2, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_3, bool Temp_bool_Variable_2, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_4, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_5, bool Temp_bool_Variable_3, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetBallNum");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetBallNum_Params Parms{};

	Parms.Num = Num;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideBallName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::HideBallName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideBallName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BallItemID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DisplayNum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_ItemDataK2Node_MakeStruct_PalDataTableRowName_ItemData                   (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetBallDetail(class FName BallItemID, int32 DisplayNum, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FPalDataTableRowName_ItemData& K2Node_MakeStruct_PalDataTableRowName_ItemData, class FText CallFunc_GetItemName_outName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetBallDetail");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetBallDetail_Params Parms{};

	Parms.BallItemID = BallItemID;
	Parms.DisplayNum = DisplayNum;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_PalDataTableRowName_ItemData = K2Node_MakeStruct_PalDataTableRowName_ItemData;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Set Player Hunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             HungerRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Set_Player_Hunger(double HungerRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Set Player Hunger");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger_Params Parms{};

	Parms.HungerRate = HungerRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetVisibilityShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetVisibilityShield(bool IsVisible, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetVisibilityShield");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateGrenadeLoadoutSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnUpdateGrenadeLoadoutSlot(class UPalItemSlot* Slot, int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnUpdateGrenadeLoadoutSlot");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateBallLoadoutSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_Ingame_PlayerGauge_Separated_C::OnUpdateBallLoadoutSlot(class UPalItemSlot* Slot, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnUpdateBallLoadoutSlot");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.RegisterBallLoadoutEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                ItemSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::RegisterBallLoadoutEvent(class UPalItemSlot* ItemSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "RegisterBallLoadoutEvent");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent_Params Parms{};

	Parms.ItemSlot = ItemSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsRideCharacterSPFull
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::IsRideCharacterSPFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsRideCharacterSPFull");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangeNoRideMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::ChangeNoRideMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangeNoRideMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangeRideMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::ChangeRideMode(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangeRideMode");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndShieldGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnEndShieldGaugeDelay(int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnEndShieldGaugeDelay");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay_Params Parms{};

	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartShieldGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnStartShieldGaugeDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnStartShieldGaugeDelay");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndHPGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnEndHPGaugeDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnEndHPGaugeDelay");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartHPGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnStartHPGaugeDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnStartHPGaugeDelay");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Delay Gauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIDelayGaugeCalculator*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIDelayGaugeCalculator*  CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Setup_Delay_Gauge(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Setup Delay Gauge");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsPalThrowWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsPalThrowWeapon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowPalWeapon_C*        K2Node_DynamicCast_AsBP_Throw_Pal_Weapon                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsPalThrowWeapon(class APalWeaponBase* WeaponBase, bool* IsPalThrowWeapon, class ABP_ThrowPalWeapon_C* K2Node_DynamicCast_AsBP_Throw_Pal_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsPalThrowWeapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.K2Node_DynamicCast_AsBP_Throw_Pal_Weapon = K2Node_DynamicCast_AsBP_Throw_Pal_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPalThrowWeapon != nullptr)
		*IsPalThrowWeapon = Parms.IsPalThrowWeapon;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsSpecialWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSpecial                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticWeaponItemData*    K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsSpecialWeapon(class APalWeaponBase* WeaponBase, bool* IsSpecial, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class UPalStaticWeaponItemData* K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsSpecialWeapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data = K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSpecial != nullptr)
		*IsSpecial = Parms.IsSpecial;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsDummyWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDummy                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowWeapon_Dummy_C*     K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsDummyWeapon(class APalWeaponBase* WeaponBase, bool* IsDummy, class ABP_ThrowWeapon_Dummy_C* K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsDummyWeapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy = K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDummy != nullptr)
		*IsDummy = Parms.IsDummy;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Is Require Bullet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*              WeaponActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsRequire                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRequiredBulletName_outName                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Is_Require_Bullet(class APalWeaponBase* WeaponActor, bool* IsRequire, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetRequiredBulletName_outName, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Is Require Bullet");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet_Params Parms{};

	Parms.WeaponActor = WeaponActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRequiredBulletName_outName = CallFunc_GetRequiredBulletName_outName;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRequire != nullptr)
		*IsRequire = Parms.IsRequire;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.TryUpdateMaxBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_CalcMaxBulletNum_maxBulletNum                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::TryUpdateMaxBullet(int32 CallFunc_CalcMaxBulletNum_maxBulletNum, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "TryUpdateMaxBullet");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet_Params Parms{};

	Parms.CallFunc_CalcMaxBulletNum_maxBulletNum = CallFunc_CalcMaxBulletNum_maxBulletNum;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdatePalInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdatePalInfo(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdatePalInfo");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo_Params Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsInfinityWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WeaponName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInfinity                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticWeaponItemData*    K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsInfinityWeapon(class FName WeaponName, bool* IsInfinity, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticWeaponItemData* K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsInfinityWeapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon_Params Parms{};

	Parms.WeaponName = WeaponName;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data = K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfinity != nullptr)
		*IsInfinity = Parms.IsInfinity;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideBulletInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::HideBulletInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideBulletInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideAllWeaponInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::HideAllWeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideAllWeaponInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangePalThrowDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::ChangePalThrowDetail(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangePalThrowDetail");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Normal Weapon Detail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrenade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Change_Normal_Weapon_Detail(bool IsGrenade, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Change Normal Weapon Detail");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail_Params Parms{};

	Parms.IsGrenade = IsGrenade;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Infinity Weapon Detail
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Change_Infinity_Weapon_Detail(class APalWeaponBase* WeaponBase, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Change Infinity Weapon Detail");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon Icon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPalThrowWeapon_isPalThrowWeapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpecialWeapon_isSpecial                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Weapon_Icon(class APalWeaponBase* WeaponBase, bool CallFunc_IsPalThrowWeapon_isPalThrowWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsSpecialWeapon_isSpecial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Weapon Icon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.CallFunc_IsPalThrowWeapon_isPalThrowWeapon = CallFunc_IsPalThrowWeapon_isPalThrowWeapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsSpecialWeapon_isSpecial = CallFunc_IsSpecialWeapon_isSpecial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnReloadWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              bulletsNum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcMaxBulletNum_maxBulletNum                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnReloadWeapon(int32 bulletsNum, int32 CallFunc_CalcMaxBulletNum_maxBulletNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnReloadWeapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon_Params Parms{};

	Parms.bulletsNum = bulletsNum;
	Parms.CallFunc_CalcMaxBulletNum_maxBulletNum = CallFunc_CalcMaxBulletNum_maxBulletNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CalcMaxBulletNum
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MaxBulletNum                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRequiredBulletName_outName                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CountItemNum_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CalcMaxBulletNum(int32* MaxBulletNum, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetRequiredBulletName_outName, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_CountItemNum_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CalcMaxBulletNum");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum_Params Parms{};

	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequiredBulletName_outName = CallFunc_GetRequiredBulletName_outName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_CountItemNum_ReturnValue = CallFunc_CountItemNum_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxBulletNum != nullptr)
		*MaxBulletNum = Parms.MaxBulletNum;

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateMaxBulletNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxBulletNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateMaxBulletNum(int32 MaxBulletNum, TSubclassOf<class UCommonTextStyle> Temp_class_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_1, bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateMaxBulletNum");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum_Params Parms{};

	Parms.MaxBulletNum = MaxBulletNum;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Now Bullet Num
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowBulletNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Now_Bullet_Num(int32 NowBulletNum, TSubclassOf<class UCommonTextStyle> Temp_class_Variable, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_1, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Now Bullet Num");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num_Params Parms{};

	Parms.NowBulletNum = NowBulletNum;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetupBulletGauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MagazineSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetupBulletGauge(int32 MagazineSize, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetupBulletGauge");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge_Params Parms{};

	Parms.MagazineSize = MagazineSize;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Bullet Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowWeapon_GrenadeBase_C*K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPalThrowWeapon_isPalThrowWeapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInfinityWeapon_isInfinity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Require_Bullet_IsRequire                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcMaxBulletNum_maxBulletNum                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainBulletCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Setup_Bullet_Info(class APalWeaponBase* WeaponBase, class ABP_ThrowWeapon_GrenadeBase_C* K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base, bool K2Node_DynamicCast_bSuccess, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_IsPalThrowWeapon_isPalThrowWeapon, bool CallFunc_IsInfinityWeapon_isInfinity, bool CallFunc_Is_Require_Bullet_IsRequire, int32 CallFunc_CalcMaxBulletNum_maxBulletNum, int32 CallFunc_GetRemainBulletCount_ReturnValue, int32 CallFunc_GetMagazineSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Setup Bullet Info");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base = K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_IsPalThrowWeapon_isPalThrowWeapon = CallFunc_IsPalThrowWeapon_isPalThrowWeapon;
	Parms.CallFunc_IsInfinityWeapon_isInfinity = CallFunc_IsInfinityWeapon_isInfinity;
	Parms.CallFunc_Is_Require_Bullet_IsRequire = CallFunc_Is_Require_Bullet_IsRequire;
	Parms.CallFunc_CalcMaxBulletNum_maxBulletNum = CallFunc_CalcMaxBulletNum_maxBulletNum;
	Parms.CallFunc_GetRemainBulletCount_ReturnValue = CallFunc_GetRemainBulletCount_ReturnValue;
	Parms.CallFunc_GetMagazineSize_ReturnValue = CallFunc_GetMagazineSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.BindWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GrapplingGun_C*          K2Node_DynamicCast_AsBP_Grappling_Gun                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowWeapon_GrenadeBase_C*K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCoolDown_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRemainingCoolDownTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainerFromInventoryType_outContainer           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainerFromInventoryType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNowSelectedIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::BindWeaponEvent(class APalWeaponBase* WeaponBase, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GrapplingGun_C* K2Node_DynamicCast_AsBP_Grappling_Gun, bool K2Node_DynamicCast_bSuccess, class ABP_ThrowWeapon_GrenadeBase_C* K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCoolDown_ReturnValue, float CallFunc_GetRemainingCoolDownTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, int32 CallFunc_GetNowSelectedIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalItemSlot* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast, double CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "BindWeaponEvent");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Grappling_Gun = K2Node_DynamicCast_AsBP_Grappling_Gun;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base = K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsCoolDown_ReturnValue = CallFunc_IsCoolDown_ReturnValue;
	Parms.CallFunc_GetRemainingCoolDownTime_ReturnValue = CallFunc_GetRemainingCoolDownTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_TryGetContainerFromInventoryType_outContainer = CallFunc_TryGetContainerFromInventoryType_outContainer;
	Parms.CallFunc_TryGetContainerFromInventoryType_ReturnValue = CallFunc_TryGetContainerFromInventoryType_ReturnValue;
	Parms.CallFunc_GetNowSelectedIndex_ReturnValue = CallFunc_GetNowSelectedIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast;
	Parms.CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast = CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UnbindLastEquipedWeaponEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GrapplingGun_C*          K2Node_DynamicCast_AsBP_Grappling_Gun                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowWeapon_GrenadeBase_C*K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UnbindLastEquipedWeaponEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class ABP_GrapplingGun_C* K2Node_DynamicCast_AsBP_Grappling_Gun, bool K2Node_DynamicCast_bSuccess_1, class ABP_ThrowWeapon_GrenadeBase_C* K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UnbindLastEquipedWeaponEvent");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UnbindLastEquipedWeaponEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Grappling_Gun = K2Node_DynamicCast_AsBP_Grappling_Gun;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base = K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDummyWeapon_IsDummy                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpecialWeapon_isSpecial                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsALLEmpty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseRightHand_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseLeftHand_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalWeaponBase>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Weapon(class APalWeaponBase* WeaponBase, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDummyWeapon_IsDummy, bool CallFunc_IsSpecialWeapon_isSpecial, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_CanUseRightHand_ReturnValue, bool CallFunc_CanUseLeftHand_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, TSoftObjectPtr<class APalWeaponBase> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Weapon");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Params Parms{};

	Parms.WeaponBase = WeaponBase;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDummyWeapon_IsDummy = CallFunc_IsDummyWeapon_IsDummy;
	Parms.CallFunc_IsSpecialWeapon_isSpecial = CallFunc_IsSpecialWeapon_isSpecial;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsALLEmpty_ReturnValue = CallFunc_IsALLEmpty_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_GetPrimaryInventoryType_ReturnValue = CallFunc_GetPrimaryInventoryType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CanUseRightHand_ReturnValue = CallFunc_CanUseRightHand_ReturnValue;
	Parms.CallFunc_CanUseLeftHand_ReturnValue = CallFunc_CanUseLeftHand_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_2 = CallFunc_GetPalmi_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPrimaryInventoryType_ReturnValue_1 = CallFunc_GetPrimaryInventoryType_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               MaxShield                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowShield                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_percent_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateShield(const struct FFixedPoint64& MaxShield, const struct FFixedPoint64& NowShield, bool CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateShield");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UpdateShield_Params Parms{};

	Parms.MaxShield = MaxShield;
	Parms.NowShield = NowShield;
	Parms.CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue = CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_percent_ImplicitCast = CallFunc_SetPercent_percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateSP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowSP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               MaxSP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsOverHeated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateSP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& MaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateSP");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UpdateSP_Params Parms{};

	Parms.NowSP = NowSP;
	Parms.MaxSP = MaxSP;
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               MaxHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_percent_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercentForce_percent_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_percent_ImplicitCast, float CallFunc_SetPercentForce_percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateHP");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_UpdateHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.MaxHP = MaxHP;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_percent_ImplicitCast = CallFunc_SetPercent_percent_ImplicitCast;
	Parms.CallFunc_SetPercentForce_percent_ImplicitCast = CallFunc_SetPercentForce_percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_TriggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_TriggerDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_TriggerDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_UseBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_UseBullet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_UseBullet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_ShowHideLeft(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_ShowHideLeft");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_ShowHideRight(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_ShowHideRight");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Tick");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_Separated_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hide_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hide                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated(int32 EntryPoint, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Hide_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_Hide, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated");

	Params::UWBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Hide_1 = K2Node_CustomEvent_Hide_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Hide = K2Node_CustomEvent_Hide;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


