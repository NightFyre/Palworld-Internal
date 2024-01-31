#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings.WBP_Title_WorldSettings_C
// (None)

class UClass* UWBP_Title_WorldSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldSettings_C");

	return Clss;
}


// WBP_Title_WorldSettings_C WBP_Title_WorldSettings.Default__WBP_Title_WorldSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldSettings_C* UWBP_Title_WorldSettings_C::GetDefaultObj()
{
	static class UWBP_Title_WorldSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldSettings_C*>(UWBP_Title_WorldSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.SetWorldName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewWorldName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Title_WorldSettings_C::SetWorldName(const class FString& NewWorldName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "SetWorldName");

	Params::UWBP_Title_WorldSettings_C_SetWorldName_Params Parms{};

	Parms.NewWorldName = NewWorldName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetWorldName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WorldName                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetButtonText_Text                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::GetWorldName(class FString* WorldName, class FText CallFunc_GetButtonText_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "GetWorldName");

	Params::UWBP_Title_WorldSettings_C_GetWorldName_Params Parms{};

	Parms.CallFunc_GetButtonText_Text = CallFunc_GetButtonText_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldName != nullptr)
		*WorldName = std::move(Parms.WorldName);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsEditedSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEdited                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::IsEditedSetting(bool* IsEdited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "IsEditedSetting");

	Params::UWBP_Title_WorldSettings_C_IsEditedSetting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEdited != nullptr)
		*IsEdited = Parms.IsEdited;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.MarkDirtyWorldSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_ConvertDifficultyToUIIndex_UIIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::MarkDirtyWorldSetting(int32 CallFunc_ConvertDifficultyToUIIndex_UIIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "MarkDirtyWorldSetting");

	Params::UWBP_Title_WorldSettings_C_MarkDirtyWorldSetting_Params Parms{};

	Parms.CallFunc_ConvertDifficultyToUIIndex_UIIndex = CallFunc_ConvertDifficultyToUIIndex_UIIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ApplyDifficultyPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalOptionWorldDifficultyDifficultyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TmpPresetRowName                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldPresetRow    CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ApplyDifficultyPreset(enum class EPalOptionWorldDifficulty DifficultyType, class FName TmpPresetRowName, bool K2Node_SwitchEnum_CmpSuccess, const struct FPalOptionWorldPresetRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ApplyDifficultyPreset");

	Params::UWBP_Title_WorldSettings_C_ApplyDifficultyPreset_Params Parms{};

	Parms.DifficultyType = DifficultyType;
	Parms.TmpPresetRowName = TmpPresetRowName;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetEditedWorldSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalOptionWorldSettings     WorldSetting                                                     (Parm, OutParm)

void UWBP_Title_WorldSettings_C::GetEditedWorldSetting(struct FPalOptionWorldSettings* WorldSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "GetEditedWorldSetting");

	Params::UWBP_Title_WorldSettings_C_GetEditedWorldSetting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WorldSetting != nullptr)
		*WorldSetting = std::move(Parms.WorldSetting);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertUIIndexToDeathPenalty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              UIIndex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDeathPenaltyDeathPenaltyType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ConvertUIIndexToDeathPenalty(int32 UIIndex, enum class EPalOptionWorldDeathPenalty* DeathPenaltyType, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ConvertUIIndexToDeathPenalty");

	Params::UWBP_Title_WorldSettings_C_ConvertUIIndexToDeathPenalty_Params Parms{};

	Parms.UIIndex = UIIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DeathPenaltyType != nullptr)
		*DeathPenaltyType = Parms.DeathPenaltyType;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertDeathPenaltyToUIIndex
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalOptionWorldDeathPenaltyDeathPenaltyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UIIndex                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ConvertDeathPenaltyToUIIndex(enum class EPalOptionWorldDeathPenalty DeathPenaltyType, int32* UIIndex, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ConvertDeathPenaltyToUIIndex");

	Params::UWBP_Title_WorldSettings_C_ConvertDeathPenaltyToUIIndex_Params Parms{};

	Parms.DeathPenaltyType = DeathPenaltyType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UIIndex != nullptr)
		*UIIndex = Parms.UIIndex;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CreateDeathPenaltySettingStrings
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>              OutStrings                                                       (Parm, OutParm)
// struct FDataTableRowHandle         FullPenaltyMsgID                                                 (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         AllItemPenaltylMsgID                                             (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         ItemPenaltyMsgID                                                 (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         NoPanaltyMsgID                                                   (Edit, BlueprintVisible, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Title_WorldSettings_C::CreateDeathPenaltySettingStrings(TArray<class FString>* OutStrings, const struct FDataTableRowHandle& FullPenaltyMsgID, const struct FDataTableRowHandle& AllItemPenaltylMsgID, const struct FDataTableRowHandle& ItemPenaltyMsgID, const struct FDataTableRowHandle& NoPanaltyMsgID, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, TArray<class FString>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "CreateDeathPenaltySettingStrings");

	Params::UWBP_Title_WorldSettings_C_CreateDeathPenaltySettingStrings_Params Parms{};

	Parms.FullPenaltyMsgID = FullPenaltyMsgID;
	Parms.AllItemPenaltylMsgID = AllItemPenaltylMsgID;
	Parms.ItemPenaltyMsgID = ItemPenaltyMsgID;
	Parms.NoPanaltyMsgID = NoPanaltyMsgID;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStrings != nullptr)
		*OutStrings = std::move(Parms.OutStrings);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.EndCustomDifficultySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectNameIndex_NowIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::EndCustomDifficultySetting(int32 CallFunc_GetSelectNameIndex_NowIndex, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "EndCustomDifficultySetting");

	Params::UWBP_Title_WorldSettings_C_EndCustomDifficultySetting_Params Parms{};

	Parms.CallFunc_GetSelectNameIndex_NowIndex = CallFunc_GetSelectNameIndex_NowIndex;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsEditingCustomDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEditing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::IsEditingCustomDifficulty(bool* IsEditing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "IsEditingCustomDifficulty");

	Params::UWBP_Title_WorldSettings_C_IsEditingCustomDifficulty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEditing != nullptr)
		*IsEditing = Parms.IsEditing;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.DisplayDifficultyDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalOptionWorldDifficultyDifficultyTyper                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         TmpMsgID                                                         (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         CustomMsgID                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         VeryHardMsgID                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         HardMsgID                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         NormalMsgID                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         EasyMsgID                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         VeryEasyMsgID                                                    (Edit, BlueprintVisible, NoDestructor)
// class FText                        TmpText                                                          (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Title_WorldSettings_C::DisplayDifficultyDesc(enum class EPalOptionWorldDifficulty DifficultyTyper, const struct FDataTableRowHandle& TmpMsgID, const struct FDataTableRowHandle& CustomMsgID, const struct FDataTableRowHandle& VeryHardMsgID, const struct FDataTableRowHandle& HardMsgID, const struct FDataTableRowHandle& NormalMsgID, const struct FDataTableRowHandle& EasyMsgID, const struct FDataTableRowHandle& VeryEasyMsgID, class FText TmpText, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "DisplayDifficultyDesc");

	Params::UWBP_Title_WorldSettings_C_DisplayDifficultyDesc_Params Parms{};

	Parms.DifficultyTyper = DifficultyTyper;
	Parms.TmpMsgID = TmpMsgID;
	Parms.CustomMsgID = CustomMsgID;
	Parms.VeryHardMsgID = VeryHardMsgID;
	Parms.HardMsgID = HardMsgID;
	Parms.NormalMsgID = NormalMsgID;
	Parms.EasyMsgID = EasyMsgID;
	Parms.VeryEasyMsgID = VeryEasyMsgID;
	Parms.TmpText = TmpText;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertUIIndexToDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              UIIndex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultyDifficultyType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ConvertUIIndexToDifficulty(int32 UIIndex, enum class EPalOptionWorldDifficulty* DifficultyType, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ConvertUIIndexToDifficulty");

	Params::UWBP_Title_WorldSettings_C_ConvertUIIndexToDifficulty_Params Parms{};

	Parms.UIIndex = UIIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DifficultyType != nullptr)
		*DifficultyType = Parms.DifficultyType;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertDifficultyToUIIndex
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalOptionWorldDifficultyDifficultyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UIIndex                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ConvertDifficultyToUIIndex(enum class EPalOptionWorldDifficulty DifficultyType, int32* UIIndex, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ConvertDifficultyToUIIndex");

	Params::UWBP_Title_WorldSettings_C_ConvertDifficultyToUIIndex_Params Parms{};

	Parms.DifficultyType = DifficultyType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UIIndex != nullptr)
		*UIIndex = Parms.UIIndex;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CreateDifficultySettingStrings
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>              OutStrings                                                       (Parm, OutParm)
// struct FDataTableRowHandle         CustomMsgID                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         VeryHardMsgID                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         HardMsgID                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         NormalMsgID                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         EasyMsgID                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         VeryEasyMsgID                                                    (Edit, BlueprintVisible, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Title_WorldSettings_C::CreateDifficultySettingStrings(TArray<class FString>* OutStrings, const struct FDataTableRowHandle& CustomMsgID, const struct FDataTableRowHandle& VeryHardMsgID, const struct FDataTableRowHandle& HardMsgID, const struct FDataTableRowHandle& NormalMsgID, const struct FDataTableRowHandle& EasyMsgID, const struct FDataTableRowHandle& VeryEasyMsgID, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, TArray<class FString>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "CreateDifficultySettingStrings");

	Params::UWBP_Title_WorldSettings_C_CreateDifficultySettingStrings_Params Parms{};

	Parms.CustomMsgID = CustomMsgID;
	Parms.VeryHardMsgID = VeryHardMsgID;
	Parms.HardMsgID = HardMsgID;
	Parms.NormalMsgID = NormalMsgID;
	Parms.EasyMsgID = EasyMsgID;
	Parms.VeryEasyMsgID = VeryEasyMsgID;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStrings != nullptr)
		*OutStrings = std::move(Parms.OutStrings);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CancelTextEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEditingText_IsEditing                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditingText_IsEditing_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::CancelTextEdit(bool CallFunc_IsEditingText_IsEditing, bool CallFunc_IsEditingText_IsEditing_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "CancelTextEdit");

	Params::UWBP_Title_WorldSettings_C_CancelTextEdit_Params Parms{};

	Parms.CallFunc_IsEditingText_IsEditing = CallFunc_IsEditingText_IsEditing;
	Parms.CallFunc_IsEditingText_IsEditing_1 = CallFunc_IsEditingText_IsEditing_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsTextEditing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEditing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditingText_IsEditing                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditingText_IsEditing_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::IsTextEditing(bool* IsEditing, bool CallFunc_IsEditingText_IsEditing, bool CallFunc_IsEditingText_IsEditing_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "IsTextEditing");

	Params::UWBP_Title_WorldSettings_C_IsTextEditing_Params Parms{};

	Parms.CallFunc_IsEditingText_IsEditing = CallFunc_IsEditingText_IsEditing;
	Parms.CallFunc_IsEditingText_IsEditing_1 = CallFunc_IsEditingText_IsEditing_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEditing != nullptr)
		*IsEditing = Parms.IsEditing;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     TargetWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXB1_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::GetFocusTarget(class UWidget** TargetWidget, bool CallFunc_IsXB1_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "GetFocusTarget");

	Params::UWBP_Title_WorldSettings_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsXB1_ReturnValue = CallFunc_IsXB1_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ApplyWorldSettingToUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings     WorldSetting                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_CreateDeathPenaltySettingStrings_OutStrings             (ReferenceParm)
