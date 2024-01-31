#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guild.WBP_Guild_C
// (None)

class UClass* UWBP_Guild_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guild_C");

	return Clss;
}


// WBP_Guild_C WBP_Guild.Default__WBP_Guild_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guild_C* UWBP_Guild_C::GetDefaultObj()
{
	static class UWBP_Guild_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guild_C*>(UWBP_Guild_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guild.WBP_Guild_C.SetEnableGuildNameEditButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnableFlag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::SetEnableGuildNameEditButton(bool IsEnableFlag, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUGCFilter_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetEnableGuildNameEditButton");

	Params::UWBP_Guild_C_SetEnableGuildNameEditButton_Params Parms{};

	Parms.IsEnableFlag = IsEnableFlag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.CustomNavi_ToGuildLeaveOrNameEdit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Guild_C::CustomNavi_ToGuildLeaveOrNameEdit(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "CustomNavi_ToGuildLeaveOrNameEdit");

	Params::UWBP_Guild_C_CustomNavi_ToGuildLeaveOrNameEdit_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Guild.WBP_Guild_C.IsNameEditMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEditing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::IsNameEditMode(bool* IsEditing, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "IsNameEditMode");

	Params::UWBP_Guild_C_IsNameEditMode_Params Parms{};

	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEditing != nullptr)
		*IsEditing = Parms.IsEditing;

}


// Function WBP_Guild.WBP_Guild_C.SetGuildMemberNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowMemberNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxMemberNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Guild_C::SetGuildMemberNum(int32 NowMemberNum, int32 MaxMemberNum, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetGuildMemberNum");

	Params::UWBP_Guild_C_SetGuildMemberNum_Params Parms{};

	Parms.NowMemberNum = NowMemberNum;
	Parms.MaxMemberNum = MaxMemberNum;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.SetFocusToExitGuildButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::SetFocusToExitGuildButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetFocusToExitGuildButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.SetEnableGuildExitButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanExit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::SetEnableGuildExitButton(bool CanExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetEnableGuildExitButton");

	Params::UWBP_Guild_C_SetEnableGuildExitButton_Params Parms{};

	Parms.CanExit = CanExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.CustomNavi_LastHoveredGuildMember
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopMemberFocusTarget_TopButton                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Guild_C::CustomNavi_LastHoveredGuildMember(enum class EUINavigation Navigation, bool Temp_bool_Variable, class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "CustomNavi_LastHoveredGuildMember");

	Params::UWBP_Guild_C_CustomNavi_LastHoveredGuildMember_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTopMemberFocusTarget_TopButton = CallFunc_GetTopMemberFocusTarget_TopButton;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Guild.WBP_Guild_C.OnHoveredGuildMemberButton_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Guild_MemberList_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_Guild_MemberList_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Guild_C::OnHoveredGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget, TSoftObjectPtr<class UWBP_Guild_MemberList_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnHoveredGuildMemberButton_Internal");

	Params::UWBP_Guild_C_OnHoveredGuildMemberButton_Internal_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.OnClickedGuildMemberButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Guild_MemberList_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::OnClickedGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnClickedGuildMemberButton_Internal");

	Params::UWBP_Guild_C_OnClickedGuildMemberButton_Internal_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.GetTopMemberFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     TopButton                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::GetTopMemberFocusTarget(class UWidget** TopButton, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "GetTopMemberFocusTarget");

	Params::UWBP_Guild_C_GetTopMemberFocusTarget_Params Parms{};

	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TopButton != nullptr)
		*TopButton = Parms.TopButton;

}


