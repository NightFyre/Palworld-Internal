#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Sound_Settings.WBP_Sound_Settings_C
// (None)

class UClass* UWBP_Sound_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Sound_Settings_C");

	return Clss;
}


// WBP_Sound_Settings_C WBP_Sound_Settings.Default__WBP_Sound_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Sound_Settings_C* UWBP_Sound_Settings_C::GetDefaultObj()
{
	static class UWBP_Sound_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Sound_Settings_C*>(UWBP_Sound_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Sound_Settings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnMasterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnMasterChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnMasterChanged");

	Params::UWBP_Sound_Settings_C_OnMasterChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnBGMChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnBGMChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnBGMChanged");

	Params::UWBP_Sound_Settings_C_OnBGMChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnSEChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnSEChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnSEChanged");

	Params::UWBP_Sound_Settings_C_OnSEChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ApplyOriginal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::ApplySettings(bool ApplyOriginal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "ApplySettings");

	Params::UWBP_Sound_Settings_C_ApplySettings_Params Parms{};

	Parms.ApplyOriginal = ApplyOriginal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Sound_Settings_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnPalVoiceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnPalVoiceChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnPalVoiceChanged");

	Params::UWBP_Sound_Settings_C_OnPalVoiceChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnHumanVoiceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnHumanVoiceChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnHumanVoiceChanged");

	Params::UWBP_Sound_Settings_C_OnHumanVoiceChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnAmbientChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnAmbientChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnAmbientChanged");

	Params::UWBP_Sound_Settings_C_OnAmbientChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.OnUIChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::OnUIChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "OnUIChanged");

	Params::UWBP_Sound_Settings_C_OnUIChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Sound_Settings.WBP_Sound_Settings_C.ExecuteUbergraph_WBP_Sound_Settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ApplyOriginal                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionAudioSettings     CallFunc_GetAudioSettings_ReturnValue                            (ConstParm, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionAudioSettings     K2Node_MakeStruct_PalOptionAudioSettings                         (NoDestructor)
// double                             K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Master_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BGM_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_SE_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalVoice_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HumanVoice_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Ambient_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_UI_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Sound_Settings_C::ExecuteUbergraph_WBP_Sound_Settings(int32 EntryPoint, double K2Node_CustomEvent_Value_6, double K2Node_CustomEvent_Value_5, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_CustomEvent_Value_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool K2Node_CustomEvent_ApplyOriginal, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionAudioSettings& CallFunc_GetAudioSettings_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, const struct FPalOptionAudioSettings& K2Node_MakeStruct_PalOptionAudioSettings, double K2Node_CustomEvent_Value_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double K2Node_CustomEvent_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double K2Node_CustomEvent_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double K2Node_CustomEvent_Value, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, double CallFunc_Multiply_DoubleDouble_ReturnValue_15, double CallFunc_Multiply_DoubleDouble_ReturnValue_16, double CallFunc_Multiply_DoubleDouble_ReturnValue_17, double CallFunc_Multiply_DoubleDouble_ReturnValue_18, double CallFunc_Multiply_DoubleDouble_ReturnValue_19, double CallFunc_Multiply_DoubleDouble_ReturnValue_20, float K2Node_SetFieldsInStruct_Master_ImplicitCast, float K2Node_SetFieldsInStruct_BGM_ImplicitCast, float K2Node_SetFieldsInStruct_SE_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, float K2Node_SetFieldsInStruct_PalVoice_ImplicitCast, float K2Node_SetFieldsInStruct_HumanVoice_ImplicitCast, float K2Node_SetFieldsInStruct_Ambient_ImplicitCast, float K2Node_SetFieldsInStruct_UI_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_10, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_11, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_12, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Sound_Settings_C", "ExecuteUbergraph_WBP_Sound_Settings");

	Params::UWBP_Sound_Settings_C_ExecuteUbergraph_WBP_Sound_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value_6 = K2Node_CustomEvent_Value_6;
	Parms.K2Node_CustomEvent_Value_5 = K2Node_CustomEvent_Value_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value_4 = K2Node_CustomEvent_Value_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.K2Node_CustomEvent_ApplyOriginal = K2Node_CustomEvent_ApplyOriginal;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetAudioSettings_ReturnValue = CallFunc_GetAudioSettings_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.K2Node_MakeStruct_PalOptionAudioSettings = K2Node_MakeStruct_PalOptionAudioSettings;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_2 = CallFunc_GetOptionSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_14 = CallFunc_Multiply_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_15 = CallFunc_Multiply_DoubleDouble_ReturnValue_15;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_16 = CallFunc_Multiply_DoubleDouble_ReturnValue_16;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_17 = CallFunc_Multiply_DoubleDouble_ReturnValue_17;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_18 = CallFunc_Multiply_DoubleDouble_ReturnValue_18;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_19 = CallFunc_Multiply_DoubleDouble_ReturnValue_19;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_20 = CallFunc_Multiply_DoubleDouble_ReturnValue_20;
	Parms.K2Node_SetFieldsInStruct_Master_ImplicitCast = K2Node_SetFieldsInStruct_Master_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BGM_ImplicitCast = K2Node_SetFieldsInStruct_BGM_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_SE_ImplicitCast = K2Node_SetFieldsInStruct_SE_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_PalVoice_ImplicitCast = K2Node_SetFieldsInStruct_PalVoice_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_HumanVoice_ImplicitCast = K2Node_SetFieldsInStruct_HumanVoice_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Ambient_ImplicitCast = K2Node_SetFieldsInStruct_Ambient_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_UI_ImplicitCast = K2Node_SetFieldsInStruct_UI_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_10 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_10;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_11 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_11;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_12 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_12;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_13 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_13;

	UObject::ProcessEvent(Func, &Parms);

}

}


