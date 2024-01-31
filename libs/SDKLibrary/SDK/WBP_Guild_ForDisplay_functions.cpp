#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C
// (None)

class UClass* UWBP_Guild_ForDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guild_ForDisplay_C");

	return Clss;
}


// WBP_Guild_ForDisplay_C WBP_Guild_ForDisplay.Default__WBP_Guild_ForDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guild_ForDisplay_C* UWBP_Guild_ForDisplay_C::GetDefaultObj()
{
	static class UWBP_Guild_ForDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guild_ForDisplay_C*>(UWBP_Guild_ForDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.CanClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanCloseFlag                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNameEditMode_IsEditing                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::CanClose(bool* CanCloseFlag, bool CallFunc_IsNameEditMode_IsEditing, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "CanClose");

	Params::UWBP_Guild_ForDisplay_C_CanClose_Params Parms{};

	Parms.CallFunc_IsNameEditMode_IsEditing = CallFunc_IsNameEditMode_IsEditing;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCloseFlag != nullptr)
		*CanCloseFlag = Parms.CanCloseFlag;

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckChangeAdmin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAdminLocalPlayer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnTimer_CheckChangeAdmin(bool CallFunc_IsAdminLocalPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_CheckChangeAdmin");

	Params::UWBP_Guild_ForDisplay_C_OnTimer_CheckChangeAdmin_Params Parms{};

	Parms.CallFunc_IsAdminLocalPlayer_ReturnValue = CallFunc_IsAdminLocalPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_TimeoutChangeAdmin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::OnTimer_TimeoutChangeAdmin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_TimeoutChangeAdmin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckBanPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsExistPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnTimer_CheckBanPlayer(bool CallFunc_IsExistPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_CheckBanPlayer");

	Params::UWBP_Guild_ForDisplay_C_OnTimer_CheckBanPlayer_Params Parms{};

	Parms.CallFunc_IsExistPlayer_ReturnValue = CallFunc_IsExistPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_TimeoutBanPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::OnTimer_TimeoutBanPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_TimeoutBanPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.CloseWaitingWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::CloseWaitingWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "CloseWaitingWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenWaitingWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::OpenWaitingWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OpenWaitingWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnCloseChangeAdminDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnCloseChangeAdminDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnCloseChangeAdminDialog");

	Params::UWBP_Guild_ForDisplay_C_OnCloseChangeAdminDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenChangeAdminDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoCallFunc_GetDisplayInfo_DisplayInfo                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Guild_ForDisplay_C::OpenChangeAdminDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OpenChangeAdminDialog");

	Params::UWBP_Guild_ForDisplay_C_OpenChangeAdminDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayInfo_DisplayInfo = CallFunc_GetDisplayInfo_DisplayInfo;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnCloseBanPlayerDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnCloseBanPlayerDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnCloseBanPlayerDialog");

	Params::UWBP_Guild_ForDisplay_C_OnCloseBanPlayerDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenBanPlayerDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoCallFunc_GetDisplayInfo_DisplayInfo                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Guild_ForDisplay_C::OpenBanPlayerDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OpenBanPlayerDialog");

	Params::UWBP_Guild_ForDisplay_C_OpenBanPlayerDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayInfo_DisplayInfo = CallFunc_GetDisplayInfo_DisplayInfo;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.CloseMemberSettingWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetTopMemberFocusTarget_TopButton                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_DynamicCast_AsWBP_Guild_Member_List                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_TargetWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::CloseMemberSettingWindow(class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWidget* CallFunc_GetFocusTarget_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "CloseMemberSettingWindow");

	Params::UWBP_Guild_ForDisplay_C_CloseMemberSettingWindow_Params Parms{};

	Parms.CallFunc_GetTopMemberFocusTarget_TopButton = CallFunc_GetTopMemberFocusTarget_TopButton;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guild_Member_List = K2Node_DynamicCast_AsWBP_Guild_Member_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetFocusTarget_TargetWidget = CallFunc_GetFocusTarget_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckNewGroup_WaitingExitGuild
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalGroupGuildBase*          CallFunc_GetMyGuild_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnTimer_CheckNewGroup_WaitingExitGuild(class UPalGroupGuildBase* CallFunc_GetMyGuild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_CheckNewGroup_WaitingExitGuild");

	Params::UWBP_Guild_ForDisplay_C_OnTimer_CheckNewGroup_WaitingExitGuild_Params Parms{};

	Parms.CallFunc_GetMyGuild_ReturnValue = CallFunc_GetMyGuild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdateGroupId_WaitingExitGuild
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       NewGroupId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualCharacterParameterByActor_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnUpdateGroupId_WaitingExitGuild(struct FGuid& NewGroupId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnUpdateGroupId_WaitingExitGuild");

	Params::UWBP_Guild_ForDisplay_C_OnUpdateGroupId_WaitingExitGuild_Params Parms{};

	Parms.NewGroupId = NewGroupId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualCharacterParameterByActor_ReturnValue = CallFunc_GetIndividualCharacterParameterByActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_TimeoutExitGuild
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::OnTimer_TimeoutExitGuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnTimer_TimeoutExitGuild");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnClosed_GuildExitDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualCharacterParameterByActor_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnClosed_GuildExitDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnClosed_GuildExitDialog");

	Params::UWBP_Guild_ForDisplay_C_OnClosed_GuildExitDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualCharacterParameterByActor_ReturnValue = CallFunc_GetIndividualCharacterParameterByActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnClosed_GuildExitFailedDialog_Admin
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnClosed_GuildExitFailedDialog_Admin(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnClosed_GuildExitFailedDialog_Admin");

	Params::UWBP_Guild_ForDisplay_C_OnClosed_GuildExitFailedDialog_Admin_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenExitGuildDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAdminLocalPlayer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// bool                               CallFunc_CanExitGuild_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OpenExitGuildDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsAdminLocalPlayer_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_CanExitGuild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OpenExitGuildDialog");

	Params::UWBP_Guild_ForDisplay_C_OpenExitGuildDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsAdminLocalPlayer_ReturnValue = CallFunc_IsAdminLocalPlayer_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_CanExitGuild_ReturnValue = CallFunc_CanExitGuild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdatedGuildName
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewGuildName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnUpdatedGuildName(const class FString& NewGuildName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnUpdatedGuildName");

	Params::UWBP_Guild_ForDisplay_C_OnUpdatedGuildName_Params Parms{};

	Parms.NewGuildName = NewGuildName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_TargetWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopMemberFocusTarget_TopButton                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Guild_ForDisplay_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Guild_ForDisplay_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_TargetWidget = CallFunc_GetTopFocusTarget_TargetWidget;
	Parms.CallFunc_GetTopMemberFocusTarget_TopButton = CallFunc_GetTopMemberFocusTarget_TopButton;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.SetupGuildLogCategoryButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              TmpCategoryString                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_PalUIGuildMenuLogCategory>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUIGuildMenuLogCategoryCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::SetupGuildLogCategoryButton(const TArray<class FString>& TmpCategoryString, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class E_PalUIGuildMenuLogCategory>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class E_PalUIGuildMenuLogCategory CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "SetupGuildLogCategoryButton");

	Params::UWBP_Guild_ForDisplay_C_SetupGuildLogCategoryButton_Params Parms{};

	Parms.TmpCategoryString = TmpCategoryString;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAdminLocalPlayer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo>CallFunc_GetGuildMemberInfo_OutDisplayInfoMap                    (None)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGuildName_OutGuildName                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::Setup(bool CallFunc_IsAdminLocalPlayer_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetGuildName_OutGuildName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "Setup");

	Params::UWBP_Guild_ForDisplay_C_Setup_Params Parms{};

	Parms.CallFunc_IsAdminLocalPlayer_ReturnValue = CallFunc_IsAdminLocalPlayer_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_GetGuildMemberInfo_OutDisplayInfoMap = CallFunc_GetGuildMemberInfo_OutDisplayInfoMap;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGuildName_OutGuildName = CallFunc_GetGuildName_OutGuildName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "Tick");

	Params::UWBP_Guild_ForDisplay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Guild_MemberList_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature");

	Params::UWBP_Guild_ForDisplay_C_BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature");

	Params::UWBP_Guild_ForDisplay_C_BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature_Params Parms{};

	Parms.NewName = NewName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdatedMemberInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuid                       PlayerUId                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoPlayerInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guild_ForDisplay_C::OnUpdatedMemberInfo(struct FGuid& PlayerUId, struct FPalUIGuildMemberDisplayInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnUpdatedMemberInfo");

	Params::UWBP_Guild_ForDisplay_C_OnUpdatedMemberInfo_Params Parms{};

	Parms.PlayerUId = PlayerUId;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnRemovedMemberInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuid                       PlayerUId                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::OnRemovedMemberInfo(struct FGuid& PlayerUId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "OnRemovedMemberInfo");

	Params::UWBP_Guild_ForDisplay_C_OnRemovedMemberInfo_Params Parms{};

	Parms.PlayerUId = PlayerUId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Guild_ForDisplay_C::BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.ExecuteUbergraph_WBP_Guild_ForDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NewName                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGuildName_OutGuildName                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_Event_PlayerUId_1                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoK2Node_Event_PlayerInfo                                          (ConstParm)
// struct FGuid                       K2Node_Event_PlayerUId                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_TargetWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAdminLocalPlayer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_MemberList_C*     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_Guild_MemberList_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// struct FPalUIGuildMemberDisplayInfoCallFunc_GetDisplayInfo_DisplayInfo                              (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetLocalPlayerUID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GuidGuid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo>CallFunc_GetGuildMemberInfo_OutDisplayInfoMap                    (None)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_ForDisplay_C::ExecuteUbergraph_WBP_Guild_ForDisplay(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, const class FString& K2Node_ComponentBoundEvent_NewName, const class FString& CallFunc_GetGuildName_OutGuildName, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FGuid& K2Node_Event_PlayerUId_1, const struct FPalUIGuildMemberDisplayInfo& K2Node_Event_PlayerInfo, const struct FGuid& K2Node_Event_PlayerUId, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsAdminLocalPlayer_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_ComponentBoundEvent_Widget, TSoftObjectPtr<class UWBP_Guild_MemberList_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, bool CallFunc_NotEqual_GuidGuid_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, int32 CallFunc_Map_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guild_ForDisplay_C", "ExecuteUbergraph_WBP_Guild_ForDisplay");

	Params::UWBP_Guild_ForDisplay_C_ExecuteUbergraph_WBP_Guild_ForDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewName = K2Node_ComponentBoundEvent_NewName;
	Parms.CallFunc_GetGuildName_OutGuildName = CallFunc_GetGuildName_OutGuildName;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_Event_PlayerUId_1 = K2Node_Event_PlayerUId_1;
	Parms.K2Node_Event_PlayerInfo = K2Node_Event_PlayerInfo;
	Parms.K2Node_Event_PlayerUId = K2Node_Event_PlayerUId;
	Parms.CallFunc_GetTopFocusTarget_TargetWidget = CallFunc_GetTopFocusTarget_TargetWidget;
	Parms.CallFunc_IsAdminLocalPlayer_ReturnValue = CallFunc_IsAdminLocalPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetDisplayInfo_DisplayInfo = CallFunc_GetDisplayInfo_DisplayInfo;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLocalPlayerUID_ReturnValue = CallFunc_GetLocalPlayerUID_ReturnValue;
	Parms.CallFunc_NotEqual_GuidGuid_ReturnValue = CallFunc_NotEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetGuildMemberInfo_OutDisplayInfoMap = CallFunc_GetGuildMemberInfo_OutDisplayInfoMap;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


