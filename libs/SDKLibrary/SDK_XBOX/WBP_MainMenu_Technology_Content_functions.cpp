#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C
// (None)

class UClass* UWBP_MainMenu_Technology_Content_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Technology_Content_C");

	return Clss;
}


// WBP_MainMenu_Technology_Content_C WBP_MainMenu_Technology_Content.Default__WBP_MainMenu_Technology_Content_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Technology_Content_C* UWBP_MainMenu_Technology_Content_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Technology_Content_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Technology_Content_C*>(UWBP_MainMenu_Technology_Content_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.SetShouldMaskSkillUnlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemRecipes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                NewLocalVar                                                      (Edit, BlueprintVisible)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalTribeID             CallFunc_GetTribeIDFromCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRecordData_TribeIdCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::SetShouldMaskSkillUnlock(TArray<class FName>& ItemRecipes, const TArray<class FName>& NewLocalVar, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPalTribeID CallFunc_GetTribeIDFromCharacterID_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 CallFunc_GetRecordData_TribeIdCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "SetShouldMaskSkillUnlock");

	Params::UWBP_MainMenu_Technology_Content_C_SetShouldMaskSkillUnlock_Params Parms{};

	Parms.ItemRecipes = ItemRecipes;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTribeIDFromCharacterID_ReturnValue = CallFunc_GetTribeIDFromCharacterID_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_GetRecordData_TribeIdCount_ReturnValue = CallFunc_GetRecordData_TribeIdCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.UpdateButtonDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalTechnologyRecipeUnlockDataTableRowCallFunc_GetRecipeTechlonogy_ReturnValue                         (ConstParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockRecipeTechnology_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewUnlockedTechnology_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::UpdateButtonDetail(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class FName CallFunc_GetBindedTechnologyName_technologyName, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue, bool CallFunc_IsNewUnlockedTechnology_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "UpdateButtonDetail");

	Params::UWBP_MainMenu_Technology_Content_C_UpdateButtonDetail_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_GetRecipeTechlonogy_ReturnValue = CallFunc_GetRecipeTechlonogy_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsUnlockRecipeTechnology_ReturnValue = CallFunc_IsUnlockRecipeTechnology_ReturnValue;
	Parms.CallFunc_IsNewUnlockedTechnology_ReturnValue = CallFunc_IsNewUnlockedTechnology_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::OnUnhovered_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnUnhovered_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.isUnlockable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUnlockable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockableRecipeTechnology_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::IsUnlockable(bool* IsUnlockable, class FName CallFunc_GetBindedTechnologyName_technologyName, bool CallFunc_Not_PreBool_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsUnlockableRecipeTechnology_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "isUnlockable");

	Params::UWBP_MainMenu_Technology_Content_C_IsUnlockable_Params Parms{};

	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsUnlockableRecipeTechnology_ReturnValue = CallFunc_IsUnlockableRecipeTechnology_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnlockable != nullptr)
		*IsUnlockable = Parms.IsUnlockable;

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.IsUnlocked
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUnlocked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockRecipeTechnology_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::IsUnlocked(bool* IsUnlocked, class FName CallFunc_GetBindedTechnologyName_technologyName, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "IsUnlocked");

	Params::UWBP_MainMenu_Technology_Content_C_IsUnlocked_Params Parms{};

	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsUnlockRecipeTechnology_ReturnValue = CallFunc_IsUnlockRecipeTechnology_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnlocked != nullptr)
		*IsUnlocked = Parms.IsUnlocked;

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.GetBindedTechnologyName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        TechnologyName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::GetBindedTechnologyName(class FName* TechnologyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "GetBindedTechnologyName");

	Params::UWBP_MainMenu_Technology_Content_C_GetBindedTechnologyName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TechnologyName != nullptr)
		*TechnologyName = Parms.TechnologyName;

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TechnologyName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                TempRecipes                                                      (Edit, BlueprintVisible)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBindedOriginalText_ReturnValue                       (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalTechnologyRecipeUnlockDataTableRowCallFunc_GetRecipeTechlonogy_ReturnValue                         (ConstParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockRecipeTechnology_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetTechnologyIcon_SoftIconTexture                       (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_2                                          (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)

void UWBP_MainMenu_Technology_Content_C::Setup(class FName TechnologyName, const TArray<class FName>& TempRecipes, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool Temp_bool_Variable_1, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, bool Temp_bool_Variable_2, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetBindedOriginalText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetTechnologyIcon_SoftIconTexture, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_2, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_SelectText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "Setup");

	Params::UWBP_MainMenu_Technology_Content_C_Setup_Params Parms{};

	Parms.TechnologyName = TechnologyName;
	Parms.TempRecipes = TempRecipes;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetBindedOriginalText_ReturnValue = CallFunc_GetBindedOriginalText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_GetRecipeTechlonogy_ReturnValue = CallFunc_GetRecipeTechlonogy_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsUnlockRecipeTechnology_ReturnValue = CallFunc_IsUnlockRecipeTechnology_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTechnologyIcon_SoftIconTexture = CallFunc_GetTechnologyIcon_SoftIconTexture;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::OnHovered_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnHovered_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.AnmEvent_UpdateDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::AnmEvent_UpdateDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "AnmEvent_UpdateDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.AnmEvent_Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::AnmEvent_Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "AnmEvent_Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "PreConstruct");

	Params::UWBP_MainMenu_Technology_Content_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Content_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.ExecuteUbergraph_WBP_MainMenu_Technology_Content
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockable_isUnlockable                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_isUnlocked                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockable_isUnlockable_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::ExecuteUbergraph_WBP_MainMenu_Technology_Content(int32 EntryPoint, bool CallFunc_IsUnlockable_isUnlockable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsUnlocked_isUnlocked, bool CallFunc_IsUnlockable_isUnlockable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_IsDesignTime, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "ExecuteUbergraph_WBP_MainMenu_Technology_Content");

	Params::UWBP_MainMenu_Technology_Content_C_ExecuteUbergraph_WBP_MainMenu_Technology_Content_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUnlockable_isUnlockable = CallFunc_IsUnlockable_isUnlockable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsUnlocked_isUnlocked = CallFunc_IsUnlocked_isUnlocked;
	Parms.CallFunc_IsUnlockable_isUnlockable_1 = CallFunc_IsUnlockable_isUnlockable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::OnClickedButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnClickedButton__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_OnClickedButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnUnhoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::OnUnhoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnUnhoveredButton__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_OnUnhoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Content.WBP_MainMenu_Technology_Content_C.OnHoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Technology_Content_C::OnHoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Content_C", "OnHoveredButton__DelegateSignature");

	Params::UWBP_MainMenu_Technology_Content_C_OnHoveredButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


