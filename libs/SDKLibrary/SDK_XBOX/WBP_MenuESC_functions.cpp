#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MenuESC.WBP_MenuESC_C
// (None)

class UClass* UWBP_MenuESC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MenuESC_C");

	return Clss;
}


// WBP_MenuESC_C WBP_MenuESC.Default__WBP_MenuESC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MenuESC_C* UWBP_MenuESC_C::GetDefaultObj()
{
	static class UWBP_MenuESC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MenuESC_C*>(UWBP_MenuESC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MenuESC.WBP_MenuESC_C.CustomNavi_ToLeftMenuBottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuESC_C::CustomNavi_ToLeftMenuBottom(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "CustomNavi_ToLeftMenuBottom");

	Params::UWBP_MenuESC_C_CustomNavi_ToLeftMenuBottom_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MenuESC.WBP_MenuESC_C.CustomNavi_ToLeftMenuTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuESC_C::CustomNavi_ToLeftMenuTop(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "CustomNavi_ToLeftMenuTop");

	Params::UWBP_MenuESC_C_CustomNavi_ToLeftMenuTop_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MenuESC.WBP_MenuESC_C.CustomNavi_ToInviteCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInviteCode_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuESC_C::CustomNavi_ToInviteCode(enum class EUINavigation Navigation, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetInviteCode_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "CustomNavi_ToInviteCode");

	Params::UWBP_MenuESC_C_CustomNavi_ToInviteCode_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInviteCode_ReturnValue = CallFunc_GetInviteCode_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MenuESC.WBP_MenuESC_C.ProcessSaveReturn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSaveGameManager*         CallFunc_GetSaveGameManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWorldOwner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ProcessSaveReturn(class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue, bool CallFunc_IsWorldOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ProcessSaveReturn");

	Params::UWBP_MenuESC_C_ProcessSaveReturn_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSaveGameManager_ReturnValue = CallFunc_GetSaveGameManager_ReturnValue;
	Parms.CallFunc_IsWorldOwner_ReturnValue = CallFunc_IsWorldOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.SetInviteCodeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInviteCode_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_MenuESC_C::SetInviteCodeText(class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetInviteCode_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "SetInviteCodeText");

	Params::UWBP_MenuESC_C_SetInviteCodeText_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInviteCode_ReturnValue = CallFunc_GetInviteCode_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.ShowHideInviteCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ShowHideInviteCode(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ShowHideInviteCode");

	Params::UWBP_MenuESC_C_ShowHideInviteCode_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.CopyInviteCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInviteCode_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ClipboardCopy_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::CopyInviteCode(class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetInviteCode_ReturnValue, bool CallFunc_ClipboardCopy_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "CopyInviteCode");

	Params::UWBP_MenuESC_C_CopyInviteCode_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInviteCode_ReturnValue = CallFunc_GetInviteCode_ReturnValue;
	Parms.CallFunc_ClipboardCopy_ReturnValue = CallFunc_ClipboardCopy_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuESC_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_MenuESC_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MenuESC.WBP_MenuESC_C.ApplyWorldPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultySelectedDifficulty                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ApplyWorldPreset(const class FString& Difficulty, enum class EPalOptionWorldDifficulty SelectedDifficulty, bool K2Node_SwitchString_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ApplyWorldPreset");

	Params::UWBP_MenuESC_C_ApplyWorldPreset_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.SelectedDifficulty = SelectedDifficulty;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_2 = CallFunc_GetOptionSubsystem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.InitOptionFieldBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheckBox*                   CheckBox                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::InitOptionFieldBool(class UCheckBox* CheckBox, bool& CurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "InitOptionFieldBool");

	Params::UWBP_MenuESC_C_InitOptionFieldBool_Params Parms{};

	Parms.CheckBox = CheckBox;
	Parms.CurrentValue = CurrentValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.InitOptionFieldInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionValueInt          MinMaxValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USpinBox*                    SpinBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::InitOptionFieldInt(const struct FPalOptionValueInt& MinMaxValue, class USpinBox* SpinBox, int32& CurrentValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "InitOptionFieldInt");

	Params::UWBP_MenuESC_C_InitOptionFieldInt_Params Parms{};

	Parms.MinMaxValue = MinMaxValue;
	Parms.SpinBox = SpinBox;
	Parms.CurrentValue = CurrentValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.ApplyWorldSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ApplyWorldSettings(class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ApplyWorldSettings");

	Params::UWBP_MenuESC_C_ApplyWorldSettings_Params Parms{};

	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.InitOptionFieldFloat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionValueFloat        MinMaxValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USpinBox*                    SpinBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_NewValue_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::InitOptionFieldFloat(const struct FPalOptionValueFloat& MinMaxValue, class USpinBox* SpinBox, double& CurrentValue, float CallFunc_SetValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "InitOptionFieldFloat");

	Params::UWBP_MenuESC_C_InitOptionFieldFloat_Params Parms{};

	Parms.MinMaxValue = MinMaxValue;
	Parms.SpinBox = SpinBox;
	Parms.CurrentValue = CurrentValue;
	Parms.CallFunc_SetValue_NewValue_ImplicitCast = CallFunc_SetValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.SetupWorldOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldStaticSettingsStaticSettings                                                   (Edit, BlueprintVisible, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldStaticSettingsCallFunc_GetOptionWorldStaticSettings_ReturnValue                (ConstParm, NoDestructor)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_5        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_6        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_7        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_8        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_9        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_10       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_11       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_12       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_13       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_14       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_15       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_16       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_17       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_18       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_19       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_20       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_21       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::SetupWorldOptions(const struct FPalOptionWorldStaticSettings& StaticSettings, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, const struct FPalOptionWorldStaticSettings& CallFunc_GetOptionWorldStaticSettings_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_1, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_2, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_3, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_4, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_5, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_6, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_7, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_8, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_9, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_10, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_11, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_12, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_13, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_14, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_15, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_16, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_17, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_18, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_19, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_20, double CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "SetupWorldOptions");

	Params::UWBP_MenuESC_C_SetupWorldOptions_Params Parms{};

	Parms.StaticSettings = StaticSettings;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;
	Parms.CallFunc_GetOptionWorldStaticSettings_ReturnValue = CallFunc_GetOptionWorldStaticSettings_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_2 = CallFunc_GetOptionSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_1 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_1;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_2 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_2;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_3 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_3;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_4 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_4;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_5 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_5;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_6 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_6;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_7 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_7;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_8 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_8;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_9 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_9;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_10 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_10;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_11 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_11;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_12 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_12;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_13 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_13;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_14 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_14;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_15 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_15;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_16 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_16;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_17 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_17;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_18 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_18;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_19 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_19;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_20 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_20;
	Parms.CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_21 = CallFunc_InitOptionFieldFloat_CurrentValue_ImplicitCast_21;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MenuESC_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MenuESC.WBP_MenuESC_C.OnClickedButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalEscMenuType        MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::OnClickedButton(enum class E_PalEscMenuType MenuType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "OnClickedButton");

	Params::UWBP_MenuESC_C_OnClickedButton_Params Parms{};

	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.OnKillExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MenuESC_C::OnKillExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "OnKillExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MenuESC.WBP_MenuESC_C.ConfirmKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirm                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ConfirmKill(bool Confirm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ConfirmKill");

	Params::UWBP_MenuESC_C_ConfirmKill_Params Parms{};

	Parms.Confirm = Confirm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.OnReturn2Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MenuESC_C::OnReturn2Title()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "OnReturn2Title");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MenuESC.WBP_MenuESC_C.ConfirmReturnTitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirm                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ConfirmReturnTitle(bool Confirm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ConfirmReturnTitle");

	Params::UWBP_MenuESC_C_ConfirmReturnTitle_Params Parms{};

	Parms.Confirm = Confirm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MenuESC_C_BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MenuESC.WBP_MenuESC_C.UpdateRTT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MenuESC_C::UpdateRTT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "UpdateRTT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MenuESC.WBP_MenuESC_C.ExecuteUbergraph_WBP_MenuESC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientDedicatedServer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInviteCode_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PalEscMenuType        K2Node_CustomEvent_MenuType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MenuESC_Button_C*       K2Node_DynamicCast_AsWBP_Menu_ESC_Button                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirm_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirm                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCanOpenExternalWebSite_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalGameStateInGame*         CallFunc_GetPalGameStateInGame_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxPlayerNum_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayers_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_IsInClientConnection_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPingInMilliseconds_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerListItem_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPlayerListDisplayMessages_ReturnValue                (ReferenceParm)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRTTJitter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetTelemetryUserId_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetTelemetrySessionId_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetInPacketLoss_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// float                              CallFunc_GetOutPacketLoss_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FString                      CallFunc_GetServerWorldDisplayName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class APalGameStateInGame*         CallFunc_GetPalGameStateInGame_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXB1_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerFrameTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuESC_C::ExecuteUbergraph_WBP_MenuESC(int32 EntryPoint, bool CallFunc_IsClientDedicatedServer_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetInviteCode_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class E_PalEscMenuType K2Node_CustomEvent_MenuType, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, float K2Node_ComponentBoundEvent_InValue_23, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_23, float K2Node_ComponentBoundEvent_InValue_22, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_22, float K2Node_ComponentBoundEvent_InValue_21, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_21, float K2Node_ComponentBoundEvent_InValue_20, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_20, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_ComponentBoundEvent_InValue_19, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_19, float K2Node_ComponentBoundEvent_InValue_18, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_18, float K2Node_ComponentBoundEvent_InValue_17, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_17, float K2Node_ComponentBoundEvent_InValue_16, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_16, float K2Node_ComponentBoundEvent_InValue_15, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_15, float K2Node_ComponentBoundEvent_InValue_14, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_14, float K2Node_ComponentBoundEvent_InValue_13, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_13, float K2Node_ComponentBoundEvent_InValue_12, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_12, float K2Node_ComponentBoundEvent_InValue_11, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_11, float K2Node_ComponentBoundEvent_InValue_10, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_10, float K2Node_ComponentBoundEvent_InValue_9, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_9, float K2Node_ComponentBoundEvent_InValue_8, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_8, float K2Node_ComponentBoundEvent_InValue_7, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_7, float K2Node_ComponentBoundEvent_InValue_6, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_6, float K2Node_ComponentBoundEvent_InValue_5, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_5, float K2Node_ComponentBoundEvent_InValue_4, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_4, float K2Node_ComponentBoundEvent_InValue_3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_3, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, bool K2Node_ComponentBoundEvent_bIsChecked_4, bool K2Node_ComponentBoundEvent_bIsChecked_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, float K2Node_ComponentBoundEvent_InValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_Push_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, class UWBP_MenuESC_Button_C* K2Node_DynamicCast_AsWBP_Menu_ESC_Button, bool K2Node_DynamicCast_bSuccess, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Confirm_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, const struct FGuid& CallFunc_Push_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Confirm, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCanOpenExternalWebSite_ReturnValue, bool CallFunc_IsUGCFilter_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class APalGameStateInGame* CallFunc_GetPalGameStateInGame_ReturnValue, int32 CallFunc_GetMaxPlayerNum_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsInClientConnection_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, float CallFunc_GetPingInMilliseconds_ReturnValue, bool CallFunc_IsMultiplayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UWBP_PlayerListItem_C* CallFunc_Create_ReturnValue, TArray<class FString>& CallFunc_GetPlayerListDisplayMessages_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetRTTJitter_ReturnValue, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetTelemetryUserId_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const class FString& CallFunc_GetTelemetrySessionId_ReturnValue, float CallFunc_GetInPacketLoss_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, float CallFunc_GetOutPacketLoss_ReturnValue, class FText CallFunc_Format_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_GetServerWorldDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, class APalGameStateInGame* CallFunc_GetPalGameStateInGame_ReturnValue_1, bool CallFunc_IsXB1_ReturnValue, float CallFunc_GetServerFrameTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, enum class ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, int32 Temp_int_Loop_Counter_Variable_1, class FText CallFunc_Format_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MenuESC_C", "ExecuteUbergraph_WBP_MenuESC");

	Params::UWBP_MenuESC_C_ExecuteUbergraph_WBP_MenuESC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsClientDedicatedServer_ReturnValue = CallFunc_IsClientDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetInviteCode_ReturnValue = CallFunc_GetInviteCode_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_MenuType = K2Node_CustomEvent_MenuType;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InValue_23 = K2Node_ComponentBoundEvent_InValue_23;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_23 = K2Node_ComponentBoundEvent_CommitMethod_23;
	Parms.K2Node_ComponentBoundEvent_InValue_22 = K2Node_ComponentBoundEvent_InValue_22;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_22 = K2Node_ComponentBoundEvent_CommitMethod_22;
	Parms.K2Node_ComponentBoundEvent_InValue_21 = K2Node_ComponentBoundEvent_InValue_21;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_21 = K2Node_ComponentBoundEvent_CommitMethod_21;
	Parms.K2Node_ComponentBoundEvent_InValue_20 = K2Node_ComponentBoundEvent_InValue_20;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_20 = K2Node_ComponentBoundEvent_CommitMethod_20;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InValue_19 = K2Node_ComponentBoundEvent_InValue_19;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_19 = K2Node_ComponentBoundEvent_CommitMethod_19;
	Parms.K2Node_ComponentBoundEvent_InValue_18 = K2Node_ComponentBoundEvent_InValue_18;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_18 = K2Node_ComponentBoundEvent_CommitMethod_18;
	Parms.K2Node_ComponentBoundEvent_InValue_17 = K2Node_ComponentBoundEvent_InValue_17;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_17 = K2Node_ComponentBoundEvent_CommitMethod_17;
	Parms.K2Node_ComponentBoundEvent_InValue_16 = K2Node_ComponentBoundEvent_InValue_16;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_16 = K2Node_ComponentBoundEvent_CommitMethod_16;
	Parms.K2Node_ComponentBoundEvent_InValue_15 = K2Node_ComponentBoundEvent_InValue_15;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_15 = K2Node_ComponentBoundEvent_CommitMethod_15;
	Parms.K2Node_ComponentBoundEvent_InValue_14 = K2Node_ComponentBoundEvent_InValue_14;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_14 = K2Node_ComponentBoundEvent_CommitMethod_14;
	Parms.K2Node_ComponentBoundEvent_InValue_13 = K2Node_ComponentBoundEvent_InValue_13;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_13 = K2Node_ComponentBoundEvent_CommitMethod_13;
	Parms.K2Node_ComponentBoundEvent_InValue_12 = K2Node_ComponentBoundEvent_InValue_12;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_12 = K2Node_ComponentBoundEvent_CommitMethod_12;
	Parms.K2Node_ComponentBoundEvent_InValue_11 = K2Node_ComponentBoundEvent_InValue_11;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_11 = K2Node_ComponentBoundEvent_CommitMethod_11;
	Parms.K2Node_ComponentBoundEvent_InValue_10 = K2Node_ComponentBoundEvent_InValue_10;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_10 = K2Node_ComponentBoundEvent_CommitMethod_10;
	Parms.K2Node_ComponentBoundEvent_InValue_9 = K2Node_ComponentBoundEvent_InValue_9;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_9 = K2Node_ComponentBoundEvent_CommitMethod_9;
	Parms.K2Node_ComponentBoundEvent_InValue_8 = K2Node_ComponentBoundEvent_InValue_8;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_8 = K2Node_ComponentBoundEvent_CommitMethod_8;
	Parms.K2Node_ComponentBoundEvent_InValue_7 = K2Node_ComponentBoundEvent_InValue_7;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_7 = K2Node_ComponentBoundEvent_CommitMethod_7;
	Parms.K2Node_ComponentBoundEvent_InValue_6 = K2Node_ComponentBoundEvent_InValue_6;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_6 = K2Node_ComponentBoundEvent_CommitMethod_6;
	Parms.K2Node_ComponentBoundEvent_InValue_5 = K2Node_ComponentBoundEvent_InValue_5;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_5 = K2Node_ComponentBoundEvent_CommitMethod_5;
	Parms.K2Node_ComponentBoundEvent_InValue_4 = K2Node_ComponentBoundEvent_InValue_4;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_4 = K2Node_ComponentBoundEvent_CommitMethod_4;
	Parms.K2Node_ComponentBoundEvent_InValue_3 = K2Node_ComponentBoundEvent_InValue_3;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_3 = K2Node_ComponentBoundEvent_CommitMethod_3;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_4 = K2Node_ComponentBoundEvent_bIsChecked_4;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_3 = K2Node_ComponentBoundEvent_bIsChecked_3;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Menu_ESC_Button = K2Node_DynamicCast_AsWBP_Menu_ESC_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Confirm_1 = K2Node_CustomEvent_Confirm_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetHUDService_ReturnValue_2 = CallFunc_GetHUDService_ReturnValue_2;
	Parms.CallFunc_Push_ReturnValue_2 = CallFunc_Push_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Confirm = K2Node_CustomEvent_Confirm;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetHUDService_ReturnValue_3 = CallFunc_GetHUDService_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_4 = CallFunc_GetHUDService_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCanOpenExternalWebSite_ReturnValue = CallFunc_IsCanOpenExternalWebSite_ReturnValue;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetPalGameStateInGame_ReturnValue = CallFunc_GetPalGameStateInGame_ReturnValue;
	Parms.CallFunc_GetMaxPlayerNum_ReturnValue = CallFunc_GetMaxPlayerNum_ReturnValue;
	Parms.CallFunc_GetNumPlayers_ReturnValue = CallFunc_GetNumPlayers_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_IsInClientConnection_ReturnValue = CallFunc_IsInClientConnection_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetPingInMilliseconds_ReturnValue = CallFunc_GetPingInMilliseconds_ReturnValue;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerListDisplayMessages_ReturnValue = CallFunc_GetPlayerListDisplayMessages_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_2 = CallFunc_GetLocalPlayerController_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetRTTJitter_ReturnValue = CallFunc_GetRTTJitter_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetTelemetryUserId_ReturnValue = CallFunc_GetTelemetryUserId_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetTelemetrySessionId_ReturnValue = CallFunc_GetTelemetrySessionId_ReturnValue;
	Parms.CallFunc_GetInPacketLoss_ReturnValue = CallFunc_GetInPacketLoss_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetOutPacketLoss_ReturnValue = CallFunc_GetOutPacketLoss_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_GetServerWorldDisplayName_ReturnValue = CallFunc_GetServerWorldDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_GetPalGameStateInGame_ReturnValue_1 = CallFunc_GetPalGameStateInGame_ReturnValue_1;
	Parms.CallFunc_IsXB1_ReturnValue = CallFunc_IsXB1_ReturnValue;
	Parms.CallFunc_GetServerFrameTime_ReturnValue = CallFunc_GetServerFrameTime_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast_2 = CallFunc_FTrunc_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


