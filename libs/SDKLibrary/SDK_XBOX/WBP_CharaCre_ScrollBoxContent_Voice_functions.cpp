#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContent_Voice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContent_Voice_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContent_Voice_C WBP_CharaCre_ScrollBoxContent_Voice.Default__WBP_CharaCre_ScrollBoxContent_Voice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContent_Voice_C* UWBP_CharaCre_ScrollBoxContent_Voice_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContent_Voice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContent_Voice_C*>(UWBP_CharaCre_ScrollBoxContent_Voice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.PlaySampleVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// class UAkAudioEvent*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSoundPlayer*             CallFunc_GetSoundPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlaySound_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::PlaySampleVoice(int32 VoiceID, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, int32 Temp_int_Variable, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, class UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UPalSoundPlayer* CallFunc_GetSoundPlayer_ReturnValue, int32 CallFunc_PlaySound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "PlaySampleVoice");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_PlaySampleVoice_Params Parms{};

	Parms.VoiceID = VoiceID;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetSoundPlayer_ReturnValue = CallFunc_GetSoundPlayer_ReturnValue;
	Parms.CallFunc_PlaySound_ReturnValue = CallFunc_PlaySound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_DoubleToInt64_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint, double K2Node_ComponentBoundEvent_Value, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_DoubleToInt64_ReturnValue = CallFunc_Conv_DoubleToInt64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnChangedVoiceID__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Voice_C::OnChangedVoiceID__DelegateSignature(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Voice_C", "OnChangedVoiceID__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature_Params Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);

}

}


