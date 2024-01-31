#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C
// (None)

class UClass* UWBP_Ingame_PalSkillGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_PalSkillGauge_C");

	return Clss;
}


// WBP_Ingame_PalSkillGauge_C WBP_Ingame_PalSkillGauge.Default__WBP_Ingame_PalSkillGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_PalSkillGauge_C* UWBP_Ingame_PalSkillGauge_C::GetDefaultObj()
{
	static class UWBP_Ingame_PalSkillGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_PalSkillGauge_C*>(UWBP_Ingame_PalSkillGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ShowFlyKeyGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::ShowFlyKeyGuide(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ShowFlyKeyGuide");

	Params::UWBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name Locked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Name_Locked(class FText CallFunc_GetLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Name Locked");

	Params::UWBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked_Params Parms{};

	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Hide Key Guide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Hide_Key_Guide(bool Hide, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Hide Key Guide");

	Params::UWBP_Ingame_PalSkillGauge_C_Hide_Key_Guide_Params Parms{};

	Parms.Hide = Hide;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SkillNameText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Name(class FText SkillNameText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Name");

	Params::UWBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Params Parms{};

	Parms.SkillNameText = SkillNameText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ClearIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::ClearIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ClearIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Setup Icon Texture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, TSoftObjectPtr<class UTexture2D>>SoftTextureMap                                                   (Edit, BlueprintVisible)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, TSoftObjectPtr<class UTexture2D>>K2Node_MakeVariable_MakeVariableOutput                           (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterIDFromCharacter_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPartnerSkillIcon_SoftIconTexture                     (HasGetValueTypeHash)
// bool                               CallFunc_GetPartnerSkillIcon_IsSquare                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Setup_Icon_Texture(TMap<class FName, TSoftObjectPtr<class UTexture2D>> SoftTextureMap, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, TMap<class FName, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput, bool Temp_bool_Variable_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterIDFromCharacter_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetPartnerSkillIcon_SoftIconTexture, bool CallFunc_GetPartnerSkillIcon_IsSquare, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Setup Icon Texture");

	Params::UWBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture_Params Parms{};

	Parms.SoftTextureMap = SoftTextureMap;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo = CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterIDFromCharacter_ReturnValue = CallFunc_GetCharacterIDFromCharacter_ReturnValue;
	Parms.CallFunc_GetPartnerSkillIcon_SoftIconTexture = CallFunc_GetPartnerSkillIcon_SoftIconTexture;
	Parms.CallFunc_GetPartnerSkillIcon_IsSquare = CallFunc_GetPartnerSkillIcon_IsSquare;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Cool Down Gauge Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Set_Cool_Down_Gauge_Percent(double Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Cool Down Gauge Percent");

	Params::UWBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Gauge Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Gauge_Percent(double Percent, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Gauge Percent");

	Params::UWBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_SkillEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_SkillEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_SkillEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_CoolDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_CoolDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_CoolDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_CoolDownComplated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_CoolDownComplated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_CoolDownComplated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_Lock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_Lock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_Lock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_InputHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_InputHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_InputHold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_InputRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_InputRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_InputRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_StartSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_StartSkill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_StartSkill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_UsingSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TogglePlay                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_UsingSkill(bool TogglePlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_UsingSkill");

	Params::UWBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill_Params Parms{};

	Parms.TogglePlay = TogglePlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalSkillGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "OnInputMethodChanged");

	Params::UWBP_Ingame_PalSkillGauge_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ExecuteUbergraph_WBP_Ingame_PalSkillGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TogglePlay                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_8                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_9                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, enum class ECommonInputType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, bool K2Node_CustomEvent_TogglePlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ExecuteUbergraph_WBP_Ingame_PalSkillGauge");

	Params::UWBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.K2Node_CustomEvent_TogglePlay = K2Node_CustomEvent_TogglePlay;
	Parms.CallFunc_PlayAnimation_ReturnValue_8 = CallFunc_PlayAnimation_ReturnValue_8;
	Parms.CallFunc_PlayAnimation_ReturnValue_9 = CallFunc_PlayAnimation_ReturnValue_9;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


