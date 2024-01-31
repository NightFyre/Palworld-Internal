#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C
// (None)

class UClass* UWBP_PartnerSkillInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartnerSkillInfo_C");

	return Clss;
}


// WBP_PartnerSkillInfo_C WBP_PartnerSkillInfo.Default__WBP_PartnerSkillInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartnerSkillInfo_C* UWBP_PartnerSkillInfo_C::GetDefaultObj()
{
	static class UWBP_PartnerSkillInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartnerSkillInfo_C*>(UWBP_PartnerSkillInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ToggleCoopText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowOriginal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Partner_Skill_Name_Text_SkillNameText               (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)

void UWBP_PartnerSkillInfo_C::ToggleCoopText(bool ShowOriginal, class FText CallFunc_Get_Partner_Skill_Name_Text_SkillNameText, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_SelectText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ToggleCoopText");

	Params::UWBP_PartnerSkillInfo_C_ToggleCoopText_Params Parms{};

	Parms.ShowOriginal = ShowOriginal;
	Parms.CallFunc_Get_Partner_Skill_Name_Text_SkillNameText = CallFunc_Get_Partner_Skill_Name_Text_SkillNameText;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStopCoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsToggleKey_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::OnStopCoop(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsToggleKey_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnStopCoop");

	Params::UWBP_PartnerSkillInfo_C_OnStopCoop_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_IsToggleKey_ReturnValue = CallFunc_IsToggleKey_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStartCoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsToggleKey_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::OnStartCoop(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsToggleKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnStartCoop");

	Params::UWBP_PartnerSkillInfo_C_OnStartCoop_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_IsToggleKey_ReturnValue = CallFunc_IsToggleKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.EndExecuteAnmTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEffectTimeRatio_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::EndExecuteAnmTimer(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, float CallFunc_GetEffectTimeRatio_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "EndExecuteAnmTimer");

	Params::UWBP_PartnerSkillInfo_C_EndExecuteAnmTimer_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_GetEffectTimeRatio_ReturnValue = CallFunc_GetEffectTimeRatio_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowSkillExecuteAnm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsExcuting                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::ShowSkillExecuteAnm(bool IsExcuting, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ShowSkillExecuteAnm");

	Params::UWBP_PartnerSkillInfo_C_ShowSkillExecuteAnm_Params Parms{};

	Parms.IsExcuting = IsExcuting;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Change Ride Key Guide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ride                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)

void UWBP_PartnerSkillInfo_C::Change_Ride_Key_Guide(bool Ride, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SelectText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Change Ride Key Guide");

	Params::UWBP_PartnerSkillInfo_C_Change_Ride_Key_Guide_Params Parms{};

	Parms.Ride = Ride;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Setup");

	Params::UWBP_PartnerSkillInfo_C_Setup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Should Show UI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint                 CallFunc_GetEffectTimeMax_ReturnValue                            (ConstParm, NoDestructor)
// struct FFixedPoint                 CallFunc_GetEffectTime_ReturnValue                               (ConstParm, NoDestructor)
// bool                               CallFunc_Less_FixedPointFixedPoint_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Should_Show_UI(bool* ShouldShow, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTime_ReturnValue, bool CallFunc_Less_FixedPointFixedPoint_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Should Show UI");

	Params::UWBP_PartnerSkillInfo_C_Should_Show_UI_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEffectTimeMax_ReturnValue = CallFunc_GetEffectTimeMax_ReturnValue;
	Parms.CallFunc_GetEffectTime_ReturnValue = CallFunc_GetEffectTime_ReturnValue;
	Parms.CallFunc_Less_FixedPointFixedPoint_ReturnValue = CallFunc_Less_FixedPointFixedPoint_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Check Partner Skill Unlocked Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRideCharacter_CanRide                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistActiveSkill_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Partner_Skill_Name_Text_SkillNameText               (None)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRestrictedByItems_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Check_Partner_Skill_Unlocked_Timer(bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_CanRideCharacter_CanRide, bool CallFunc_IsExistActiveSkill_ReturnValue, class FText CallFunc_Get_Partner_Skill_Name_Text_SkillNameText, bool CallFunc_BooleanNOR_ReturnValue, class FText CallFunc_SelectText_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1, bool CallFunc_IsRestrictedByItems_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Check Partner Skill Unlocked Timer");

	Params::UWBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_CanRideCharacter_CanRide = CallFunc_CanRideCharacter_CanRide;
	Parms.CallFunc_IsExistActiveSkill_ReturnValue = CallFunc_IsExistActiveSkill_ReturnValue;
	Parms.CallFunc_Get_Partner_Skill_Name_Text_SkillNameText = CallFunc_Get_Partner_Skill_Name_Text_SkillNameText;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1 = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1;
	Parms.CallFunc_IsRestrictedByItems_ReturnValue = CallFunc_IsRestrictedByItems_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.CanRideCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanRide                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetOtomoPalHolder_OtomoPalHolder                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRideMarkerComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::CanRideCharacter(bool* CanRide, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_1, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "CanRideCharacter");

	Params::UWBP_PartnerSkillInfo_C_CanRideCharacter_Params Parms{};

	Parms.CallFunc_GetOtomoPalHolder_OtomoPalHolder = CallFunc_GetOtomoPalHolder_OtomoPalHolder;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo = CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CanRide != nullptr)
		*CanRide = Parms.CanRide;

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowCoolDownTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::ShowCoolDownTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ShowCoolDownTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Show Effect Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRestrictedByItems_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Show_Effect_Time(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsRestrictedByItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Show Effect Time");

	Params::UWBP_PartnerSkillInfo_C_Show_Effect_Time_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_IsRestrictedByItems_ReturnValue = CallFunc_IsRestrictedByItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.SetupDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRideCharacter_CanRide                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCoolDown_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint                 CallFunc_GetCoolDownTimeMax_ReturnValue                          (ConstParm, NoDestructor)
// struct FFixedPoint                 CallFunc_GetEffectTimeMax_ReturnValue                            (ConstParm, NoDestructor)
// struct FFixedPoint                 CallFunc_GetEffectTime_ReturnValue                               (ConstParm, NoDestructor)
// struct FFixedPoint                 CallFunc_GetCoolDownTime_ReturnValue                             (ConstParm, NoDestructor)

void UWBP_PartnerSkillInfo_C::SetupDisplay(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_CanRideCharacter_CanRide, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCoolDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2, const struct FFixedPoint& CallFunc_GetCoolDownTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTime_ReturnValue, const struct FFixedPoint& CallFunc_GetCoolDownTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "SetupDisplay");

	Params::UWBP_PartnerSkillInfo_C_SetupDisplay_Params Parms{};

	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_CanRideCharacter_CanRide = CallFunc_CanRideCharacter_CanRide;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCoolDown_ReturnValue = CallFunc_IsCoolDown_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1 = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1;
	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2 = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2;
	Parms.CallFunc_GetCoolDownTimeMax_ReturnValue = CallFunc_GetCoolDownTimeMax_ReturnValue;
	Parms.CallFunc_GetEffectTimeMax_ReturnValue = CallFunc_GetEffectTimeMax_ReturnValue;
	Parms.CallFunc_GetEffectTime_ReturnValue = CallFunc_GetEffectTime_ReturnValue;
	Parms.CallFunc_GetCoolDownTime_ReturnValue = CallFunc_GetCoolDownTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Cool Down Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                 Now                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                 Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              CallFunc_Convert_FixedPointToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPointToFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Update_Cool_Down_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max, float CallFunc_Convert_FixedPointToFloat_ReturnValue, float CallFunc_Convert_FixedPointToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Update Cool Down Time");

	Params::UWBP_PartnerSkillInfo_C_Update_Cool_Down_Time_Params Parms{};

	Parms.Now = Now;
	Parms.Max = Max;
	Parms.CallFunc_Convert_FixedPointToFloat_ReturnValue = CallFunc_Convert_FixedPointToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPointToFloat_ReturnValue_1 = CallFunc_Convert_FixedPointToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Effect Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                 Now                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                 Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              CallFunc_Convert_FixedPointToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPointToFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Update_Effect_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max, float CallFunc_Convert_FixedPointToFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Convert_FixedPointToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Update Effect Time");

	Params::UWBP_PartnerSkillInfo_C_Update_Effect_Time_Params Parms{};

	Parms.Now = Now;
	Parms.Max = Max;
	Parms.CallFunc_Convert_FixedPointToFloat_ReturnValue = CallFunc_Convert_FixedPointToFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPointToFloat_ReturnValue_1 = CallFunc_Convert_FixedPointToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Get Partner Skill Name Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        SkillNameText                                                    (Parm, OutParm)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetOtomoPalHolder_OtomoPalHolder                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetOtomoPalHolder_OtomoPalHolder_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPartnerSkillMsgID_OutMsgID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)

void UWBP_PartnerSkillInfo_C::Get_Partner_Skill_Name_Text(class FText* SkillNameText, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, bool CallFunc_IsValid_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder_1, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_GetCharacterID_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, class FText CallFunc_GetLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Get Partner Skill Name Text");

	Params::UWBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text_Params Parms{};

	Parms.CallFunc_GetOtomoPalHolder_OtomoPalHolder = CallFunc_GetOtomoPalHolder_OtomoPalHolder;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetOtomoPalHolder_OtomoPalHolder_1 = CallFunc_GetOtomoPalHolder_OtomoPalHolder_1;
	Parms.CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo = CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName = CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName;
	Parms.CallFunc_GetPartnerSkillMsgID_OutMsgID = CallFunc_GetPartnerSkillMsgID_OutMsgID;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillNameText != nullptr)
		*SkillNameText = Parms.SkillNameText;

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetPartnerSkillParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalPartnerSkillParameterComponent*PartnerSkillParameter                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetOtomoPalHolder_OtomoPalHolder                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetOtomoPalHolder_OtomoPalHolder_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent** PartnerSkillParameter, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "GetPartnerSkillParameter");

	Params::UWBP_PartnerSkillInfo_C_GetPartnerSkillParameter_Params Parms{};

	Parms.CallFunc_GetOtomoPalHolder_OtomoPalHolder = CallFunc_GetOtomoPalHolder_OtomoPalHolder;
	Parms.CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo = CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;
	Parms.CallFunc_GetOtomoPalHolder_OtomoPalHolder_1 = CallFunc_GetOtomoPalHolder_OtomoPalHolder_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartnerSkillParameter != nullptr)
		*PartnerSkillParameter = Parms.PartnerSkillParameter;

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetOtomoPalHolder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_OtomoPalHolderComponent_C*OtomoPalHolder                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C** OtomoPalHolder, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "GetOtomoPalHolder");

	Params::UWBP_PartnerSkillInfo_C_GetOtomoPalHolder_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OtomoPalHolder != nullptr)
		*OtomoPalHolder = Parms.OtomoPalHolder;

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnActivateOtomo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::OnActivateOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnActivateOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnInactiveOtomo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::OnInactiveOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnInactiveOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.TriggerInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::TriggerInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "TriggerInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ReleaseInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::ReleaseInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ReleaseInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PartnerSkillInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.AnmEvent_HideShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::AnmEvent_HideShow(bool Hide, bool Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "AnmEvent_HideShow");

	Params::UWBP_PartnerSkillInfo_C_AnmEvent_HideShow_Params Parms{};

	Parms.Hide = Hide;
	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ExecuteUbergraph_WBP_PartnerSkillInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue_2                  (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetPartnerSkillParameter_PartnerSkillParameter          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistActiveSkill_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistActiveSkill_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hide                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Override                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsExistActiveSkill_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExistActiveSkill_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Hide, bool K2Node_CustomEvent_Override, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ExecuteUbergraph_WBP_PartnerSkillInfo");

	Params::UWBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue_1 = CallFunc_K2_InvalidateTimerHandle_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue_2 = CallFunc_K2_InvalidateTimerHandle_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPartnerSkillParameter_PartnerSkillParameter = CallFunc_GetPartnerSkillParameter_PartnerSkillParameter;
	Parms.CallFunc_IsExistActiveSkill_ReturnValue = CallFunc_IsExistActiveSkill_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsExistActiveSkill_ReturnValue_1 = CallFunc_IsExistActiveSkill_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Hide = K2Node_CustomEvent_Hide;
	Parms.K2Node_CustomEvent_Override = K2Node_CustomEvent_Override;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


