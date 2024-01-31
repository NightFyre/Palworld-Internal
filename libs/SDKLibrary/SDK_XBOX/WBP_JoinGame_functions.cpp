#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_JoinGame.WBP_JoinGame_C
// (None)

class UClass* UWBP_JoinGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_JoinGame_C");

	return Clss;
}


// WBP_JoinGame_C WBP_JoinGame.Default__WBP_JoinGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_JoinGame_C* UWBP_JoinGame_C::GetDefaultObj()
{
	static class UWBP_JoinGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_JoinGame_C*>(UWBP_JoinGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_JoinGame.WBP_JoinGame_C.RequestGetServerListBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIServerListFilterTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Region                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsCleanCache                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NextPage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::RequestGetServerListBP(enum class EPalUIServerListFilterType Type, const class FString& Region, bool IsCleanCache, bool NextPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "RequestGetServerListBP");

	Params::UWBP_JoinGame_C_RequestGetServerListBP_Params Parms{};

	Parms.Type = Type;
	Parms.Region = Region;
	Parms.IsCleanCache = IsCleanCache;
	Parms.NextPage = NextPage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnCloseJoinServerDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_ListContent_C*K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::OnCloseJoinServerDialog(bool bResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnCloseJoinServerDialog");

	Params::UWBP_JoinGame_C_OnCloseJoinServerDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content = K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OpenJoinServerDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_JoinGame_C::OpenJoinServerDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OpenJoinServerDialog");

	Params::UWBP_JoinGame_C_OpenJoinServerDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEditingSearchWord_IsEditing                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::OnCancelAction(bool CallFunc_IsEditingSearchWord_IsEditing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnCancelAction");

	Params::UWBP_JoinGame_C_OnCancelAction_Params Parms{};

	Parms.CallFunc_IsEditingSearchWord_IsEditing = CallFunc_IsEditingSearchWord_IsEditing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetForServerList_Widget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_ListContent_C*K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_JoinGame_C::BP_GetDesiredFocusTarget(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWidget* CallFunc_GetFocusTargetForServerList_Widget, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_JoinGame_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_GetFocusTargetForServerList_Widget = CallFunc_GetFocusTargetForServerList_Widget;
	Parms.K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content = K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JoinGame.WBP_JoinGame_C.DisplayServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SearchWord                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPalUIServerDataCollectInfo K2Node_MakeStruct_PalUIServerDataCollectInfo                     (None)
// TArray<struct FPalUIServerDisplayData>CallFunc_CollectServerDisplayInfo_OutServerInfo                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::DisplayServer(const class FString& SearchWord, const struct FPalUIServerDataCollectInfo& K2Node_MakeStruct_PalUIServerDataCollectInfo, TArray<struct FPalUIServerDisplayData>& CallFunc_CollectServerDisplayInfo_OutServerInfo, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "DisplayServer");

	Params::UWBP_JoinGame_C_DisplayServer_Params Parms{};

	Parms.SearchWord = SearchWord;
	Parms.K2Node_MakeStruct_PalUIServerDataCollectInfo = K2Node_MakeStruct_PalUIServerDataCollectInfo;
	Parms.CallFunc_CollectServerDisplayInfo_OutServerInfo = CallFunc_CollectServerDisplayInfo_OutServerInfo;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.Completed_B0C690024643A528EA9A2B9DAEA567A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ResponseBody                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bResponseOK                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResponseCode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::Completed_B0C690024643A528EA9A2B9DAEA567A3(const class FString& ResponseBody, bool bResponseOK, int32 ResponseCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "Completed_B0C690024643A528EA9A2B9DAEA567A3");

	Params::UWBP_JoinGame_C_Completed_B0C690024643A528EA9A2B9DAEA567A3_Params Parms{};

	Parms.ResponseBody = ResponseBody;
	Parms.bResponseOK = bResponseOK;
	Parms.ResponseCode = ResponseCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.Passworde›Œ
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::Passworde__(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "Passworde›Œ");

	Params::UWBP_JoinGame_C_Passworde___Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnCompleteGetServerListEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::OnCompleteGetServerListEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnCompleteGetServerListEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedServerList_OfficialButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedServerList_OfficialButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedServerList_OfficialButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_7_OnClickedServerList_CommunityButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_7_OnClickedServerList_CommunityButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_7_OnClickedServerList_CommunityButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_11_OnClickedServerList_HistoryButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_11_OnClickedServerList_HistoryButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_11_OnClickedServerList_HistoryButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnChangeVersionIgnoreCheckbox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::OnChangeVersionIgnoreCheckbox(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnChangeVersionIgnoreCheckbox");

	Params::UWBP_JoinGame_C_OnChangeVersionIgnoreCheckbox_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_WorldSelect_ListContent_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature");

	Params::UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SearchWord                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature(const class FString& SearchWord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature");

	Params::UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature_Params Parms{};

	Parms.SearchWord = SearchWord;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.NextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::NextButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "NextButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnClicked_JoinByIPButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Address                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::OnClicked_JoinByIPButton(const class FString& Address)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnClicked_JoinByIPButton");

	Params::UWBP_JoinGame_C_OnClicked_JoinByIPButton_Params Parms{};

	Parms.Address = Address;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.«¹¿à¤ÙóÈ
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::________(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "«¹¿à¤ÙóÈ");

	Params::UWBP_JoinGame_C__________Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPalUIServerListSortTypeSortType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature(enum class EPalUIServerListSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature");

	Params::UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature_Params Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::_________0(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "«¹¿à¤ÙóÈ_0");

	Params::UWBP_JoinGame_C__________0_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinGame_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinGame.WBP_JoinGame_C.Ñ¹ïüÉKÕe›
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::_____K_e_(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "Ñ¹ïüÉKÕe›");

	Params::UWBP_JoinGame_C______K_e__Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinGame.WBP_JoinGame_C.ExecuteUbergraph_WBP_JoinGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ResponseBody                                  (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResponseOK                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ResponseCode                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FJsonObjectWrapper          CallFunc_FromString_OutJsonObject                                (None)
// bool                               CallFunc_FromString_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetField_OutValue                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetField_OutValue_1                                     (ReferenceParm)
// bool                               CallFunc_GetField_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParame_JoinGameInputCode*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPassword_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectRegion_Region                                  (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsChecked                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_ListContent_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_Title_WorldSelect_ListContent_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// struct FPalUIServerDisplayData     CallFunc_GetBindedServerDisplayData_DisplayData                  (None)
// class FString                      K2Node_ComponentBoundEvent_SearchWord                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectRegion_Region_1                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Address                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResult_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIServerListSortTypeK2Node_ComponentBoundEvent_SortType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResult                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UPalHUDDispatchParame_JoinGameInputCode*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHTTPRequestAsyncFunction*   CallFunc_HTTPRequestAsyncFunction_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinGame_C::ExecuteUbergraph_WBP_JoinGame(int32 EntryPoint, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param, const class FString& K2Node_CustomEvent_ResponseBody, bool K2Node_CustomEvent_bResponseOK, int32 K2Node_CustomEvent_ResponseCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FJsonObjectWrapper& CallFunc_FromString_OutJsonObject, bool CallFunc_FromString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_GetField_OutValue, bool CallFunc_GetField_ReturnValue, TArray<class FString>& CallFunc_GetField_OutValue_1, bool CallFunc_GetField_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGuid& CallFunc_Push_ReturnValue, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param_1, const class FString& CallFunc_GetPassword_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetSelectRegion_Region, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_bIsChecked, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_Widget, TSoftObjectPtr<class UWBP_Title_WorldSelect_ListContent_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FPalUIServerDisplayData& CallFunc_GetBindedServerDisplayData_DisplayData, const class FString& K2Node_ComponentBoundEvent_SearchWord, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetSelectRegion_Region_1, const class FString& K2Node_CustomEvent_Address, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool K2Node_CustomEvent_bResult_1, int32 CallFunc_Conv_StringToInt_ReturnValue, enum class EPalUIServerListSortType K2Node_ComponentBoundEvent_SortType, bool K2Node_CustomEvent_bResult, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsChecked_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue_1, class UHTTPRequestAsyncFunction* CallFunc_HTTPRequestAsyncFunction_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinGame_C", "ExecuteUbergraph_WBP_JoinGame");

	Params::UWBP_JoinGame_C_ExecuteUbergraph_WBP_JoinGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Param = K2Node_CustomEvent_Param;
	Parms.K2Node_CustomEvent_ResponseBody = K2Node_CustomEvent_ResponseBody;
	Parms.K2Node_CustomEvent_bResponseOK = K2Node_CustomEvent_bResponseOK;
	Parms.K2Node_CustomEvent_ResponseCode = K2Node_CustomEvent_ResponseCode;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_FromString_OutJsonObject = CallFunc_FromString_OutJsonObject;
	Parms.CallFunc_FromString_ReturnValue = CallFunc_FromString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetField_OutValue = CallFunc_GetField_OutValue;
	Parms.CallFunc_GetField_ReturnValue = CallFunc_GetField_ReturnValue;
	Parms.CallFunc_GetField_OutValue_1 = CallFunc_GetField_OutValue_1;
	Parms.CallFunc_GetField_ReturnValue_1 = CallFunc_GetField_ReturnValue_1;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.K2Node_CustomEvent_Param_1 = K2Node_CustomEvent_Param_1;
	Parms.CallFunc_GetPassword_ReturnValue = CallFunc_GetPassword_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetSelectRegion_Region = CallFunc_GetSelectRegion_Region;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_bIsChecked = K2Node_CustomEvent_bIsChecked;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetBindedServerDisplayData_DisplayData = CallFunc_GetBindedServerDisplayData_DisplayData;
	Parms.K2Node_ComponentBoundEvent_SearchWord = K2Node_ComponentBoundEvent_SearchWord;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetSelectRegion_Region_1 = CallFunc_GetSelectRegion_Region_1;
	Parms.K2Node_CustomEvent_Address = K2Node_CustomEvent_Address;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_CustomEvent_bResult_1 = K2Node_CustomEvent_bResult_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SortType = K2Node_ComponentBoundEvent_SortType;
	Parms.K2Node_CustomEvent_bResult = K2Node_CustomEvent_bResult;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_HTTPRequestAsyncFunction_ReturnValue = CallFunc_HTTPRequestAsyncFunction_ReturnValue;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


