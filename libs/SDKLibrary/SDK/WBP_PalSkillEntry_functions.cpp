#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalSkillEntry.WBP_PalSkillEntry_C
// (None)

class UClass* UWBP_PalSkillEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalSkillEntry_C");

	return Clss;
}


// WBP_PalSkillEntry_C WBP_PalSkillEntry.Default__WBP_PalSkillEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalSkillEntry_C* UWBP_PalSkillEntry_C::GetDefaultObj()
{
	static class UWBP_PalSkillEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalSkillEntry_C*>(UWBP_PalSkillEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CoolRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCoolDown_Cool_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::CREATEDELEGATE_PROXYFUNCTION_0(float CoolRate, double CallFunc_UpdateCoolDown_Cool_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.CoolRate = CoolRate;
	Parms.CallFunc_UpdateCoolDown_Cool_ImplicitCast = CallFunc_UpdateCoolDown_Cool_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalSkillEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ActivateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalSkillEntry_C::ActivateEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ActivateEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.SetSkillText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SkillName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalSkillEntry_C::SetSkillText(class FText SkillName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "SetSkillText");

	Params::UWBP_PalSkillEntry_C_SetSkillText_Params Parms{};

	Parms.SkillName = SkillName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CoolStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalSkillEntry_C::CoolStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CoolStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CoolFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalSkillEntry_C::CoolFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CoolFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.UpdateCoolDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::UpdateCoolDown(double Cool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "UpdateCoolDown");

	Params::UWBP_PalSkillEntry_C_UpdateCoolDown_Params Parms{};

	Parms.Cool = Cool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCooling                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::ToggleVisibility(bool IsCooling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ToggleVisibility");

	Params::UWBP_PalSkillEntry_C_ToggleVisibility_Params Parms{};

	Parms.IsCooling = IsCooling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActiveSkill*             ActiveSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::Setup(class UPalActiveSkill* ActiveSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "Setup");

	Params::UWBP_PalSkillEntry_C_Setup_Params Parms{};

	Parms.ActiveSkill = ActiveSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActiveSkill*             ActiveSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::Unbind(class UPalActiveSkill* ActiveSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "Unbind");

	Params::UWBP_PalSkillEntry_C_Unbind_Params Parms{};

	Parms.ActiveSkill = ActiveSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.LongPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::LongPress(bool Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "LongPress");

	Params::UWBP_PalSkillEntry_C_LongPress_Params Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ExecuteUbergraph_WBP_PalSkillEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_SkillName                                     (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Cool                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCooling                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActiveSkill*             K2Node_CustomEvent_ActiveSkill_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCoolTimeFinish_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActiveSkill*             K2Node_CustomEvent_ActiveSkill                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Start                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::ExecuteUbergraph_WBP_PalSkillEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_CustomEvent_SkillName, bool Temp_bool_Variable_2, double K2Node_CustomEvent_Cool, bool K2Node_CustomEvent_IsCooling, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class UPalActiveSkill* K2Node_CustomEvent_ActiveSkill_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsCoolTimeFinish_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ESlateVisibility Temp_byte_Variable_4, class UPalActiveSkill* K2Node_CustomEvent_ActiveSkill, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool K2Node_CustomEvent_Start, enum class ESlateVisibility K2Node_Select_Default_2, enum class EUMGSequencePlayMode K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ExecuteUbergraph_WBP_PalSkillEntry");

	Params::UWBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_SkillName = K2Node_CustomEvent_SkillName;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_Cool = K2Node_CustomEvent_Cool;
	Parms.K2Node_CustomEvent_IsCooling = K2Node_CustomEvent_IsCooling;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_ActiveSkill_1 = K2Node_CustomEvent_ActiveSkill_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsCoolTimeFinish_ReturnValue = CallFunc_IsCoolTimeFinish_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_ActiveSkill = K2Node_CustomEvent_ActiveSkill;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CustomEvent_Start = K2Node_CustomEvent_Start;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


