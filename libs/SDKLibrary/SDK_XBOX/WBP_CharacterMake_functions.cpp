#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharacterMake.WBP_CharacterMake_C
// (None)

class UClass* UWBP_CharacterMake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharacterMake_C");

	return Clss;
}


// WBP_CharacterMake_C WBP_CharacterMake.Default__WBP_CharacterMake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharacterMake_C* UWBP_CharacterMake_C::GetDefaultObj()
{
	static class UWBP_CharacterMake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharacterMake_C*>(UWBP_CharacterMake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnTriggerPlaySampleVoice
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnTriggerPlaySampleVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnTriggerPlaySampleVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomVoiceID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              VoiceID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*CallFunc_GetWidgetByCategory_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContent_Voice_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Voice      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ToVoiceID_VoiceID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomVoiceID(int32* VoiceID, double CallFunc_RandomFloat_ReturnValue, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget, class UWBP_CharaCre_ScrollBoxContent_Voice_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Voice, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_ToVoiceID_VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomVoiceID");

	Params::UWBP_CharacterMake_C_GetRandomVoiceID_Params Parms{};

	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetWidgetByCategory_Widget = CallFunc_GetWidgetByCategory_Widget;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Voice = K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Voice;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ToVoiceID_VoiceID = CallFunc_ToVoiceID_VoiceID;

	UObject::ProcessEvent(Func, &Parms);

	if (VoiceID != nullptr)
		*VoiceID = Parms.VoiceID;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetNickname
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UPocketpairUserInfo*         CallFunc_GetLocalUserInfo_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickname_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetNickname(class FString* Name, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class UPocketpairUserInfo* CallFunc_GetLocalUserInfo_ReturnValue, const class FString& CallFunc_GetNickname_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetNickname");

	Params::UWBP_CharacterMake_C_GetNickname_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetLocalUserInfo_ReturnValue = CallFunc_GetLocalUserInfo_ReturnValue;
	Parms.CallFunc_GetNickname_ReturnValue = CallFunc_GetNickname_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.ApplyPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_GetPresetMakeInfo_OutMakeInfo                           (NoDestructor)
// class UBP_PalPlayerDataCharacterMake_C*K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_GetOriginalPresetMakeInfo_OutMakeInfo                   (NoDestructor)

void UWBP_CharacterMake_C::ApplyPreset(class FName PresetName, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_GetPresetMakeInfo_OutMakeInfo, class UBP_PalPlayerDataCharacterMake_C* K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make, bool K2Node_DynamicCast_bSuccess, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "ApplyPreset");

	Params::UWBP_CharacterMake_C_ApplyPreset_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalPlayerCharacterMakeData_ReturnValue = CallFunc_GetPalPlayerCharacterMakeData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPresetMakeInfo_OutMakeInfo = CallFunc_GetPresetMakeInfo_OutMakeInfo;
	Parms.K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make = K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo = CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomPartsName_Internal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        PartsName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomPartsName_Internal(class UDataTable* DataTable, class FName* PartsName, class FName Temp_name_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomPartsName_Internal");

	Params::UWBP_CharacterMake_C_GetRandomPartsName_Internal_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartsName != nullptr)
		*PartsName = Parms.PartsName;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomHair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        HairName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomPartsName_Internal_PartsName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomHair(class FName* HairName, class FName CallFunc_GetRandomPartsName_Internal_PartsName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomHair");

	Params::UWBP_CharacterMake_C_GetRandomHair_Params Parms{};

	Parms.CallFunc_GetRandomPartsName_Internal_PartsName = CallFunc_GetRandomPartsName_Internal_PartsName;

	UObject::ProcessEvent(Func, &Parms);

	if (HairName != nullptr)
		*HairName = Parms.HairName;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomHead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        HeadName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomPartsName_Internal_PartsName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomHead(class FName* HeadName, class FName CallFunc_GetRandomPartsName_Internal_PartsName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomHead");

	Params::UWBP_CharacterMake_C_GetRandomHead_Params Parms{};

	Parms.CallFunc_GetRandomPartsName_Internal_PartsName = CallFunc_GetRandomPartsName_Internal_PartsName;

	UObject::ProcessEvent(Func, &Parms);

	if (HeadName != nullptr)
		*HeadName = Parms.HeadName;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomEye
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EyeName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomPartsName_Internal_PartsName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomEye(class FName* EyeName, class FName CallFunc_GetRandomPartsName_Internal_PartsName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomEye");

	Params::UWBP_CharacterMake_C_GetRandomEye_Params Parms{};

	Parms.CallFunc_GetRandomPartsName_Internal_PartsName = CallFunc_GetRandomPartsName_Internal_PartsName;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeName != nullptr)
		*EyeName = Parms.EyeName;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BodyName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomPartsName_Internal_PartsName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomBody(class FName* BodyName, class FName CallFunc_GetRandomPartsName_Internal_PartsName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomBody");

	Params::UWBP_CharacterMake_C_GetRandomBody_Params Parms{};

	Parms.CallFunc_GetRandomPartsName_Internal_PartsName = CallFunc_GetRandomPartsName_Internal_PartsName;

	UObject::ProcessEvent(Func, &Parms);

	if (BodyName != nullptr)
		*BodyName = Parms.BodyName;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetAddCameraOffsetUpDown_ForPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetAddCameraOffsetUpDown_ForPad(double* Offset, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetAddCameraOffsetUpDown_ForPad");

	Params::UWBP_CharacterMake_C_GetAddCameraOffsetUpDown_ForPad_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = Parms.Offset;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UWBP_CharacterMake_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnKeyUp");

	Params::UWBP_CharacterMake_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)

struct FEventReply UWBP_CharacterMake_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnKeyDown");

	Params::UWBP_CharacterMake_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetRestoreFocusTarget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRestoreFocusTarget(class UWidget** Target, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* CallFunc_GetRestoreFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRestoreFocusTarget");

	Params::UWBP_CharacterMake_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRestoreFocusTarget_Widget = CallFunc_GetRestoreFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.PostCompleteNewMake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameter_CharacterMake*CharacterMakeParameter                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::PostCompleteNewMake(class UPalHUDDispatchParameter_CharacterMake* CharacterMakeParameter, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "PostCompleteNewMake");

	Params::UWBP_CharacterMake_C_PostCompleteNewMake_Params Parms{};

	Parms.CharacterMakeParameter = CharacterMakeParameter;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.ProcessCompleteMake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameter_CharacterMake*CharacterMakeParameter                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_CharacterMake*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_FadeWidget*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            K2Node_DynamicCast_AsPal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::ProcessCompleteMake(class UPalHUDDispatchParameter_CharacterMake* CharacterMakeParameter, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_CharacterMake* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_FadeWidget* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "ProcessCompleteMake");

	Params::UWBP_CharacterMake_C_ProcessCompleteMake_Params Parms{};

	Parms.CharacterMakeParameter = CharacterMakeParameter;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Game_Instance = K2Node_DynamicCast_AsPal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnClosedCompleteCheckDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnClosedCompleteCheckDialog(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnClosedCompleteCheckDialog");

	Params::UWBP_CharacterMake_C_OnClosedCompleteCheckDialog_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OpenCompleteCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDialogParameterDialog*   CallFunc_CreateDispatchParameterForK2Node_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_CharacterMake_C::OpenCompleteCheckDialog(class UPalDialogParameterDialog* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OpenCompleteCheckDialog");

	Params::UWBP_CharacterMake_C_OpenCompleteCheckDialog_Params Parms{};

	Parms.CallFunc_CreateDispatchParameterForK2Node_ReturnValue = CallFunc_CreateDispatchParameterForK2Node_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnCancelAction(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnCancelAction");

	Params::UWBP_CharacterMake_C_OnCancelAction_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.CalcEyeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                SelectedHSV                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutHSV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEyeShiftRGB_OutRGB                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::CalcEyeColor(const struct FLinearColor& SelectedHSV, struct FLinearColor* OutHSV, class UBP_PalPlayerDataCharacterMake_C* CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance, const struct FLinearColor& CallFunc_GetEyeShiftRGB_OutRGB, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "CalcEyeColor");

	Params::UWBP_CharacterMake_C_CalcEyeColor_Params Parms{};

	Parms.SelectedHSV = SelectedHSV;
	Parms.CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance = CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance;
	Parms.CallFunc_GetEyeShiftRGB_OutRGB = CallFunc_GetEyeShiftRGB_OutRGB;
	Parms.CallFunc_RecalcHSV_OutHSV = CallFunc_RecalcHSV_OutHSV;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHSV != nullptr)
		*OutHSV = std::move(Parms.OutHSV);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetMaxZoomOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaxOffset                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetMaxZoomOffset(double* MaxOffset, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetMaxZoomOffset");

	Params::UWBP_CharacterMake_C_GetMaxZoomOffset_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxOffset != nullptr)
		*MaxOffset = Parms.MaxOffset;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.UpdateCameraLocationByWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsZoomIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldCameraRelativeLocation_MouseWheel                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxZoomOffset_MaxOffset                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::UpdateCameraLocationByWheel(bool IsZoomIn, const struct FVector& OldCameraRelativeLocation_MouseWheel, double CallFunc_GetMaxZoomOffset_MaxOffset, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FMin_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "UpdateCameraLocationByWheel");

	Params::UWBP_CharacterMake_C_UpdateCameraLocationByWheel_Params Parms{};

	Parms.IsZoomIn = IsZoomIn;
	Parms.OldCameraRelativeLocation_MouseWheel = OldCameraRelativeLocation_MouseWheel;
	Parms.CallFunc_GetMaxZoomOffset_MaxOffset = CallFunc_GetMaxZoomOffset_MaxOffset;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_CharacterMake_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnMouseMove");

	Params::UWBP_CharacterMake_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 K2Node_Select_Default                                            (None)

struct FEventReply UWBP_CharacterMake_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnMouseButtonUp");

	Params::UWBP_CharacterMake_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 K2Node_Select_Default                                            (None)

struct FEventReply UWBP_CharacterMake_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnMouseButtonDown");

	Params::UWBP_CharacterMake_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.Update Camera Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldCameraRelativeLocation                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAddCameraOffsetUpDown_ForPad_Offset                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxZoomOffset_MaxOffset                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::Update_Camera_Location(double DeltaTime, const struct FVector& OldCameraRelativeLocation, double CallFunc_GetAddCameraOffsetUpDown_ForPad_Offset, double CallFunc_GetMaxZoomOffset_MaxOffset, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FMin_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "Update Camera Location");

	Params::UWBP_CharacterMake_C_Update_Camera_Location_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OldCameraRelativeLocation = OldCameraRelativeLocation;
	Parms.CallFunc_GetAddCameraOffsetUpDown_ForPad_Offset = CallFunc_GetAddCameraOffsetUpDown_ForPad_Offset;
	Parms.CallFunc_GetMaxZoomOffset_MaxOffset = CallFunc_GetMaxZoomOffset_MaxOffset;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.UpdateCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::UpdateCharacterRotation(double DeltaTime, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "UpdateCharacterRotation");

	Params::UWBP_CharacterMake_C_UpdateCharacterRotation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               IsDetected                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// double                             K2Node_VariableSet_CachedAnalogValueY_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_CharacterMake_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, bool IsDetected, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double K2Node_VariableSet_CachedAnalogValueY_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnAnalogValueChanged");

	Params::UWBP_CharacterMake_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.IsDetected = IsDetected;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_VariableSet_CachedAnalogValueY_ImplicitCast = K2Node_VariableSet_CachedAnalogValueY_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnCloseNameEditWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCreNameEditWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnCloseNameEditWindow");

	Params::UWBP_CharacterMake_C_OnCloseNameEditWindow_Params Parms{};

	Parms.Param = Param;
	Parms.K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.InitializeDisplayCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::InitializeDisplayCharacter(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "InitializeDisplayCharacter");

	Params::UWBP_CharacterMake_C_InitializeDisplayCharacter_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnTriggerCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  CallFunc_GetCategoryButtonByCategory_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnTriggerCancel(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWBP_CharaCre_MenuButton_C* CallFunc_GetCategoryButtonByCategory_Button, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnTriggerCancel");

	Params::UWBP_CharacterMake_C_OnTriggerCancel_Params Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCategoryButtonByCategory_Button = CallFunc_GetCategoryButtonByCategory_Button;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.Get Character Make Data Instance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalPlayerDataCharacterMake_C*MakeDataInstance                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::Get_Character_Make_Data_Instance(class UBP_PalPlayerDataCharacterMake_C** MakeDataInstance, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PalPlayerDataCharacterMake_C* K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "Get Character Make Data Instance");

	Params::UWBP_CharacterMake_C_Get_Character_Make_Data_Instance_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalPlayerCharacterMakeData_ReturnValue = CallFunc_GetPalPlayerCharacterMakeData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make = K2Node_DynamicCast_AsBP_Pal_Player_Data_Character_Make;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MakeDataInstance != nullptr)
		*MakeDataInstance = Parms.MakeDataInstance;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.GetRandomColor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TmpColor                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_B_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_G_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_R_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::GetRandomColor(struct FLinearColor* Color, const struct FLinearColor& TmpColor, double CallFunc_RandomFloat_ReturnValue, double CallFunc_RandomFloat_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "GetRandomColor");

	Params::UWBP_CharacterMake_C_GetRandomColor_Params Parms{};

	Parms.TmpColor = TmpColor;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_B_ImplicitCast = CallFunc_MakeColor_B_ImplicitCast;
	Parms.CallFunc_MakeColor_G_ImplicitCast = CallFunc_MakeColor_G_ImplicitCast;
	Parms.CallFunc_MakeColor_R_ImplicitCast = CallFunc_MakeColor_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnAplliedHeadMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BrowMeshBaseColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                EyeMeshBaseColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnAplliedHeadMesh(const struct FLinearColor& BrowMeshBaseColor, const struct FLinearColor& EyeMeshBaseColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnAplliedHeadMesh");

	Params::UWBP_CharacterMake_C_OnAplliedHeadMesh_Params Parms{};

	Parms.BrowMeshBaseColor = BrowMeshBaseColor;
	Parms.EyeMeshBaseColor = EyeMeshBaseColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnAppliedHairMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                HairMeshBaseColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnAppliedHairMesh(const struct FLinearColor& HairMeshBaseColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnAppliedHairMesh");

	Params::UWBP_CharacterMake_C_OnAppliedHairMesh_Params Parms{};

	Parms.HairMeshBaseColor = HairMeshBaseColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnAppliedBodyMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BodyMeshBasColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnAppliedBodyMesh(const struct FLinearColor& BodyMeshBasColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnAppliedBodyMesh");

	Params::UWBP_CharacterMake_C_OnAppliedBodyMesh_Params Parms{};

	Parms.BodyMeshBasColor = BodyMeshBasColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnNextCategoryInput
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnNextCategoryInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnNextCategoryInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnPrevCategoryInput
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnPrevCategoryInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnPrevCategoryInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnChangeCategory_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UICharacterMakeCategoryOldCategory                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OnChangeCategory_Internal(enum class E_UICharacterMakeCategory CategoryType, enum class E_UICharacterMakeCategory OldCategory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnChangeCategory_Internal");

	Params::UWBP_CharacterMake_C_OnChangeCategory_Internal_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.OldCategory = OldCategory;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.RandomizeMakeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TmpTorsoSize                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TmpLegSize                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TmpArmSize                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TmpBrowColor                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TmpHairColor                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TmpSkinColor                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TmpEyeColor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomVoiceID_VoiceID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomHair_HairName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomHead_HeadName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_3                           (None)
// class FName                        CallFunc_GetRandomEye_EyeName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomBody_BodyName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRandomColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRandomColor_Color_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRandomColor_Color_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRandomColor_Color_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo              (NoDestructor)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LegVolume_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::RandomizeMakeInfo(double TmpTorsoSize, double TmpLegSize, double TmpArmSize, const struct FLinearColor& TmpBrowColor, const struct FLinearColor& TmpHairColor, const struct FLinearColor& TmpSkinColor, const struct FLinearColor& TmpEyeColor, int32 CallFunc_GetRandomVoiceID_VoiceID, class FName CallFunc_GetRandomHair_HairName, class FName CallFunc_GetRandomHead_HeadName, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_NameToText_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_NameToText_ReturnValue_3, class FName CallFunc_GetRandomEye_EyeName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FName CallFunc_GetRandomBody_BodyName, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UBP_PalPlayerDataCharacterMake_C* CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetRandomColor_Color, const struct FLinearColor& CallFunc_GetRandomColor_Color_1, const struct FLinearColor& CallFunc_GetRandomColor_Color_2, const struct FLinearColor& CallFunc_GetRandomColor_Color_3, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo, double CallFunc_RandomFloat_ReturnValue, double CallFunc_RandomFloat_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast, float K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast, float K2Node_SetFieldsInStruct_LegVolume_ImplicitCast, float K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "RandomizeMakeInfo");

	Params::UWBP_CharacterMake_C_RandomizeMakeInfo_Params Parms{};

	Parms.TmpTorsoSize = TmpTorsoSize;
	Parms.TmpLegSize = TmpLegSize;
	Parms.TmpArmSize = TmpArmSize;
	Parms.TmpBrowColor = TmpBrowColor;
	Parms.TmpHairColor = TmpHairColor;
	Parms.TmpSkinColor = TmpSkinColor;
	Parms.TmpEyeColor = TmpEyeColor;
	Parms.CallFunc_GetRandomVoiceID_VoiceID = CallFunc_GetRandomVoiceID_VoiceID;
	Parms.CallFunc_GetRandomHair_HairName = CallFunc_GetRandomHair_HairName;
	Parms.CallFunc_GetRandomHead_HeadName = CallFunc_GetRandomHead_HeadName;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue_2 = CallFunc_Conv_NameToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue_3 = CallFunc_Conv_NameToText_ReturnValue_3;
	Parms.CallFunc_GetRandomEye_EyeName = CallFunc_GetRandomEye_EyeName;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetRandomBody_BodyName = CallFunc_GetRandomBody_BodyName;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance = CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRandomColor_Color = CallFunc_GetRandomColor_Color;
	Parms.CallFunc_GetRandomColor_Color_1 = CallFunc_GetRandomColor_Color_1;
	Parms.CallFunc_GetRandomColor_Color_2 = CallFunc_GetRandomColor_Color_2;
	Parms.CallFunc_GetRandomColor_Color_3 = CallFunc_GetRandomColor_Color_3;
	Parms.CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo = CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast = CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast = K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LegVolume_ImplicitCast = K2Node_SetFieldsInStruct_LegVolume_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast = K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetRestoreFocusTarget_Target                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

class UWidget* UWBP_CharacterMake_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetRestoreFocusTarget_Target, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CharacterMake_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetRestoreFocusTarget_Target = CallFunc_GetRestoreFocusTarget_Target;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.RequestDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::RequestDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "RequestDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnTriggerZoomOut_Mouse
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnTriggerZoomOut_Mouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnTriggerZoomOut_Mouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnTriggerZoomIn_MOuse
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnTriggerZoomIn_MOuse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnTriggerZoomIn_MOuse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.RegisterStaticInputAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)

void UWBP_CharacterMake_C::RegisterStaticInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "RegisterStaticInputAction");

	Params::UWBP_CharacterMake_C_RegisterStaticInputAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OpenNameEditWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DefaultName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCreNameEditWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::OpenNameEditWindow(class FText DefaultName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCreNameEditWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OpenNameEditWindow");

	Params::UWBP_CharacterMake_C_OpenNameEditWindow_Params Parms{};

	Parms.DefaultName = DefaultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_1_OnLeftRotationButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_1_OnLeftRotationButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_1_OnLeftRotationButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_2_OnRightRotationButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_2_OnRightRotationButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_2_OnRightRotationButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnEndLoadingFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnEndLoadingFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnEndLoadingFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature(enum class E_UICharacterMakeCategory CategoryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature_Params Parms{};

	Parms.CategoryType = CategoryType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_14_OnNotifyCloseSelectColorWIndow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_14_OnNotifyCloseSelectColorWIndow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_14_OnNotifyCloseSelectColorWIndow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_15_OnClickedEditNameButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_15_OnClickedEditNameButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_15_OnClickedEditNameButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.DelayOpenEditNameWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::DelayOpenEditNameWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "DelayOpenEditNameWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "Tick");

	Params::UWBP_CharacterMake_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharacterMake_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnFocusLost");

	Params::UWBP_CharacterMake_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CharacterMake_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "OnMouseLeave");

	Params::UWBP_CharacterMake_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        EyeMaterialName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature(class FName EyeMaterialName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature_Params Parms{};

	Parms.EyeMaterialName = EyeMaterialName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_17_OnClickedCompleteButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_17_OnClickedCompleteButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_17_OnClickedCompleteButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature");

	Params::UWBP_CharacterMake_C_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature_Params Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterMake.WBP_CharacterMake_C.ExecuteUbergraph_WBP_CharacterMake
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Size_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGBLinear_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Size_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Size                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CalcEyeColor_OutHSV                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_MeshPresetRowName_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_MeshPresetRowName_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_MeshPresetRowName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CalcSubsurfaceColor_SubsurfaceRGB                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBodyShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_1     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBrowShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalPlayerDataCharacterMake_C*CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_2     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHairShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UICharacterMakeCategoryK2Node_ComponentBoundEvent_CategoryType                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_CharacterMake*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FName                        K2Node_ComponentBoundEvent_EyeMaterialName                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetSelectedEyeHSV_HSV                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CalcEyeColor_OutHSV_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_GetPresetMakeInfo_OutMakeInfo                           (NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_PresetName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_Name                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              K2Node_ComponentBoundEvent_VoiceID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LegVolume_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SVMax_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCharacterRotation_DeltaTime_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Camera_Location_DeltaTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature_Size_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterMake_C::ExecuteUbergraph_WBP_CharacterMake(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double K2Node_ComponentBoundEvent_Size_2, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double K2Node_ComponentBoundEvent_Size_1, double K2Node_ComponentBoundEvent_Size, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_2, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_1, const struct FLinearColor& CallFunc_CalcEyeColor_OutHSV, const struct FLinearColor& K2Node_ComponentBoundEvent_Color, class FName K2Node_ComponentBoundEvent_MeshPresetRowName_2, class FName K2Node_ComponentBoundEvent_MeshPresetRowName_1, class FName K2Node_ComponentBoundEvent_MeshPresetRowName, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UBP_PalPlayerDataCharacterMake_C* CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_CalcSubsurfaceColor_SubsurfaceRGB, const struct FLinearColor& CallFunc_GetBodyShiftRGB_OutRGB, class UPalPlayerDataCharacterMake* CallFunc_GetPalPlayerCharacterMakeData_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PalPlayerDataCharacterMake_C* CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_1, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV, const struct FLinearColor& CallFunc_GetBrowShiftRGB_OutRGB, class UBP_PalPlayerDataCharacterMake_C* CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_2, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV_1, const struct FLinearColor& CallFunc_GetHairShiftRGB_OutRGB, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV_2, enum class E_UICharacterMakeCategory K2Node_ComponentBoundEvent_CategoryType, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalHUDDispatchParameter_CharacterMake* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FPointerEvent& K2Node_Event_MouseEvent, class FName K2Node_ComponentBoundEvent_EyeMaterialName, const struct FLinearColor& CallFunc_GetSelectedEyeHSV_HSV, const struct FLinearColor& CallFunc_CalcEyeColor_OutHSV_1, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_GetPresetMakeInfo_OutMakeInfo, class FName K2Node_ComponentBoundEvent_PresetName, const class FString& CallFunc_GetNickName_Name, class FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_ComponentBoundEvent_VoiceID, int32 CallFunc_RandomInteger_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast, float K2Node_SetFieldsInStruct_LegVolume_ImplicitCast, float K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast, double K2Node_VariableSet_SVMax_ImplicitCast, double CallFunc_UpdateCharacterRotation_DeltaTime_ImplicitCast, double CallFunc_Update_Camera_Location_DeltaTime_ImplicitCast, double CallFunc_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharacterMake_C", "ExecuteUbergraph_WBP_CharacterMake");

	Params::UWBP_CharacterMake_C_ExecuteUbergraph_WBP_CharacterMake_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Color_3 = K2Node_ComponentBoundEvent_Color_3;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_ComponentBoundEvent_Size_2 = K2Node_ComponentBoundEvent_Size_2;
	Parms.CallFunc_HSVToRGBLinear_ReturnValue = CallFunc_HSVToRGBLinear_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Size_1 = K2Node_ComponentBoundEvent_Size_1;
	Parms.K2Node_ComponentBoundEvent_Size = K2Node_ComponentBoundEvent_Size;
	Parms.K2Node_ComponentBoundEvent_Color_2 = K2Node_ComponentBoundEvent_Color_2;
	Parms.K2Node_ComponentBoundEvent_Color_1 = K2Node_ComponentBoundEvent_Color_1;
	Parms.CallFunc_CalcEyeColor_OutHSV = CallFunc_CalcEyeColor_OutHSV;
	Parms.K2Node_ComponentBoundEvent_Color = K2Node_ComponentBoundEvent_Color;
	Parms.K2Node_ComponentBoundEvent_MeshPresetRowName_2 = K2Node_ComponentBoundEvent_MeshPresetRowName_2;
	Parms.K2Node_ComponentBoundEvent_MeshPresetRowName_1 = K2Node_ComponentBoundEvent_MeshPresetRowName_1;
	Parms.K2Node_ComponentBoundEvent_MeshPresetRowName = K2Node_ComponentBoundEvent_MeshPresetRowName;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance = CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalcSubsurfaceColor_SubsurfaceRGB = CallFunc_CalcSubsurfaceColor_SubsurfaceRGB;
	Parms.CallFunc_GetBodyShiftRGB_OutRGB = CallFunc_GetBodyShiftRGB_OutRGB;
	Parms.CallFunc_GetPalPlayerCharacterMakeData_ReturnValue = CallFunc_GetPalPlayerCharacterMakeData_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_1 = CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_1;
	Parms.CallFunc_RecalcHSV_OutHSV = CallFunc_RecalcHSV_OutHSV;
	Parms.CallFunc_GetBrowShiftRGB_OutRGB = CallFunc_GetBrowShiftRGB_OutRGB;
	Parms.CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_2 = CallFunc_Get_Character_Make_Data_Instance_MakeDataInstance_2;
	Parms.CallFunc_RecalcHSV_OutHSV_1 = CallFunc_RecalcHSV_OutHSV_1;
	Parms.CallFunc_GetHairShiftRGB_OutRGB = CallFunc_GetHairShiftRGB_OutRGB;
	Parms.CallFunc_RecalcHSV_OutHSV_2 = CallFunc_RecalcHSV_OutHSV_2;
	Parms.K2Node_ComponentBoundEvent_CategoryType = K2Node_ComponentBoundEvent_CategoryType;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Make;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_EyeMaterialName = K2Node_ComponentBoundEvent_EyeMaterialName;
	Parms.CallFunc_GetSelectedEyeHSV_HSV = CallFunc_GetSelectedEyeHSV_HSV;
	Parms.CallFunc_CalcEyeColor_OutHSV_1 = CallFunc_CalcEyeColor_OutHSV_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetPresetMakeInfo_OutMakeInfo = CallFunc_GetPresetMakeInfo_OutMakeInfo;
	Parms.K2Node_ComponentBoundEvent_PresetName = K2Node_ComponentBoundEvent_PresetName;
	Parms.CallFunc_GetNickName_Name = CallFunc_GetNickName_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_VoiceID = K2Node_ComponentBoundEvent_VoiceID;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast = K2Node_SetFieldsInStruct_TorsoVolume_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LegVolume_ImplicitCast = K2Node_SetFieldsInStruct_LegVolume_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast = K2Node_SetFieldsInStruct_ArmVolume_ImplicitCast;
	Parms.K2Node_VariableSet_SVMax_ImplicitCast = K2Node_VariableSet_SVMax_ImplicitCast;
	Parms.CallFunc_UpdateCharacterRotation_DeltaTime_ImplicitCast = CallFunc_UpdateCharacterRotation_DeltaTime_ImplicitCast;
	Parms.CallFunc_Update_Camera_Location_DeltaTime_ImplicitCast = CallFunc_Update_Camera_Location_DeltaTime_ImplicitCast;
	Parms.CallFunc_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature_Size_ImplicitCast = CallFunc_BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