// Function WBP_Guild.WBP_Guild_C.SetGuildLogCategoryOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Options                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guild_C::SetGuildLogCategoryOptions(TArray<class FString>& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetGuildLogCategoryOptions");

	Params::UWBP_Guild_C_SetGuildLogCategoryOptions_Params Parms{};

	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.EndGuildNameEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::EndGuildNameEditMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "EndGuildNameEditMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.StartGuildNameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::StartGuildNameMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "StartGuildNameMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.RemoveMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       PlayerUId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::RemoveMemberInfo(const struct FGuid& PlayerUId, bool CallFunc_Map_Remove_ReturnValue, class UWBP_Guild_MemberList_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "RemoveMemberInfo");

	Params::UWBP_Guild_C_RemoveMemberInfo_Params Parms{};

	Parms.PlayerUId = PlayerUId;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.ClearMemberList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::ClearMemberList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "ClearMemberList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       PlayerUId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoNewDisplayInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_Guild_MemberList_C*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::UpdateMemberInfo(const struct FGuid& PlayerUId, const struct FPalUIGuildMemberDisplayInfo& NewDisplayInfo, class UWBP_Guild_MemberList_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "UpdateMemberInfo");

	Params::UWBP_Guild_C_UpdateMemberInfo_Params Parms{};

	Parms.PlayerUId = PlayerUId;
	Parms.NewDisplayInfo = NewDisplayInfo;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.AddGuildMemberInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       PlayerUId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoDisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              CallFunc_SlotAsScrollBoxSlot_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_Guild_MemberList_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::AddGuildMemberInfo(const struct FGuid& PlayerUId, const struct FPalUIGuildMemberDisplayInfo& DisplayInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Map_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FMargin& K2Node_Select_Default, class UWBP_Guild_MemberList_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "AddGuildMemberInfo");

	Params::UWBP_Guild_C_AddGuildMemberInfo_Params Parms{};

	Parms.PlayerUId = PlayerUId;
	Parms.DisplayInfo = DisplayInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsScrollBoxSlot_ReturnValue = CallFunc_SlotAsScrollBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.AddGuildMemberInfoMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo>DisplayInfoMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FGuid>               CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::AddGuildMemberInfoMap(TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> DisplayInfoMap, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FPalUIGuildMemberDisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "AddGuildMemberInfoMap");

	Params::UWBP_Guild_C_AddGuildMemberInfoMap_Params Parms{};

	Parms.DisplayInfoMap = DisplayInfoMap;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.SetGuildName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InGuildName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Guild_C::SetGuildName(const class FString& InGuildName, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "SetGuildName");

	Params::UWBP_Guild_C_SetGuildName_Params Parms{};

	Parms.InGuildName = InGuildName;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guild_C::BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_Guild_C_BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_Guild_C_BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_C::BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");

	Params::UWBP_Guild_C_BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_C::BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_C::BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.ExecuteUbergraph_WBP_Guild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FString                      CallFunc_Left_ReturnValue_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UWBP_Guild_C::ExecuteUbergraph_WBP_Guild(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, bool Temp_bool_Variable, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue_1, bool Temp_bool_Variable_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedOption, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Left_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "ExecuteUbergraph_WBP_Guild");

	Params::UWBP_Guild_C_ExecuteUbergraph_WBP_Guild_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedOption = K2Node_ComponentBoundEvent_SelectedOption;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Left_ReturnValue_1 = CallFunc_Left_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.OnCommiedGuildName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_C::OnCommiedGuildName__DelegateSignature(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnCommiedGuildName__DelegateSignature");

	Params::UWBP_Guild_C_OnCommiedGuildName__DelegateSignature_Params Parms{};

	Parms.NewName = NewName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.OnClickedGuildSettingButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::OnClickedGuildSettingButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnClickedGuildSettingButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.OnClickedLeaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::OnClickedLeaveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnClickedLeaveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild.WBP_Guild_C.OnClickedGuildMemberButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Guild_MemberList_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_C::OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnClickedGuildMemberButton__DelegateSignature");

	Params::UWBP_Guild_C_OnClickedGuildMemberButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.OnChangedGuildLogCategory__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedCategoryName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_C::OnChangedGuildLogCategory__DelegateSignature(const class FString& SelectedCategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnChangedGuildLogCategory__DelegateSignature");

	Params::UWBP_Guild_C_OnChangedGuildLogCategory__DelegateSignature_Params Parms{};

	Parms.SelectedCategoryName = SelectedCategoryName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild.WBP_Guild_C.OnClickedEditGuildNameButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_C::OnClickedEditGuildNameButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_C", "OnClickedEditGuildNameButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


