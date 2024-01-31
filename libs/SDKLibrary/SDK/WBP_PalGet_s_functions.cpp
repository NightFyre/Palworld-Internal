#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalGet_s.WBP_PalGet_s_C
// (None)

class UClass* UWBP_PalGet_s_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalGet_s_C");

	return Clss;
}


// WBP_PalGet_s_C WBP_PalGet_s.Default__WBP_PalGet_s_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalGet_s_C* UWBP_PalGet_s_C::GetDefaultObj()
{
	static class UWBP_PalGet_s_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalGet_s_C*>(UWBP_PalGet_s_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalGet_s.WBP_PalGet_s_C.ClearAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalGet_s_C::ClearAdditionalText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "ClearAdditionalText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalGet_s_C::SetAdditionalText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetAdditionalText");

	Params::UWBP_PalGet_s_C_SetAdditionalText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByCaptureInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo        CaptureInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedCharacterName_OutText                       (None)

void UWBP_PalGet_s_C::SetupByCaptureInfo(const struct FPalUIPalCaptureInfo& CaptureInfo, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetupByCaptureInfo");

	Params::UWBP_PalGet_s_C_SetupByCaptureInfo_Params Parms{};

	Parms.CaptureInfo = CaptureInfo;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetLocalizedCharacterName_OutText = CallFunc_GetLocalizedCharacterName_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.DisplayCaptureMessage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFirstCapture                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_1                          (None)

void UWBP_PalGet_s_C::DisplayCaptureMessage(bool IsFirstCapture, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "DisplayCaptureMessage");

	Params::UWBP_PalGet_s_C_DisplayCaptureMessage_Params Parms{};

	Parms.IsFirstCapture = IsFirstCapture;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue_1 = CallFunc_GetLocalizedText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByTargetHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisibleLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGet_s_C::SetupByTargetHandle(class UPalIndividualCharacterHandle* Handle, bool IsVisibleLevel, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetNickName_outName, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "SetupByTargetHandle");

	Params::UWBP_PalGet_s_C_SetupByTargetHandle_Params Parms{};

	Parms.Handle = Handle;
	Parms.IsVisibleLevel = IsVisibleLevel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalGet_s_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "AnmEvent_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalGet_s_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "AnmEvent_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.OnOpenAnimeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalGet_s_C::OnOpenAnimeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "OnOpenAnimeFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalGet_s_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalGet_s.WBP_PalGet_s_C.ExecuteUbergraph_WBP_PalGet_s
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGet_s_C::ExecuteUbergraph_WBP_PalGet_s(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGet_s_C", "ExecuteUbergraph_WBP_PalGet_s");

	Params::UWBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


