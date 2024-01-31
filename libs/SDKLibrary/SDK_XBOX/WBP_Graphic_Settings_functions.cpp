#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Graphic_Settings.WBP_Graphic_Settings_C
// (None)

class UClass* UWBP_Graphic_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Graphic_Settings_C");

	return Clss;
}


// WBP_Graphic_Settings_C WBP_Graphic_Settings.Default__WBP_Graphic_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Graphic_Settings_C* UWBP_Graphic_Settings_C::GetDefaultObj()
{
	static class UWBP_Graphic_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Graphic_Settings_C*>(UWBP_Graphic_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Graphic_Settings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnPresetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnPresetChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnPresetChanged");

	Params::UWBP_Graphic_Settings_C_OnPresetChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnWindowChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnWindowChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnWindowChanged");

	Params::UWBP_Graphic_Settings_C_OnWindowChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnResolutionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnResolutionChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnResolutionChanged");

	Params::UWBP_Graphic_Settings_C_OnResolutionChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnVSyncChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnVSyncChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnVSyncChanged");

	Params::UWBP_Graphic_Settings_C_OnVSyncChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnMotionBlurChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnMotionBlurChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnMotionBlurChanged");

	Params::UWBP_Graphic_Settings_C_OnMotionBlurChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnAAChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnAAChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnAAChanged");

	Params::UWBP_Graphic_Settings_C_OnAAChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnCameraShakeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnCameraShakeChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnCameraShakeChanged");

	Params::UWBP_Graphic_Settings_C_OnCameraShakeChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnCameraRecoilChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnCameraRecoilChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnCameraRecoilChanged");

	Params::UWBP_Graphic_Settings_C_OnCameraRecoilChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnFOVChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnFOVChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnFOVChanged");

	Params::UWBP_Graphic_Settings_C_OnFOVChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnLODChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnLODChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnLODChanged");

	Params::UWBP_Graphic_Settings_C_OnLODChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnViewDisChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnViewDisChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnViewDisChanged");

	Params::UWBP_Graphic_Settings_C_OnViewDisChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnFoliageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnFoliageChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnFoliageChanged");

	Params::UWBP_Graphic_Settings_C_OnFoliageChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnShadowChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnShadowChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnShadowChanged");

	Params::UWBP_Graphic_Settings_C_OnShadowChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnBrightnessChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnBrightnessChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnBrightnessChanged");

	Params::UWBP_Graphic_Settings_C_OnBrightnessChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnAutoContrastChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnAutoContrastChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnAutoContrastChanged");

	Params::UWBP_Graphic_Settings_C_OnAutoContrastChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnTextureChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnTextureChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnTextureChanged");

	Params::UWBP_Graphic_Settings_C_OnTextureChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Graphic_Settings_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "ApplySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Graphic_Settings_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnRideCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnRideCameraChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnRideCameraChanged");

	Params::UWBP_Graphic_Settings_C_OnRideCameraChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnDLSSChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLSSLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnDLSSChanged(int32 DLSSLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnDLSSChanged");

	Params::UWBP_Graphic_Settings_C_OnDLSSChanged_Params Parms{};

	Parms.DLSSLevel = DLSSLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnMaxFPSChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnMaxFPSChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnMaxFPSChanged");

	Params::UWBP_Graphic_Settings_C_OnMaxFPSChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.OnCommonQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::OnCommonQualityChanged(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "OnCommonQualityChanged");

	Params::UWBP_Graphic_Settings_C_OnCommonQualityChanged_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Graphic_Settings.WBP_Graphic_Settings_C.ExecuteUbergraph_WBP_Graphic_Settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionLocalStaticSettingsCallFunc_GetOptionLocalStaticSettings_ReturnValue                (ConstParm, NoDestructor)
// struct FPalOptionGraphicsSettings  CallFunc_GetGraphicsSettings_ReturnValue                         (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DLSSLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAntiAliasingMethod     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAntiAliasingMethod>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAntiAliasingMethod>CallFunc_Map_Values_Values_1                                     (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAntiAliasingMethod>CallFunc_Map_Values_Values_2                                     (ReferenceParm)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Values_Values_3                                     (ReferenceParm)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FPalOptionGraphicsSettings  K2Node_MakeStruct_PalOptionGraphicsSettings                      (NoDestructor)
// TMap<int32, class FString>         K2Node_MakeMap_Map                                               (None)
// struct FIntPoint                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_8                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportScreenSizes_SupportResolutions                (ReferenceParm)
// TArray<struct FIntPoint>           CallFunc_GetSupportScreenSizes_SupportResolutions_1              (ReferenceParm)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalSupportedPlatformTypeCallFunc_GetPlatformType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalSupportedPlatformTypeCallFunc_GetPlatformType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_9                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDLSSMode>      CallFunc_Map_Values_Values_4                                     (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDLSSMode              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDLSSMode>      CallFunc_Map_Values_Values_5                                     (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDLSSMode>      CallFunc_Map_Values_Values_6                                     (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LODBias_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Brightness_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalRideCameraLengthRate_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FOV_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Graphic_Settings_C::ExecuteUbergraph_WBP_Graphic_Settings(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Selection_9, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_CustomEvent_Selection_8, int32 K2Node_CustomEvent_Selection_7, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_IsON_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool K2Node_CustomEvent_IsON_3, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 K2Node_CustomEvent_Selection_6, bool K2Node_CustomEvent_IsON_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_CustomEvent_IsON_1, double K2Node_CustomEvent_Value_3, double K2Node_CustomEvent_Value_2, int32 K2Node_CustomEvent_Selection_5, int32 K2Node_CustomEvent_Selection_4, int32 K2Node_CustomEvent_Selection_3, double K2Node_CustomEvent_Value_1, bool K2Node_CustomEvent_IsON, int32 K2Node_CustomEvent_Selection_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FPalOptionLocalStaticSettings& CallFunc_GetOptionLocalStaticSettings_ReturnValue, const struct FPalOptionGraphicsSettings& CallFunc_GetGraphicsSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, enum class ESlateVisibility Temp_byte_Variable, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_2, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, enum class ESlateVisibility Temp_byte_Variable_1, double K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, int32 K2Node_CustomEvent_DLSSLevel, enum class EAntiAliasingMethod CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<enum class EAntiAliasingMethod>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Find_ReturnValue, TArray<enum class EAntiAliasingMethod>& CallFunc_Map_Values_Values_1, int32 CallFunc_Array_Find_ReturnValue_1, bool Temp_bool_Variable, TArray<enum class EAntiAliasingMethod>& CallFunc_Map_Values_Values_2, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_4, int32 CallFunc_Array_Find_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, TArray<class FString>& CallFunc_Map_Values_Values_3, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 K2Node_CustomEvent_Selection_1, int32 CallFunc_Array_Find_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, TArray<class FString>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FPalOptionGraphicsSettings& K2Node_MakeStruct_PalOptionGraphicsSettings, TMap<int32, class FString> K2Node_MakeMap_Map, const struct FIntPoint& CallFunc_Array_Get_Item_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_7, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_8, TArray<struct FIntPoint>& CallFunc_GetSupportScreenSizes_SupportResolutions, TArray<struct FIntPoint>& CallFunc_GetSupportScreenSizes_SupportResolutions_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, int32 K2Node_CustomEvent_Selection, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, const struct FIntPoint& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, const struct FIntPoint& K2Node_Select_Default_1, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_IsDLSSSupported_ReturnValue, TArray<enum class EUDLSSMode>& CallFunc_Map_Values_Values_4, int32 CallFunc_Array_Find_ReturnValue_5, enum class EUDLSSMode CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, TArray<enum class EUDLSSMode>& CallFunc_Map_Values_Values_5, int32 CallFunc_Array_Find_ReturnValue_6, TArray<enum class EUDLSSMode>& CallFunc_Map_Values_Values_6, int32 CallFunc_Array_Find_ReturnValue_7, bool CallFunc_IsDLSSSupported_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue_2, float K2Node_SetFieldsInStruct_LODBias_ImplicitCast, float K2Node_SetFieldsInStruct_Brightness_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_2, double CallFunc_Round_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_3, float K2Node_SetFieldsInStruct_PalRideCameraLengthRate_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast, double CallFunc_SetSlider_Max_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast_1, double CallFunc_SetSlider_Max_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_SetFieldsInStruct_FOV_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast_2, double CallFunc_SetSlider_Max_ImplicitCast_2, double CallFunc_SetSlider_Min_ImplicitCast_3, double CallFunc_SetSlider_Max_ImplicitCast_3, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_SetSlider_CurrentValue_ImplicitCast_4, double CallFunc_SetSlider_Min_ImplicitCast_4, double CallFunc_SetSlider_Max_ImplicitCast_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast_2, double CallFunc_SetSlider_Min_ImplicitCast_5, double CallFunc_SetSlider_Max_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Graphic_Settings_C", "ExecuteUbergraph_WBP_Graphic_Settings");

	Params::UWBP_Graphic_Settings_C_ExecuteUbergraph_WBP_Graphic_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Selection_9 = K2Node_CustomEvent_Selection_9;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Selection_8 = K2Node_CustomEvent_Selection_8;
	Parms.K2Node_CustomEvent_Selection_7 = K2Node_CustomEvent_Selection_7;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_IsON_4 = K2Node_CustomEvent_IsON_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsON_3 = K2Node_CustomEvent_IsON_3;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_CustomEvent_Selection_6 = K2Node_CustomEvent_Selection_6;
	Parms.K2Node_CustomEvent_IsON_2 = K2Node_CustomEvent_IsON_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_IsON_1 = K2Node_CustomEvent_IsON_1;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.K2Node_CustomEvent_Selection_5 = K2Node_CustomEvent_Selection_5;
	Parms.K2Node_CustomEvent_Selection_4 = K2Node_CustomEvent_Selection_4;
	Parms.K2Node_CustomEvent_Selection_3 = K2Node_CustomEvent_Selection_3;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_IsON = K2Node_CustomEvent_IsON;
	Parms.K2Node_CustomEvent_Selection_2 = K2Node_CustomEvent_Selection_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetOptionLocalStaticSettings_ReturnValue = CallFunc_GetOptionLocalStaticSettings_ReturnValue;
	Parms.CallFunc_GetGraphicsSettings_ReturnValue = CallFunc_GetGraphicsSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_2 = CallFunc_GetOptionSubsystem_ReturnValue_2;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_3 = CallFunc_GetOptionSubsystem_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_DLSSLevel = K2Node_CustomEvent_DLSSLevel;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Values_Values_2 = CallFunc_Map_Values_Values_2;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_4 = CallFunc_GetOptionSubsystem_ReturnValue_4;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_5 = CallFunc_GetOptionSubsystem_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_6 = CallFunc_GetOptionSubsystem_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Map_Values_Values_3 = CallFunc_Map_Values_Values_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_CustomEvent_Selection_1 = K2Node_CustomEvent_Selection_1;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_PalOptionGraphicsSettings = K2Node_MakeStruct_PalOptionGraphicsSettings;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_7 = CallFunc_GetOptionSubsystem_ReturnValue_7;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_8 = CallFunc_GetOptionSubsystem_ReturnValue_8;
	Parms.CallFunc_GetSupportScreenSizes_SupportResolutions = CallFunc_GetSupportScreenSizes_SupportResolutions;
	Parms.CallFunc_GetSupportScreenSizes_SupportResolutions_1 = CallFunc_GetSupportScreenSizes_SupportResolutions_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_Selection = K2Node_CustomEvent_Selection;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Find_ReturnValue_4 = CallFunc_Array_Find_ReturnValue_4;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetPlatformType_ReturnValue_1 = CallFunc_GetPlatformType_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_9 = CallFunc_GetOptionSubsystem_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_Map_Values_Values_4 = CallFunc_Map_Values_Values_4;
	Parms.CallFunc_Array_Find_ReturnValue_5 = CallFunc_Array_Find_ReturnValue_5;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Map_Values_Values_5 = CallFunc_Map_Values_Values_5;
	Parms.CallFunc_Array_Find_ReturnValue_6 = CallFunc_Array_Find_ReturnValue_6;
	Parms.CallFunc_Map_Values_Values_6 = CallFunc_Map_Values_Values_6;
	Parms.CallFunc_Array_Find_ReturnValue_7 = CallFunc_Array_Find_ReturnValue_7;
	Parms.CallFunc_IsDLSSSupported_ReturnValue_1 = CallFunc_IsDLSSSupported_ReturnValue_1;
	Parms.CallFunc_IsDLSSSupported_ReturnValue_2 = CallFunc_IsDLSSSupported_ReturnValue_2;
	Parms.K2Node_SetFieldsInStruct_LODBias_ImplicitCast = K2Node_SetFieldsInStruct_LODBias_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Brightness_ImplicitCast = K2Node_SetFieldsInStruct_Brightness_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast = CallFunc_SetSlider_CurrentValue_ImplicitCast;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_1 = CallFunc_SetSlider_CurrentValue_ImplicitCast_1;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_2 = CallFunc_SetSlider_CurrentValue_ImplicitCast_2;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_3 = CallFunc_SetSlider_CurrentValue_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_PalRideCameraLengthRate_ImplicitCast = K2Node_SetFieldsInStruct_PalRideCameraLengthRate_ImplicitCast;
	Parms.CallFunc_SetSlider_Min_ImplicitCast = CallFunc_SetSlider_Min_ImplicitCast;
	Parms.CallFunc_SetSlider_Max_ImplicitCast = CallFunc_SetSlider_Max_ImplicitCast;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_1 = CallFunc_SetSlider_Min_ImplicitCast_1;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_1 = CallFunc_SetSlider_Max_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FOV_ImplicitCast = K2Node_SetFieldsInStruct_FOV_ImplicitCast;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_2 = CallFunc_SetSlider_Min_ImplicitCast_2;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_2 = CallFunc_SetSlider_Max_ImplicitCast_2;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_3 = CallFunc_SetSlider_Min_ImplicitCast_3;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_3 = CallFunc_SetSlider_Max_ImplicitCast_3;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_4 = CallFunc_SetSlider_CurrentValue_ImplicitCast_4;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_4 = CallFunc_SetSlider_Min_ImplicitCast_4;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_4 = CallFunc_SetSlider_Max_ImplicitCast_4;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_2 = CallFunc_Add_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_5 = CallFunc_SetSlider_Min_ImplicitCast_5;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_5 = CallFunc_SetSlider_Max_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