// int32                              CallFunc_ConvertDeathPenaltyToUIIndex_UIIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_19                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_19                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_19                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_20                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_20                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_20                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_21                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_21                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_21                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_22                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MinValue_ImplicitCast_22                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_MaxValue_ImplicitCast_22                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetupFloatValue_NowValue_ImplicitCast_23                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ApplyWorldSettingToUI(const struct FPalOptionWorldSettings& WorldSetting, int32 CallFunc_FTrunc_ReturnValue, TArray<class FString>& CallFunc_CreateDeathPenaltySettingStrings_OutStrings, int32 CallFunc_ConvertDeathPenaltyToUIIndex_UIIndex, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SetupFloatValue_NowValue_ImplicitCast, double CallFunc_SetupFloatValue_MinValue_ImplicitCast, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_1, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_1, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_1, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_2, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_2, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_2, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_3, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_3, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_3, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_4, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_4, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_4, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_5, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_5, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_5, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_6, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_6, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_6, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_7, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_7, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_7, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_8, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_8, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_8, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_9, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_9, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_9, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_10, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_10, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_10, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_11, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_11, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_11, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_12, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_12, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_12, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_13, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_13, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_13, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_14, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_14, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_14, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_15, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_15, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_15, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_16, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_16, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_16, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_17, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_17, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_17, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_18, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_19, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_18, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_18, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_19, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_19, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_20, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_20, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_20, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_21, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_21, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_21, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_22, double CallFunc_SetupFloatValue_MinValue_ImplicitCast_22, double CallFunc_SetupFloatValue_MaxValue_ImplicitCast_22, double CallFunc_SetupFloatValue_NowValue_ImplicitCast_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ApplyWorldSettingToUI");

	Params::UWBP_Title_WorldSettings_C_ApplyWorldSettingToUI_Params Parms{};

	Parms.WorldSetting = WorldSetting;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_CreateDeathPenaltySettingStrings_OutStrings = CallFunc_CreateDeathPenaltySettingStrings_OutStrings;
	Parms.CallFunc_ConvertDeathPenaltyToUIIndex_UIIndex = CallFunc_ConvertDeathPenaltyToUIIndex_UIIndex;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast = CallFunc_SetupFloatValue_NowValue_ImplicitCast;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast = CallFunc_SetupFloatValue_MinValue_ImplicitCast;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast = CallFunc_SetupFloatValue_MaxValue_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_1 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_1;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_1 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_1;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_1 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_1;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_2 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_2;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_2 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_2;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_2 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_2;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_3 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_3;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_3 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_3;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_3 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_3;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_4 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_4;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_4 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_4;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_4 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_4;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_5 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_5;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_5 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_5;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_5 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_5;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_6 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_6;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_6 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_6;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_6 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_6;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_7 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_7;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_7 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_7;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_7 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_7;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_8 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_8;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_8 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_8;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_8 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_8;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_9 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_9;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_9 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_9;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_9 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_9;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_10 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_10;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_10 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_10;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_10 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_10;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_11 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_11;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_11 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_11;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_11 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_11;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_12 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_12;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_12 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_12;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_12 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_12;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_13 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_13;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_13 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_13;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_13 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_13;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_14 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_14;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_14 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_14;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_14 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_14;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_15 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_15;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_15 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_15;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_15 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_15;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_16 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_16;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_16 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_16;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_16 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_16;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_17 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_17;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_17 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_17;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_17 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_17;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_18 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_18;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_19 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_19;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_18 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_18;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_18 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_18;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_19 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_19;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_19 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_19;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_20 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_20;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_20 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_20;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_20 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_20;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_21 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_21;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_21 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_21;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_21 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_21;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_22 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_22;
	Parms.CallFunc_SetupFloatValue_MinValue_ImplicitCast_22 = CallFunc_SetupFloatValue_MinValue_ImplicitCast_22;
	Parms.CallFunc_SetupFloatValue_MaxValue_ImplicitCast_22 = CallFunc_SetupFloatValue_MaxValue_ImplicitCast_22;
	Parms.CallFunc_SetupFloatValue_NowValue_ImplicitCast_23 = CallFunc_SetupFloatValue_NowValue_ImplicitCast_23;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings     WorldSetting                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsNewWorld                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanMulti                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      WorldSaveDirectoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      WorldName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalOptionSubsystem_C*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultyTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldStaticSettingsCallFunc_GetOptionWorldStaticSettings_ReturnValue                (ConstParm, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayRestricted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXB1_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultyK2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_CreateDifficultySettingStrings_OutStrings               (ReferenceParm)
// int32                              CallFunc_ConvertDifficultyToUIIndex_UIIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::Setup(const struct FPalOptionWorldSettings& WorldSetting, bool IsNewWorld, bool CanMulti, const class FString& WorldSaveDirectoryName, const class FString& WorldName, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UBP_PalOptionSubsystem_C* CallFunc_SpawnObject_ReturnValue, enum class EPalOptionWorldDifficulty Temp_byte_Variable_2, const struct FPalOptionWorldStaticSettings& CallFunc_GetOptionWorldStaticSettings_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_IsMultiplayRestricted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_3, bool CallFunc_IsXB1_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_SelectFloat_ReturnValue, enum class EPalOptionWorldDifficulty K2Node_Select_Default_2, TArray<class FString>& CallFunc_CreateDifficultySettingStrings_OutStrings, int32 CallFunc_ConvertDifficultyToUIIndex_UIIndex, enum class ESlateVisibility K2Node_Select_Default_3, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "Setup");

	Params::UWBP_Title_WorldSettings_C_Setup_Params Parms{};

	Parms.WorldSetting = WorldSetting;
	Parms.IsNewWorld = IsNewWorld;
	Parms.CanMulti = CanMulti;
	Parms.WorldSaveDirectoryName = WorldSaveDirectoryName;
	Parms.WorldName = WorldName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetOptionWorldStaticSettings_ReturnValue = CallFunc_GetOptionWorldStaticSettings_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_IsMultiplayRestricted_ReturnValue = CallFunc_IsMultiplayRestricted_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsXB1_ReturnValue = CallFunc_IsXB1_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreateDifficultySettingStrings_OutStrings = CallFunc_CreateDifficultySettingStrings_OutStrings;
	Parms.CallFunc_ConvertDifficultyToUIIndex_UIIndex = CallFunc_ConvertDifficultyToUIIndex_UIIndex;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_SettingsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NewString                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature_Params Parms{};

	Parms.NewString = NewString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultyCustom_K2Node_ComponentBoundEvent_7_OnClickedSettingButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultyCustom_K2Node_ComponentBoundEvent_7_OnClickedSettingButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultyCustom_K2Node_ComponentBoundEvent_7_OnClickedSettingButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.TogglePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCustomPanel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::TogglePanel(bool IsCustomPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "TogglePanel");

	Params::UWBP_Title_WorldSettings_C_TogglePanel_Params Parms{};

	Parms.IsCustomPanel = IsCustomPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_WorldName_K2Node_ComponentBoundEvent_31_OnClickedSettingButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_WorldName_K2Node_ComponentBoundEvent_31_OnClickedSettingButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_WorldName_K2Node_ComponentBoundEvent_31_OnClickedSettingButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ExecuteUbergraph_WBP_Title_WorldSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOn_IsOn                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NewString                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOn_IsOn_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIndex_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultyCallFunc_ConvertUIIndexToDifficulty_DifficultyType               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIndex_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDifficultyCallFunc_ConvertUIIndexToDifficulty_DifficultyType_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_28                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_27                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_26                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_25                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIndex                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOptionWorldDeathPenaltyCallFunc_ConvertUIIndexToDeathPenalty_DeathPenaltyType           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCustomPanel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectNameIndex_NowIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DayTimeSpeedRate_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_NightTimeSpeedRate_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ExpRate_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalCaptureRate_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalSpawnNumRate_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalDamageRateAttack_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalDamageRateDefense_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalStomachDecreaceRate_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalStaminaDecreaceRate_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalAutoHPRegeneRate_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalAutoHpRegeneRateInSleep_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerDamageRateAttack_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerDamageRateDefense_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerStomachDecreaceRate_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerStaminaDecreaceRate_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerAutoHPRegeneRate_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PlayerAutoHpRegeneRateInSleep_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BuildObjectDamageRate_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_CollectionDropRate_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_CollectionObjectHpRate_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_CollectionObjectRespawnSpeedRate_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_EnemyDropItemRate_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoResetGuildTimeNoOnlinePlayers_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PalEggDefaultHatchingTime_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BuildObjectDeteriorationDamageRate_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_C::ExecuteUbergraph_WBP_Title_WorldSettings(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_ComponentBoundEvent_IsOn_4, bool CallFunc_IsOn_IsOn, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_ComponentBoundEvent_IsOn_3, const class FString& K2Node_ComponentBoundEvent_NewString, bool CallFunc_IsOn_IsOn_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIndex_2, enum class EPalOptionWorldDifficulty CallFunc_ConvertUIIndexToDifficulty_DifficultyType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIndex_1, enum class EPalOptionWorldDifficulty CallFunc_ConvertUIIndexToDifficulty_DifficultyType_1, double K2Node_ComponentBoundEvent_NewValue_28, double K2Node_ComponentBoundEvent_NewValue_27, double K2Node_ComponentBoundEvent_NewValue_26, double K2Node_ComponentBoundEvent_NewValue_25, double K2Node_ComponentBoundEvent_NewValue_24, double K2Node_ComponentBoundEvent_NewValue_23, double K2Node_ComponentBoundEvent_NewValue_22, double K2Node_ComponentBoundEvent_NewValue_21, double K2Node_ComponentBoundEvent_NewValue_20, double K2Node_ComponentBoundEvent_NewValue_19, double K2Node_ComponentBoundEvent_NewValue_18, double K2Node_ComponentBoundEvent_NewValue_17, double K2Node_ComponentBoundEvent_NewValue_16, double K2Node_ComponentBoundEvent_NewValue_15, double K2Node_ComponentBoundEvent_NewValue_14, double K2Node_ComponentBoundEvent_NewValue_13, double K2Node_ComponentBoundEvent_NewValue_12, double K2Node_ComponentBoundEvent_NewValue_11, double K2Node_ComponentBoundEvent_NewValue_10, double K2Node_ComponentBoundEvent_NewValue_9, double K2Node_ComponentBoundEvent_NewValue_8, double K2Node_ComponentBoundEvent_NewValue_7, int32 K2Node_ComponentBoundEvent_NewIndex, enum class EPalOptionWorldDeathPenalty CallFunc_ConvertUIIndexToDeathPenalty_DeathPenaltyType, bool K2Node_ComponentBoundEvent_IsOn_2, double K2Node_ComponentBoundEvent_NewValue_6, double K2Node_ComponentBoundEvent_NewValue_5, int32 CallFunc_Round_ReturnValue, bool K2Node_CustomEvent_IsCustomPanel, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_GetSelectNameIndex_NowIndex, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_5, double K2Node_ComponentBoundEvent_NewValue_4, double K2Node_ComponentBoundEvent_NewValue_3, bool K2Node_ComponentBoundEvent_IsOn_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, double K2Node_ComponentBoundEvent_NewValue_2, int32 CallFunc_FTrunc_ReturnValue, double K2Node_ComponentBoundEvent_NewValue_1, int32 CallFunc_FTrunc_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsOn, double K2Node_ComponentBoundEvent_NewValue, int32 CallFunc_FTrunc_ReturnValue_2, float K2Node_SetFieldsInStruct_DayTimeSpeedRate_ImplicitCast, float K2Node_SetFieldsInStruct_NightTimeSpeedRate_ImplicitCast, float K2Node_SetFieldsInStruct_ExpRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalCaptureRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalSpawnNumRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalDamageRateAttack_ImplicitCast, float K2Node_SetFieldsInStruct_PalDamageRateDefense_ImplicitCast, float K2Node_SetFieldsInStruct_PalStomachDecreaceRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalStaminaDecreaceRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalAutoHPRegeneRate_ImplicitCast, float K2Node_SetFieldsInStruct_PalAutoHpRegeneRateInSleep_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerDamageRateAttack_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerDamageRateDefense_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerStomachDecreaceRate_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerStaminaDecreaceRate_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerAutoHPRegeneRate_ImplicitCast, float K2Node_SetFieldsInStruct_PlayerAutoHpRegeneRateInSleep_ImplicitCast, float K2Node_SetFieldsInStruct_BuildObjectDamageRate_ImplicitCast, float K2Node_SetFieldsInStruct_CollectionDropRate_ImplicitCast, float K2Node_SetFieldsInStruct_CollectionObjectHpRate_ImplicitCast, float K2Node_SetFieldsInStruct_CollectionObjectRespawnSpeedRate_ImplicitCast, float K2Node_SetFieldsInStruct_EnemyDropItemRate_ImplicitCast, float K2Node_SetFieldsInStruct_AutoResetGuildTimeNoOnlinePlayers_ImplicitCast, float K2Node_SetFieldsInStruct_PalEggDefaultHatchingTime_ImplicitCast, float K2Node_SetFieldsInStruct_BuildObjectDeteriorationDamageRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "ExecuteUbergraph_WBP_Title_WorldSettings");

	Params::UWBP_Title_WorldSettings_C_ExecuteUbergraph_WBP_Title_WorldSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_ComponentBoundEvent_IsOn_4 = K2Node_ComponentBoundEvent_IsOn_4;
	Parms.CallFunc_IsOn_IsOn = CallFunc_IsOn_IsOn;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_IsOn_3 = K2Node_ComponentBoundEvent_IsOn_3;
	Parms.K2Node_ComponentBoundEvent_NewString = K2Node_ComponentBoundEvent_NewString;
	Parms.CallFunc_IsOn_IsOn_1 = CallFunc_IsOn_IsOn_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIndex_2 = K2Node_ComponentBoundEvent_NewIndex_2;
	Parms.CallFunc_ConvertUIIndexToDifficulty_DifficultyType = CallFunc_ConvertUIIndexToDifficulty_DifficultyType;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIndex_1 = K2Node_ComponentBoundEvent_NewIndex_1;
	Parms.CallFunc_ConvertUIIndexToDifficulty_DifficultyType_1 = CallFunc_ConvertUIIndexToDifficulty_DifficultyType_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_28 = K2Node_ComponentBoundEvent_NewValue_28;
	Parms.K2Node_ComponentBoundEvent_NewValue_27 = K2Node_ComponentBoundEvent_NewValue_27;
	Parms.K2Node_ComponentBoundEvent_NewValue_26 = K2Node_ComponentBoundEvent_NewValue_26;
	Parms.K2Node_ComponentBoundEvent_NewValue_25 = K2Node_ComponentBoundEvent_NewValue_25;
	Parms.K2Node_ComponentBoundEvent_NewValue_24 = K2Node_ComponentBoundEvent_NewValue_24;
	Parms.K2Node_ComponentBoundEvent_NewValue_23 = K2Node_ComponentBoundEvent_NewValue_23;
	Parms.K2Node_ComponentBoundEvent_NewValue_22 = K2Node_ComponentBoundEvent_NewValue_22;
	Parms.K2Node_ComponentBoundEvent_NewValue_21 = K2Node_ComponentBoundEvent_NewValue_21;
	Parms.K2Node_ComponentBoundEvent_NewValue_20 = K2Node_ComponentBoundEvent_NewValue_20;
	Parms.K2Node_ComponentBoundEvent_NewValue_19 = K2Node_ComponentBoundEvent_NewValue_19;
	Parms.K2Node_ComponentBoundEvent_NewValue_18 = K2Node_ComponentBoundEvent_NewValue_18;
	Parms.K2Node_ComponentBoundEvent_NewValue_17 = K2Node_ComponentBoundEvent_NewValue_17;
	Parms.K2Node_ComponentBoundEvent_NewValue_16 = K2Node_ComponentBoundEvent_NewValue_16;
	Parms.K2Node_ComponentBoundEvent_NewValue_15 = K2Node_ComponentBoundEvent_NewValue_15;
	Parms.K2Node_ComponentBoundEvent_NewValue_14 = K2Node_ComponentBoundEvent_NewValue_14;
	Parms.K2Node_ComponentBoundEvent_NewValue_13 = K2Node_ComponentBoundEvent_NewValue_13;
	Parms.K2Node_ComponentBoundEvent_NewValue_12 = K2Node_ComponentBoundEvent_NewValue_12;
	Parms.K2Node_ComponentBoundEvent_NewValue_11 = K2Node_ComponentBoundEvent_NewValue_11;
	Parms.K2Node_ComponentBoundEvent_NewValue_10 = K2Node_ComponentBoundEvent_NewValue_10;
	Parms.K2Node_ComponentBoundEvent_NewValue_9 = K2Node_ComponentBoundEvent_NewValue_9;
	Parms.K2Node_ComponentBoundEvent_NewValue_8 = K2Node_ComponentBoundEvent_NewValue_8;
	Parms.K2Node_ComponentBoundEvent_NewValue_7 = K2Node_ComponentBoundEvent_NewValue_7;
	Parms.K2Node_ComponentBoundEvent_NewIndex = K2Node_ComponentBoundEvent_NewIndex;
	Parms.CallFunc_ConvertUIIndexToDeathPenalty_DeathPenaltyType = CallFunc_ConvertUIIndexToDeathPenalty_DeathPenaltyType;
	Parms.K2Node_ComponentBoundEvent_IsOn_2 = K2Node_ComponentBoundEvent_IsOn_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_6 = K2Node_ComponentBoundEvent_NewValue_6;
	Parms.K2Node_ComponentBoundEvent_NewValue_5 = K2Node_ComponentBoundEvent_NewValue_5;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_CustomEvent_IsCustomPanel = K2Node_CustomEvent_IsCustomPanel;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetSelectNameIndex_NowIndex = CallFunc_GetSelectNameIndex_NowIndex;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_4 = K2Node_ComponentBoundEvent_NewValue_4;
	Parms.K2Node_ComponentBoundEvent_NewValue_3 = K2Node_ComponentBoundEvent_NewValue_3;
	Parms.K2Node_ComponentBoundEvent_IsOn_1 = K2Node_ComponentBoundEvent_IsOn_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_2 = K2Node_ComponentBoundEvent_NewValue_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_1 = K2Node_ComponentBoundEvent_NewValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_IsOn = K2Node_ComponentBoundEvent_IsOn;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.K2Node_SetFieldsInStruct_DayTimeSpeedRate_ImplicitCast = K2Node_SetFieldsInStruct_DayTimeSpeedRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_NightTimeSpeedRate_ImplicitCast = K2Node_SetFieldsInStruct_NightTimeSpeedRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ExpRate_ImplicitCast = K2Node_SetFieldsInStruct_ExpRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalCaptureRate_ImplicitCast = K2Node_SetFieldsInStruct_PalCaptureRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalSpawnNumRate_ImplicitCast = K2Node_SetFieldsInStruct_PalSpawnNumRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalDamageRateAttack_ImplicitCast = K2Node_SetFieldsInStruct_PalDamageRateAttack_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalDamageRateDefense_ImplicitCast = K2Node_SetFieldsInStruct_PalDamageRateDefense_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalStomachDecreaceRate_ImplicitCast = K2Node_SetFieldsInStruct_PalStomachDecreaceRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalStaminaDecreaceRate_ImplicitCast = K2Node_SetFieldsInStruct_PalStaminaDecreaceRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalAutoHPRegeneRate_ImplicitCast = K2Node_SetFieldsInStruct_PalAutoHPRegeneRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalAutoHpRegeneRateInSleep_ImplicitCast = K2Node_SetFieldsInStruct_PalAutoHpRegeneRateInSleep_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerDamageRateAttack_ImplicitCast = K2Node_SetFieldsInStruct_PlayerDamageRateAttack_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerDamageRateDefense_ImplicitCast = K2Node_SetFieldsInStruct_PlayerDamageRateDefense_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerStomachDecreaceRate_ImplicitCast = K2Node_SetFieldsInStruct_PlayerStomachDecreaceRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerStaminaDecreaceRate_ImplicitCast = K2Node_SetFieldsInStruct_PlayerStaminaDecreaceRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerAutoHPRegeneRate_ImplicitCast = K2Node_SetFieldsInStruct_PlayerAutoHPRegeneRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PlayerAutoHpRegeneRateInSleep_ImplicitCast = K2Node_SetFieldsInStruct_PlayerAutoHpRegeneRateInSleep_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BuildObjectDamageRate_ImplicitCast = K2Node_SetFieldsInStruct_BuildObjectDamageRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_CollectionDropRate_ImplicitCast = K2Node_SetFieldsInStruct_CollectionDropRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_CollectionObjectHpRate_ImplicitCast = K2Node_SetFieldsInStruct_CollectionObjectHpRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_CollectionObjectRespawnSpeedRate_ImplicitCast = K2Node_SetFieldsInStruct_CollectionObjectRespawnSpeedRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_EnemyDropItemRate_ImplicitCast = K2Node_SetFieldsInStruct_EnemyDropItemRate_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoResetGuildTimeNoOnlinePlayers_ImplicitCast = K2Node_SetFieldsInStruct_AutoResetGuildTimeNoOnlinePlayers_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PalEggDefaultHatchingTime_ImplicitCast = K2Node_SetFieldsInStruct_PalEggDefaultHatchingTime_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BuildObjectDeteriorationDamageRate_ImplicitCast = K2Node_SetFieldsInStruct_BuildObjectDeteriorationDamageRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.OnClickedWorldNameInputButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::OnClickedWorldNameInputButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "OnClickedWorldNameInputButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.OnClickedConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::OnClickedConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "OnClickedConfirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.OnClickedCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_C::OnClickedCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_C", "OnClickedCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


