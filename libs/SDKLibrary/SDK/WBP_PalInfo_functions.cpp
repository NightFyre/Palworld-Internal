#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInfo.WBP_PalInfo_C
// (None)

class UClass* UWBP_PalInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInfo_C");

	return Clss;
}


// WBP_PalInfo_C WBP_PalInfo.Default__WBP_PalInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInfo_C* UWBP_PalInfo_C::GetDefaultObj()
{
	static class UWBP_PalInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInfo_C*>(UWBP_PalInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalInfo.WBP_PalInfo_C.OnDescToBonus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::OnDescToBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "OnDescToBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayFirstActivatedInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText       (None)

void UWBP_PalInfo_C::DisplayFirstActivatedInfo(class APalCharacter* Character, class FText CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayFirstActivatedInfo");

	Params::UWBP_PalInfo_C_DisplayFirstActivatedInfo_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText = CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.Create Default Get Info
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo        CaptureInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFPalUIPalInfoDisplayData   GetInfoData                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               IsSuccessed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIPalCaptureInfo        K2Node_Copy_ReturnValue                                          (None)
// enum class EPalUIPalInfoType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalUIPalInfoDisplayData   K2Node_MakeStruct_FPalUIPalInfoDisplayData                       (HasGetValueTypeHash)

void UWBP_PalInfo_C::Create_Default_Get_Info(const struct FPalUIPalCaptureInfo& CaptureInfo, struct FFPalUIPalInfoDisplayData* GetInfoData, bool* IsSuccessed, bool Temp_bool_Variable, const struct FPalUIPalCaptureInfo& K2Node_Copy_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable_1, enum class EPalUIPalInfoType K2Node_Select_Default, const struct FFPalUIPalInfoDisplayData& K2Node_MakeStruct_FPalUIPalInfoDisplayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "Create Default Get Info");

	Params::UWBP_PalInfo_C_Create_Default_Get_Info_Params Parms{};

	Parms.CaptureInfo = CaptureInfo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Copy_ReturnValue = K2Node_Copy_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FPalUIPalInfoDisplayData = K2Node_MakeStruct_FPalUIPalInfoDisplayData;

	UObject::ProcessEvent(Func, &Parms);

	if (GetInfoData != nullptr)
		*GetInfoData = std::move(Parms.GetInfoData);

	if (IsSuccessed != nullptr)
		*IsSuccessed = Parms.IsSuccessed;

}


// Function WBP_PalInfo.WBP_PalInfo_C.ClearPassiveList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::ClearPassiveList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "ClearPassiveList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayPassiveSkill
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalInfo_C::DisplayPassiveSkill(TArray<class FName>& PassiveList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayPassiveSkill");

	Params::UWBP_PalInfo_C_DisplayPassiveSkill_Params Parms{};

	Parms.PassiveList = PassiveList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayShorDesc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalLongDescription_outName                           (None)

void UWBP_PalInfo_C::DisplayShorDesc(class FName CharacterID, class FText CallFunc_GetPalLongDescription_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayShorDesc");

	Params::UWBP_PalInfo_C_DisplayShorDesc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_GetPalLongDescription_outName = CallFunc_GetPalLongDescription_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.TryDIsplayStackedCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Displayed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalUIPalInfoDisplayData   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::TryDIsplayStackedCharacter(bool* Displayed, const struct FFPalUIPalInfoDisplayData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "TryDIsplayStackedCharacter");

	Params::UWBP_PalInfo_C_TryDIsplayStackedCharacter_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Displayed != nullptr)
		*Displayed = Parms.Displayed;

}


// Function WBP_PalInfo.WBP_PalInfo_C.Setup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPalUIPalInfoDisplayData   GetInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       InfoType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRank_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPartnerSkillName_OutText                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_1                          (None)

void UWBP_PalInfo_C::Setup(const struct FFPalUIPalInfoDisplayData& GetInfo, enum class EPalUIPalInfoType InfoType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetRank_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetPartnerSkillName_OutText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_IsVisible_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "Setup");

	Params::UWBP_PalInfo_C_Setup_Params Parms{};

	Parms.GetInfo = GetInfo;
	Parms.InfoType = InfoType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetRank_ReturnValue = CallFunc_GetRank_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetPartnerSkillName_OutText = CallFunc_GetPartnerSkillName_OutText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue_1 = CallFunc_GetLocalizedText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.Finished_8AC905F6491806EF04F1E58EE1398650
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::Finished_8AC905F6491806EF04F1E58EE1398650()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "Finished_8AC905F6491806EF04F1E58EE1398650");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_OpenAndSetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIPalInfoType       InfoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::AnmEvent_OpenAndSetTimer(enum class EPalUIPalInfoType InfoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_OpenAndSetTimer");

	Params::UWBP_PalInfo_C_AnmEvent_OpenAndSetTimer_Params Parms{};

	Parms.InfoType = InfoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.TryDisplayNextInfoEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::TryDisplayNextInfoEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "TryDisplayNextInfoEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_ForceDesc
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::AnmEvent_ForceDesc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_ForceDesc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_ForceBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::AnmEvent_ForceBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_ForceBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_BonusToDesc
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::AnmEvent_BonusToDesc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_BonusToDesc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_DescToBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::AnmEvent_DescToBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_DescToBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalInfo_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInfo.WBP_PalInfo_C.SetupCapturePalInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo        CaptureInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalInfo_C::SetupCapturePalInfo(const struct FPalUIPalCaptureInfo& CaptureInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "SetupCapturePalInfo");

	Params::UWBP_PalInfo_C_SetupCapturePalInfo_Params Parms{};

	Parms.CaptureInfo = CaptureInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.SetupFirstActivatedPalInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "SetupFirstActivatedPalInfo");

	Params::UWBP_PalInfo_C_SetupFirstActivatedPalInfo_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInfo.WBP_PalInfo_C.ExecuteUbergraph_WBP_PalInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Passive_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIPalInfoType       K2Node_CustomEvent_infoType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryDIsplayStackedCharacter_displayed                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIPalCaptureInfo        K2Node_CustomEvent_CaptureInfo                                   (None)
// struct FFPalUIPalInfoDisplayData   CallFunc_Create_Default_Get_Info_getInfoData                     (HasGetValueTypeHash)
// bool                               CallFunc_Create_Default_Get_Info_isSuccessed                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_Handle                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalUIPalInfoDisplayData   K2Node_MakeStruct_FPalUIPalInfoDisplayData                       (HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast_2                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalUIPalInfoType Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable_1, enum class EPalUIPalInfoType Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EPalUIPalInfoType K2Node_CustomEvent_infoType, bool CallFunc_TryDIsplayStackedCharacter_displayed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const struct FPalUIPalCaptureInfo& K2Node_CustomEvent_CaptureInfo, const struct FFPalUIPalInfoDisplayData& CallFunc_Create_Default_Get_Info_getInfoData, bool CallFunc_Create_Default_Get_Info_isSuccessed, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Handle, int32 CallFunc_Array_Add_ReturnValue, const struct FFPalUIPalInfoDisplayData& K2Node_MakeStruct_FPalUIPalInfoDisplayData, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast_1, double CallFunc_Map_Add_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInfo_C", "ExecuteUbergraph_WBP_PalInfo");

	Params::UWBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_infoType = K2Node_CustomEvent_infoType;
	Parms.CallFunc_TryDIsplayStackedCharacter_displayed = CallFunc_TryDIsplayStackedCharacter_displayed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_CustomEvent_CaptureInfo = K2Node_CustomEvent_CaptureInfo;
	Parms.CallFunc_Create_Default_Get_Info_getInfoData = CallFunc_Create_Default_Get_Info_getInfoData;
	Parms.CallFunc_Create_Default_Get_Info_isSuccessed = CallFunc_Create_Default_Get_Info_isSuccessed;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Handle = K2Node_CustomEvent_Handle;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_FPalUIPalInfoDisplayData = K2Node_MakeStruct_FPalUIPalInfoDisplayData;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Map_Add_Value_ImplicitCast = CallFunc_Map_Add_Value_ImplicitCast;
	Parms.CallFunc_Map_Add_Value_ImplicitCast_1 = CallFunc_Map_Add_Value_ImplicitCast_1;
	Parms.CallFunc_Map_Add_Value_ImplicitCast_2 = CallFunc_Map_Add_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


